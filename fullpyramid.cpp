#include<iostream>
using namespace std;
int n = 9;

int full_pyramid(){
    for(int i= 1; i <= n; i++){
        for(int k = n - i; k > 0; k--){
            cout << " ";
        }
        for(int j=1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int inverted_pyramid(){
    for(int i= n; i > 0; i--){
        for(int k= n - i; k > 0; k--){
            cout << " ";
        }
        for(int j= i; j > 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    full_pyramid();
    cout << endl;
    inverted_pyramid();
}
