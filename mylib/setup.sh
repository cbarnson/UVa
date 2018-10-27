#!/bin/sh

# do.sh 

for i in {A..Z}; do
    mkdir $i
    cp t.cc $i/$i.cc
    cp sample/$i* $i
    cp sample/{$i,}* $i
    ls $i/*
done

# run

f=`ls -t1 *.cc | head -n 1`
echo $f
g++ $f -g -Og -std=c++11 -Wall -Wextra -Wconversion -Wshadow -o sol || exit
for i in *.in; do 
    echo --- $i
    ./sol < $i > o && (diff -y o ${i::-3}.[ao]?? > t || cat t) || cat o
done
