#include <stdio.h>
#include <string.h>
#include <dos.h>


void login(void)

{
    int i=0;
    int j=3;
    char username[15];
    char password[12];

    while(i<3)                     //for 3 times repeatation
    {
        printf("\n\n\tRemaining login attemps: %d\n",j--);
        printf(" \n=====================LOGIN========================\n\n");
        printf("            Enter your username:");



        gets(username);


        printf("            Enter your password:");

        gets(password);

        if(strcmp(username,"user")==0 && strcmp(password,"pass")==0)   //string comparision
        {
            system("cls");

            printf("\n\t======================================");
            printf("\n\t=                                     =");
            printf("\n\t=   .......Login Successful.....      =");
            printf("\n\t=                                     =");
            printf("\n\t=======================================");
            sleep(2);
            system("cls");
           splash();
            break;

        }
        else if((strcmp(username,"user")!=0 || strcmp(password,"pass")!=0)&& i<2)
        {
            system("cls");
            printf("\n\t\tFailed.\n\t Try again..");
            i++;
        }
           else if((strcmp(username,"user")!=0 || strcmp(password,"pass")!=0)&& i<3)
           {

            system("cls");
            printf("\t\nWrong password.\n\tPlease try again later....");
            printf("\t\n=================Thank you==================");
            sleep(2);
            break;
           }
    }





    return 0;

}
