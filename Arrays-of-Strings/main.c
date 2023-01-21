#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_LENGTH 110
#define NUMBER_OF_STRINGS 10

//*** Allocate an array of strings to hold strings from a file
//*** Should only read the first 10 sentences
// Must only allocate enough space to hold each string
// Remove the line return at the end of each string after the fgets

int findWordInArrayOfStrings(char **arrayOfStrings, char *word,
                             int stringCount) {

  // NO changes needed in this function
  int wordCount = 0;
  // printf("passed in pointer for arrayOfStrings is %p\n", arrayOfStrings);
  for (int i = 0; i < stringCount; i++) {
    // DEBUG:printf("string at %p function is %s\n", &arrayOfStrings[i],
    //       arrayOfStrings[i]);
    if (strstr(arrayOfStrings[i], word) != NULL)
      wordCount++;
  }
  return wordCount;
}

int main(void) {

  FILE *input = NULL;
  char inputString[BUFFER_LENGTH];
  char **stringList;
  char testWord[BUFFER_LENGTH];

  input = fopen("strings.txt", "r");
  //input = fopen("strings2.txt", "r");

  // Todo: Allocate space for NUMBER_OF_STRINGS string pointers;

  // printf("malloc'd pointer for stringList is %p\n", stringList);

  for (int i = 0; i < NUMBER_OF_STRINGS; i++) {
    fgets(inputString, BUFFER_LENGTH, input);
    //DEBUG: printf("string is :%s:", inputString);
    //if (inputString[strlen(inputString) - 1] == '\n')
    //  printf("line return at the end");

    if (feof(input)) break;

    // Todo: Allocate space for current string

    // Todo: save current string to stringlist
  }

  // Todo: grab the first word of the last sentence

  // DEBUG printf("first word of last sentence is %s\n", testWord);

  int count = findWordInArrayOfStrings(stringList, testWord, NUMBER_OF_STRINGS);
  printf("Sentence count of %s is %d", testWord, count);

  return 0;
}