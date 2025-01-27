# C++

### Notes:
./ to run the object file after it created a link
### Commando:

1) g++ -o your_file.out your_file.cpp ==> This command is for renamin the binery file. otherwise it gets name as a.out
2) c++ index.cpp ==>This command is for starting a c file from a terminal
3) ++1 and --1 preincrement it takes a reference and the result changes
4) 1++ and 1-- increment it takes the entire object from memory and the result does not change
5) bitwise and 0 & 0 =>  0   1 & 0 => 0   0 & 1 => 0   1 & 1 => 1, en example 01001 & 00001 will result 1
Bit-by-bit comparison:
1st bit: 0 & 0 = 0
2nd bit: 1 & 0 = 0
3rd bit: 0 & 1 = 0
4th bit: 1 & 1 = 1

6) bitwise or 
Bit-by-bit comparison:
1st bit: 0 | 0 = 0
2nd bit: 1 | 0 = 1
3rd bit: 0 | 1 = 1
4th bit: 1 | 1 = 1
So, 0101 | 0011 results in 0111, which is 7 in decimal.


# Notes
 Compile with higher version: ```g++ -std=c++17 struct.cpp```
 Flags for warnings ``` g++ -std=c++17 -Wall -Wextra -Werror -pedantic struct.cpp ```