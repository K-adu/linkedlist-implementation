#include <iostream>
#include "List.h"

List::List() 
{
	HEAD = NULL;
	TAIL = NULL;
}

List::~List() 
{}

bool List::isEmpty()
{
	return HEAD == NULL;
}

void List::addToHead(int data)
{
	// Create a new node
	Node* new_node = new Node();
	new_node->info = data;
	
	new_node->next = HEAD;
	HEAD = new_node;
	
}
void List::addToTail(int data){
		Node* new_node= new Node();
		new_node->info=data;
		new_node->next=NULL;
		TAIL->next=new_node;
		TAIL=new_node;
		
}
void List::removeFromHead(){
		Node* nodeToDelete=HEAD;
		HEAD=nodeToDelete->next;
		delete nodeToDelete;
}
void List::traverse(){
		Node* temp=HEAD;
		while(temp!=NULL){
				std::cout<<temp->info<< " ";
				temp=temp->next;
				
		}
		std::cout<<std::endl;
		
}
bool List::retrive(int data,Node* outputPtr){
		Node* p=HEAD;
		while(p!=NULL && p->info!=data){
				p=p->next;
		}
		if (p==NULL){
				return false;
		}
		else{
				outputPtr=p;
				return true;

		}
		
}
void List::add(int data,Node* pre){
	Node* new_node = new Node();
	new_node->info=data;
	new_node->next=pre;
	pre->next=new_node;
		
}

int main()
{
	List l;
	Node* pred;
	//std::cout << l.isEmpty();
	l.addToHead(1);
	l.addToHead(2);
	l.addToHead(3);
	l.traverse();
	l.removeFromHead();
	l.traverse();
	l.retrive(4,pred);
	l.add(5,pred);
	l.traverse();
	
}
