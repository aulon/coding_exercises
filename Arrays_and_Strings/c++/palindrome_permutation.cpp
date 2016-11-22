/**
*	aulon
*
*	Given a string, write a function to check if it is a permutation
*	of a palindrome. 
*	Assumptions: Input comprised of only letters and spaces. Upercase
*	and lowercase letters are considered equal.
*/

#include <iostream>
#include <string>

using namespace std;

static int unicode[256];

int pali_perm(string str){
	
	int i, count = 0;

	for(i = 0; i < 256; i++){
		unicode[i] = 0;
	}

	for(i = 0; i < str.length(); i++){
		unicode[str[i]] ++;		
	}

	for (i = 0; i < str.length(); i++){

		switch (str.length() % 2){
			
			case 0:
				if((unicode[str[i]] % 2) == 1){
					cout<<"String is not a palindrome."<<endl;
					return 0;
				}
				break;
			
			case 1:
				if( (unicode[str[i]] % 2) == 1){
					count ++;
				}
				if( ((unicode[str[i]] % 2) == 0) && (count > 1)){
					cout<<"String is not a palindrome."<<endl;
					return 0;
				}
				break;
			
			default:
				break;
		}
	}

	cout<<"String is a palindrome."<<endl;

	return 0;
}

int main(){

	string str = "ell";
	pali_perm(str);

	return 0;
}