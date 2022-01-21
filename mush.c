#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void)
{
    char buf[2048];

    printf("Enter something: ");
    fflush(stdout);
    fgets(buf, sizeof buf, stdin);

    char *token;
    char *s;
    int i = 0;
    if ((token = strtok(buf, " \t\n\r")) != NULL) {
        do {
            printf("%s\n", token);
            s = token;
            printf("%s", s);
          

        } while ((token = strtok(NULL, " \t\n\r")) != NULL);
    }

}