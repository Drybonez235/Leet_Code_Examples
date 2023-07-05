#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool isPalindrome(int x);

int main(){
    int  test = 100002499;
    bool  flag = isPalindrome(test);
    cout << flag << endl;
    return 0;
}

bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    vector<int> pali;
    int number = x;
    int digits = 0;
    int current_power;
    int current_number = x;
    int current_number_copy = 0;
    int subtract_by = 0;
    int floor_number_to_push = 0;
    
    while(number != 0){
        number = number / 10;
        digits += 1;
    }
    
    int power_digits = digits - 1;
    for(int i = 0; i < digits; i++){
        current_power = pow(10, power_digits);
        current_number_copy = current_number / current_power;
        floor_number_to_push = floor(current_number_copy);
        pali.push_back(floor_number_to_push);
        subtract_by = current_power * floor_number_to_push;
        current_number -= subtract_by;
        
        power_digits -= 1;
    }
    for(int x = 0; x < digits; x ++){
        cout << pali[x] << endl;
    }
    
    int length = pali.size();
    for(int y = 0; y < (floor(length/2)); y++){
        if(pali[y] != pali[(length-y)-1]){
            return false;
        }
    }
    return true;
}
