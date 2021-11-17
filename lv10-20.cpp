#include<iostream>
#define MAX 100
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
void MangA(int arr[][100], int m, int n, int brr[MAX], int &x);
void HoanVi(int &a, int &b);
void SapXep(int arr[100], int x);
void Xuat(int b[100], int m, int n);
using namespace std;


int main() {
    int A[MAX][MAX], B[MAX];
    int m,n,x;
    NhapMang(A,m,n);
    XuatMang(A,m,n);
    MangA(A,m,n,B,x);
    SapXep(B,x);
    cout<<"Sau khi sap xep: "<<endl;
    Xuat(B,m,n);
    return 0;
}

void NhapMang(int arr[][MAX], int &m, int &n){
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"arr["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }
}

void XuatMang(int arr[][MAX], int m, int n){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void MangA(int arr[][MAX], int m, int n, int brr[MAX], int &x){
    x = 0;
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            brr[x++] = arr[i][j];
        }
    }
    
}

void HoanVi(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void SapXep(int arr[MAX], int x){
    for (int i = 0; i < x ; i++){
        for (int j = i; j < x; j++){
            if (arr[i] > arr[j])
                HoanVi(arr[i],arr[j]);
        }
    }
}

void Xuat(int b[MAX], int m, int n){
    for(int i = 0; i < n*m; i++){
        cout << b[i] << "\t";
        if(i%n==n-1) cout << endl;
    }
}