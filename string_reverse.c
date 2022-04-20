#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
	int i,n;
	char ch;
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		ch=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=ch;
	}
	printf("after reverse:%s\n",s);
}
void reverse_ptr(char *s)
{
	int i,n;
	char ch;
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		ch=*(s+i);
		*(s+i)=*(s+n-i-1);
		*(s+n-i-1)=ch;
	}
	printf("after reverse:%s\n",s);
}
int main()
{
	char s[50];
	printf("enter astring:\n");
	fgets(s,50,stdin);
	printf("before reverse:%s\n",s);
	reverse(s);
	reverse_ptr(s);
}

