#include<iostream>
#include<math.h>

using namespace std;

void change(string S, int &n) {
    n = 0;
    for (int i = 0; i < S.length(); i++){
        if (S[i] >= '0' && S[i] <= '9'){
            char c = S[i];
            int number = int(c) - 48;
            n = n + number*pow(16,S.length() - (i + 1));
        }
        
        if (S[i] >= 'A' && S[i] <= 'F') {
            switch(S[i])
            {
            case 'A':
                n = n + 10*pow(16,S.length() - (i + 1));
                break;
            case 'B':
                n = n + 11*pow(16,S.length() - (i + 1));
                break;
            case 'C':
                n = n + 12*pow(16,S.length() - (i + 1));
                break;
            case 'D':
                n = n + 13*pow(16,S.length() - (i + 1));
                break;
            case 'E':
                n = n + 14*pow(16,S.length() - (i + 1));
                break;
            case 'F':
                n = n + 15*pow(16,S.length() - (i + 1));
                break;
            }

        }
    }
}


int main(){
    string S;
    int n;
    cout<<"Nhap he so 16: ";
    getline(cin, S);
    change(S,n);
    cout<< n << endl;
}

