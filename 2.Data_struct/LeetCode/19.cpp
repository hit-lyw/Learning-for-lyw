/*************************************************************************
	> File Name: 19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月15日 星期一 20时11分02秒
 ************************************************************************/

#include <stdio.h>

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *fast , *slow;
    fast = slow = head;
    while (n--) {
        if(!fast->next) return head->next;
        fast = fast->next;
    }
    while (fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return head;
}
