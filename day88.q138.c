Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    for(role = ADMIN; role <= GUEST; role++) {
        printf("%d -> ", role);

        switch(role) {
            case ADMIN:
                printf("ADMIN\n");
                break;
            case USER:
                printf("USER\n");
                break;
            case GUEST:
                printf("GUEST\n");
                break;
        }
    }

    return 0;
}
