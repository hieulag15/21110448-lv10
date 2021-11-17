#include <iostream>
using namespace std;

void Delete(string &S){
    for (int i = 0; i < S.length(); i++){
        if (S[i] == ' '){
            for (int j = i; j < S.length(); j++){
                S[j] = S[j+1];
            }
        S[S.length()-1] = '\0';
        }
    }
}

int main(){
    string S;
    cout<<"Nhap gi do di: ";
    getline(cin, S);
    Delete(S);
    cout<<S;
    return 0;
}

