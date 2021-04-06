#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
	int key;
	struct Node *left, *right;
};
struct Node* newNode(int key)
{
		struct Node* temp= new Node;
		temp->key=key;
		temp->left=temp->right=NULL;
		return temp;
} 
struct Node* insert(struct Node* root, int key)
{
	if(root==NULL) 
	return newNode(key);
	
	if(key<root->key) 
	root->left=insert(root->left, key);
	
	else if(key>root->key)
	root->right=insert(root->right,key);
	
	return root;
}
void printInOrder(struct Node* root)
{
	if(root!=NULL)
	{
		printInOrder(root->left);
		cout<<root->key<<" ";
		printInOrder(root->right);
	}
}
struct Node* search(struct Node* root, int key)
{
	if(root==NULL || root->key==key)
	return root;
	if(key<root->key)
	return search(root->left, key);
	else 
	return search(root->right,key);
}
struct Node* minValueOfTree(struct Node* root)
{
	struct Node* temp=root;
	while(temp->left!=NULL && temp!=NULL)
	{
		temp=temp->left;
	}
	return temp;	
}
struct Node* deleteNode(struct Node* root, int key)
{
	if(root==NULL)
	return root;
	if(key<root->key)
	root->left= deleteNode(root->left, key);
	else if(key>root->key)
	root->right= deleteNode(root->right, key);
	else 
	{
		if(root->left==NULL)
		{
			struct Node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct Node* temp=root->left;
			free(root);
			return temp;
		}
		struct Node* temp= minValueOfTree(root->right);
		root->key=temp->key;
		root->right=deleteNode(root->right, temp->key);
		return root;
	}
	return root;
}
int main(){
	struct Node *root=NULL;
	root=insert(root, 10);
	insert(root,2);
	insert(root, 50);
	insert(root, 1);
	insert(root,3);
	printInOrder(root);
	
	struct Node* find=search(root, 3);
	cout<<"\nNode find has found root 3"<<endl;
	deleteNode(root,1);
	printInOrder(root);
	return 0;
}
