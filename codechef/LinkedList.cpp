#include<iostream>
using namespace std;

struct Node{
	int value;
	Node *next;
};
Node* newNode(int value){
	Node *node = new Node;
	node->value = value;
	node->next = NULL;
	return node;
}
Node* insert(Node* start, int value){
	if(start==NULL){
		return newNode(value);
	}
	Node *current = start;
	while(current->next!=NULL){
		current = current->next;
	}
	current->next = newNode(value);
	return current->next;
}
void printvalue(Node *start){
	Node* current = start;
	while(current->next!=NULL){
		cout<<current->value<<endl;
		current=current->next;
	}
}
void search(Node *start, int value){
	Node *current  = start;
	while(current->next!=NULL){
		if(current->value==value){
			cout<<"value in list"<<endl;
			return;
		}
		current = current->next;
	}
}
void delnode(Node *start , int value){
	if(start->value==value){
		start=start->next;
		return;
	}
	Node *current = start;
	while(current->next!=NULL){
		if(current->next->value==value){
			current->next=current->next->next;
			break;
		}
		current = current->next;
	}
}
int main(){
	Node *start = NULL;
	start=insert(start, 8);
	insert(start, 79);
	insert(start, 9);
	insert(start, 80);
	printvalue(start);
	search(start, 86);
	delnode(start,80);
	printvalue(start);
	
}
