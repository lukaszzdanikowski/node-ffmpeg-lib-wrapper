var addon = require('bindings')('ffmpeg-lib');

exports.ffmpeg = {
    hello: function() {
        addon.hello();
    }
};