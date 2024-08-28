#include<iostream>
using namespace std;
int n = 9;

int pattern_1(){
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            // cout << "*"; 
            // cout << (n-i+1); // increment numbers
            cout << i; // decrement numbers
        }
        cout << endl;
    }
}

int pattern_2(){
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            // cout << "*";
            //increment numbers
            //   cout << i; 
              cout << j;
        }
        cout << endl;
    }
}

int pattern_3(){
    for(int i= n; i > 0; i--){
        for(int k= n-i; k > 0; k--){
            cout << " ";
        }
        for(int j= i; j > 0; j--){
            // cout << "*";
            cout << (n-i+1); // increment numbers
            // cout << i; // decrement numbers
        }
        cout << endl;
    }
}

int pattern_4(){
    for(int i= 1; i <= n; i++){
        for(int k= n-i; k > 0; k--){
            cout << " ";
        }
        for(int j= 1; j <= i; j++){
            // cout << "*"; 
            cout << i; // increment numbers
        }
        cout << endl;
    }
}

int main(){
    pattern_1();
    cout << endl;
    pattern_2();
    cout << endl;
    pattern_3();
    cout << endl;
    pattern_4();
}
