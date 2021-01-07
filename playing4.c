#include <cs50.h>
#include <stdio.h>

// Playing wih command line arguments
int main(int argc, string argv[])
{
    
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world");
    }
}