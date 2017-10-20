#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main(void){

	//input string
	int z,pl,al;  /* pl = number of words */ 
	char words[pl][100],a[50];


printf("Enter number of strings\n");
scanf("%d", &pl);
printf("Enter %d names \n",pl);

for(z=0;z<pl;z++)
{
	scanf("%s", a);
	strcpy(words[z], a);
}


	char *temp;
	/*printf("Enter number of strings");
	scanf("%d",&pl);
	printf("pl= %d",pl);
	for(z=0; z<pl; z++);{
printf("pl= %d",pl);
		scanf("%s",words[z][100]);
	}*/

	for(z=0; z<pl; z++){
		printf("inserted str are- ");
		printf("%s \n",words[z]);
	}

    pid_t child1, child2;
    printf("\nStarting.....\n");
    
	if (!(child1 = fork())) {
        // first childi
        printf("\tChild 1 starting sort\n");

    	char temp[100];
 
    	// Sorting strings using bubble sort
    	int j1,i1;
		for (j1=0; j1<pl-1; j1++){
			sleep(5);
        	for (i1=j1+1; i1<pl; i1++){
        	    if (strcmp(words[j1], words[i1]) > 0){
        	        strcpy(temp, words[j1]);
        	        strcpy(words[j1], words[i1]);
        	        strcpy(words[i1], temp);
        	    }
        	}
			printf("\ngoing to sleep 1\n");
    	}
   
        exit(0);
    } else if (!(child2 = fork())) {
        // second child
        printf("\tChild 2 starting sort\n");
		int i2,j2,pos;
		for (i2=0; i2<(pl-1); i2++){
			sleep(5);
			pos=i2;
			for (j2=i2+1; j2<pl; j2++){
				if (strcmp(words[pos],words[j2])>=0)
					pos=j2;
			}
			if (pos!=i2){
				strcpy(temp,words[i2]);
				strcpy(words[i2],words[pos]);
				strcpy(words[pos],temp);
			}
			printf("\ngoing to sleep 2\n");
		}
		
        exit(0);
    } else {
        // parent
        printf("Parent\n");
        wait(&child1);
		for(z=0; z<pl; z++){
			printf("%s\n",words[z]);
		}
            printf("got exit status from child 1\n");
		
        wait(&child2);
		for(z=0; z<pl; z++){
			printf("%s\n",words[z]);
		}
            printf("got exit status from child 2\n");
    }
    return 0;
}
