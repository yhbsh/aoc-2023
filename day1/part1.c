#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *f = fopen("input", "r");

    int result = 0;
    char line[1024];

    while (fgets(line, sizeof(line), f)) {
        int i = 0;
        int j = strlen(line) - 1;

        while (!isdigit(line[j]))
            j--;
        while (!isdigit(line[i]))
            i++;

        char str[3];
        str[0] = line[i];
        str[1] = line[j];
        str[2] = '\0';

        result += atoi(str);
    }

    printf("result = %d\n", result);

    return 0;
}
