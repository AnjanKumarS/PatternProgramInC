#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int r = 1; r <= n;r++){
        for (int c = 1; c <= n*2-1; c++){
            if(r+c>=n+1 && c-r<=n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}