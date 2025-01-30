#include<iostream>
using namespace std;

int main(){
    string s = "Hello";
    int n = s.length();
    for (int r = 1; r <= n;r++){
        for (int c = 1; c <= n;c++){
            if(r>=c){
                cout << s[c-1] <<" ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}