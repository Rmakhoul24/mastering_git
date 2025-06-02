#include <stdio.h>
#define MAXLENGTH 1000
#define MINLEN 80

int getline(char line[], int maxlength);

int main() {
    int len;
    char line[MAXLENGTH];

    while ((len = getline(line, MAXLENGTH)) > 0) {
        if (len > MINLEN)  
            printf("%s", line);
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, i = 0;

    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
        if (c != ' ' && c != '\t') {
            s[i] = c;
            ++i;
        }
    }

    if (c == '\n' && i > 0) {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
    
