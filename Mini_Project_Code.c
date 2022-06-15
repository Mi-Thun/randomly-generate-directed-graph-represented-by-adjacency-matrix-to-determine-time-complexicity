/*

   CSE106(1) Mini Project, Group - 03

   Names and IDs:
   1. Abdullah Al Munem
      2019-3-60-052
   2. Mohsenul Kabir Mithun
      2019-3-60-046
   3. Md. Asif Imtiyaj Chowdhury
      2019-3-60-115

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int adj_mat[10000][10000];
int main()
{
    int start;
    start = clock();
    int n, in_deg, out_deg, i, j,end;
    printf("Enter The Number of Vertices = ");
    scanf("%d", &n);
    long long int sum_in=0, sum_out=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            adj_mat[i][j] = rand()%2;

        }
    }
    printf("\n Vertex \t In-Degree \t Out-Degree \t Total-Degree ");

    for(i=0;i<n ;i++)
    {
        in_deg = out_deg = 0;
        for(j=0 ;j<n ;j++)
        {
            if(adj_mat[j][i] == 1)
                in_deg++;
                sum_in++;
        }
        for(j=0 ; j<n ; j++)
        {
            if(adj_mat[i][j] == 1 )
                out_deg++;
                sum_out++;
        }
        printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n",i,in_deg,out_deg,in_deg+out_deg);

    }
    printf("\nThe Sum of In Degrees = %lld\n",sum_in);
    printf("\nThe Sum of Out Degrees = %lld\n",sum_out);
    if(sum_in == sum_out)
        printf("\nThe Sum of In Degrees and The Sum of Out Degrees are Equal\n");
    end = clock();
    float totalTime = (end - start)/CLOCKS_PER_SEC;
    //printf("\nComputational Time = %.2f s.\n", totalTime);
    unsigned long long int time_in_ns = totalTime*1000000000;
    printf("\nComputational Time = %llu ns.\n", time_in_ns);

    return 0;
}

