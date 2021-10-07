const mongoose = require('mongoose');

const infoSchema = new mongoose.Schema({
    name: {
        type: String,
        trim: true,
        required: true
    },
    email: {
        type: String,
        trim: true,
        required: true
    },
    number: {
        type: Number,
        required: true,
    },
    check_time: {
        type: Boolean,
        required: true
    }
});

const visitorInfo = mongoose.model('info', infoSchema);

module.exports = visitorInfo;