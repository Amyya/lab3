# lab3

how to compile quetionA

$ g++ -o A questionA.cpp
$ ./A.exe



result of questionB

sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.015 seconds
v1/v2 are different.

sort(): 0.015 seconds
v1/v2 are different.
insertion_sort(): 0.719 seconds
v1/v2 are different.

sort(): 0.046 seconds
v1/v2 are different.
insertion_sort(): 75.126 seconds
v1/v2 are different.

sort(): 0.453 seconds
v1/v2 are different.
insertion_sort(): 7584.361 seconds
v1/v2 are different.


sort運作時間是對數成長，insertion_sort是指數成長
insertion_sort的時間複雜度，最差與平均時間為n*n，所需時間遠遠超出nlogn
