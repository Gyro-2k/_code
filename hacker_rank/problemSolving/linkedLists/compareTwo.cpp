//check if two linked lists are idientical

//  B)  B:|
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *trav1=head1,*trav2=head2;
    while(trav1->next!=NULL || trav2->next!=NULL){
        if(trav1->data==trav2->data){
            trav1=trav1->next;
            trav2=trav2->next;
        }
        else{
            return false;
        }
    }
    if(trav1->next==NULL && trav2->next==NULL){
        if(trav1->data==trav2->data){
            return true;
        }
    }
    return false;
}
