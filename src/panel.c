#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <signal.h>
#include "../C2/string_lk.h"
#include "../C2/panel.h"
#include "../C2/ascii.h"

/////////////////////
// C2 INTERFACE ////
///////////////////

void handle_sigint(int sig) 
{ 
    printf("Type \"exit\" to quit BackComputer\n\n"); 
} 



char *get_hostname()
{
    char *hostname = malloc(10);

    gethostname(hostname, 10);

    return(hostname);
}






void interface_cli(void) 
{
    
    int exit = 0;
    char *str = malloc(sizeof(str));
    char *text = color(" In search of incredible", "red");
    char *hostname = get_hostname();

    char *prompt = malloc(256);

    char **buffer = NULL;
    
    
    sprintf(prompt, "%s@C2-$> ", color(hostname, "cyan"));
    ascii();
    printf("\t\t\t\t%s\n", text);
    free(text);

    signal(SIGINT, handle_sigint); 
   

    

    printf("%d\n", split_arguments("Hello world", buffer));

    while(exit == 0) {
    
        str = readline(prompt);
        if(strcmp(str, "Bryton\0") == 0) {
            printf("ok");
        } else if(strcmp(str, "exit\0") == 0) {
            printf("%s", color("Thanks for using BackComputer !!!", "green"));
            exit = 1;
        }
    }

    free(prompt);
    free(hostname);
    free(str);

    
}

