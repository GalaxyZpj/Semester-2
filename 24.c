#include <stdio.h>
#include <string.h>
int n, i=1;
struct class_record {
  char Name[25];
  int Roll;
} i1, i2, i3;

void record_input() {
  char Name_temp[25];
  printf("Enter Name: ");
  gets(Name_temp);
  printf("Enter Roll Number: ");
  scanf("%d", &in.Roll);
}

int main() {
  printf("Enter number of students: ");
  scanf("%d", &n);
  while(i<=n) {
    record_input();
    i++;
  }
  return 0;
}
