#include<stdio.h>
#include<string.h>
struct Student {
    char name[12];
    float gpa;
};
int main(){
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Stewart", 2.0};
    return 0;
}