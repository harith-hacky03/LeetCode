//Question Link:https://leetcode.com/problems/add-two-numbers/

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
        ListNode* dummy =new ListNode(0);
        ListNode* fin=dummy;
        int carry=0;
       
        while(l1!=nullptr || l2!=nullptr)
        {
            int n1,n2;
            if(l1==nullptr)
                n1=0;
            else
                n1=l1->val;
            if(l2==nullptr)
                n2=0;
            else
                n2=l2->val;
            int sum=n1+n2+carry;
            carry=0;
            if(l1!=nullptr)
                l1=l1->next;
            if(l2!=nullptr)
                l2=l2->next;
            if(sum>=10)
            {
                while(sum>=10)
                {
                    int n=sum%10;
                    fin->next=new ListNode(n);
                    fin=fin->next;
                    carry=sum/10;
                    //cout<<carry;
                    sum=sum/10;
                }
            }
            else
            {
                fin->next=new ListNode(sum);
                fin=fin->next;
            }
            
        }
        int lastcarry=carry;
        if(lastcarry!=0)
        {
            fin->next=new ListNode(lastcarry);
            fin=fin->next;
        }
            
        
     
        return dummy->next;
    }
};