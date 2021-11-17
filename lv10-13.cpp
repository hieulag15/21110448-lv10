#include<iostream>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
void HoanVi(int &a, int &b);
void SapXep(int arr[][100], int m, int n);
using namespace std;

#define Max 100
    
int main() {
    int A[Max][Max];
    int m,n;
    NhapMang(A,m,n);
    XuatMang(A,m,n);
    cout<<endl;
    SapXep(A,m,n);
    XuatMang(A,m,n);
    return 0;
}

void NhapMang(int arr[][Max], int &m, int &n){
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"arr["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }
}

void XuatMang(int arr[][Max], int m, int n){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void HoanVi(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void SapXep(int arr[][Max], int m, int n){
    for (int i=0; i < m - 1; i++){
        for (int j=i + 1; j < m; j++){
            if (arr[i][i] > arr[j][j]){
            HoanVi(arr[i][i], arr[j][j]);
            }
        }
    }
}