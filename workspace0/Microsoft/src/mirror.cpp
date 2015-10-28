/*
//============================================================================
// Name        : Microsoft.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//Convert a binary tree into it’s Mirror tree
#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data){
	struct Node* new_n=(struct Node*)malloc(sizeof(struct Node));
	new_n->data=data;
	new_n->left=NULL;
	new_n->right=NULL;
	return new_n;
}
void mirror(struct Node* root){
	if(root){
		mirror(root->left);
		mirror(root->right);
		struct Node* data=root->left;
		root->left=root->right;
		root->right=data;
	}
}
void inorder(struct Node* root){
if(root){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
}
int main() {
	struct Node *root = newNode(1);
	  root->left        = newNode(2);
	  root->right       = newNode(3);
	  root->left->left  = newNode(4);
	  root->left->right = newNode(5);
	  mirror(root);
	  inorder(root);
	return 0;
}
*/
