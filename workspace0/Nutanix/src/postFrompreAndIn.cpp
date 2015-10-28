/*
//============================================================================
// Name        : Nutanix.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<climits>
using namespace std;
struct Node{
	char data;
	struct Node* left;
	struct Node* right;
};
int findIndx(string in,char a){
	int index=in.find(a);
	return index;
}
struct Node* constructTree(string in,string pre,int start,int end){
	static int preIndx=0;
	if(start>end || preIndx>=pre.length()){
		return NULL;
	}
	struct Node* root=new Node;
	root->data=pre[preIndx++];
	root->left=NULL;
	root->right=NULL;
	cout<<"For root "<<root->data<<endl;
	if(start==end){
		return root;
	}
	int index=findIndx(in,root->data);

	root->left=constructTree(in,pre,start,index-1);
	root->right=constructTree(in,pre,index+1,end);
	return root;
}

void postorder(struct Node* root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}


void printPostOrder(string in,string pre,int sizePre){
	char root=pre[0];
	int index=findIndx(in,root);

	//Has a left subtree
	if(index!=0){
		string pre_new;
		pre_new.assign(pre.begin()+1,pre.end());
		printPostOrder(in,pre_new,index);
	}

	//Has a right subtree
	if(index!=sizePre-1){
		string pre_new;
		string in_new;
		pre_new.assign(pre.begin()+index+1,pre.end());
		in_new.assign(in.begin()+index+1,in.end());
		printPostOrder(in_new,pre_new,sizePre-index-1);
	}
	cout<<pre[0]<<" ";
}

void findMinMaxHD(struct Node* root,int HD,int& minHD,int& maxHD){
	if(root==NULL){
		return;
	}
	if(HD>maxHD){
		maxHD=HD;
	}
	if(HD<minHD){
		minHD=HD;
	}
	findMinMaxHD(root->left,HD-1,minHD,maxHD);
	findMinMaxHD(root->right,HD+1,minHD,maxHD);
}

void printHD(struct Node* root,int HD,int line_HD){
	if(root==NULL){
		return;
	}
	if(HD==line_HD){
		cout<<root->data<<" ";
	}
	printHD(root->left,HD-1,line_HD);
	printHD(root->right,HD+1,line_HD);
}
void printVerticalOrder(struct Node* root){
	int minHD=INT_MAX;
	int maxHD=INT_MIN;

	findMinMaxHD(root,0,minHD,maxHD);
	for(int i=minHD;i<=maxHD;i++){
		printHD(root,0,i);
	}
}
int main() {
	string in="425168379";
	string pre="124536879";

	struct Node* root=constructTree(in,pre,0,in.length()-1);
	//postorder(root);

	printPostOrder(in,pre,pre.length());
	cout<<"Vertical order"<<endl;
	printVerticalOrder(root);
	return 0;
}
*/
