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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        if(head->next->next == NULL) return head;
        ListNode* temp = head;
        ListNode* even = head->next;
        ListNode* odd = head;

        ListNode* ev = even;
        while(temp){
            odd->next = odd->next->next;
            odd = odd->next;
            if(even->next == nullptr || even->next->next == nullptr ){
                even->next = NULL;
            }
            else{
                even->next = even->next->next;
                even = even->next;
            }

            if(odd->next == nullptr || odd->next->next == nullptr) {
                odd->next = ev;
                break;
            }
        }


        return head;        
    }
};