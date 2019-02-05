#include <iostream>


int main(){
    return 0 ;

}

void getInput(){
    int numberOfTestCases;
    int numberOfElementsInArray;
    int array[numberOfElementsInArray];
    int element;
    std::cout<<"enter the number of test cases";
    std::cin>>numberOfTestCases;
    for(int i = 0; i < numberOfTestCases; i++)
    {
        std::cout<<"enter the numer of elements in the array";
        std::cin>>numberOfElementsInArray;
        std::cout<<"enter the elements of the array";
        std::stringstream ss(numberOfElementsInArray);
        int count  = 0;
        while(ss>>element){
            array[count] = element;
            std::cout<<"element stored is :"<<element;
            count++;
        }
    }
    
}