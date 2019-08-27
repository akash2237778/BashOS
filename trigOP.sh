#!/bin/bash

echo "A: "
read num

echo "1. sin"
echo "2. cos"

read opp

echo "ANS:"

if [ $opp == 1 ]; then
	bc -l <<< "s($num)"
	echo "$ans"
elif [ $opp == 2 ]; then
	bc -l <<< "c($num)"
	echo "$ans"
else
	echo "Invalid Operation"
fi

