#include<stdio.h>
int binarysearch(int x[],int low,int high,int ele);
void main()
{     int size,ele,check;
      printf("enter element to find\n");
      scanf("%d",&ele);
      printf("enter size of array\n");
      scanf("%d",&size);
       int a[size],i;
       printf("inputdata\n");
       for(i=0;i<size;i++)
       { scanf("%d",&a[i]);  }
       check=binarysearch(a,0,size-1,ele);
      if(check==-1)
      printf("element not found\n");
      else
      printf("element%d found at %d\n",ele,check);}
      //recursive fn
      int binarysearch( int x[],int low ,int high, int ele)
      {  int mt;
       if(low>high)
        return -1;
        mt=(low+high)/2;
        if(x[mt]==ele)
        {  return (mt);  }
        if(x[mt]>ele)
         return (binarysearch(x,low,mt-1,ele));
         else
         {
            return (binarysearch(x,mt+1,high,ele));
         }
         
      }


        








    