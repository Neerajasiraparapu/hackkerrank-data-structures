DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode*ptr,*preptr,*postptr;
    ptr=llist;
    preptr=NULL;
    postptr=NULL;
    {
        if(llist==NULL)
        {
            printf("NULL");
        }
        else {
        {
            while(ptr!=NULL)
            {
                postptr=ptr->next;
                ptr->next=preptr;
                preptr=ptr;
                ptr->prev=postptr;
                ptr=postptr;
            }
            llist=preptr;
            return llist;
        }
        }
        return llist;
    }

}
