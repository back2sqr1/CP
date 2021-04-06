#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;	
};
struct Node* head;
struct Node* NewNode(int x)
{
//	struct Node myNode;
//	myNode.data=x;
//	myNode.prev=NULL;
//	myNode.next=NULL;   <-local variable will be erased
	struct Node* temp=  new Node; //new allocates memory in the heap
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	return temp;
}
void Print()
{
	struct Node* temp=head;
	printf("Forward: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data );
		temp=temp->next;
	}
	printf("\n");
}
void ReversePrint()
{
	struct Node* temp=head;
	if(temp==NULL) return;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("Reverse: ");
	while(temp!=NULL)
	{
		printf("%d ", temp->data);
		temp=temp->prev;
	}
	printf("\n");
}
void InsertAtHead(int x)
{
	struct Node* newNode=NewNode(x);
	if(head==NULL)
	{
		head=newNode;
		return ;
	}
	head->prev=newNode;
	newNode->next=head;
	head=newNode;
}
void InsertAtTail(int x)
{
	struct Node* newNode=NewNode(x);
	Node* curr=new Node;
	curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=newNode;
	newNode->prev=curr;
}
int main() { 
	head=NULL;
	InsertAtHead(2);
	Print();
	ReversePrint();
	InsertAtHead(3);
	Print();
	ReversePrint();
	InsertAtTail(2);
	Print();
	ReversePrint();
}

