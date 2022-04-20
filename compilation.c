#include<stdio.h>
#define PI 3.14
#define a 10
int main()
{
	float r,ar;
	scanf("%f",&r);
	ar=PI*r*r;//macro name replace with macro value
	printf("area=%.2f\n",ar);//here print area
#ifdef a
	printf("hello\n");//if a define print hello
#else
	printf("nothing\n");// if a is not define print nothing::::
#endif
	return 0;	
}
