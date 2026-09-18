#include<iostream>
#include<cassert>
using namespace std;

//sorting function
bool isSorted(const int* arr, const int size){
    for(int i = 0; i < size - 1; i ++){
        if(arr[i] > arr[i + 1]){
            return false;
        }}
    return true;
}
//test case1
void TestSortedArray(){
    int arr[] = {1, 3, 5, 6, 13, 64};
    assert(isSorted(arr, 6) == true);
}

//test case 2
void TestUnsortedArray(){
    int arr[] = {1, 3, 5, 6, 13, 12};
    assert(isSorted(arr, 6) == false);
}

main(){
    //calling the first test function
    TestSortedArray();

    //calling the second test function
    TestUnsortedArray();
}