#include<iostream>
using namespace std;

int Sum(string S){
    int sum = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] >= '0' && S[i] <= '9'){
            char c = S[i];
            sum += (int(c) - 48);
        }
    }
    return sum;
}

int main(){
    string S;
    cout<<"Nhap gi do di chu: ";
    getline(cin, S);
    cout<<"Tong la: "<<Sum(S);
}