#include<iostream>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
int Sum(int arr[][100], int m, int n);
using namespace std;

int main(){
    int arr[100][100];
    int m,n;
    NhapMang(arr,m,n);
    XuatMang(arr,m,n);
    cout<<"Tong la: "<<Sum(arr,m,n)<<endl;
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

int Sum(int arr[][100], int m, int n){
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}