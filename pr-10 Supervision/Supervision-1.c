#include <stdio.h>

int main() {
    FILE *p;
    char data[50];
    
   
    p = fopen("demo.txt", "r");
    
    if (p == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("Enter data to be written into the file:\n");
    fgets(data, 50, stdin);
    
  
    fputs(data, p);
    
    printf("Data successfully written to the file.\n");
    
    
    fclose(p);
    
    return 0;
}

