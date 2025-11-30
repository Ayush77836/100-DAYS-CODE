#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    gets(str);  

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            if (str[i] == '\0')
                break;  

            start = i + 1;  
        }
    }

    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}