#include <iostream>

//PROBLEM => Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements. 

void rotateUsingTempArray(int array[], int numberOfRotations, int sizeOfArrays);//1
void rotateOneByOne(int array[], int numberOfRotations, int sizeOfArray);//2
void rotateArrayToLeftByOne(int array[], int sizeOfArray);
void printArray(int array[], int sizeOfArray);

int main()
{
	const int sizeOfArray = 7;
	int arrayToBeRotated[sizeOfArray] = {1,2,3,4,5,6,7};
	int numberOfRotations = 3;
	rotateOneByOne(arrayToBeRotated, numberOfRotations, sizeOfArray);
	printArray(arrayToBeRotated, sizeOfArray);
	return 0;
}

//===========================>
//1. Rotate using temp array 
// time complexity O(n) 
// space complexity O(d)


void rotateUsingTempArray(int array[], int numberOfRotations, int sizeOfArray){
	//1. Take a temp array and populate it with the rotaion numbers
	int tempArray[numberOfRotations];
	for (int i = 0; i < numberOfRotations; ++i)
	{
		tempArray[i] = array[i];
	}
	//2. Shift all the numbers to the left by numberOfRotaions
	for (int i = 0; i < sizeOfArray - numberOfRotations; ++i){
		array[i] = array[i + numberOfRotations];
	}
	//3. Repopulate the array
	for (int i  = 0, j  = sizeOfArray - numberOfRotations; i < numberOfRotations; ++i, ++j){
		array[j] = tempArray[i];
	}

}
//=====================>
//2. Rotate one by one 
// Time Complexity => 0(n*d)
// Space Complexity => 0(1)

void rotateOneByOne(int array[], int numberOfRotations, int sizeOfArray){
	//rotate array by one the number of time rotaion is reuired 
	for (int i  = 0; i < numberOfRotations; ++i){
		rotateArrayToLeftByOne(array, sizeOfArray);
	}
}

void rotateArrayToLeftByOne(int array[], int sizeOfArray){
	//store the first one into a temprary variable
	int tempVariable = array[0];
	//shift the array
	for (int i = 0; i < sizeOfArray-1; ++i){
		array[i] = array[i+1];
	} 
	//place temp at last 
	array[sizeOfArray-1] = tempVariable;
}

void printArray(int array[], int sizeOfArray){
	std::cout<<"[ ";
	for (int i  = 0; i < sizeOfArray; ++i){
		std::cout<<array[i]<<" ";
	}
	std::cout<<"]"<<std::endl;
}