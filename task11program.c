#include <stdio.h>

int last_number_equal_x(FILE *f, double x);
int last_number_equal_x(FILE *f, double x)
{
    double current = 0.;
    int number = 0;
    int last_number = 0;

    while (fscanf(f, "%lf", &current) == 1)
    {
        number++;
        if (current == x)
            last_number = number;
    }
    return last_number;
}

int main(void)
{
    FILE *f = fopen("input_data.txt", "r");
    double x = 0.;

    if (f == NULL)
    {
        printf("File error");
        return -1;
    }
    if (fscanf(f, "%lf", &x) != 1)
    {
        printf("File is empty");
        fclose(f);
        return -1;
    }

    printf("Answer: %d\n", last_number_equal_x(f, x));
    fclose(f);
    return 0;
}
