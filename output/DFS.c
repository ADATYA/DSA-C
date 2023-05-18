#include<stdio.h>

int visited[7] = {0,0,0,0,0,0,0};
int a[7][7] ={{0,1,1,1,0,0,0},
              {0,0,1,0,0,0,0},
              {1,1,0,1,1,0,0},
              {1,0,1,0,1,0,0},
              {0,0,1,1,0,1,1},
              {0,0,0,0,1,0,0},
              {0,0,0,0,1,0,0}};

void dfs(int i){
    printf("%d ",i);
    visited[i] = 1;
    for(int j=0; j<7; j++){
        if(a[i][j]==0 && !visited[j])
        dfs(j);
    }
}

int main()
{
    dfs(1);
}