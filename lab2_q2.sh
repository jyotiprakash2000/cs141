#!/bin/bash
#the above is a bash library path
echo "what is your name?"
read NAME # variable
mkdir $NAME
cd $NAME
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done

