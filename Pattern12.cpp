#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for (int r = 1; r <= n;r++){
        int a = r;
        for (int c = 1; c <= n;c++){
            cout << a << " ";
            a = a + n;
        }
        cout << endl;
    }
}