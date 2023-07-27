//It passess LeetCode and it is Kinda fast... Maybe a bug?

#include <iostream>

using namespace std;

int convert(char s){
    if(s == 'I'){
        return 1;
    }
    else if(s == 'V'){
        return 5;
    }
    else if(s == 'X'){
        return 10;
    }
    else if(s == 'L'){
        return 50;
    }
    else if(s == 'C'){
        return 100;
    }
    else if(s == 'D'){
        return 500;
    }
    else if(s == 'M'){
        return 1000;
    }
    else{
        return 0;
    }
}

int romanToInt(string s){
    int length = s.length();
    int array[length];
    for(int i = 0; i < length; i++){
        char c = s[i];
        int var = convert(c);
        array[i] = var;
    }
    if(length == 1){
        return array[0];
    }

    int answer = 0;
    int control = 0;
    while(control < length-1){
        int one = array[control];
        int two = array[control + 1];
        if(one > two){
            answer += one; // answer = 1690 control = 5 MDCX
            control += 1;
            if(control == length - 1){
                answer += array[control];
                break;
            }
        }
        else if(two > one){
            answer += (two - one);
            control += 2;
            if(control == length - 1){
               answer += array[control]; 
                break;
            }
        }
        else{
            answer += one;
            control += 1;
            if(control == length - 1){
                answer += array[control];
                break;
            }
        }
    }

    return answer;
}


int main(){
    cout << romanToInt("MDCXCV") << endl; //Doesn't Work.   
    cout << romanToInt("CV") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
    cout << romanToInt("D") << endl;
    return 0;
}