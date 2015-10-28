/*

 * findMaxThree.cpp
 *
 *  Created on: Oct 26, 2015
 *      Author: user


#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;

struct linkedNode{
	int data;
	struct linkedNode* next;
	struct linkedNode* prev;
};

struct linkedNode* newnode(int data){
	struct linkedNode* new_n=(struct linkedNode*)malloc(sizeof(struct linkedNode));
		new_n->next=NULL;
		new_n->prev=NULL;
		new_n->data=data;
		return new_n;
}
struct linkedNode* reverse(struct linkedNode* root){
	if(root==NULL){
		return NULL;
	}
	static struct linkedNode* prev=NULL;
	struct linkedNode* next=root->next;
	root->next=prev;
	if(prev){
		prev->next=root;
	}
	prev=root;
	reverse(next);
	return prev;
}

void printList(struct linkedNode* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(){
	int a=23;
	int b=15;
	int c=6;
	int largest=(a>b)?(a>c)?a:c:(b>c)?b:c;
	cout<<"Largest "<<largest<<endl;

	char str1[]="Hello";
str1[5]='b';
cout<<str1;


	struct linkedNode* head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	struct linkedNode* rev_node=reverse(head);
	//printList(rev_node);
	cout<<"Head is "<<rev_node->data<<endl;

}
*/
