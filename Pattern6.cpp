#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int r = 1; r <= n*2-1;r++){
        for (int c = 1; c <= n;c++){
            if(r>=c && r+c<=n*2){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}