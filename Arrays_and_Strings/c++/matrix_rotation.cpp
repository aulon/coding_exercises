/**
*	aulon
*
*	Write a method to rotate a NxN matrix by 90 degrees.
*/

#include <iostream>
#include <string>

using namespace std;

void matrix_rotation(int n){
	int i,j;
	int matrix[n][n];
	int count = 1;

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			matrix[i][j] = count;
			count++;
		}
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<"Rotated matrix"<<endl;

	for(i = 0; i < n; i++){
		for(j = n-1; j >= 0; j--){
			cout<<matrix[j][i]<<"\t";
		}
		cout<<endl;
	}

}

void real_rotation (int n){
	int i, j, k = n-1;
	int temp;
	int matrix[n][n];
	int count = 1;

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			matrix[i][j] = count;
			count++;
		}
	}

	for(j = 0; j < n/2; j++){
		int m = k;
		for(i = j; i < k; i++){
			temp = matrix[j][i];
			matrix[j][i] = matrix[m][j];
			matrix[m][j] = matrix[k][m];
			matrix[k][m] = matrix[i][k];
			matrix[i][k] = temp;
			m--;
		}
		k--;
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}

}


int main(){
	int n = 5;
	int m = 6;
	matrix_rotation(n);
	cout<<"Real rotation"<<endl;
	real_rotation(n);
	cout<<"--------------------------------"<<endl;
	/*matrix_rotation(m);
	cout<<"Real rotation"<<endl;
	real_rotation(m);
*/
	return 0;
}
