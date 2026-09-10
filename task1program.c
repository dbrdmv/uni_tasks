#include <stdio.h>
double average(FILE *f);
double average(FILE *f)
{
    double sum = 0., current = 0.;
    int count = 0;

    while (fscanf(f, "%lf", &current) == 1)
    {
        sum += current;
        count++;
    }
    if (count == 0)
    {
        printf("File is empty\n");
        return 0;
    }
    return sum / count;
}

int main(void)
{
    FILE *f = fopen("input_data.txt", "r");
    if (f == NULL)
    {
        printf("File error\n");
        return -1;
    }

    printf("Answer: %lf\n", average(f));
    fclose(f);
    return 0;
}
