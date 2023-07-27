//You can figure out the digits by pushing numbers over ten to the next node. Think forward, not backwards.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* answer;

    int l1_digits = 0;
    int l2_digits = 0;
    ListNode* current = l1;
    ListNode* current2 = l2;
    while(current != NULL){
        l1_digits += 1;
        current = current->next;
    }
    cout << l1_digits << endl;
    current = l2;
    while(current != NULL){
        l2_digits += 1;
        current = current->next;
    }

    cout << l2_digits << endl;

    ListNode* answer_past_tracker;
    while(l1_digits > 0 && l2_digits > 0){
        ListNode new1();
        if(l1_digits == l2_digits){
            answer_past_tracker = answer;//pointer to the last value.
            answer = answer->next;
            int temp1 = current->val;
            int temp2 = current2->val;
            int total = temp1 + temp2;
            current = current->next;
            current2 = current2->next;
            if(total >= 10){
                answer_past_tracker->val += 1;
                answer->val = (total - 10);
            }
            else{
                answer->val = total;
                current = current->next;
                current2 = current2->next;
                l1_digits -= 1;
                l2_digits -=1;
            }

        }
        else if(l1_digits > l2_digits){
            answer = current;
            current = current->next;
            answer->next = current;
            l1_digits =- 1;
        }
        else if (l2_digits > l1_digits){
            answer = current2;
            current2 = current2->next;
            answer->next = current2;
            l2_digits =- 1;
        }
    }
    return &answer; 
}

int main(){
    ListNode one(1, NULL), two(2, NULL), three(3, NULL), four(4, NULL);

    ListNode nine(9, NULL), nine2(9, NULL), nine3(9, NULL);
    nine.next = &nine2;
    nine2.next = &nine3;

    one.next = &two;
    two.next = &three;
    three.next = &four;

    addTwoNumbers(&one, &nine);

    return 0;
}


