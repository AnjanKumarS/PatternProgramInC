#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for (int r = 1; r <= n;r++){
        for (int c = 1; c <= n;c++){
            if(r>=c){
                cout << ((r+c)%2==0?"1":"0") <<" ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}