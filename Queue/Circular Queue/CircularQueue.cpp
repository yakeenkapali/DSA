#include <iostream>
#define SIZE 5
using namespace std;

class CircularQueue{
	
	int front, rear;
	int myQueue[SIZE];
	
	public :	
		CircularQueue(){
			front = -1;
			rear = -1;
		};
	
	bool isFull(){
		if(front == (rear+1)%SIZE){
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
			cout << "Queue OverFlow";
		} else{
			if(front == -1){
				front++;
				rear++;
			}else{
				rear = (rear + 1)%SIZE;
			}
			
			myQueue[rear] = data;
			cout << data <<"  ";
		}
	}
	
	int dequeue(){
		if(isEmpty()){
			cout << "Queue is Empty";
		} else{
			if(front == rear){
				front = rear = -1;
			} else{
				int data = myQueue[front];
				front = (front +1)%SIZE;
				cout << data << "  ";
				
				return data;
			}
		}
	}
};

int main(){
	class CircularQueue cq;
	
	cout << "Enqueued Elements : ";
	cq.enqueue(10);
	cq.enqueue(20);
	cq.enqueue(30);
	cq.enqueue(40);
	
	cout << "Dequeued Elements : ";
	cq.dequeue();
}
