
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,temp,a,arm=0;
scanf("%d",&n);
temp=n;
for(i=0;temp!=0;i++)
{
    a=temp%10;
    arm=arm+(a*a*a);
    temp=temp/10;
}
if(n==arm)
    printf("armstrong number");
else
    printf("not an armstrong number");
    getch();
}
