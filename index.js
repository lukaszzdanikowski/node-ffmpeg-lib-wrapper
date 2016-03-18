var addon = require('bindings')('ffmpeg-lib');

console.log(addon.hello()); // 'world'