/**
*	aulon
*
*	Implement a method to perform basic string compression using the counts
*	of repeated char. If the compressed string is larger than the original,
*	print the original.
*/

#include <iostream>
#include <string>

using namespace std;

static int unicode[256];

int compression(string s){

	int i, count = 0;
	string s2 = "";

	for(i = 0; i < 256; i++){
		unicode[i] = 0;
	}

	for(i = 0; i < s.length(); i++){
		unicode[s[i]]++;
	}

	for(i = 0; i < s.length(); i++){
		s2 = s2 + ('0'+ i);
	}

	if(s.length() < s2.length()){
		cout<<s<<endl;
		return 0;
	}
	cout<<s2<<endl;
	return 0;
}

int main(){

	string s = "aabbbbbccccaaa";
	compression(s);

	return 0;
}