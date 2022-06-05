#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>

int main()
{
    char string[20];
    int count;

    printf("Duplicate characters in a given string: \n");
    printf("enter your tet(max 20 characters)");
    scanf_s("%s", string, sizeof string);
    
    for (int i = 0; i < strlen(string); i++) {
        count = 1;
        for (int j = i + 1; j < strlen(string); j++) {
            if (string[i] == string[j] && string[i] != ' ') {
                count++;
                  
                string[j] = '0';
            }
        }
        
        if (count > 1 && string[i] != '0')
            printf("%c\n", string[i]);
    }
    system("pause");

    return 0;
}