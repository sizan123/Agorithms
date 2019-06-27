#include<stdio.h>

int a[20][20], q[20]= {0}, visited[20]={0}, n, i, j, f = 0, r = 0 ;

void bfs(int v)
{
    for(i=0; i <n; i++)
        if(a[v][i] && visited[i]==0)
            q[r++] = i;

    if(f <= r)
    {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}

void main()
{
    int v;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter graph data in matrix form:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the starting vertex: ");
    scanf("%d", &v);

    bfs(v);

    for(i=1; i <= n; i++)
    {
        if(visited[i])
			printf("\nThe node which are reachable are: \n");
            printf("%d\t", i);
        else
        {
            printf("\nBFS is not possible.");
            break;
        }
    }
}
