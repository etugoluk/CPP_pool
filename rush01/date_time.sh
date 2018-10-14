#!/bin/sh

date '+%H:%M' > temp
date '+%Y-%m-%d' >> temp
uptime | cut -d ' ' -f 4-7 | cut -d ',' -f 1-2 >> temp
