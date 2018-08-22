
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#endif // !LINKEDLIST

class ListNode {
public:
	int value;
	ListNode * next;
	ListNode * prev;
	ListNode(int val) :value(val), next(NULL), prev(NULL) {}
};
class Stack {
private:
	 ListNode* head=NULL;

public:
	
	 void push(int v);

	 void pop();
	
	 void top();



};
class Queue {
private:
	ListNode * head=NULL;
	ListNode * current=NULL;
public:
	void push(int v);
	void pop();
	void front();
};
class Deque {
private:
	ListNode * head = NULL;
	ListNode * tail = NULL;
public:
	void addBack(int);
	void addFront(int);
	void removeFront();
	void removeEnd();
	void pollFront();
	void pollEnd();
	void print();

};