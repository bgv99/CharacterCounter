#include <stdio.h>
#include <string.h>

void countCharacters(char *string, int *character_count, int *space_count)
{
    for(int i = 1; i < strlen(string); i++)
    {
        if(string[i] == ' ') { *space_count += 1; continue; }

        *character_count += 1;
    }
}

int main()
{
    char string[10000];
    char include_spaces;
    int character_count = 0;
    int space_count = 0;

    printf("Enter String: ");
    fgets(string, 10000, stdin);
    countCharacters(string, &character_count, &space_count);
    printf("Do you want to include space count? (Y/N): ");
    scanf("%c", &include_spaces);

    switch(include_spaces)
    {
        case 'y':
        case 'Y':
            character_count += space_count;

            break;

        case 'n':
        case 'N':
            break;

        default:
            return 0;
    }

    printf("Total Character Count: %d\n", character_count);

    return 0;
}
