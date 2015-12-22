#include<stdio.h>
#include<malloc.h>

int dist(int *a,int *b)
{
	return (((a[1]-b[1])*(a[1]-b[1])) + ((a[2]-b[2])*(a[2]-b[2])) + ((a[0]-b[0])*(a[0]-b[0])));
}

void main(int argc, char const *argv[])
{
	/* code */
	
	int n = 10,i,j,k=-1;		//number of initial sample points
	int s[n][3] ;
	int edges[n*n][3];
	printf("#0.1\n");
	for (i=0;i<n;i++)
	{
		printf("insert %d\n", (i+1));
	}
	
	for(i=0;i<n;i++)
	{
		for (int j = 0; i < n; j++)
		{	
			k++;
			edges[k][0] = dist(s[i],s[j]));
			edges[k][1] = i;
			edges[k][2] = j;
		}
	}
	
}