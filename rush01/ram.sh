#!/bin/sh

top -l1 -n1 | grep 'PhysMem:' | cut -d ' ' -f 2-3,6-7 | cut -d '.' -f 1 > temp
system_profiler SPMemoryDataType | grep 'Type' | head -n1 | cut -d ':' -f2 >> temp
system_profiler SPMemoryDataType | grep 'Speed' | head -n1 | cut -d ':' -f2 >> temp