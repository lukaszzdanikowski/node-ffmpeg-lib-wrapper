{
    "targets": [
        {
            "target_name": "ffmpeg-lib",
            "sources": [
                "node-ffmpeg-lib.cpp"
            ],
            "include_dirs" : [
                "<!(node -e \"require('nan')\")"
            ]
        }
    ]
}