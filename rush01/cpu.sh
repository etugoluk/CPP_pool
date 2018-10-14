#!/bin/sh

sysctl machdep.cpu.brand_string > temp
top -l1 -n1 | grep 'CPU usage:' >> temp
cat temp | tail -n1 | cut -d ',' -f 3 | cut -d '.' -f 1 | cut -d ' ' -f 2 >> temp