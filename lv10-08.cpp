#include<iostream>
using namespace std;

bool KiemTra(string S1, string S2){
    if (S2.find(S1) == string::npos) return false;
    return true;
}


int main(){
    string S1,S2;
    cout<<"Nhap S1: ";
    getline(cin, S1);
    cout<<"Nhap S2: ";
    getline(cin, S2);
    if (KiemTra(S1,S2)){
        cout<<"S1 la con cua S2";
    } else {
        cout<<"S1 khong la con cua S2";
    }
}


