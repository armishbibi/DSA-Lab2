#include<iostream>
using namespace std;
main(){
    const int size = 10;
    int *salArray = new int[size]; //dynamic memory allocation

    //inputting the salaries
    for(int i = 0; i < size; i++){
        cout << "Enter salary for employees " << i+1 << ": ";
        cin >> salArray[i];
    }

    //apply increment formula
    for(int i = 0; i < size; i++){
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }

    //displaying updated salaries
    cout << "\nUpdated Salaries: " ;
    for ( int i = 0; i < size; i ++){
        cout << salArray[i] << " " << endl;
    }
    cout << endl;

    delete []salArray;


}