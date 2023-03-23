#include<stdio.h>
int findWT(int bt[],int wt[],int n)
{
	wt[0]=0;
	int i;
	for(i=1;i<n;i++)
	{
		wt[i] = bt [i-1] + wt [i-1];
	}
}


int findTAT(int bt[],int tat[],int wt[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		tat[i] = bt[i]+wt[i];
	}
}
int findAvgtime(int p[],int bt[],int n)
{
	int wt[n],tat[n],total_wt=0,total_tat=0,i;
	
	findWT(bt,wt,n);
	
	findTAT(bt,tat,wt,n);
	
	printf("Process   BT   WT   TAT \n");
	for(i=0;i<n;i++)
	{
		total_wt += wt[i];
		total_tat += tat[i];
		
		printf("  %d",p[i]);
		printf("       %d",bt[i]);
		printf("    %d",wt[i]);
		printf("    %d\n",tat[i]);
	}
	float avgwt = (float)total_wt / (float) n;
	float avgtat = (float)total_tat / (float) n;
	printf("AVG Wating Time = %f\n",avgwt);
	printf("AVG Turn Around Time = %f",avgtat);
}

int main()
{
	int n;
	printf("Enter how many Process are there :");
	scanf("%d",&n);
	
	int i,p[n],bt[n];
	printf("\n Enter the proess :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\n Enter the Brust time of process :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	
	findAvgtime(p,bt,n);
}
