//stack.h
#include <iostream>
#include <queue>
#include <string>

#ifndef STACK_H
#define STACK_H
using namespace std;
class Stack : public LinkedList {
	
	public:
		void pop() {
			if(!head) {
				cout << "Stack is empty\n";
				return;
			}
			Node* temp = head;
			cout << "Popped: " << temp->data << endl;
			head = head->next;
			delete temp;
			if (!head) tail = nullptr;
		}
};
	
	
#endif