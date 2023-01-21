#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student_struct {
  char *fname;
  char *lname;
} Student;

void freeStudent(Student *delete) {
  free(delete->fname);
  free(delete->lname);
  free(delete);
}
Student *deepCopy(Student *oldStudent) {
  // ** deep copy should copy the struct and the names into new malloc'd spaces
  Student *newStudent;
  return newStudent;
}

int checkDeepCopy(Student *oldStudent, Student *newStudent) {

  //-don't change
  if (oldStudent == newStudent)
    return 0;
  if (oldStudent->fname == newStudent->fname)
    return 0;
  if (strcmp(oldStudent->fname, oldStudent->fname) != 0)
    return 0;
  if (strcmp(oldStudent->lname, oldStudent->lname) != 0)
    return 0;
  if (oldStudent->lname == newStudent->lname)
    return 0;
  return 1;
}

int main(int argc, char *argv[]) {

  int studentCount = 0;
  char fname_buffer[21];
  char lname_buffer[21];

  FILE *input = fopen("students.txt", "r");

  fscanf(input, "%d", &studentCount);

  //** malloc list of student pointers
  Student **students;

  for (int i = 0; i < studentCount; i++) {
    // ** malloc and populate struct
  }


  
  // deep copy the first student-don't change
  Student *new = deepCopy(students[0]);

  printf("deep copy check = %d\n", checkDeepCopy(students[0], new));

  // must free new student-don't change
  freeStudent(new);



  
  // print student list-don't change
  for (int i = 0; i < studentCount; i++) {
    printf("%d) %s %s\n", i, students[i]->fname, students[i]->lname);
  }

  // ** free all allocated segments

  return 0;
}