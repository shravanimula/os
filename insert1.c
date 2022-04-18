#include <stdio.h>  
void insert(int a[], int n)  
{  
	int i, j, temp;  
	for(i=1;i<n;i++)
	{  
		temp=a[i];  				        
		j=i-1;		
		while(j>=0 && a[j]>temp)  
		{    
			a[j+1] = a[j];     
			j--;
		}    
		a[j+1] = temp;    
	}  
}  
void display(int a[], int n)   
{  
	int i;  
	for(i=0;i<n;i++) 
		printf("%d ", a[i]);  
}    
int main()  
{  
	int a[] = {15,20,10,30,50,18};  
	int n = sizeof(a) / sizeof(a[0]);  
	printf("Before sorting array elements are:\n");  
	display(a, n);  
	insert(a, n);  
	printf("\nAfter sorting array elements are:\n");    
	display(a, n);  
	return 0;  
}    
