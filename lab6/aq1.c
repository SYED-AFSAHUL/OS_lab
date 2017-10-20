#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
  
  int s=0,n,i,j,a[30],p,q;
  printf("Enter no of tasks:- ");
  scanf("%d", &n);//cin>>n;
  for(i=0;i<n;i++)
   {
     printf("enter the burst time for task %d :- ",i+1);
      scanf("%d",(a+i));//cin>>a[i];
   }
   q=i;
  printf("the task will be done in the order\n");
  for(p=0;p<n;p++)
  {
   s=s+a[p];
  }
  p=0;
  j=0;
  int m,c,k,l,t;
  for(t=1;t<=s;t++)
    {
	printf("At time t=%d\t",t);
	printf("The task being processed is %d\n",p+1);
	j++;
	if(a[p]==j)
	 { p++;
	   j=0;
	 }

	{
	  printf("\tTo add task press 1,To continue press 0\t");
	  scanf("%d", &l);//cin>>l;
	  if(l==1)
	    { printf("enter the no of tasks:- ");
	      scanf("%d", &m);//cin>>m;

	      printf("\nEnter the burst time of the task(s)");
	      for(i=q;i<n+m;i++)
	       {
		printf("\nfor task %d ->",i+1);
		scanf("%d",(a+i));//cin>>a[i];
		s=s+a[i];
	       }
	    }
	}
    }
return 0;
}
