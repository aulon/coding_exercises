/**
*	aulon
*
*	There are three types of edits that can be performed on strings:
*	insert a char, remove a char, or replace a char. Given two strings,
*	write a function to check if they are one (or zero) edits away.
*/

#include <iostream>
#include <string>

using namespace std;

static int unicode[256];

bool one_away(string s1, string s2){

	int i, count = 0;
	int diff = s1.length() - s2.length();

	for(i = 0; i < 256; i++){
		unicode[i] = 0;
	}

	for (int i = 0; i < s1.length(); i++)
	{
		unicode[s1[i]]++;
	}

	for (int i = 0; i < s2.length(); i++)
	{
		if(unicode[s2[i]] > 0){
			count ++;
		}
	}

	if(diff == 0 || diff == 1 || diff == -1){
		if((count == (s1.length() - 1)) || (count == s1.length())){
			cout<<"True"<<endl;
			return true;
		}
	}

	cout<<"False"<<endl;
	return false;
}

int main(){

	string s1 = "H";
	string s2 = "Haaa";

	one_away(s1, s2);

	return 0;
}
