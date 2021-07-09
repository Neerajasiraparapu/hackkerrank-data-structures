SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
     if(llist == NULL || llist->next == NULL )
     {
         return llist;
     }
     SinglyLinkedListNode* node = llist;
     while(node->next != NULL)
     {
         if(node->data == node->next->data)
         node->next = node->next->next;
         else 
         node = node->next;
     }
     return llist;
}
