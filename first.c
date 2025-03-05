#include <stdio.h>

int main()
{
    char *username = "Mael";
    char *password = "1234";

    printf("Enter your username: ");
    char input_username[100];
    scanf("%s", input_username);

    printf("Enter your password: ");
    char input_password[100];
    scanf("%s", input_password);

    if (strcmp(username, input_username) == 0 && strcmp(password, input_password) == 0)
    {
        printf("Welcome %s\n", username);
    }
    else
    {
        printf("Invalid username or password\n");
    }
    return 0;
}
