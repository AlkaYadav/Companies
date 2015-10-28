/*
 * rootToLeafSum.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: user
 */
//Given a binary tree and a number . If the tree has a roottoleaf
//path such that adding up all
//the values along the path equals the given number, return depth of that leaf (minimum, if
//multiple paths), Return -1
//if no such path can be found.


#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
#define ROW 100
#define COL 100
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data){
	struct Node* tmp=(struct Node*)malloc(sizeof(struct Node));
	tmp->data=data;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
void rootToLeafMinDepth(struct Node* root,int sum,int &depth,int curr_sum,int curr_depth){
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
		curr_sum+=root->data;
		if(curr_sum==sum){
			cout<<"Curr_sum "<<sum<<endl;
			if(depth==0){
			if(curr_depth>depth){
				depth=curr_depth;
			}
		}
			else{
				if(curr_depth<depth){
								depth=curr_depth;
							}
			}

	}
		return;
	}
	curr_sum+=root->data;
	cout<<"Curr_sum "<<curr_sum<<endl;
	rootToLeafMinDepth(root->left,sum,depth,curr_sum,curr_depth+1);
	rootToLeafMinDepth(root->right,sum,depth,curr_sum,curr_depth+1);
}


int main(){
	struct Node* root;
	root=newNode(5);
	root->left=newNode(3);
	root->right=newNode(7);
	//root->right->left=newNode(2);
	root->left->left=newNode(2);
	root->left->right=newNode(6);
	root->left->left->left=newNode(2);
	int depth=0,sum=12;
	rootToLeafMinDepth(root,sum,depth,0,0);
	cout<<"Depth is "<<depth<<endl;
}
