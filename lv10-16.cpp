#include<iostream>
#include<math.h>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
int Dem(int arr[][100], int m, int n);
using namespace std;

#define MAX 100

int main() {
    int A[MAX][MAX];
    int m,n;
    NhapMang(A,m,n);
    XuatMang(A,m,n);
    cout<<endl<<"So luong so chan la :"<<Dem(A,m,n)<<endl;
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

int Dem(int arr[][100], int m, int n){
    int count = 0;
    for (int i=0; i<m; i++){
        if (arr[i][0] % 2 == 0){
            count++;
        }
        if (arr[i][m - 1] % 2 == 0){
            count++;
        }
    }
    for (int j = 1; j < n - 1; j++){
        if (arr[0][j] % 2 == 0){
            count++;
        }
        if (arr[n - 1][j] % 2 == 0){
            count++;
        }
    }
    return count;
}