#include <stdio.h>

// Create a structure called myStructure
struct myInformation {
  char  *name[20];
  int    age;
  int    n_matricule;
  float  note;


};

int main() {
  // Create a structure variable of myStructure called s1

  struct myInformation s1;
  printf("Enter Name Etudient:");
  scanf("%s",&s1.name);
  printf("Enter Age Etudient:");
  scanf("%d",&s1.age);
  // Assign values to members of s1
  printf("Enter Numiro Matrecule Etudient:");
  scanf("%d",&s1.n_matricule);
  printf("Enter Numiro Note Etudient:");
  scanf("%d",&s1.note);
  printf("\n\n\n");

  // Print values
  printf("My name %s\n", s1.name);
  printf("My age: %d\n", s1.age);
  printf("My matricule: %d\n", s1.n_matricule);
  printf("My note: %d\n", s1.note);

  return 0;
}
