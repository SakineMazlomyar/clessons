#!/bin/bash

LIST="1 2 3 4 5 6"

for N in ${LIST}
do 
    echo ${N}
done

ls -1 | while read FILE
do 
    echo ${FILE}
done
