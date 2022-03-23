#include <iostream>
#define MAX 10
using namespace std;

class BubbleSort{
	int data[MAX] = {7, 6, 2, 5, 4, 8, 1, 3, 10, 9 };
	
	public:
	void bubbleSort(){
		
		for(int i=0; i < MAX; i++){
			
			for(int j=0; j < (MAX-i)-1; j++){
				if(data[j] > data[j+1]){
					int temp = data[j];
					data[j] = data[j+1];
					data[j+1] = temp;
				}	
			}
		}
		
	}
	
	void displaySort(){
			
		for(int i=0; i<MAX; i++){
			cout << data[i]<<" ";
		}
	}
};

int main(){
	BubbleSort bs;
	bs.bubbleSort();
	bs.displaySort();
}
