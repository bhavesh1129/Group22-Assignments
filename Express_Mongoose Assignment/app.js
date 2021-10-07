const express = require('express');
const app = express();
const path = require('path');
const bodyParser = require('body-parser');
let ejs = require('ejs');
const mongoose = require('mongoose');
const seedDB = require('./seed');
const visitorInfo = require('./models/info');
const sgMail = require('@sendgrid/mail');


const API_KEY = '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';
sgMail.setApiKey(API_KEY);

mongoose.connect('mongodb+srv://admin-bhavesh:Test-123@cluster0.620x2.mongodb.net/visitors-db')
    .then(() => console.log('DB Connected'))
    .catch((err) => console.log(err));

// seedDB();

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.urlencoded({ extended: true }));


app.get("/", (req, res) => {
    res.render("./partials/index");
});

app.post("/", (req, res) => {
    var myData = new visitorInfo(req.body);
    myData.save()
        .then(item => {
            console.log(req.body);

            let checkUserAvailability;
            const userStatus = req.body.check_time;
            if (userStatus == 'true') {
                checkUserAvailability = 'entered in';
            } else {
                checkUserAvailability = 'exist';
            }

            const d = new Date();
            const time = d.toLocaleTimeString(undefined, { timeZone: 'Asia/Kolkata' });
            const date = d.getDate();
            const months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
            const monthName = months[d.getMonth()];

            const sendMsg = {
                to: req.body.email,
                from: "developerbhaveshgarg@gmail.com",
                subject: "Your Entry Status",
                text: "send using sendgrid",
                html: `
                <h3>Hello ${req.body.name}! You have ${checkUserAvailability} the office at ${time} on ${date + " " + monthName}</h3>
                `
            }

            sgMail.send(sendMsg)
                .then(res => {
                    console.log("Succefully sent the mail");
                })
                .catch(err => {
                    console.log(err);
                });

            res.redirect("/");
        })
        .catch(err => {
            res.status(400).render("./error/404Error");
        });
});

let port = process.env.PORT;
if (port == null || port == "") {
    port = 3000;
}

app.listen(port, () => {
    console.log("Server is running on port 3000");
});