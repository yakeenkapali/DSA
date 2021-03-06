#include <iostream>
using namespace std;

class Stack{
	int top;
	int count = 0;
	int stack[10];
	
	public:
		Stack(){
			top = -1;
		};
	
	bool isFull(){
		if(top == 10){
			return true;
		}
		return false;
	}
	
	bool isEmpty(){
		if(top == -1){
			return true;
		}	
		return false;
	}
	
	void push(int data){
	
		if(isFull()){
			cout << "Stack is Full";
		}
		else{
			top = top + 1;
			stack[top] = data;
			cout << data << " pushed in stack\n";		
		}
		
		count++;
	}
	
	int pop(){
		
		if(isEmpty()){
			cout << "Stack is Empty";
		}
		else{
			
			int data = stack[top];
			top = top -1 ;	
			return data;
		}
		
		count--;
	}
	
	void displayValue(){
		for(int i=0; i<count; i++){
			cout << stack[i] << " ";
		}
	}
};

int main(){
	
	class Stack s;
	s.push(10); 
	s.push(20);
	s.push(30);
	
	cout << s.pop() << " popped from stack\n";
	
	cout << "Elements in the list: " ; s.displayValue();
	 
}

