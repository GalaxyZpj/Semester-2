#include <stdio.h>
int i;
struct train_net {
  char train_name[25];
  int train_no;
  int train_delay;
}arr[5];

int main() {

  for(i=0; i<2; i++) {
    printf("Enter the Train Name: ");
    scanf("%s", &arr[i].train_name);

    printf("Enter the Train No: ");
    scanf("%d", &arr[i].train_no);

    printf("Enter the Train Delay time in hour: ");
    scanf("%d", &arr[i].train_delay);
  }

  for(i=0; i<2; i++) {
    printf("%s\n", arr[i].train_name);
  }


  return 0;
}
