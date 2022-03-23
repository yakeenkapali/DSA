#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(){
			next = NULL;
		}
		
		Node(int d){
			next = NULL;
			data = d;
		}
};

class LinkedList{
	public:
		Node* head;
		
	LinkedList(){
		head = NULL;
	}
	
	LinkedList(Node* n){
		head = n;
	}
	
	void traverse(){
		
		if(head == NULL){
			cout << "Empty List";
		}
		else{
			Node* ptr = head;
			while(ptr != NULL){
				cout << ptr->data << "-->";
				ptr = ptr->next;
			}
		}
		cout<<endl;
	}
	
	void append(Node* n){
		if(head == NULL){
			head = n;
		}else{
			Node* ptr = head;
			
			while(ptr->next != NULL){
				ptr = ptr->next;
			}
			
			ptr->next = n;
		}
	}
	
	void prepend(Node* n){
		if(head == NULL){
			head = n;
		}else{
			n->next = head;
			head = n;
		}
	}
	
	void insertAfter(int d, Node* n){
		if(head == NULL){
			cout << "No Such Data Available";
		}else{
			Node* ptr = head;
			
			while(ptr->data != d){
				ptr = ptr->next;
			}
			n->next = ptr->next;
			ptr->next = n;
		}
	}
	
	void insertBefore(int d, Node* n){
		if(head == NULL){
			cout << "No Such Data Found";
		}else{
			Node* afterPtr = head->next;
			Node* prevPtr = head;
			
			while(afterPtr->data != d){
				prevPtr = prevPtr->next;
				afterPtr = afterPtr->next;				
			}
			n->next = prevPtr->next;
			prevPtr->next = n;
			
		}
	}
	
	void deleteNode(int d){
		if(head == NULL){
			cout << "No Such Data Found";
		}else{
			Node* afterPtr = head->next;
			Node* prevPtr = head;
			
			while(afterPtr->data != d){
				prevPtr = prevPtr->next;
				afterPtr = afterPtr->next;
			}
			
			prevPtr->next = afterPtr->next;
					
		}
	}
	/*
	void deleteAfter(int d){
		if(head == NULL){
			cout << "Empty List";
		}else{
			afterPtr = head-next;
			prevPtr = head;
			
			while(prevPtr->data != d){
				prevPtr = prevPtr->next;
				afterPtr = afterPtr->next; 
			}
			
		}
	}
	*/
};

int main(){
	LinkedList list;
	list.traverse(); 
	
	list.append(new Node(4));
	list.append(new Node(5));
	list.append(new Node(6));
	list.append(new Node(7));
	list.traverse();
	/*
	list.prepend(new Node(7));
	list.prepend(new Node(8));
	list.traverse();
	
	list.insertAfter(5, new Node(9));
	list.traverse();
	
	list.insertBefore(6, new Node(10));
	list.traverse();
	*/
	
	list.deleteNode(6);
	list.traverse();
}
