#include <stdio.h>   // For input/output functions (printf, scanf)


int main() 
{
    // Declare a character array (string) with max size 100
    char s[100];

    // Read input including spaces until Enter (\n) is pressed
    // %[^\n]   → read everything until newline
    // %*c      → read one more character (newline) and discard it

    scanf("%[^\n]%*c", s);

    // Print the fixed text "Hello, World!" followed by a newline
    printf("Hello, World!\n");

    // Print the string entered by the user
    printf("%s", s);

    // End of program, return 0 means successful execution
    return 0;
}
