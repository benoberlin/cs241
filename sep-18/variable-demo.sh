#!/bin/sh

echo "Unquoted *"
for i in $*; do
    echo $i
done

echo "Unquoted @"
for i in $@; do
    echo $i
done

echo "Quoted *"
for i in "$*"; do
    echo $i
done

echo "Quoted @"
for i in "$@"; do
    echo $i
done
