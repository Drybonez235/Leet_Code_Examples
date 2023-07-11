#include <iostream>
#include <vector>
#include <cmath>

int main(){
    
    return 0;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int total = 0;
        int places = 0;
        int temp = 0;
        vector<int> numbers = {};
        ListNode* my_list;

        while (l1 || l2){
            if(l1.val == NULL){
                numbers.push_back(0);
            } else{
                numbers.push_back(l1.val);
            }
            if(l2.val == NULL){
                numbers.push_back(0);
            }else{
                numbers.push_back(l2.val)
            }
            places += 1
        }

        for(int i = 0; i < numbers.size(); i++){
            temp += numbers[i * 2];
            temp += numbers[(i * 2) + 1];
        }

        
    }
};
//I don't know enough about data structures... Obvipously. 
