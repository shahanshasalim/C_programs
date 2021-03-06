/*-----------------------------------
Name:Shahansha Salim
Roll number:CS1803
Date:20-July-2018
Program description:to count number of vowels and letters
Acknowledgements:
------------------------------------*/

#include <stdio.h>

int countVowels(char *str)
{
	int i,count=0;
	for(i=0;str[i]!='\0';++i)
		if('a' == str[i] ||
		   'e' == str[i] ||
		   'i' == str[i] ||
		   'o' == str[i] ||
		   'u' == str[i] ||
		   'A' == str[i] ||
		   'E' == str[i] ||
		   'I' == str[i] ||
		   'O' == str[i] ||
		   'U' == str[i] )
			count++;
	return count;
}

int countWords(char *str)
{
	int i,count = 0;
	for(i=0;str[i]!='\0';++i)
		if(str[i] == ' ')
		{
			count++;
		}
	count++;
	return count;	
}

int main()
{
	char str[100];
	fgets(str,100,stdin);
	printf("\n#Vowels = %d\n",countVowels(str));
	printf("\n#words = %d\n",countWords(str));
	return 0;
}
 
