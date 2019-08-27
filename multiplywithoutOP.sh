#!/bin/bash

echo "A: "
read num1

echo "B: "
read num2

sum=0

echo 0  > sum


echo "ANS:"

for i in $(seq 1 $num2)
do 
	ct=$(cat sum)
	echo $(($ct + $num1 )) > sum
done


cat sum
