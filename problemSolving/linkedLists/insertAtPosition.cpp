//  B)  B:|
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode *head, int data, int position) {
    SinglyLinkedListNode *add= new SinglyLinkedListNode(data);
    SinglyLinkedListNode *trav=head;
    int now=1;
    if(position==1){
        add->next=head;
        head=add;
        return head;
    }
    for(SinglyLinkedListNode *trav=head;trav!=NULL;trav=trav->next){
        if(now==position){
            add->next=trav->next;
            trav->next=add;
            return head;
        }
        else{
            now++;
        }
    }
    return head;
}
