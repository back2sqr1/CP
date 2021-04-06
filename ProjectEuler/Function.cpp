#include <bits/stdc++.h>
using namespace std;

struct Node{
		int data;
		Node* next;
};
Node* head;
void Insert(int x);
void Print();
int main() {
	// solution comes here
	head=NULL; //empty list
	printf("How many numbers?\n");
	int n, i, x;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Enter ur number ");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
		
}
void Insert(int x)
{
	Node* temp= new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
void Print()
{
	struct Node* temp=head;
	cout<<"List is: ";
	while(temp!=NULL)
	{
		printf("%d", temp->data);
		temp=temp->next;
	}
}

