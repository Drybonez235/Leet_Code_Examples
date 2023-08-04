//Given a string s, find the length of the longest substringwithout repeating characters.
//A substring is a contiguous non-empty sequence of characters within a string.
#include <iostream>
#include <string>
using namespace std;

class Solution { //dvdf //d i=3
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;// 
        int temp = 0;// 
        int control = 0;
        string buffer = "";//d
        for(int i = 0; i < s.length(); i++){ //
            if(buffer.find_first_of(s[control]) != string::npos){ //If found
               buffer = s[i];
               temp = 1; 
               if(temp > answer){
                    answer = temp;
                }
            }else{ //if not found
                temp += 1;
                buffer = buffer + s[i];
                if(temp > answer){
                    answer = temp;
                }
            }
        }
        return answer;
    }
};