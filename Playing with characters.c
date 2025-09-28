#include <stdio.h>


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    // 1. Declare a single character variable
    char ch;

    // Read a single character from input
    scanf("%c", &ch);

    // 2. Declare a string (array of chars)
    char s[100];

    // Read a single word (stops at first whitespace: space, tab, or newline)
    scanf("%s", s);

    
    // scanf("\n", s);
    // - "\n" in scanf means "skip whitespace"


    // 3. Declare another string for a full sentence
    char sen[100];

    // Read an entire line (with spaces) until Enter is pressed
    // %[^\n] → read everything until newline
    // %*c    → discard the newline
    scanf("%[^\n]%*c", sen);

    // Print the character
    printf("%c\n", ch);

    // Print the word
    printf("%s\n", s);

    // Print the sentence
    printf("%s", sen);

    return 0;
}
