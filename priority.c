#include<stdio.h>
 
int main()
{
    int bt[20],student[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    printf("Enter Total Number of Students :");
    scanf("%d",&n);
 
    printf("\nEnter number of gift collected by each student \n");
    for(i=0;i<n;i++)
    {
        printf("\nStudent Number[%d]\n",i+1);
        printf("No of gifts:");
        scanf("%d",&pr[i]);
        student[i]=i+1;           //contains process number
    }
  {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=student[i];
        student[i]=student[pos];
        student[pos]=temp;
       
          printf("\nAccountant Prefrence in Selecting Student having maximum gift\t %d ",student[0]);
    for(i=0;i<n;i++)
    {
        printf("\n[%d]\t\t",student[i]);
    }
   
    return 0;
}}
