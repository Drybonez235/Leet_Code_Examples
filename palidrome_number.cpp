#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool isPalindrome(int x);

int main(){
    int  test = 1000021;
    bool  flag = isPalindrome(test);
    cout << flag << endl;
return 0;
}

bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        vector<int> pali;
        double number_to_divide_by_tens = x;
        double next_number_to_use = x;
        double number_to_subtract = 0;
        double number_to_push = 0;
        int tens[7] = {10000000, 1000000, 100000, 10000, 1000, 100, 10};
    int digits = 0;
    int number = x;
    while(number != 0){
        number = number / 10;
        digits += 1;
    }
    int iterate = digits;
    cout << digits << endl;
        for(int i = 0; i < iterate; i++){
            next_number_to_use = number_to_divide_by_tens /  pow(10, (digits-1));
            cout << next_number_to_use << endl;
            //if(next_number_to_use >= 1){
                number_to_push = floor(next_number_to_use);
                pali.push_back(number_to_push);
                number_to_subtract = number_to_push * tens[i];
                number_to_divide_by_tens -= number_to_subtract;
            digits -= 1;
            //}
        }
    pali.push_back(number_to_divide_by_tens);

    
    
        int length = pali.size();
        cout << length << endl;
        for(int y = 0; y < (floor(length/2)); y++){
            if(pali[y] != pali[(length-y)-1]){
                return false;
            }
        }
        return true;
    }
