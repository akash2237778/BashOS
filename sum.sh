#!/bin/bash

echo "Enter value of A"
read a
echo "Enter value of B"
read b

sum= expr $a + $b

echo "$sum"

