//https://www.hackerrank.com/challenges/ctci-linked-list-cycle/submissions/code/153581672?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=linked-lists

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head==NULL)
        return 0;
    
    Node* tortoise=head;
    Node* hare=head;
    
    while(tortoise->next!=NULL && hare->next->next!=NULL)
    {
        tortoise=tortoise->next;
        hare=hare->next->next;
        if(tortoise==hare)
            return 1;
    }
    
    return 0;    
    
    
}
