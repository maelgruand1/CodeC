#include <stdio.h>
#include <string.h>

int main()
{
    char *username = "maelgruand";
    char *user = "Mael";
    char *password = "23092006";

    printf("Enter your username: ");
    char input_username[100];
    scanf("%s", input_username);

    printf("Enter your password: ");
    char input_password[100];
    scanf("%s", input_password);
    char *verifed = verifUser(username, user, password, input_username, input_password);
    if (verifed == "yes"){
        printf("Welcome %s\n", user);
    }
    else{
        printf("Invalid username or password\n");
    }
    return 0;
}
char *verifUser(username, user, password, input_username, input_password)
{

    if (strcmp(username, input_username) == 0 && strcmp(password, input_password) == 0)
    {
        printf("Welcome %s\n", user);
    }
    else
    {
        printf("Invalid username or password\n");
        return "no";
    }
    return "yes";
}
