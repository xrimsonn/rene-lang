#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv) {
    if (argv[1] == NULL) {
        printf("Usage: rene <input_file>\n");
    }

    char * buffer = NULL;
    size_t len;
    FILE * fp = fopen(argv[1], "r");
    const ssize_t bytes_read = getdelim(&buffer, &len, '\0', fp);
    if (bytes_read != -1) {
        printf("%s", buffer);
    }
}
