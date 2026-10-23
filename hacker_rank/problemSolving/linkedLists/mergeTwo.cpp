//merge two sorted singly linked lists

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *merged=NULL;
    if(head1==NULL){
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    else if(head1->data <= head2->data){
        merged = head1;
        merged->next = mergeLists(head1->next,head2);
    }
    else{
        merged = head2;
        merged->next = mergeLists(head1, head2->next);
    }
    return merged;
}
