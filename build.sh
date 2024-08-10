#!/bin/sh

cd ./build

if [ ! -f test.exe ]
then
    cmake .. -G "Unix Makefiles"
fi

make

echo
echo Push any key to exit
read -n 1