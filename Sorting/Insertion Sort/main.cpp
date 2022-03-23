#include <iostream>
#define MAX 4
using namespace std;

class InsertionSort{
	
	int data[MAX] = {4, 3, 2, 1};
	int key = 0;	
	
	public:
		void insertionSort(){
			for(int i = 1; i<MAX; i++){
				key = data[i];
				int j = i-1;
				
				while(j>=0 && data[j] > key ){
					data[j+1] = data[j];
					j = j-1;
				}
				data[j+1] = key;
			}
		}
		
		
		void printArray(){
			for(int i=0; i<MAX; i++){
				cout << data[i] << " ";
			}
			cout<< endl;
		}
};

int main(){
	InsertionSort sort;
	sort.printArray();
	sort.insertionSort();
	sort.printArray();
}
