#include <stddef.h>
class Node
{
	public:
		int info;
		Node* next;
};

class List
{
	private:
		Node* HEAD;
		Node* TAIL;	
	
	public:
		List();
		~List();
		
		bool isEmpty();
		void addToHead(int data);
		void addToTail(int data);
		void removeFromHead();
		void traverse();
		bool retrive(int data,Node* outputPtr);
		void add(int data,Node* pre);
};
