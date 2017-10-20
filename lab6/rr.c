#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
 {
   int i,h,d[150],s=0,a[150],c[150],n;
   printf("enter no of tasks:-");
   scanf("%d", &n);//cin>>n;
   for(i=0;i<n;i++)
     {
       printf("for task%d",i+1);
       printf("\nBurst time= ");
       scanf("%d",(a+i));//cin>>a[i];
       c[i]=i+1;
       d[i]=0;
       s=s+a[i];
     }
   printf("\nTime slice= ");
   scanf("%d", &h);//cin>>h;
   int m=0,t,j=0;
   for(t=0;t<=s;t++)
    {
	printf("\nAt t= %d",t);
	for(i=0;i<n;i++)
	 {
	   printf("\nFor task %d : processed time %d out of %d", c[i], d[i], a[i]);
	 }
	printf("\nTo add task press 1 else press 0\t");
	int k;
	scanf("%d", &k);//cin>>k;
	if(k==1)
	 {
	   printf("\nEnter no. of tasks :- ");
	   int l;
	   scanf("%d", &l);//cin>>l;
	   for(i=n;i<n+l;i++)
	    {
	      printf("for task %d",i+1);
	      printf("\nBurst time= ");
	      scanf("%d",(a+i));//cin>>a[i];
	      c[i]=i+1;
	      d[i]=0;
	    }
	   s=0;
	   n=n+l;
	   for(i=0;i<n;i++)
	     {
	       s=s+a[i];
	     }
	 }
	if(m==h && a[j]>d[j])
	 {
	   int te;
	    te=a[j];
	   for(i=j;i<n;i++)
	    {a[i]=a[i+1];}
	    a[n-1]=te;

	    te=c[j];
	   for(i=j;i<n;i++)
	    {c[i]=c[i+1];}
	     c[n-1]=te;

	    te=d[j];
	   for(i=j;i<n;i++)
	    {d[i]=d[i+1];}
	     d[n-1]=te;

	    m=0;
	 }
	if(d[j]==a[j])
	 {
	   j++;
	   m=0;
	 }
       m++;
       d[j]++;
    }

return 0;
 }
