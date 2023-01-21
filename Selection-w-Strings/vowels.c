#include <stdio.h>
#include <string.h>

int main(void)
{
    int num_a=0;
    int num_e=0;
    int num_i=0;
    int num_o=0;
    int num_u=0;
    char word[101];
    int currentLetter=0; //variable that points to each letter in order 
                              //by taking values from 0 to strlen()-1

    printf("Enter a word (up to 100 characters):\n");
    scanf("%s", word);

    //DEBUG: print out word to make sure it is the string that you entered

    //TODO: Write 2 variations
    //loop through each letter using:
    // 1) while loop without using strlen
    // 2) for loop using strlen
    {

    //DEBUG: print out the index currentLetter
    //DEBUG: print out letter being processed word[currentLetter]

        if (word[currentLetter]=='a')
            num_a++;
        else if (word[ ]=='e')
            num_e++;
        else if (word[currentLetter]=='i')
            num_i++;
        else if (word[currentLetter]=='o')
            num_o++;
        else if (word[currentLetter]=='u')
            num_u++;

    }

    printf("The vowel a occurred %d times\n", num_a);
    printf("The vowel e occurred %d times\n", num_e);
    printf("The vowel i occurred %d times\n", num_i);
    printf("The vowel o occurred %d times\n", num_o);
    printf("The vowel u occurred %d times\n", num_u);

    return 0;
}

