#include<stdio.h>
void main()
{
int A,B,C
printf(“enter the number”);
scanf(“%d %d %d,&A,&B,&C);
if(A>=B&&A>=C)
printf(“%d is the largest number”);
if(B>=A&&B>=C)
printf(“%d is a the largest number”);
if(C>=A&&C>=B)
printf(“%d is the largest number”);
return 0;
}
