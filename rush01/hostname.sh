#!/bin/sh

who | grep 'console' | cut -d ' ' -f 1 > temp
hostname >> temp