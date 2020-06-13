// linkedList.cpp
#include<iostream>
using namespace std;
class Node
{
	int data;
	Node *next;
};
int main()
{
	Node *head=NULL;
	Node *second=NULL;
	Node *third=NULL;

	head= new Node();
	second=new Node();
	third=new Node();

	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=3;
	third->next->NULL;
	return 0;
}
// Linked list traversal

void printList(Node * n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	Node *head=NULL;
	printList(head);
	return 0;
}

//inserting a node in Linked List
//at the front of ll || at the given node || at the end of ll

//add the new node
//put the data
//add the head to the next of new node
//refer head to new node