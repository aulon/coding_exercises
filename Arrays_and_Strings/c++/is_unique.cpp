/**
*	aulon
*
*	Implement an algorithm to determine if a string has all
*	unique characters.
*/


#include <iostream>
#include <string>

using namespace std;
static int ascii[256];

int is_unique(string str){

	int i;

	for (i = 0; i < 256; i++){
		ascii[i] = 0;
	}

	string::iterator it;

	for (it = str.begin(); it < str.end() ; it++){
		if (ascii[*it] == 1){
			cout<<"String not unique!"<<endl;
			return 0;
		}
		ascii[*it] = 1;
	}
	cout<<"Unique string!"<<endl;
	return 0;

}

int main(){
	
	string s = "Hello";
	string s2 = "Hi!";
	string s3 = "  ";
	string s4 = " ,.";
	string s5 = "";

	is_unique(s);
	is_unique(s2);
	is_unique(s3);
	is_unique(s4);
	is_unique(s5);
	
	return 0;
}