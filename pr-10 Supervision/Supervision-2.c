#include <stdio.h>

int main() {
    FILE *p;
    char filename[100];
    char ch;

    printf("Enter the filename to be opened: ");
    scanf("%s", filename);


    p = fopen(filename, "r");

    if (p == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of file:\n");
   
    while ((ch = fgetc(p)) != EOF) {
        printf("%c", ch);
    }


    fclose(p);

    return 0;
}

