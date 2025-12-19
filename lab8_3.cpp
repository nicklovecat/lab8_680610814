#include <stdio.h>

int main() {
    int age, height;
    long long bounty;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 25) {
        printf("Enter your height: ");
        scanf("%d", &height);
        if (height < 100) {
            printf("Your character = Chopper\n");
        } else if (height < 180) {
            printf("Your character = Usopp\n");
        } else {
            printf("Enter your bounty: ");
            scanf("%lld", &bounty);
            if (bounty > 1100000000) {
                printf("Your character = Zoro\n");
            } else {
                printf("Your character = Sanji\n");
            }
        }
    } else if (age <= 60) {
        printf("Enter your bounty: ");
        scanf("%lld", &bounty);
        if (bounty > 500000000) {
            printf("Your character = Jinbe\n");
        } else {
            printf("Your character = Franky\n");
        }
    } else {
        printf("Your character = Brook\n");
    }

    return 0;
}