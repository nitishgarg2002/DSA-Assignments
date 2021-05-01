#include<bits/stdc++.h>
using namespace std;
void multiply(int mat1[10][10],
              int mat2[10][10],
              int res[10][10])
{
    int i, j, k;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            res[i][j] = 0;
            for (k = 0; k < 10; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

int main() {
	  int i, j;
    int res[10][10]; 
    int mat1[10][10];
    int mat2[10][10];
 	for(int i=0;i<10;i++){
 		for(int j=0;j<10;j++){
 			cin>>mat1[10][10];
		 }
	 }
	 for(int i=0;i<10;i++){
 		for(int j=0;j<10;j++){
 			cin>>mat2[10][10];
		 }
	 }
    multiply(mat1, mat2, res);
 
    cout << "Result matrix is \n";
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
 
    return 0;
}
