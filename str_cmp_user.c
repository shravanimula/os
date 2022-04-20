#include <stdio.h>  
#include<string.h>
int compare(char[],char[]);  
int compare_ptr(char*,char*);
int main()  
{  
	char str1[20],str2[20];
	printf("Enter the first string : ");  
//	scanf("%s",str1);
	fgets(str1,20,stdin);
	printf("Enter the second string : ");  
	//scanf("%s",str2);
	fgets(str2,20,stdin);  
	int c=compare(str1,str2);   
	if(c==0)  
		printf("strings are same\n");  
	else  
		printf("strings are not same\n"); 
       int comp_ptr=compare_ptr(str1,str2);
       if(comp_ptr==0)
       		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
	return 0;  
}  
int compare(char a[],char b[])  
{  
	int flag=0,i=0;    
	while(a[i]!='\0' &&b[i]!='\0')    
	{  
		if(a[i]!=b[i])  
		{  
			flag=1;  
			break;  
		}  
		i++;  
	}  
	if(flag==0)  
		return 0;  
	else  
		return 1;  
}  
int compare_ptr(char *a,char *b)  
{  
	int flag=0; 
	while(*a!='\0' && *b!='\0')    
	{  
		if(*a!=*b)  
		{  
			flag=1;  
		}  
		a++;  
		b++; 
	} 
	if(flag==0)  
		return 0;  
	else  
		return 1;
}
