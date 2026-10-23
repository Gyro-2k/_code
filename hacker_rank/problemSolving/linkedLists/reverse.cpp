// reverse a singly linked list

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode *past=NULL,*present=head,*future;
    while(present!=NULL){
        future=present->next;
        present->next=past;
        past=present;
        present=future;
    }
    return past;
}
