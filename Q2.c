// Author Peter Adamson

#include <stdio.h>
#include <string.h>

char * find_blank(char *start){
	int i;
	int length = strlen(start);
	for(i = 0; i < length; i++){
		if(*start == ' '){
			return start;
		}
		else{
			start++;
		}
	}
	start--;
	return start;
}

int main(){
	char *test1 = " test";
	char *test2 = "test  ";
	char *test3 = "test";
	char *test4 = "test test";
	char *test5 = "";
	char *start = find_blank(test1);
	printf("\"%s\"\n", start);
	start = find_blank(test2);
	printf("\"%s\"\n", start);
	start = find_blank(test3);
	printf("\"%s\"\n", start);
	start = find_blank(test4);
	printf("\"%s\"\n", start);
	start = find_blank(test5);
	printf("\"%s\"\n", start);
	return 1;
}
