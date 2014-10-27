// Deciphers a message encrypted with the caesar cipher

#include<stdio.h>
#include<stdlib.h>

void caesar (int, char[]);

int main(int argc, char *argv[])
{
    // check for a valid input
    if(argc != 1 && argc != 2)
    {
        fprintf(stderr, "Usage: %s encrypted_message\n", argv[0]);
        exit(1);
    }
    
    // run the program with the input if there is one
    // otherwise use the default message
    char *message = (argc > 1) ? argv[1] : "Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma"
                 " qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai";
    
    // decipher the message with keys 0 through 25
    int i;
    for (i = 0; i < 26; i++)
    {
        caesar(i, message);
    }
}
