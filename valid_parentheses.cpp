// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
// g++ valid_parentheses.cpp
#include <iostream>

using namespace std;

class Solution {
public:
    bool MatchDotCom(char current){
        if (current == ')' || current == '}' || current == ']'){
        return false;
        }
        
    }

    bool isValid(string s) {
        
        
    }
};
//Works but not on leetcode/
// bool MatchDotCom(string s, char current, int &pos)
// {
//     if (current == ')' || current == '}' || current == ']')
//     {
//         return false;
//     }

//     while (pos <= s.length())
//     {
//         cout << current << endl;
//         cout << pos << endl;
//         pos += 1;
//         cout << "After adding" << pos << endl;
//         if (current == '(')
//         {
//             if (s[pos] == ')')
//             {
//                 cout << s[pos] << endl;
//                 return true;
//             }
//             else
//             {
//                 MatchDotCom(s, s[pos], pos);
//             }
//         }
//         else if (current == '{')
//         {
//             if (s[pos] == '}')
//             {
//                 cout << s[pos] << endl;
//                 return true;
//             }
//             else
//             {
//                 MatchDotCom(s, s[pos], pos);
//             }
//         }
//         else if (current == '[')
//         {
//             if (s[pos] == ']')
//             {
//                 cout << s[pos] << endl;
//                 return true;
//             }
//             else
//             {
//                 MatchDotCom(s, s[pos], pos);
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     bool flag = true;
//     int numberPtr = 0;
//     string string = "{()({}}";
//     while (flag)
//     {
//         flag = MatchDotCom(string, string[numberPtr], numberPtr);
//         numberPtr += 1;
//         if (numberPtr == string.length())
//         {
//             break;
//         }
//     }
//     cout << flag << endl;
// }

// bool MatchDotCom(string s, char current, int pos){
//     bool valid;
//     int temp = pos;

//     if(current == ')' || current == '}' || current == ']'){
//         valid = false;
//         return valid;
//     }
//     temp += 1;
//     int pos1 = 0;
//     if(current == '('){
//         if(s[temp] == ')'){
//             valid = true;
//             return valid;
//         }
//         else{
//             MatchDotCom(s, s[temp], temp);
//         }
//     }else if(current == '{'){
//         if(s[temp] == '}'){
//             valid = true;
//             return valid;
//         }
//         else{
//             MatchDotCom(s, s[temp], temp);
//         }

//     }else if(current == '['){
//         if(s[temp] == ']'){
//             valid = true;
//             return valid;
//         }
//         else{
//             MatchDotCom(s, s[temp], temp);
//         }
//     }
//       return valid;
// }

// int main(){
//     string test = "()";
//     bool valid = true;
//     while(valid && pos1 < test.length() - 1){
//         valid = MatchDotCom(test, test[pos1], pos1);

//     }
//     return 0;
// }