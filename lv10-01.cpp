#include<iostream>
#include<math.h>
#include<string>
#include<cstdlib>
#include<cstring>
int Change(string &S);
using namespace std;

int main(){
    string S;
    int n;
    cout<<"Nhap he so 16: ";
    getline(cin, S);
    cout<<"sau khi doi: "<<Change(S);
}

int Change(string &S){
    int n = 0;
    int number;
    for (int i = 0; i < S.length(); i++){
        if (S[i] >= '0' && S[i] <= '9'){
            char c = S[i];
            number = atoi(&c);
            n += number*pow(16,S.length() -i -1);
        }
        else {
            if (S[i] >= 'A' && S[i] <= 'F'){
                switch(S[i])
                {
                    case 'A':
                        n += 10*pow(16,S.length() -i -1);
                        break;
                    case 'B':
                        n += 11*pow(16,S.length() -i -1);
                        break;
                    case 'C':
                        n += 12*pow(16,S.length() -i -1);
                        break;
                    case 'D':
                        n += 13*pow(16,S.length() -i -1);
                        break;
                    case 'E':
                        n += 14*pow(16,S.length() -i -1);
                        break;
                    case 'F':
                        n += 15*pow(16,S.length() -i -1);
                        break;
                }

            }
        }
    }
    return n;
}