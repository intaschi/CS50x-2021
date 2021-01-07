#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chart(void);



int main(void)
{
    chart();
   
}

void chart(void)
{
    // Converting char to it's number in ASCII
    char a = 'D';
    printf("%i\n", (int) a);
    
    
    // Manipulating strings
    string nome = "Carol";
    printf("A primeira letra de %s é %c",  nome,  nome[0]);
    
    
    // Printing strings using null character
    string s = get_string("Input: \n");
    printf("Output: ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    
    
    // Using libary string.h to print strings
    
    string v = get_string("Input: \n");
    printf("Output: ");
    int string_lenght = strlen(v);
    for (int i = 0; i < string_lenght; i++)
    {
        printf("%c", v[i]);
    }
    printf("\n");
    
    
    // Using libary ctype.h
    string g = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(g); i < n; i++)
    {
        printf("%c", toupper(g[i]));
    }
    printf("\n");
}
