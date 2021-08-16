#include<stdio.h>
#include<string.h>
int main()

{
 	char s1[10];  //source string
 	char s2[10];   //destination string
 	char *p1,*p2;
 	int c=0;
 	printf("enter a string= ");
    scanf("%s",&s1);
	p1=s1;
	p2=s2;
	while(*p1!='\0')  //null is not copied here
	{
    	*p2=*p1; 
		p1++;
		p2++;
	}
	*p2='\0';  //assigning null to 2nd string
	c=strlen(s2);
	printf("copied string=%s\n",s2);
	printf("length of the copied string =%d ",c);
	return 0;
}
