#include <stdio.h>

void delete_index_char(char *string, int index)
{
    int i = 0; 
    while(string[i] != '\0')
    {
    ++i;
    }

    for(int j = 0; j < i - index; ++j)
    {
    string[index + j] = string[index + j + 1];
    }
}

void delete_char(char *string, char which_char)
{
    int i = 0;
    while(string[i] != '\0')
    {
    ++i;
    }

    int write = 0;
    for(int j = 0; j < i; ++j)
    {
        if(string[j] == which_char) continue;

        string[write] = string[j];
        ++write;
    }
    string[write] = '\0';
}

int main()
{
    char first_str[256];
    int index;

    printf("Input string ");
    fgets(first_str, sizeof(first_str), stdin);

    printf("Which index to delete? (starting from zero): ");
    scanf("%d", &index);

    delete_index_char(first_str, index);

    printf("Result: %s\n", first_str);

    char second_str[256];
    char character;

    getchar(); 
    printf("Input string ");
    fgets(second_str, sizeof(second_str), stdin);

    printf("Which CHARACTER to delete? ");
    scanf("%c", &character);

    delete_char(second_str, character);

    printf("Result: %s\n", second_str);
    
    return 0;
}