void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode*ptr;
   ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
