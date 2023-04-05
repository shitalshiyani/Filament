#include<stdio.h>
#include<string.h>

main()
{
	char ch1[100];
	char ch2[100];

	
	printf("Enter String=");
	scanf("%s",&ch1);
	
	strcpy(ch2,ch1);
	strrev(ch2);
	
	if (strcmp(ch1,ch2)==0)
	 {
		printf("%s is pelindrome.\n",ch1);
	 }
	else
	 {
		printf("%s is not pelindrome.\n",ch1);
	 }
	
}
