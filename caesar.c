// Takes a message, encrypts it with the caesar cipher, and prints the encrypted message

#include<string.h>
#include<ctype.h>
#include<stdio.h>

void caesar (int key, char message[])
{
    int i;
    for (i = 0; i < strlen(message); i++)
    {
        // print deciphered message one character at a time
        // non alphabetical characters are unaltered
        if (isalpha(message[i]))
        {
            if (islower(message[i]))
                printf("%c", ('a' + (message[i] - 'a' + key)%26));
            else if (isupper(message[i]))
                printf("%c", ('A' + (message[i] - 'A' + key)%26));
        }
        else
            printf("%c", message[i]);
    }
    printf("\n");
}
