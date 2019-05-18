#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, vi=0, ci=0;
    char arr[15], v[15], c[15];

    printf("Enter the array: ");

    for(i=0; i<15; i++) {
        scanf("%c", &arr[i]);
    }
        printf("\n");

    printf("The entered array is: ");

    for(i=0; i<15; i++) {
        printf("%c", arr[i]);
    }

    for(i=0; i<15; i++) {
        if(arr[i]=='a' || arr[i]=='A' || arr[i]=='e' || arr[i]=='E' || arr[i]=='i' || arr[i]=='I' || arr[i]=='o' || arr[i]=='O' || arr[i]=='u' || arr[i]=='U') {
            v[vi] = arr[i];
            vi++;
        }

        else {
            c[ci] = arr[i];
            ci++;
        }
    }

    printf("\n\n");
    printf("The vowels in the string are: ");
    for(i=0; i<vi; i++) {
        printf("%c", v[i]);
    }
    printf("\n\n");
    printf("The consonents in the string are: ");
        for(i=0; i<ci; i++) {
        printf("%c", c[i]);
    }

    printf("\n");

    return 0;
}
