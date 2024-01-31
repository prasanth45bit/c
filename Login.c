#include <stdio.h>
#include <string.h>
int main() {
    char username[20];
    char password[20];
    char validUsername[] = "user123";
    char validPassword[] = "pass123";
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0)
    {
        printf("Login successful!\n");
    }
    else 
    {
        printf("Invalid username or password. Please try again.\n");
    }
 return 0;
}
