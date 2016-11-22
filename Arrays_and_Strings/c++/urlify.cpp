/**
*	aulon
*
*	Write a method to replace all spaces in a string with '%20'.
*	You may assume that the string has sufficient space at the end
*	to hold the additional charactes, and that you are given the 
*	"true" length of the string. 
*/

#include <iostream>
#include <string>

using namespace std;

void urlify(string str){

	int nr_spaces, true_length = 0, new_length, i, j;

	//Given true_length and counting nr of spaces in the string
	for (i = 0; i < str.length(); i++){
		if (str[i] == ' ')
			nr_spaces++;
		if (str[i] != '#')
			true_length++;
	}

	new_length = true_length + nr_spaces*2;

	for (i = str.length()-1; i >=0; i--){
		if(str[i] == ' '){
			for (j = true_length-1; j > i; j--){
				str[j+2] = str[j];
			}
			true_length +=2;
			str[i] = '%';
			str[i+1] = '2';
			str[i+2] = '0';
		}
	}
	cout << str << endl;
}

int main(){

	string test = "   ha ha ha ##############################";

	urlify(test);

	return 0;
}