   #include<bits/stdc++.h>
   using namespace std;
   
   struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 ListNode* head=NULL;

    Solution(ListNode* head) {
        this->head=head;
    }
    
    int getRandom() {
        int ans=0,i=1;
        ListNode* p = this->head;

        while(p){
           if(rand()%i==0){
               ans=p->val;
           }
           i++;
           p=p->next;
        }
        return ans;
    }