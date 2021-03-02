#include <stdio.h>


int main() {
    int age = 10;
    if (age < 18 && age >= 0) {
        printf("幼儿\n");
    } else if (age > 18 && age < 28) {
        printf("青年\n");
    } else if (age >= 28 && age < 50) {
        printf("老年\n");
    } else {
        printf("太老了\n");
    }

}
