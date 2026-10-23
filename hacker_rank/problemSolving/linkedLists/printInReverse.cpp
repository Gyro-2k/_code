//prine the elements of a linked list in reverse order

void reversePrint(SinglyLinkedListNode* &head) {
    SinglyLinkedListNode *past=NULL,*present=head,*future;
    while(present!=NULL){
        future=present->next;
        present->next=past;
        past=present;
        present=future;
    }
    SinglyLinkedListNode *trav=past;
    while(trav!=NULL){
        cout<<trav->data<<endl;
        trav=trav->next;
    }   
}
