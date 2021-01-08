#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    // Validate de key received
    string just_alpha = "";
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]))
        {
            just_alpha = "True";
        }
        else
        {
            printf("Key must only contain alphabetic characters\n");
            return 1;
        }
        
    }
    
    if (argc == 1)
    {
        printf("Usage: ./substitution key.\n");
        return 1;
    }
    
    else if (strlen(argv[1]) != 26 && strlen(argv[1]) != 0)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    
    
   
    // Get input from the user
    string text = get_string("Plaintext: ");
    
    
    
    // Convert to cipher
    
    int n = strlen(text);
     for (int i = 0; i < n; i++)
    {
        if (text[i] >= 65 && text[i] <= 90)
        {
            int posicao = (int)text[i] - 65;
            char n_cipher = argv[1][posicao];
            text[i] = n_cipher;
        }
        else if (text[i] >= 97 && text[i] <= 122)
        {
            int posicao = (int)text[i] - 97;
            char n_cipher = tolower(argv[1][posicao]);
            text[i] = n_cipher;
        }
        else
        {
            text[i] = text[i];
        }
    }
    
    printf("%s",  text);

}