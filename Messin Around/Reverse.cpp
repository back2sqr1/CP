#include <bits/stdc++.h>
using namespace std;
struct Node{
		int data;
		struct Node* next;
};
struct Node* head;
void ReversePrint(struct Node* p)
{
	if(p==NULL)
	{
		return;
	}
	ReversePrint(p->next;
	printf("%d ",p->data);
}
void Reverse(struct Node* p)
{
	if(p->next==NULL)
	{
		head=p;
		return;
	}
	Reverse(p->next);
	struct Node* q= p->next;
	q->next=p;
	p->next=NULL;
}
void Print()
{
	Node* cur=head;
	while(cur->next!=NULL)
	{
		cout<<cur->value;
	}
}
int main() {
	
}
