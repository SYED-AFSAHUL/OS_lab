#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
  int i,j,n,m=0,a[150],b[150],c[150];
  printf("enter no of tasks:-");
  scanf("%d", &n);//cin>>n;

  for(i=0;i<n;i++)      // take n input
     {
       printf("for task %d",i+1);
       printf("\nBurst time= ");
       scanf("%d",(a+i));//cin>>a[i];
       printf("priority= ");
       scanf("%d",(b+i));//cin>>b[i];
       c[i]=i+1;
     }
  for(i=n-1;i>0;i--)                			// sort n tasks
   {
     for(j=0;j<i;j++)					// bubble sort
       {
	  if(b[j]>b[j+1])
	    {
	     int t;
	     t=b[j];
	     b[j]=b[j+1];
	     b[j+1]=t;

	     t=a[j];
	     a[j]=a[j+1];
	     a[j+1]=t;

	     t=c[j];
	     c[j]=c[j+1];
	     c[j+1]=t;
	    }
       }
   }
  int s=0,d[50],y=0;
  j=0;
  for(i=0;i<n;i++)
   {
     s=s+a[i];
   }
  for(i=0;i<n;i++)
     {
       d[i]=0;
     }
int t;
  for(t=0;t<=s;t++)
   {
     printf("\nAt t= %d",t);

     for(i=0;i<n;i++)
      {
	printf("\ntask %d: processed time %d out of %d",c[i], d[i], a[i]);
      }
      printf("\nTo add task press 1 else press 0\t");
      int k;
      scanf("%d", &k);//cin>>k;
    if(k==1)
       {
	 printf("\nenter no of tasks :- ");
	 int l;
	 scanf("%d", &l);//cin>>l;
	 for(i=n;i<n+l;i++)
	  {
	    printf("for task %d",i+1);
	    printf("\nBurst time= ");
	    scanf("%d",(a+i));//cin>>a[i];
	    printf("priority= ");
	    scanf("%d",(b+i));//cin>>b[i];
	    c[i]=i+1;
	  }
	 for(i=n;i<n+l;i++)
	  {
	    d[i]=0;
	  }
	 for(i=n+l-1;i>0;i--)
	  {
	    for(j=0;j<i;j++)
	      {
		if(b[j]>b[j+1])
		  {
		    int t;
		    t=b[j];
		    b[j]=b[j+1];
		    b[j+1]=t;

		    t=a[j];
		    a[j]=a[j+1];
		    a[j+1]=t;

		    t=c[j];
		    c[j]=c[j+1];
		    c[j+1]=t;

		    t=d[j];
		    d[j]=d[j+1];
		    d[j+1]=t;
		  }
	      }
	  }
	  s=0;
	 for(i=0;i<n+l;i++)
	   {
	     s=s+a[i];
	   }
	 n=n+l;

       }
      for(i=0;i<n;i++)
      {
	if(d[i]<a[i])
	{
	  j=i;
	  break;
	}
      }
      d[j]++;
    if(d[j]==a[j])
      {
	j++;
      }

   }


 return 0;
}
