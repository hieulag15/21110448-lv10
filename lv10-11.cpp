#include<iostream>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
void Sum(int arr[][100], int row1, int col1,
        int brr[][100], int row2, int col2,
        int crr[][100], int &row3, int &col3);
using namespace std;

#define M 100


int main(){
    int A[M][M], B[M][M], C[M][M];
    int row1,col1,row2,col2,row3,col3;
    NhapMang(A,row1,col1); 
    NhapMang(B,row2,col2); 
    XuatMang(A,row1,col1);
    cout<<endl;
    XuatMang(B,row2,col2); 
    cout<<"Tong 2 ma tran la: "<<endl;
    Sum(A,row1,col1,B,row2,col2,C,row3,col3);
    XuatMang(C,row3,col3); 

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

void Sum(int arr[][100], int row1, int col1, int brr[][100], int row2, int col2, int crr[][100], int &row3, int &col3){
    if (row1 != row2 || col1 != col2 ){
        cout<<"Khong cung kich thuoc sao cong duoc choi";
        exit(0);
    }
    row3 = row1;
    col3 = col1;
    for (int i = 0; i < row3; i++){
        for (int j =0; j < col3; j++){
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }

}