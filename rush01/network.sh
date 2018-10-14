#!/bin/sh

ipconfig getifaddr en0 > temp
top -l1 -n1 | grep 'Networks' | cut -d ':' -f3 | cut -d '.' -f1 >> temp