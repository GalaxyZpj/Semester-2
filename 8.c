#include <stdio.h>
  void reverse_sentence() {
    char c;
    scanf("%c", &c);
    if(c != '\n') {
      reverse_sentence();
      printf("%c", c);
    }
  }

  void main() {
    printf("Enter a sentence: ");
    reverse_sentence();
    printf("\n");
  }
