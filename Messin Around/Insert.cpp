#include <iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void Insert(int data)
{
	Node* last= new Node;
	last->next=NULL;
	last->data=data;
	if (head == NULL) {
        head = last;
    }
    else{
    	Node* current=new Node;
    	current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=last;
}
}
void Print(){
	Node* temp=head;
	while(temp!=NULL){
		
		printf("%d ", temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	head=NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
}

