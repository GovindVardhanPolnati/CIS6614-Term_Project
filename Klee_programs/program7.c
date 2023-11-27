#include <stdio.h>
#include <klee/klee.h>

int main() {
    char buffer[50];
    int value;
    klee_make_symbolic(&value, sizeof(value), "value");
    sprintf(buffer, "User-controlled value: %s\n", value);
    printf("%s", buffer);

    return 0;
}
