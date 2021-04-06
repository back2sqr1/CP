#include <iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void Insert(int data)
{
	Node* temp= new Node();
	Node* current=head;
	temp->data=data;
	while(current.next!=NULL)
	{
		current=current.next;
	}
	temp=current->next;
}
void Print(){
	Node* temp=head;
	while(temp!=NULL){
		
		printf("%d ", temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void Delete(int n)
{
	Node* temp1=head;
	if(n==1)
	{
		head=temp1->next;
		free(temp1);
		return;
	}
	Node* temp2= new Node();
	for(int i=0; i<n-2; i++)
	{
		temp1=temp1->next;	
		temp2=temp1->next;
		temp1->next=temp2->next;
		delete temp2;
	}
}
int main(){
	head=NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cin>>n;
	Delete(n);
	Print();
}

