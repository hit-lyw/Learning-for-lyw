/*************************************************************************
	> File Name: 24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月16日 星期二 13时07分29秒
 ************************************************************************/
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode h;
    h.next = head;
    struct ListNode *p1 = &h;
    while (p1->next && p1->next->next) {
        struct ListNode *p2 = p1->next;
        struct ListNode *p3 = p2->next;
        p1->next = p3;
        p2->next = p3->next;
        p3->next = p2;
        p1 = p2;
    }
    return h.next;
}
