#include<iostream>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
int TongCheoChinh(int arr[][100], int m, int n);
int TongCheoPhu(int arr[][100], int m, int n);
using namespace std;

#define Max 100

int main(){
    int A[Max][Max];
    int m,n;
    NhapMang(A,m,n);
    XuatMang(A,m,n);
    cout<<"Tong Cheo Chinh la: "<<TongCheoChinh(A,m,n)<<endl;
    cout<<"Tong Cheo Phu la: "<<TongCheoPhu(A,m,n);
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

int TongCheoChinh(int arr[][Max], int m, int n){
    if (m != n){
        cout<<"Khong phai ma tran vuong lam sao ma tinh choi";
        exit(0);
    }
    int sum=0;
    for(int i=0; i<m; i++){
        sum += arr[i][i];
    }
    return sum;
}

int TongCheoPhu(int arr[][Max], int m, int n){
    if (m != n){
        cout<<"Khong phai ma tran vuong lam sao ma tinh choi";
        exit(0);
    }
    int sum=0;
    for(int i=0; i<m; i++){
        sum += arr[i][m - i - 1];
    }
    return sum;
}