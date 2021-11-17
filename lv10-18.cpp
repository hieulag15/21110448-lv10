#include<iostream>
void NhapMang(int arr[][100], int &m, int &n);
void XuatMang(int arr[][100], int m, int n);
bool KiemTra(int arr[][100], int dong, int cot, int vtdong, int vtcot);
int Dem(int arr[][100], int m, int n);
using namespace std;

#define MAX 100

int main() {
    int A[MAX][MAX];
    int dong,cot;
    NhapMang(A,dong,cot);
    cout<<"So gia tri yen ngua la: "<<Dem(A,dong,cot);
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

bool KiemTra(int arr[][100], int dong, int cot, int vtdong, int vtcot){
    int x = arr[vtdong][vtcot];
    //Kiem tra dong
    for(int i=0; i < cot; i++){
        if (arr[vtdong][i] > x)
            return false;
    }

    //Kiem tra cot
    for(int j = 0; j < dong; j++){
        if (arr[j][vtdong] < x)
            return false;
    }
    return true;
}

int Dem(int arr[][100], int m, int n){
    int count = 0;
    for (int i =0; i<m; i++){
        for (int j=0; j<n; j++){
            
            if (KiemTra(arr,m,n,i,j))
                count++;
        }
    }
    return count;
}