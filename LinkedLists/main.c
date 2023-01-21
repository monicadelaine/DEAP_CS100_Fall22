#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _letter {
  char info;
  struct _letter *next;
} Letter;

// Build a linked list to represent the specified word.
// Return the head of the linked list built.
Letter *buildList(char word[]);

// Print the linked list.
// For example, if the linked list represents CRIMSON,
// it prints C-->R-->I-->M-->S-->O-->N
void printList(Letter *head);

int main() {
  char word[100];
  printf("Enter a word: ");
  scanf("%s", word);

  if (strlen(word) == 0)
    return 0;

  // Allocate node for first letter; need special processing to save head
  Letter *ptr = malloc(sizeof(Letter));
  Letter *head = ptr;
  ptr->info = word[0];

  //*** ptr will always point to the last node

  // for each remaining letter
  for (int i = 1; i < strlen(word); i++) {
    // allocate node for letter and pointer to next node
    Letter *nextNode = malloc(sizeof(Letter));

    // save this letter into info
    nextNode->info = word[i];

    // This may be the last node; if not, we will update this when we create the
    // next letter
    nextNode->next = NULL;

    // so we need to point the link in the last node to this node
    // ptr is the last node; we update it to point to this node
    ptr->next = nextNode;

    // this node will now be the last node
    ptr = nextNode;
  }

  // Letter *head=buildList(word);
  printList(head);

  return 0;
}

// Letter *buildList(char str[]){
//  // A more efficient approach is to build the list backwards so we don't need
//  to track 2 pointers in each iteration
//	Letter *head=NULL;
//	for (int i=strlen(str)-1; i>=0; i--) {
//		Letter *ptr=malloc(sizeof(Letter));
//		ptr->info=str[i];
//		ptr->next=head;
//		head=ptr;
//	}
//	return head;
//}

void printList(Letter *head) {}
