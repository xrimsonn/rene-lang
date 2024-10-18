#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum TokenType {
    _return,
    _number,
    _semicolon
};

typedef struct Token {
    enum TokenType type;
    char** value;
} Token;

void tokenize(const char* str) {
    for (int i = 0; i < strlen(str); ++i) {
        if (isalpha(str[i])) {
            printf("%c\n", str[i]);
        }
    }
}

int main (int argc, char** argv) {
    char * buffer = NULL;
    size_t len;
    FILE * fp = fopen(argv[1], "r");
    char* contents;

    if (argv[1] == NULL) {
        printf("Usage: rene <input_file>\n");
        return EXIT_FAILURE;
    }

    if (fp == NULL) {
        printf("File \"%s\" does not exists\n", argv[1]);
        return EXIT_FAILURE;
    }

    const ssize_t bytes_read = getdelim(&buffer, &len, '\0', fp);
    if (bytes_read != -1) {
        contents = buffer;
        tokenize(contents);
    }
}
