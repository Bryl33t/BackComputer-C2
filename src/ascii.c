#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../C2/ascii.h"


char *color(char *str, char *color)
{
    char *output = malloc(4096);
    if(strcmp(color, "red") == 0) {
        sprintf(output, "\e[31m%s\e[0m", str);
    } else if(strcmp(color, "blue") == 0) {
        sprintf(output, "\e[34m%s\e[0m", str);
    } else if(strcmp(color, "magenta") == 0) {
        sprintf(output, "\e[35m%s\e[0m", str);
        
    } else if(strcmp(color, "cyan") == 0) {
        sprintf(output, "\e[36m%s\e[0m", str);
        
    } else if(strcmp(color, "green") == 0) {
        sprintf(output, "\e[92m%s\e[0m", str);
    }

    output[4096] = '\0';


    return(output);

}


void ascii()
{


    char *str_ascii = R"EOF(
        
 888888ba                    dP        a88888b.                                          dP                     
 88    `8b                   88       d8'   `88                                          88                     
a88aaaa8P' .d8888b. .d8888b. 88  .dP  88        .d8888b. 88d8b.d8b.  88d888b. dP    dP d8888P .d8888b. 88d888b. (v1)
 88   `8b. 88'  `88 88'  `"" 88888"   88        88'  `88 88'`88'`88  88'  `88 88    88   88   88ooood8 88'  `88 
 88    .88 88.  .88 88.  ... 88  `8b. Y8.   .88 88.  .88 88  88  88  88.  .88 88.  .88   88   88.  ... 88       
 88888888P `88888P8 `88888P' dP   `YP  Y88888P' `88888P' dP  dP  dP  88Y888P' `88888P'   dP   `88888P' dP       
oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo~88~oooooooooooooooooooooooooooooooooooooooo 
                                                                     dP   
                                    (Symlink && Unam3dd)
        
        
)EOF";

printf("%s", color(str_ascii, "cyan"));


}