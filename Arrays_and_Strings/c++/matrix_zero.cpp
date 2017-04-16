/**
*	aulon
*
*	If an element of an MxN matrix is zero, its entire row and column are set to
*	zero.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <map>

using namespace std;

void matrix_zero(int m, int n){
	int i,j, k;
	srand(time(NULL));
	int matrix[m][n];
	map<int, int> mat;

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			matrix[i][j] =  rand()%10;
			if(matrix[i][j] == 0){
				mat.insert(pair<int,int>(i,j));
			}
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

	map<int, int>::iterator it = mat.begin();
	for (it = mat.begin(); it != mat.end(); ++it){
		cout<< it->first << " => " << it->second << endl;
	}

	for (it = mat.begin(); it != mat.end(); ++it){
		for(i = 0; i < n; i++){
			matrix[it->first][i] = 0;
		}
		for(i = 0; i < m; i++){
			matrix[i][it->second] = 0;
		}
	}



	cout<<"Zeroed matrix"<<endl;

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

}


int main(){
	srand(time(NULL));
	int m = 2 + rand()%8;
	int n = 2 + rand()%8;
	cout<<"m: "<< m << "\tn: " << n << endl;
	matrix_zero(m, n);

	return 0;
}
