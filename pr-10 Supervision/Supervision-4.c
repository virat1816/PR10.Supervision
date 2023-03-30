#include <stdio.h>

int main() {
   FILE *fp1, *fp2;
   char ch;

   
   fp1 = fopen("source.txt", "r");

   if (fp1 == NULL) {
      printf("Failed to open source file.\n");
      return 1;
   }

   
   fp2 = fopen("destination.txt", "w");

   if (fp2 == NULL) {
      printf("Failed to open destination file.\n");
      fclose(fp1);
      return 1;
   }

   
   while ((ch = fgetc(fp1)) != EOF) {
      fputc(ch, fp2);
   }


   fclose(fp1);
   fclose(fp2);

   printf("File copied successfully.\n");
   return 0;
}

