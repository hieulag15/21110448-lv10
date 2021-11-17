#include<iostream>
#include<math.h>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;
int Change(string &S){
    int n = 0;
    int number;
    int ics_mu = S.length()-1;
    for (int i = 0; i < S.length(); i++){
        if (S[i] >= '0' && S[i] <= '9'){
            char c_kitu = S[i];
            number = atoi(&c_kitu);
            n += number*pow(16,ics_mu);
        }
        else {
            if (S[i] >= 'A' && S[i] <= 'F'){
            switch(S[i])
            {
            case 'A':
                n +=10*pow(16,ics_mu);
                break;
            case 'B':
                n += 11*pow(16,ics_mu);
                break;
            case 'C':
                n += 12*pow(16,ics_mu);
                break;
            case 'D':
                n += 13*pow(16,ics_mu);
                break;
            case 'E':
                n += 14*pow(16,ics_mu);
                break;
            case 'F':
                n += 15*pow(16,ics_mu);
                break;
            }

        }
    }
    ics_mu--;
}
return n;
}

int main(){
    string S;
    cout<<"Nhap he so 16: ";
    getline(cin, S);
    cout<<Change(S);
}
