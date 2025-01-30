#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for (int r = 1; r <= n;r++){
        int num = 1;
        for (int c = 1; c <= n*2-1;c++){
            if(r+c>=n+1 && c-r<=n-1){
                cout << num<<" ";
                if(c<n){
                    num++;
                }
                else{
                    num--;
                }
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}