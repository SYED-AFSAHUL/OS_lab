#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

int main(void)
{
pid_t pid1;
char a[10][10],temp[10],tname[10][10];
int i,j,n;
printf("Enter number of strings\n");
scanf("%d", &n);
printf("Enter %d names",n);

for(i=0;i<n;i++)
{
	scanf("%s", a[i]);
	strcpy(tname[i], a[i]);
}
pid1=fork();

if( pid1>0)
{
	wait(& pid1);
	printf("\nthis is parent process\n");
	for(i=0;i<n;i++)
{
	printf("%s", tname[i]);
}
}
else if( pid1 ==0)
{
	printf("\nthis is child process\n");
for (i = 0; i < n - 1 ; i++)

    {

        for (j = i + 1; j < n; j++)

        {

            if (strcmp(a[i], a[j]) > 0)

            {

                strcpy(temp, a[i]);

                strcpy(a[i], a[j]);

                strcpy(a[j], temp);

            }

        }

    }
	for(i=0;i<n;i++)
{
	printf("%s", a[i]);
}
	
}
else
	printf("error is generated");
}
