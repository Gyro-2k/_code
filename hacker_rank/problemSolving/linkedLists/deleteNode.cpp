//delete a node of a singly linked list

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode *&head, int position) {
    SinglyLinkedListNode *trav=head;
    if(position==0){
        return head->next;
    }
    position-=1;
    while(position>0){
        trav=trav->next;
        position--;
    }
    trav->next=trav->next->next;
    return head;
}
