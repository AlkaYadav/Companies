/*

 * middleNode.cpp
 *
 *  Created on: Oct 26, 2015
 *      Author: user


#include <iostream>
#include<stdlib.h>
using namespace std;

struct linkedNode{
	int data;
	struct linkedNode* next;
};

struct linkedNode* newnode(int data){
	struct linkedNode* new_n=(struct linkedNode*)malloc(sizeof(struct linkedNode));
		new_n->next=NULL;
		new_n->data=data;
		return new_n;
}
struct linkedNode* middleNode(struct linkedNode* head){
	if(head==NULL)
		return NULL;
	struct linkedNode* slow_ptr=head;
	struct linkedNode* fast_ptr=head->next;
	while(slow_ptr && fast_ptr && fast_ptr->next){
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
	}
	return slow_ptr;
}

int main(){
	struct linkedNode* head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	struct linkedNode* midNode=middleNode(head);
	cout<<"Mid node "<<midNode->data<<endl;

}
*/