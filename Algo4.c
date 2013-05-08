#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef char * string ;
 
int stringcompare (string s1, string s2); 
 
int main (int argc, char * argv[])
	{
	printf("%d\n", stringcompare ("aa", "a"));
	
	return 0 ;
	}
 
int stringcompare (string s1, string s2)
	{
	if ((* s1) == '\0' && (* s2) != '\0') return -1;
	if ((* s1) == '\0' && (* s2) == '\0') return 0;
	if ((* s1) != '\0' && (* s2) == '\0') return 1;
	int c = (int) *(s1) - (int) *(s2) ;
	if (c) return c ;
	else return stringcompare (s1 + 1 , s2 + 1);
	}
