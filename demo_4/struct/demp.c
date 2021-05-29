#include <stdio.h>
#include <string.h>
struct Birthday {
    int day;
    int month;
    int year;
} b1 = {15, 7, 2000};

struct User {
    int age;
    char sex;
    char *name;
    struct Birthday birthday;
};

struct User genUser(int age, char sex, char *name, struct Birthday birthday) {
    struct User user;
    user.age = age;
    user.sex = sex;
    user.name = name;
    user.birthday = birthday;
    return user;
}

int main(int size, char *args[]) {

    struct User user = genUser(18, '1', "like", b1);
    printf("user name : %s\n", user.name);
    void *p = &user;
    printf("%p", p);

}
