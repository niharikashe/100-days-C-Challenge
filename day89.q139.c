Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    enum Status s = SUCCESS;
    printf("Value of s = %d\n", s);

    s = FAILURE;
    printf("Value of s = %d\n", s);

    s = TIMEOUT;
    printf("Value of s = %d\n", s);

    return 0;
}
