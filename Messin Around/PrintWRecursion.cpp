#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* Insert(Node* head, int data){
	Node *temp= new Node;
	temp->data=data;
	temp->next=NULL;
	if(head==NULL) head=temp;
	else{
		Node* temp1=head;
		while(temp1->next!=NULL) temp1=temp1->next;
		temp1->next=temp;
	}
	return head;
}
void Print(struct Node* p){
	if(p==NULL)
	{
		return;
	}
	printf("%d ", p->data);
	Print(p->next);
}
void ReversePrint(struct Node* p)
{
	if(p==NULL)
	{
		return;
	}
	Print(p->next);
	printf("%d ", p->data);
}
int main() { 
	struct Node* head= NULL;
	head= Insert(head, 12);
	head= Insert(head, 4);
	head= Insert(head, 8);
	head= Insert(head, 9);
	ReversePrint(head);
	
}

