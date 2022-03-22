#include <iostream>
using namespace std;
#define SIZE 5

class Queue{
	int front, rear;
	int myQueue[SIZE];
	public:
		Queue(){
			front = -1;
			rear = -1;
		}
	
	bool isFull(){
		if(rear == SIZE-1){
			return true;
		}
		return false;
	}
	
	bool isEmpty(){
		if(front == -1 && rear == -1){
			return true;
		}
		return false;
	}
	
	void enqueue(int data){
		if(isFull()){
			cout << "Stack is Full"<<endl;
		}
		else if (isEmpty()){
			front++;
			rear++;
			myQueue[rear] = data; 
			
			cout << "Enqueued element : " << data << endl;
		}
		else{
			rear++;
			myQueue[rear] = data; 
			cout << "Enqueued element : " << data << endl;
		}
	}
	
	int dequeue(){
		if(isEmpty()){
			cout << "Queue is Empty";
		} else{
			int data = myQueue[front];
			front = front + 1;
			
			cout << data << "\t";
			
			return data;
		}
	}
	
};

int main(){
	class Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	cout << "Removed Elements : ";
	q.dequeue();
	q.dequeue();
	q.dequeue();
}
