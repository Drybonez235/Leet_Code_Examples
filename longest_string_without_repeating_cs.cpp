//Given a string s, find the length of the longest substringwithout repeating characters.
//A substring is a contiguous non-empty sequence of characters within a string.

//It Worked!!!
#include <iostream>
#include <string>
using namespace std;

lass Solution { //dvdf //d i=3
public:
    int lengthOfLongestSubstring(string s) {
        int answer = 0;// 
        int temp = 0;// 
        string buffer = "";//ab
        for(int i = 0; i < s.length(); i++){ //
        int position = buffer.find_first_of(s[i]); //1
            if(position!= string::npos){ 
               buffer = buffer.substr(position + 1, string::npos) + s[i]; //This is key so that it makes the buffer include the char it just surched for and delete the first one.
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