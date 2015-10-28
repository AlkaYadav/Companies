/*

 * rearrangeLinkedList.cpp
 *
 *  Created on: Sep 27, 2015
 *      Author: user

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

void reverse(struct Node* &head){
	if(head==NULL){
		return;
	}
	struct Node* tmp=head;
	struct Node* prev=NULL;
	struct Node* next=NULL;
	while(tmp){
		next=tmp->next;
		tmp->next=prev;
		prev=tmp;
		tmp=next;
	}
	head=prev;
}

void printList(struct Node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

struct Node* newNode(int data){
	struct Node* new_n=(struct Node*)malloc(sizeof(struct Node));
	new_n->data=data;
	new_n->next=NULL;
	return new_n;
}

struct Node* mid(struct Node* head){
	if(head==NULL){
		return NULL;
	}
	struct Node* slow=head;
	struct Node* fast=head->next;
	while(slow&& fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
int main(){
	struct Node* head=newNode(1);
	head->next=newNode(2);
	head->next->next=newNode(3);
	head->next->next->next=newNode(4);
	head->next->next->next->next=newNode(5);
	//head->next->next->next->next->next=newNode(6);

	printList(head);
	//reverse(head);
	struct Node* mid_node=mid(head);
	cout<<"Mid is "<<mid_node->data<<endl;
	struct Node* mid_node_next=mid_node->next;
	mid_node->next=NULL;
	reverse(mid_node_next);
	printList(mid_node_next);
	struct Node* rearrange_head=head;
	while(rearrange_head && mid_node_next){
		struct Node* rearrange_head_next=rearrange_head->next;
		struct Node* mid_node_next_next=mid_node_next->next;
		rearrange_head->next=mid_node_next;
		mid_node_next->next=rearrange_head_next;
		rearrange_head=rearrange_head_next;
		mid_node_next=mid_node_next_next;
	}

	printList(head);
}
*/
