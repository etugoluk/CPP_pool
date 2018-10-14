#!/bin/sh

sw_vers | grep 'ProductName' > temp
sw_vers | grep 'ProductVersion' >> temp
sw_vers | grep 'BuildVersion' >> temp