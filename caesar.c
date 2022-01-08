#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{



    if (argc == 2 && isdigit(*argv[1]))
        
    {

        int k = atoi(argv[1]); // receive caesar key and convert to int

        string s = get_string("plaintext: "); // get text input
        printf("ciphertext: "); // 

// iterate through plain text letter by letter
        for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            // checking if it is lowercase between a-z
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); // print out lowercase and the key
            } // checking if it is uppercase between A-Z
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); // print out uppercase and the key
            }

            else

            {
                printf("%c", s[i]);
            }
        }

        printf("\n");
        return 0;
    }

    else
    {
        printf("Usage: ./caesar k\n");
        return 1;

    }

}
