//class ListNode {
// public:
//  int value;
//  ListNode* next;
//  ListNode(int v) : value(v), next(NULL) {}
//};
class Solution {
 public:
  ListNode* reorder(ListNode* head) {
    // write your solution here
       if(!head){
    return NULL;
    }
    else if (!head->next){
    return head;
    }
     ListNode * result=head;
     ListNode * temp=head;
     bool carry=false;
    while(temp->next){
    temp=temp->next;
      if(carry){
      result=result->next;
      }
      carry=!carry;
    }
    ListNode * one=head;
    ListNode * two= result->next;
    result->next=NULL;
    
    return seq_merge(one,  reverseLN(two));
  }
  ListNode * reverseLN(ListNode * head){
  ListNode* prev=NULL;
  ListNode* curr=head;
    ListNode * temp= head;
    while(curr){
     curr=curr->next;
      temp->next=prev;
      prev=temp;
     temp=curr;
    }
    return prev;
    
  }
  ListNode* seq_merge(ListNode* one, ListNode * two){
  ListNode * res=one;
  ListNode* current=one;
    one=one->next;
    bool first=false;
   while(one || two){
    if(!one){
      current->next=two;
      current=current->next;
      two=two->next;
    }
    else if (!two){
      current->next=one;
      current=current->next;
      one=one->next;
    }
    else  {
      if(first){
      current->next=one;
      current=current->next;
      one=one->next;
      }
        else{
      current->next=two;
      current=current->next;
      two=two->next;
        }
        first=!first;
    }
   }
    return res ;
  }
  
  
};
