/* 4. 
12345
 1234
  123
   12
    1	*/
    
#include<stdio.h>
int main()
{
	int i,j,k;
	for (i=1;i<=5;i++) 
	{
	for (j=1;j<i;j++) 
		{
            printf(" ");
    	}
		
	for (k=1;k<=6-i;k++)
	 	{
            printf("%d", k);
    	}
    	printf("\n");
	}

	
}
