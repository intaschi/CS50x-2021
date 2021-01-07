#include <cs50.h>
#include <stdio.h>
float average(int tot, int array[]);

//playing with functions and arrays

int main(void)
{
    int total = get_int("Total de scores: ");
    int scores[total];
    
    for (int i = 0; i < total; i++)
    {
        scores[i] = get_int("Score %i: ", i);
    }
    printf("%.1f\n", average(total, scores));
    
}

float average(int tot, int array[])
{
    int soma = 0;
    for (int i = 0; i < tot; i++)
    {
        soma += array[i];
    }
    float media = soma / (float) tot;
    return media;
}