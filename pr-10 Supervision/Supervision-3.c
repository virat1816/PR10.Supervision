#include <stdio.h>

int main() {
   FILE *p;
   char data[50];

   p = fopen("example.txt", "a");

   if (p == NULL) {
      printf("Failed to open file.\n");
      return 1;
   }

   
   printf("Enter data to append: ");
   fgets(data, 50, stdin);

   
   fputs(data, p);

   
   fclose(p);

   printf("Data appended successfully.\n");
   return 0;
}

