#!/bin/sh

system_profiler SPStorageDataType | tail -n20 | grep 'Capacity' | cut -d ':' -f 2 > temp
system_profiler SPStorageDataType | tail -n20 | grep 'Available' | cut -d ':' -f 2 >> temp