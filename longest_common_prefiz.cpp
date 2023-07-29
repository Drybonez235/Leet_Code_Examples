#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        bool flag = true;
        int number_of_elements = strs.size();
        int control = 0;
        int control_inner = 0;
        char RNA = strs[0][0];
        while(flag){
            int loop_index = control % number_of_elements;
            cout << "flag 1" << endl;
            cout << "control is " << control << endl;
            cout << "contrl inner " << control_inner << endl;
            cout << "loop index is " << loop_index << endl;
            if(control_inner == strs[loop_index].length()){
                flag = false;
                return prefix;
            }
            cout << "flag 2" << endl;
            char current_value = strs[loop_index][control_inner];
            cout << current_value << endl;
            if(RNA != current_value){
                cout << "If tempi != current value" << endl;
                flag = false;
                return prefix;

            }
            else{
                control += 1;
                RNA = current_value;
                cout << "if temp == current value " << endl;
            }
            if(loop_index == number_of_elements - 1){
                cout << "if loop_index == number of elements" << endl;
                prefix = prefix + current_value;
                control_inner += 1;
                RNA = strs[loop_index][control_inner];
            }
        }
        return prefix;
    };


int main(){
    vector<string> test = {"dog", "dog", "d"};
    string one = longestCommonPrefix(test);
    cout << one << endl;
    return 0;
}