#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
    char buf[2048];

    printf("Enter something: ");
    fflush(stdout);
    fgets(buf, sizeof buf, stdin);

    char *token;
    char *s[128];
    int i = 0;
    if ((token = strtok(buf, " \t\n\r")) != NULL) {
        do {
            printf("%s\n", token);
            s[i] = token;
            i++;
        } while ((token = strtok(NULL, " \t\n\r")) != NULL);
    }
    s[i] = '\0';
    execvp(s[0], argv);
}