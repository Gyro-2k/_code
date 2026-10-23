

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int links=0;
    SinglyLinkedListNode *trav=head;
    while(trav!=NULL){
        links++;
        trav=trav->next;
    }
    links=links-positionFromTail-1;
    trav=head;
    while(links--){
        trav=trav->next;
    }
    return trav->data;
}
