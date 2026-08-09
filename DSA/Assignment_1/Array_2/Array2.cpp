#include<iostream>

using namespace std;

int main(){
	int arr[] =  {1, 7, 6, 2, 3, 8, 4, 45, 76, 4, 5, 55, 5};
	int nums = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = nums - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
	
	int initial_count = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < nums - 1; i++){
		if(arr[i] == arr[i + 1]){
			for(int j = i; j < nums - 1; j++){
                arr[j] = arr[j+1];
            }
			nums--;
            i--; 
		}
	}
	
	for(int i = 0; i < nums; i++){
		cout << arr[i] << " ,";
	}
	
}
