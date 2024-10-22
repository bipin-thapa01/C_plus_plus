#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr = fopen("try.txt","r");
	if(ptr == NULL)
	{
		printf("lol");
	}
	char sen2[100];
	fgets(sen2,100,ptr);
	printf("\n\n%s",sen2);
	return 0;
}
