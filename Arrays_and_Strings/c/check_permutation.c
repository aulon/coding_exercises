/**
*	aulon
*
*	Given two strings, write a method to decide
*	if one is a permutation of the other.
*/


#include <stdio.h>
#include <string.h>

//Auxillary array with size of number of characters 
static int ascii[256];

int check_perm(char *str, char *str2){

	if (strlen(str) != strlen(str2)){
		printf("%s is not a permutation of %s\n", str, str2);
		return 0;
	}

	int i;

	for (i = 0; i < 256; i++){
		ascii[i] = 0;
	}

	for (i = 0; i < strlen(str) ; i++){
		ascii[str[i]] ++;
	}

	for (i = 0; i < strlen(str2) ; i++){
		ascii[str2[i]] --;
	}

	for (i = 0; i < 256; i++){
		if (ascii[i] != 0){
			printf("%s is not a permutation of %s\n", str, str2);
			return 0;
		}
	}

	printf("%s is a permutation of %s\n", str, str2);
	return 0;

}

int main(){
	
	char s[5] = {'h', 'e', 'l', 'l', 'o'};
	char s2[3] = {'h', 'i', '!'};
	char s3[2] = {' ', ' '};
	char s4[4] = {'l', 'l', 'h', 'e',};
	char s5[4] = {'h', 'e', 'l', 'l'};

	int l = strlen(s);
	int l4 = strlen(s4);
	int l5 = strlen(s5);

	printf("%d\n", l);
	printf("%d\n", l4);
	printf("%d\n", l5);
	
	//check_perm(s, s2);
	check_perm(s4, s);
	check_perm(s, s5);
	
	return 0;
}