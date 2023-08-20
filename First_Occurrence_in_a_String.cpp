//Given two strings needle and haystack, return the 
//index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//Performance 
//Runtime: 4ms Beats 25.50% of users with C++
//Memory 6.50 Beats 8.13% of users with C++
#include <iostream>
#include <string>

class Solution {
public:
    int strStr(string haystack, string needle) {
    int needle_length = needle.length();
    int haystack_length = haystack.length();
    int index = -1;
    if(needle_length > haystack_length){
        return index;
    }
    
    for(int i = 0; i <= (haystack.length() - needle_length); i++){
        string slice = haystack.substr(i, needle_length);
            if(slice == needle){
                return i;
            }
       }
       return index; 
    }
};