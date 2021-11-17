#include <iostream>
#include<string>
using namespace std;

int Dem(string S){
    int count = 0, vt;
    for (int j = 0; j < S.length(); j++) {
        if ((S[j] >= 'a' && S[j] <= 'z') || (S[j] >= 'A' && S[j] <= 'Z')){
            vt = j;
            count = 1;
            break;
        }
    }
    for (int i = vt; i < S.length(); i++){
        if (S[i] == ' ' && S[i+1] != ' '){
            count++;
        }
    }
    return count;
}

int main(){
    string S;
    cout<<"Nhap gi do di chu: ";
    getline(cin, S);
    cout<<"So tu la: "<<Dem(S);
}