#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[]) {

    //Make sure there is atleast one argument
    if (argc < 2 || argc > 3) {
        printf("Incorrect amount of arguments...\n");
        return 1;
    }
    else {
    int key = atoi(argv[1]);

    printf("plaintext:");
    string message = get_string();


    printf("ciphertext: ");



        for(int i = 0; i < strlen(message); i++){
            //Is the current index of the message alpha
            if (isalpha(message[i])){
                //Uppercase
                if (isupper(message[i])){
                   printf("%c", (message[i] - 64 + key) % 26 + 64);
                }
                else {
                 //Lowercase
                 printf("%c", (message[i] - 97 + key) % 26 + 97);
                }
            }
            //Non alpha characters of the message not to be altered
            else {
                printf("%c", message[i]);
            }
        }

    }

    printf("\n");




    return 0;

}
