#include <stdio.h>

int main() {
    printf("Super Jump iniciado!\n");

    int x = 0;

    while(1) {
        printf("Jogador em X=%d\n", x);
        x++;

        if(x > 10)
            break;
    }

    return 0;
}
