#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(){
			next = NULL;
		}
};

//Traversel
/*
void traversal(Node* n){
	while (n != NULL){
		cout << n->data << "-->";
		n = n->next;
	}
	cout << "NULL";
}
*/

//Append
void append(Node* head){
	Node* ptr = head;
	Node* appendNode = new Node();
	appendNode->data = 69;
	
	while (ptr->next != NULL){
		ptr = ptr->next;
	}
	
	ptr->next = appendNode;
	cout << "Appended!" << endl;	
}

int main(){
	Node* head = NULL;
	Node* first = NULL;
	Node* second = NULL;
	
	head = new Node();
	first = new Node();
	second = new Node();
	
	head->data = 10;
	head->next = first;
	
	first->data = 20;
	first->next = second;
	
	second->data = 30;
	
	
	//traversal(head);
	append(head);
}
