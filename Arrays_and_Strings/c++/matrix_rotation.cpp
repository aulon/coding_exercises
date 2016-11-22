/**
*	aulon
*
*	Write a method to rotate a NxN matrix by 90 degrees.
*/

#include <iostream>
#include <string>

using namespace std;

int matrix_rotation(int n){
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

int main(){
	int n = 5;
	matrix_rotation(n);

	return 0;
}