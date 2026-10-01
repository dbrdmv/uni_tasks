#include <stdio.h>
double average(FILE *f);
double average(FILE *f) { double sum = 0., current = 0.; int count = 0;
while (fscanf(f, "%lf", &current) == 1)
{
    if (fabs(current) < 1.e-9)
    {
        printf("undefined for zero\n");
        return 0;
    }

    sum += 1.0 / current;
    count++;
}

if (count == 0)
{
    printf("File is empty\n");
    return 0;
}

return (double)count / sum;}
int main(void) { FILE *f = fopen("input_data.txt", "r");
if (f == NULL)
{
    printf("File error\n");
    return -1;
}

printf("Answer: %lf\n", average(f));
fclose(f);

return 0;}