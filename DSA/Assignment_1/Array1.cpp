#include<iostream>

using namespace std;

int main(){
	int *arr = NULL;
	int size = 0;
	int idx = 0;
	int opt = 6;
	
	do{
		cout << "1 : Create list" << endl;
		cout << "2 : Display" << endl;
		cout << "3 : Insert" << endl;
		cout << "4 : Delete" << endl;
		cout << "5 : Linear Search" << endl;
		cout << "6 : Exit" << endl;
		cout << "Choose : ";
		
		cin >> opt;
		
		switch(opt){
			case 1 : 
				cout << "Enter array Size : ";
				cin >> size;
				
				arr = new int[size];
				cout << "Created new arar of size " << size << endl;
				break;
			case 2:
				cout << "Array elements : ";
				for(int i = 0; i < idx; i++){
					cout << arr[i] << ", ";
				}
				cout << endl;
				break;
			case 3:
				if(arr == NULL){
					cout << "Create array first";
					break;
				}
				if(idx >= size){
					cout << "Array overflow";
					break;
				}
					
				int num;
				cout << "Enter numer to insert : ";
				cin >> num;
				arr[idx] = num;
				cout << "Elm inserted" << endl;
				idx++;
				break;
			case 4 : 
				int del, at_idx;
				cout << "Enter interger to delete : ";
				cin >> del;
				
				for(int i = 0; i < idx; i++){
					if(arr[i] == del){
						at_idx = i;
						break;
					}
				}
				for(int i = at_idx; i < idx; i++){
					arr[i] = arr[i+1];
				}
				idx--;
				break;
			case 5 : 
				int key;
				cout << "Enter einter you want to search : ";
				cin >> key;
				
				for(int i = 0 ; i< idx; i++){
					if(arr[i] == key){
						cout << "Elm " << key << "is at index " << i << endl;
						break;
					}
				}
				break;
			default : 
				cout << "Choose a valid option";
				break;
		}
	}while(opt != 6);
	
}
