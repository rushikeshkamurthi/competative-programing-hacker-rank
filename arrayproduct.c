#include<stdio.h>
#include<conio.h>
#define s 100
void main()
{
int a[s],n;
int i,j,temp=1,pos=0;
int res[s];
clrscr();
printf("Enter the number of elements you want add");
scanf("%d",&n);
printf("Enter the %d array elements \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEntered array is: \n");
for(i=0;i<n;i++)
{
printf("\n %d",a[i]);
}
loop:
for(i=0;i<n;i++)
{
if(pos==i)
continue;
temp= temp*a[i];
}
res[pos]=temp;
temp=1;
pos++;
if(pos!=n)
goto loop;

printf("\n Resultant array");
for(i=0;i<n;i++)
{
printf("\n %d",res[i]);
}
getch();
}
