#include <stdio.h>


static const int MAX_SIZE = 50;

void sum_of_IJ(int array[MAX_SIZE][MAX_SIZE], int width, int height)
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            array[i][j] = i + j + 2;
        }
    }
};

int main(void)
{
    int array[MAX_SIZE][MAX_SIZE];
    int width, height;
    do
    {
        printf("Enter width and height < %d", MAX_SIZE);
        scanf("%d %d", &width, &height);
    } while (width > MAX_SIZE && height > MAX_SIZE);
    sum_of_IJ(array, width, height);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
