#include <bits/stdc++.h>
using namespace std;
void testCase();
void deleteArray(int **a, int rows);
void testCase2();//bai cua TQB
int main () {
    int t;
    cin >> t;
    while (t--) {
        testCase();
        cout << endl;
        
    }
}
void testCase() {
    int rows, columns;
    cin >> rows >> columns;
    int **a;
    int **b;
    a = new int *[rows];
    b = new int *[rows];
    for (int i = 0; i < rows; i++) {
        a[i] = new int[columns];
        b[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns;j++) {
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (a[i][j] == 1) {
                for (int k = 0; k < rows; k++) {
                    b[k][j] = 1;
                }
                for (int m = 0; m < columns; m++) {
                    b[i][m] = 1;
                }
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j =0; j < columns; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    deleteArray(a, rows);
    deleteArray(b, rows);
}
void deleteArray(int **a, int rows) {
    for (int i = 0; i < rows; i++) {
        delete [] a[i];
    }
    delete []a;
}
void testCase2() {
    int hang,cot;
    cin>>hang>>cot;
    int a[hang][cot];
    map<int,int> mpi;
    map<int,int> mpj;
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                mpi[i]=1;
                mpj[j]=1;
            }
        }
    }
    
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            if(mpi[i]==0 && mpj[j]==0){
                cout<<"0"<<" ";
            }else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}