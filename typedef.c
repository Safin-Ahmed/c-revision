#include<stdio.h>
typedef struct {
    char name[25];
    char password[12];
    int id;
} User;
int main(){
    // typedef = reserved keyword that gives existing datatype a nickname
    User user1 = {"Safin", "Alfa2021!", 123456};
    printf("Username: %s\n", user1.name);
    printf("Password: %s\n", user1.password);
    printf("User Id: %d\n", user1.id);
    return 0;
}