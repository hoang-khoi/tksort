#!/bin/bash
mkdir build
cd build
cmake ../
make
sudo cp tksort /usr/local/bin/
