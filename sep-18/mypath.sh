#!/bin/zsh

for files in $@; do
    for dirs in $path; do
	if [ -x "${dirs}/${files}" ]; then
	    echo "$files exists in $dirs and is executable"
	    exit 0
	fi
    done
done
echo "File not found"
exit 1
