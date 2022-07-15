#include<stdio.h>
int main()
{
  int i,j,count=0,sumrow;
  int sumcol;
  int n;
  scanf("%d",&n);
  int arr[n+1][n+1];
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      scanf("%d",&arr[i][j]);
    for(i=1;i<=n;i++)
    {
      sumcol=0;
      for(j=1;j<=n;j++)
      sumcol+=arr[j][i];
      if(sumcol!=(n*(n+1)/2))
        count++;
    }
 for(i=1;i<=n;i++)
  {
    sumrow=0;
    for(j=1;j<=n;j++)
    {
      sumrow+=arr[i][j];
    }
  //    printf("%d\n",sumrow);
    if(sumrow!=(n*(n+1)/2))
      count++;
  }
  printf("\n\t");


  //printf("count%d ",count);
  if(count==0)
    printf("Valid Sudoku");
  else
    printf("Invalid Sudoku");
  return 0;
}
