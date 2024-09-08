#include <stdio.h>
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1;

    strcpy(p1.name, "John Doe");
    p1.age = 30;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
