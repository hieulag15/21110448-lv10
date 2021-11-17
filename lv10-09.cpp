#include<iostream>
using namespace std;

string InHoa(string S){
    int vt;
    for (int j = 0; j < S.length(); j++) {
        if (S[j] >= 'a' && S[j] <= 'z'){
            vt = j;
            S[j] -= 32;
            break;
        }
    }
    for (int i = vt + 1; i < S.length(); i++){
        if (S[i] == ' '){
            if (S[i+1] >= 'a' && S[i+1] <= 'z'){
                S[i+1] -= 32;
            }
        }
    }
    return S;
}

int main(){
    string S;
    cout<<"Nhap gi do di: ";
    getline(cin, S);
    
    cout<<InHoa(S);

}