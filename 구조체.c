//구조체
#include <stdio.h>
struct Student {
    char gender;
    int age;
};
int main(){
    struct Student s = {'F', 21};
    s.gender = 'M';
    printf("%c", s.gender);
    printf("%d", s.age);
    return 0;
}

//typedef
#include <stdio.h>

typedef struct Student{
    char gender;
    int age;
} S;

int main(){
    S s = {'F', 21};
    s.gender = 'M';
    printf("%c", s.gender);
    printf("%d", s.age);
    return 0;
}