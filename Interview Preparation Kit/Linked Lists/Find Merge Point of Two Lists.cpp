//https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/copy-from/153583115?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=linked-lists

#include <bits/stdc++.h>

using namespace std;

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    int h1=0,h2=0;

    SinglyLinkedListNode* temp=head1;

    while(temp->next!=NULL)
    {
        temp=temp->next;
        h1++;
    }

    temp=head2;

    while(temp->next!=NULL)
    {
        temp=temp->next;
        h2++;
    }


    if(h2>h1)
    {
        while(h2-h1>0)
        {
            head2=head2->next;
            h2--;
        }
    }
    else
    {
        while(h1-h2>0)
        {
            head1=head1->next;
            h1--;
        }

    }

    while(head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
    }



    return head1->data;


}
