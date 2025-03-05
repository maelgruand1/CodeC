# CodeC

**_Example of the code_**
```C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verifUser(const char *username, const char *password, const char *input_username, const char *input_password);

int main()
{
    const char *username = "maelgruand";
    const char *user = "Mael";
    const char *password = "23092006";

    printf("Enter your username: ");
    char input_username[100];
    fgets(input_username, sizeof(input_username), stdin);
    input_username[strcspn(input_username, "\n")] = 0; // Remove newline

    printf("Enter your password: ");
    char input_password[100];
    fgets(input_password, sizeof(input_password), stdin);
    input_password[strcspn(input_password, "\n")] = 0; // Remove newline

    if (verifUser(username, password, input_username, input_password))
    {
        printf("Welcome %s\n", user);
    }
    else
    {
        printf("Invalid username or password\n");
    }

    return 0;
}

bool verifUser(const char *username, const char *password, const char *input_username, const char *input_password)
{
    if (strcmp(username, input_username) == 0 && strcmp(password, input_password) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

```