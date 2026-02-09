// Last updated: 2/9/2026, 4:16:00 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseKGroup(ListNode* head, int k) {
14        ListNode *prev=nullptr,*nextn=nullptr,*temp=head;
15        while(temp){
16            ListNode* kth=find(temp,k);
17            if(kth==temp){
18                if(prev) prev->next=temp;
19                break;
20            }
21            nextn=kth->next;
22            kth->next=nullptr;
23            rev(temp);
24            if(temp==head) head=kth;
25            else prev->next=kth;
26            prev=temp;
27            temp=nextn;
28        }
29        return head;
30    }
31    ListNode* find(ListNode* head, int k){
32        ListNode* temp=head;
33        k--;
34        while(temp){
35            if(k==0) return temp;
36            temp=temp->next;
37            k--;
38        }
39        return head;
40    }
41    ListNode* rev(ListNode* head){
42        ListNode* prev=nullptr,*curr=head;
43        while(curr){
44            ListNode* temp=curr->next;
45            curr->next=prev;
46            prev=curr;
47            curr=temp;
48        }
49        return prev;
50    }
51};