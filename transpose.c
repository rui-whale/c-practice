#include <stdio.h>

/*
 * 二维数组传参：形参写成 a[][3]，第二维必须写死。
 * int a[2][3] 的元素类型是 int[3]，退化后就是 int (*a)[3]。
 */
void transpose(int a[][3], int b[][2], int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            b[j][i] = a[i][j];
}

int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{0}};

    transpose(a, b, 2);

    for (int i = 0; i < 3; i++)
        printf("%d %d\n", b[i][0], b[i][1]);

    return 0;
}