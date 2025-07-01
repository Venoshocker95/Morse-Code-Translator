#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void getMsg();
void translateMsg(char[], short);

int main()
{
    //Acquisisce la frase da tradurre in codice morse

    getMsg();

    printf("\nPress Enter to quit...");
    getchar();

    return 0;
}


void getMsg()
{
    char buffer[100];

    printf("Enter sentence to translate: ");
    fgets(buffer, sizeof(buffer), stdin);

    short lenght = strlen(buffer);

    //Allocazione dinamica della memoria (lenght + 1 per tenere anche conto di \0)
    char *usrMsg = malloc((lenght + 1) * sizeof(char));
    if(usrMsg == NULL)
    {
        printf("MEMORY ALLOCATION FAILED");
        exit;
    }
    else
    {
        strcpy(usrMsg, buffer);
        lenght = strlen(usrMsg);

        translateMsg(usrMsg, lenght);
    }

}


void translateMsg(char usrMsg[], short lenght)
{
    for(int i = 0; i < lenght; i++)
    {
        usrMsg[i] = toupper(usrMsg[i]);
    }

    for(int i = 0; i < lenght; i++)
    {
        if(usrMsg[i] == ' ')
        {
            printf("\n");
            Sleep(910);
        }

        switch (usrMsg[i])
        {
        case 'A':
            printf(".- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case 'B':
            printf("-... ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case 'C':
            printf("-.-. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case 'D':
            printf("-.. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case 'E':
            printf(". ");
            Sleep(390);
            Beep(550,130);
            break;
        case 'F':
            printf("..-. ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case 'G':
            printf("--. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case 'H':
            printf(".... ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case 'I':
            printf(".. ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case 'J':
            printf(".--- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case 'K':
            printf("-.- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case 'L':
            printf(".-.. ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case 'M':
            printf("-- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case 'N':
            printf("-. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case 'O':
            printf("--- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case 'P':
            printf(".--. ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case 'Q':
            printf("--.- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case 'R':
            printf(".-. ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case 'S':
            printf("... ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case 'T':
            printf("- ");
            Sleep(390);
            Beep(550,390);
            break;
        case 'U':
            printf("..- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case 'V':
            printf("...- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case 'W':
            printf(".-- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case 'X':
            printf("-..- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case 'Y':
            printf("-.-- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case 'Z':
        printf("--.. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case '0':
            printf("----- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case '1':
            printf(".---- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case '2':
            printf("..--- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case '3':
            printf("...-- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            break;
        case '4':
            printf("....- ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        case '5':
            printf("..... ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case '6':
            printf("-.... ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case '7':
            printf("--... ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case '8':
            printf("---.. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            break;
        case '9':
            printf("----. ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case '+':
            printf(".-.-. ");
            Sleep(390);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            break;
        case '-':
            printf("-...- ");
            Sleep(390);
            Beep(550,390);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,130);
            Sleep(130);
            Beep(550,390);
            break;
        default:
            break;
        }
    }

    
}