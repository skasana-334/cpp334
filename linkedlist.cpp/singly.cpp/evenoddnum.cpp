 ListNode* oddEvenList(ListNode* head) {
        ListNode*o1=NULL,*o2=NULL,*e1=NULL,*e2=NULL,*temp=head;
        int c=0,d=0;
        if(head==NULL)
            return head;
        while(temp!=NULL){
      if((temp->val)%2!=0){
          c=1;
          if(o1==NULL){
             o1=temp;
              o2=temp;
              
          }
          else{
              o2->next=temp;
              o2=o2->next;
          }
      }
       else{
        d=1;
              if(e1==NULL){
             e1=temp;
               e2=temp;
          
              
          }
          else{
              e2->next=temp;
              e2=e2->next;
          }
       }  
            temp=temp->next;
        }
        if(c==1){
     o2->next=e1;
            e2->next=NULL;
            return o1;
        }
        else {
        e2->next=NULL;
            return e1;
        }
        
    }