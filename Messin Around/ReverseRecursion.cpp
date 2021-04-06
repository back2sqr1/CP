#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void ReversePrint(struct Node* p)
{
	if(p==NULL)
	{
		return;
	}
	ReversePrint(p->next);
	printf("%d ", p->data);
}
void Print(struct Node* p)
{
	if(p==NULL)
	{
		return;
	}
	printf("%d ",p->data);
	Print(p->next);
}
struct Node* head;
void Reverse(struct Node* p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	Reverse(p->next);
	struct Node* q=p->next;
	q->next=p;
	p->next=NULL; 
}
void Insert(int data){
	Node* p= new Node;
	Node* current= new Node;
	current=head;
	p->data=data;
	p->next= NULL;
	if(head==NULL)
	{
		head=p;
	}
	else{
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=p;
	}
}
int main() { 
	Insert(12);
	Insert(4);
	Insert(2);
	Insert(3);
	Print(head);
	Reverse(head);
	cout<<"\n";
	Print(head);
}

