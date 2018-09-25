#!/bin/sh

arg_start=0
arg_stop=0
arg_step=1

if [ $# = 3 ]; then
    arg_start=$1
    arg_stop=$2
    arg_step=$3
else
    if [ $# = 2 ]; then
	arg_start=$1
	arg_stop=$2
    else
	if [$# = 1 ]; then
	    arg_start=$1
	else
	    echo "Insufficient number of arguments: [START] (STOP) (STEP)"
	    exit 1
	fi
    fi
fi

if [ $arg_start -lt $arg_stop ]; then
    DIR=-le
    OP=+
else
    DIR=-ge
    OP=-
fi

while [ $arg_start $DIR $arg_stop ]; do
    echo $arg_start
    arg_start=`expr $arg_start $OP $arg_step`
done
