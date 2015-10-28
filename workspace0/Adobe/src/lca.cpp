/*
//============================================================================
// Name        : Adobe.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newnode(int data){
	struct node* new_n=(struct node*)malloc(sizeof(struct node));
	new_n->left=NULL;
	new_n->right=NULL;
	new_n->data=data;
	return new_n;
}

struct node* lca(struct node* root,int node1,int node2){
	if(root==NULL)
		return NULL;
	if(node1<root->data && node2<root->data){
		return lca(root->left,node1,node2);
	}
	if(node1>root->data && node2>root->data){
		return lca(root->right,node1,node2);
	}
	return root;
}
int main() {
	struct node* root=newnode(20);
	root->left=newnode(8);
	root->right=newnode(22);
	root->left->left=newnode(4);
	root->left->right=newnode(11);
	root->left->right->left=newnode(10);
	root->left->right->right=newnode(14);

	struct node* lca_node=lca(root,4,15);
	cout<<"LCA "<<lca_node->data<<endl;
	return 0;
}
*/
