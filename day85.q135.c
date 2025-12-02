Q135: Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status state;

    for (state = SUCCESS; state <= TIMEOUT; state++) {

        printf("%d -> ", state);

        switch(state) {
            case SUCCESS:
                printf("Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("Operation failed.\n");
                break;
            case TIMEOUT:
                printf("Operation timed out.\n");
                break;
        }
    }

    return 0;
}
