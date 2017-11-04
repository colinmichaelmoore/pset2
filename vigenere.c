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
    string key = argv[1];
    int keyInt = atoi(argv[1]);
    for (int x = 0; x < strlen(key); x ++){
        if (!isalpha(key[x])) {
            printf("Only alpha keys!\n");
            return 1;
        }
    }


    printf("plaintext:");
    string message = get_string();





    printf("ciphertext: ");



        for(int i = 0; i < strlen(message); i++){

            //Cycle through key
            if (isalpha(key[i % strlen(key)]) && isupper(key[i % strlen(key)])) {
                keyInt = key[i % strlen(key)] - 65;
                }




            else if (isalpha(key[i % strlen(key)]) && islower(key[i % strlen(key)])) {
                keyInt = key[i % strlen(key)] - 97;




            }


                  if (isalpha(message[i])){
                //Uppercase
                if (isupper(message[i])){
                   printf("%c", (message[i] - 65 + keyInt) % 26 + 65);
                }
                else {
                 //Lowercase
                 printf("%c", (message[i] - 97 + keyInt) % 26 + 97);
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
