#include<iostream>
#include<vector>

void heapify(int *arr, int size, int i){
	int l  = (2*i) + 1;
	int r = (2*i) + 2;
	int largest  = i;
	if (l<size && arr[l]>arr[i]){
		largest = l;
	}
	if (r<size && arr[r]> arr[largest]){
		largest  = r;
	}
	if (largest != i){
		std::swap(arr[largest], arr[i]);
		heapify(arr,size, largest);
	}

}

void buildHeap(int *arr, int size){
	
	for(int i = (size-2)/2; i >=0; --i ){
		heapify(arr, size, i);	
	}
}

void printArray(int  *arr, int size){
	for(int i = 0; i <size-1; i++){
		printf(" %d ", arr[i]);
	}
}

int main(){

	int arr[] = {3, 5, 9, 6, 8, 20, 10, 12, 18, 9};
	int size  = 10;
	printf("inputArray  :");
	printArray(arr, size);
	buildHeap(arr, 10);
	printf("Output array  :");
	printArray(arr, size);
	return 0;
}
 
