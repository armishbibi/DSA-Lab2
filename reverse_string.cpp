#include<iostream>
using namespace std;

//function to reverse string
void rev_String(string &st){
    int s = 0, e = st.size() - 1;
    while( s < e){ //using the 2-pointer approach
        char temp = st[s];
        st[s] = st[e];
        st[e] = temp;
        s++; e--;
    }
}
int main(){
    string S;
    cout << "Enter a string: ";
    getline(cin, S);

    rev_String(S);
    cout <<"In reverse : " << S;

    return 0;  // Memory is automatically cleaned up here
}