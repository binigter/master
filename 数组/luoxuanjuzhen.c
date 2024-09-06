#include <stdio.h>
#include <stdlib.h>

int** generateMatrix(int n)
{
    // *returnSize = n;
    // *returnColumnSize = (int*)malloc(sizeof(int) * n);

    int** ans = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = (int*)malloc(sizeof(int) * n);
        // (*returnColumnSize)[i] = n;
    }

    int startX = 0, startY = 0;
    int mid = n / 2;
    int loop = n / 2;
    int offset = 1;
    int count = 1;

    while (loop)
    {
        int i = startX, j = startY;
        // ģ���ϱߴ�����
        for (; j < startY + n - offset; j++)
        {
            ans[startX][j] = count++;
        }
        // ģ���ұߴ��ϵ���
        for (; i < startX + n - offset; i++)
        {
            ans[i][j] = count++;
        }
        // ģ���±ߴ��ҵ���
        for (; j > startY; j--)
        {
            ans[i][j] = count++;
        }
        // ģ����ߴ��µ���
        for (; i > startX; i--)
        {
            ans[i][j] = count++;
        }

        offset += 2;
        startX++;
        startY++;
        loop--;
        
    }
    if (n % 2)
    {
        ans[mid][mid] = count;
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         ans[i][j] = i; 
    //     }
        
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d ", ans[i][j]);
    //     }
    //     printf("\n");
    // }

    return ans;
  
}

int main()
{
    int n = 3;
    // int* returnSize = NULL;
    // int** returnColumnSize = NULL;
    int** ans = generateMatrix(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    printf("%d", 444);
    return 0;
}