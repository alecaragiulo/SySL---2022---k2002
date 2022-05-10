#include <stdio.h>
#include <ctype.h>

//nombre: Alessandro 
//apellido: Caragiulo

int main () {

    char caracter;

    printf("ingrese texto");
    caracter = getchar ();

    while (caracter !='\n')
    {
        if (isalpha(caracter)){

            if (islower(caracter))
                printf("%c",toupper(caracter));


            else
                printf("%c",tolower(caracter));      
        }

        if (!isalnum(caracter))
            printf("%c",caracter);
        
        caracter = getchar ();
    }

return 0;
}