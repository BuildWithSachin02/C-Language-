#include <stdio.h>

int main() {
    char *pattern[] = {
        "***",
        "*  *",
        "* *",
        "***",
        "*  *",
        "*   *",
        "**  *"
    };

    for(int i = 0; i < 7; i++)
        printf("%s\n", pattern[i]);
}

