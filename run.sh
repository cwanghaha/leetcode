#!/bin/sh

cd ./build
./test --gtest_color=yes

echo
echo Push any key to exit
read -n 1