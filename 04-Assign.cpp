#include<iostream>
using namespace std;
void addMatrices(int m1[3][3], int m2[3][3],int m3[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
void display(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<< " " ;
        }
        cout<<endl;
    }
}
int main(){
    int matrix1[3][3], matrix2[3][3], result[3][3];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    addMatrices(matrix1,matrix2,result);
    cout << "Resultant matrix after addition:" << endl;
    display(result);

    return 0;
}
