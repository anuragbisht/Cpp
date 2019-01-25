#include <iostream>

void reverseArrayUsingIteration(int array[], int sizeOfArray);
void printArray(int array[], int sizeOfArray);

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    reverseArrayUsingIteration(array, 10);
    printArray(array, 10);
    return 0;
}

void reverseArrayUsingIteration(int array[], int sizeOfArray){
   int left = 0;
   int right = sizeOfArray-1;
   while(left < right){
       int temp  = array[left];
       array[left] = array[right];
       array[right] = temp;
       left++;
       right--;
   }

}


void printArray(int array[], int sizeOfArray){
    for(int i = 0; i < sizeOfArray; ++i ){
        std::cout<<array[i];
    }
}