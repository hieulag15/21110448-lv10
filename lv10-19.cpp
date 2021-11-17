#include<iostream>
void NhapMang(int arr[][100], int &m, int &n, int &x);
void XuatMang(int arr[][100], int m, int n);
bool KiemTraGiamDan(int arr[][100], int m, int n, int x);
void XuatKq(int arr[][100], int m, int n, int x);
using namespace std;

#define MAX 100

int main() {
    int A[MAX][MAX];
    int dong,cot,x;
    NhapMang(A,dong,cot,x);
    XuatMang(A,dong,cot);
    XuatKq(A,dong,cot,x);
    return 0;
}

void NhapMang(int arr[][100], int &m, int &n, int &x){
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"arr["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }
    cin >> x;
}

void XuatMang(int arr[][100], int m, int n){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

bool KiemTraGiamDan(int arr[][100], int m, int n, int x){
    for (int i = 0; i < n - 1; i++){
        if (arr[x][i] < arr[x][i+1])
            return false;
    }
    return true;
}

void XuatKq(int arr[][100], int m, int n, int x){
    if (KiemTraGiamDan(arr,m,n,x))
        cout<<"Dung";
    else 
        cout<<"Sai";
}