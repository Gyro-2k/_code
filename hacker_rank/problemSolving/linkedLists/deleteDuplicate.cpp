//delete duplicate nodes of a sorted linked list

//  B)  B:|
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *trav=head;
    while(trav->next!=NULL){
        if(trav->data==trav->next->data){
            trav->next=trav->next->next;
        }
        else{
            trav=trav->next;
        }
    }
    return head;
}
