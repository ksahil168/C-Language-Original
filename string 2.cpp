//input string and count the number of vowels and consonents

#include<stdio.h>
#include<ctype.h>
#include<cstring>
int main()

{
	int count_vowel=0, count_consonent=0 ,i;
	char str[30];
	printf("enter a string with no space in between : ");
	scanf("%s", &str);
	for (i=0; i< strlen(str); i++)
	{
	
		str[i] = tolower(str[i]);
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
		
		count_vowel++;
	}
		else if(str[i] >= 'a' && str[i] <= 'z'){
		
		count_consonent++;
	}

    }
	printf("No of Vowels = %d\n" ,count_vowel );
	printf("No of Consonent = %d\n",count_consonent);

	return 0;
		
	}