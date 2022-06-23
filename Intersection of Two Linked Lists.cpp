#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *a=firstHead, *b=secondHead;
    while(a!=b){
        a = a==NULL ? secondHead : a->next;
        b = b==NULL ? firstHead : b->next;
    }
    if(!a) return -1;
    else return a->data;
}
