#include<stdio.h>
void main()
{  int i,a[7],ele,c,flag=0;
printf("enter the element you are looking\n");
scanf("%d",&ele);
printf("enter 7 values");
for(i=0;i<7;i++)
{   scanf("%d",&a[i]); }
for(i=0;i<7;i++)
{   if(a[i]==ele)
    {c=i;
    flag++;
     break;}
}
if(flag!=0)
printf("%dis found at%d\n",ele,c);
else
   printf("not found") ;
 }