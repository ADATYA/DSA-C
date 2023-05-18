#include <stdio.h>

int coin_change(int coins[], int length, int amount)
{
    int table[length][amount+1];

    for (int i = 0; i < length; i++)
        table[i][0] = 1;

    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (coins[i] > j)
                table[i][j] = ((i == 0) ? 0 : table[i - 1][j]);

            else
                table[i][j] = ((i == 0) ? 0 : table[i - 1][j]) + table[i][j - coins[i]];
        }
    }

    for(int i=0; i<length; i++){
        for(int j=0; j<=amount; j++){
            printf("%d ",table[i][j]);
        }
        printf("\n");
    }
    return table[length - 1][amount];
}

int main()
{
    int coins[] = {2, 3, 5, 10};
    int length = sizeof(coins) / sizeof(coins[0]);
    int amount = 15;
    printf("Total number of ways : %d\n", coin_change(coins, length, amount));
}