/**
*	aulon
*
*	Given two strings, write a method to decide
*	if one is a permutation of the other.
*/


#include <iostream>
#include <string>

using namespace std;

//Auxillary array with size of number of characters 
static int ascii[256];

int check_perm(string s1, string s2){

	if (s1.length() != s2.length()){
		cout<<"\""<<s2<<"\""<<" is not a permutation of "<<"\""<<s1<<"\""<<endl;
		return 0;
	}

	int i;

	for (i = 0; i < 256; i++){
		ascii[i] = 0;
	}

	string::iterator it;

	for (it = s1.begin(); it < s1.end(); it++){
		ascii[*it]++;
	}

	for (it = s2.begin(); it < s2.end(); it++){
		ascii[*it]--;
	}

	for (i = 0; i < 256; i++){
		if(ascii[i] != 0){
			cout<<"\""<<s2<<"\""<<" is not a permutation of "<<"\""<<s1<<"\""<<endl;
			return 0;
		}
	}

	cout<<"\""<<s2<<"\""<<" is a permutation of "<<"\""<<s1<<"\""<<endl;

	return 0;

}

int main(){
	
	string s = "elll";
	string s2 = "elle";
	string s3 = " .";
	string s4 = ". ";
	string s5 = "";
	string s6 = "b4l";

	check_perm(s, s2);
	check_perm(s3, s4);
	check_perm(s, s3);
	check_perm(s2, s4);
	check_perm(s3, s6);
	check_perm(s5, s6);
	check_perm(s6, s5);
	
	return 0;
}