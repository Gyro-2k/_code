//solution to revere a doubly link list problem
 
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *past=NULL,*present = head, *future;
    while(present!=NULL){
        future=present->next;
        present->next=past;
        past=present;
        present=future;
    }
    present=past;
    DoublyLinkedListNode *newHead=past;
    past=NULL;
    while(present!=NULL){
        future=present->prev;
        present->prev=past;
        past=present;
        present=future;
    }
    return newHead;
}
