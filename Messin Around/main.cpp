#include <bits/stdc++.h>
using namespace std;
class MyLinkedList {
public:
    struct Node {
            int val;
            Node *next;
            Node(int x) : val(x), next(NULL) {}
};
    Node* head;
    /** Initialize your data structure here. */
    MyLinkedList() {
         head=NULL;
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node* current= head;
        for(int i=0; i<index|| current==NULL; i++)
        {
            current=current->next;
        }
        if(current==NULL)
            return -1;
        return current->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        
        Node* add= new Node(val);
        Node* temp=head->next;
        head->next=add;
        add->next=temp;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* current =head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        Node* add= new Node(val);
        current->next=add;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index==0)
        {
            addAtHead(val);
            return;
        }
        Node* add= new Node(val);
        Node* current= head;
        for(int j=0; j<index; j++)
        {
            current=current->next;
        }
        if(current->next==NULL)
        {
            addAtTail(val);
        }
        else{
            Node* temp=current->next;
            current->next=add;
            add->next=temp;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index==0)
        {
            head->next=NULL;
            head->next=head->next->next;
            return;
        }
        Node* current=head;
        for(int i=0; i<index-1; i++)
        {
            current=current->next;
        }
        current->next=NULL;
        current=current->next->next;
    }
    
};
	
int main() {
// solution comes s
	MyLinkedList* obj = new MyLinkedList();
  int param_1 = obj->get(1);
  obj->addAtHead(12);
  obj->addAtTail(12);
  obj->addAtIndex(13,1);
  obj->deleteAtIndex(0);
  	Node*current= head;
		while(current->next!=NULL)
		{
			cout<<current->val<<" ";
		}
}
