#include "stdafx.h"
#include "Linkedlist.h"

void Stack::push(int v) {
	if (!head) {
		head = new ListNode(v);
		return;
	}
	ListNode* temp = new ListNode(v);
	temp->next = head;
	head = temp;
}
void Stack::pop() {
	if (!head) {
		std::cout << "Empty!" << std::endl;
		return;
	}
	std::cout << "Poped :";
	std::cout << head->value << std::endl;
	ListNode* temp = head;
	head = head->next;
	delete temp;
	// Don't forget to set temp=NULL
	//temp=NULL;
	//temp=NULL is delete operation done internally,
	// it set the pointer to NULL in the last step
	//but be carefull, if using malloc, realloc with free method, have to make sure 
	// the pointer is set to NULL, otherwise-> bad pointer 
}
void Stack::top() {
	if (!head) {
		std::cout << "Empty!" << std::endl;
		return;
	}
	std::cout << "top :";
	std::cout << head->value << std::endl;

}

void Queue::push(int v) {
	if (!head) {
		head = new ListNode(v);
		current = head;
		return;
	}
	current->next = new ListNode(v);
	current = current->next;
}
void Queue::pop() {
	if (!head) {
		std::cout << "Empty!" << std::endl;
		return;
	}
	std::cout << "Poped :";
	std::cout << head->value << std::endl;
	ListNode * temp = head;
	head = head->next;
	delete temp;
	//temp=NULL;
}
void Queue::front() {
	if (!head) {
		std::cout << "Empty!" << std::endl;
		return;
	}
	std::cout << "Front :";
	std::cout << head->value << std::endl;

}

void Deque::addFront(int v) {
	if (!head) {
		head = new ListNode(v);
		tail = head;
		return;
	}
	head->prev = new ListNode(v);
	head->prev->next = head;
	if (tail == head) {
		tail->prev = head->prev;
	}
	head = head->prev;
}
void Deque::addBack(int v)  {
	if (!tail) {
		tail = new ListNode(v);
		head = tail;
		return;
	}
	tail->next = new ListNode(v);
	tail->next->prev = tail;
	if (tail == head) {
		head->next = tail->next;
	}
	tail = tail->next;
}
void Deque::removeFront()   {
	if (!head) { return; }
	ListNode * temp = head;
	head = head->next;
	head->prev = NULL;
	delete temp;
	//temp=NULL;

}
void Deque::removeEnd()     {
	if (!tail) { return; }
	ListNode * temp = tail;
	tail = tail->prev;
	tail->next = NULL;
	delete temp;
	//temp=NULL;
}
void Deque::pollFront()     {
	if (!head) {
		return;
	}
	std::cout << " front :" << head->value << std::endl;
}
void Deque::pollEnd()       {
	if (!tail) {
		return;
	}
	std::cout << " back :" << tail->value << std::endl;
}
void Deque::print() {
	ListNode* curr = head;
	while (curr) {
		std::cout << curr->value << "->";
		curr = curr->next;
	}
	//ListNode* curr = tail;
	//while (curr) {
	//	std::cout << curr->value << "->";
	//		curr = curr->prev;
	//}
	std::cout << std::endl;
}