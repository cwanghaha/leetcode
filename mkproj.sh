#!/bin/sh

if [ 1 -gt $#  ]
then
    echo please input project name, such as: ./mkproj.sh 000.test
    echo
    echo Push any key to exit
    read -n 1
    exit
fi


echo start to creat project $1

# copy directory
cp -r 000.template $1

# modify CMakeLists.txt
sed -i "7c set(SOURCE_DIR ./$1)" CMakeLists.txt

# remove files in build
cd ./build
rm *

echo creat project $1 successful
echo Push any key to exit
read -n 1