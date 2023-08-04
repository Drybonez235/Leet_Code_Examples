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
        string buffer = "";//d
        for(int i = 0; i < s.length(); i++){ //
        int position = buffer.find_first_of(s[i]);
            if(position!= string::npos){ //If found
               buffer = buffer.substr(position + 1, i); // So this makes the
               temp = buffer.length();
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