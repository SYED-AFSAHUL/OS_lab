#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
 {
   int i,q=0,d[150],h,s=0,j,a[150],c[150],n,l;
   printf("enter no of tasks:-");
   scanf("%d", &n);//cin>>n;
   for(i=0;i<n;i++)
     {
       printf("for task %d",i+1);
       printf("\nBurst time= ");
       scanf("%d",(a+i));//cin>>a[i];
       c[i]=i+1;
       d[i]=0;
       s=s+a[i];
     }
    for(i=n-1;i>0;i--)
   {
     for(j=0;j<i;j++)
       {
	  if(a[j]>a[j+1])
	    {
	     int te;

	     te=a[j];
	     a[j]=a[j+1];
	     a[j+1]=te;

	     te=c[j];
	     c[j]=c[j+1];
	     c[j+1]=te;
	    }
       }
   }
int t;
 for(t=0;t<=s;t++)
   {
       if(d[q]==a[q])
	   {
	   q++;
	   }
     printf("\nAt t= %d",t);

     for(i=0;i<n;i++)
      {
	printf("\ntask %d : processed time %d out of %d",c[i],d[i],a[i]);
      }
      printf("\nTo add task press 1 else press 0\t");
      int k;
      scanf("%d", &k);//cin>>k;
     if(k==1)
       {
	 printf("\nenter no of tasks :- ");
	 scanf("%d", &l);//cin>>l;

	 for(i=n;i<n+l;i++)
	   {
	     printf("for task %d ",i+1);
	     printf("\nBurst time= ");
	     scanf("%d",(a+i));//cin>>a[i];
	     c[i]=i+1;
	     d[i]=0;
	     s=s+a[i];
	    }

	 for(i=l+n-1;i>0;i--)
	  {
	    for(j=q;j<i;j++)
	      {
	       if(a[j]>a[j+1])
		{
		  int te;

		  te=a[j];
		  a[j]=a[j+1];
		  a[j+1]=te;

		  te=c[j];
		  c[j]=c[j+1];
		  c[j+1]=te;

		  te=d[j];
		  d[j]=d[j+1];
		  d[j+1]=te;
		 }
	      }
	  }
	n=n+l;
int m;
	for(m=0;m<n;m++)
	  {
	    if(d[m]!=a[m])
	    q=m;
	    break;
	  }
       }
	d[q]++;
   }
return 0;
 }
