#include<iostream>
using namespace std;

void analyze_pointer(int *ptr){
    cout << "Address: "<< ptr << endl;
    cout << "Value: " << *ptr;
}
main(){
    int* p = new int(5); //dynamically creating an int 5
    analyze_pointer(p); //function calling

    delete p; //clearing the int from heap
}