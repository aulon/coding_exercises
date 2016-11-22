/**
*	aulon
*
*	Implement an algorithm to determine if a string has all
*	unique characters.
*/


#include <stdio.h>
#include <string.h>

static int ascii[256];

int is_unique(char *str){

	int i;

	for (i = 0; i < 256; i++){
		ascii[i] = 0;
	}

	for (i = 0; i < strlen(str) ; i++){
		if (ascii[str[i]] == 1){
			printf("String not unique!\n");
			return 0;
		}
		ascii[str[i]] = 1;
	}
	printf("Unique string!\n");
	return 0;

}

int main(){
	
	char s[5] = {'h', 'e', 'l', 'l', 'o'};
	char s2[3] = {'h', 'i', '!'};
	char s3[2] = {' ', ' '};
	char s4[3] = {',', ' ', '.'};
	
	is_unique(s);
	is_unique(s2);
	is_unique(s3);
	is_unique(s4);
	
	return 0;
}