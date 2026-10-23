SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *last = head;
    while(last!=NULL){
        cout<<last->data;
        return last;
        last=last->next;
    }
    last= new SinglyLinkedListNode(data);
    last->next=NULL;
    cout<<last->data;
    return last;
}
