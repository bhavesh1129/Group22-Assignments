const Info = require('./models/info');

const visitorInfos = [{
        name: 'bhavesh',
        email: 'bhavesh@gmail.com',
        number: 1234567890,
        check_time: true
    },
    {
        name: 'ishita',
        email: 'ishita@gmail.com',
        number: 1234567890,
        check_time: false
    },
    {
        name: 'sonia',
        email: 'sonia@gmail.com',
        number: 1234567890,
        check_time: true
    }
];

const seedDB = async() => {
    await Info.deleteMany({});
    await Info.insertMany(visitorInfos);
    console.log('DB Seeded');
}

module.exports = seedDB;