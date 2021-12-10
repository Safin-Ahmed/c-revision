#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char name[25]; // bytes
    printf("What's Your Name kid?\n");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = "\0";
    printf("%s, How Old Are You?\n", name);
    scanf("%d", &age);
    printf("%s, You are %d years old", name, age);
    return 0;
}