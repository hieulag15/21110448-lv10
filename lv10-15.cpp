#include<iostream>
#include<math.h>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
bool KiemTra(int n);
void SoNguyenToDauTien(int arr[][100], int m, int n, int &a, int &b);
void XuatKq(int a, int b);
using namespace std;

#define MAX 100

int main() {
    int A[MAX][MAX];
    int m,n,i,j;
    NhapMang(A,m,n);
    XuatMang(A,m,n);
    SoNguyenToDauTien(A,m,n,i,j);
    XuatKq(i,j);
    return 0;
}

void NhapMang(int arr[][100], int &m, int &n){
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"arr["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }
}

void XuatMang(int arr[][100], int m, int n){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

bool KiemTra(int n){
    int count = 0;
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        return true;
    return false;
}

void SoNguyenToDauTien(int arr[][100], int m, int n, int &a, int &b){
    a = -1;
    b = -1;
    for(int i=0; i<m; i++){
        if (a != -1 && b != -1)
            return;
        for(int j=0; j<n; j++){
            if (KiemTra(arr[i][j])){
                a = i;
                b = j;
                return;
            }
        }
    }
}

void XuatKq(int a, int b){
    cout<<"Vi tri SNT dau tien la:["<<a<<"]["<<b<<"]";
}