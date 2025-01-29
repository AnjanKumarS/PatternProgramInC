#include<iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = 'a';
    for (int r = 1; r <= n;r++){
        for (int c = 1; c <= n;c++){
            if(r>=c){
                cout << ch++ << " ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}