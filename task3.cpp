#include<iostream>
using namespace std;
	
void analyze_pointer(int *ptr){
   cout << "Address: "<< ptr << endl;
   cout << "Value: " << *ptr;
}
main(){
    int x = 5; 
    int*  p = &x;
    analyze_pointer(p); //function calling
}
