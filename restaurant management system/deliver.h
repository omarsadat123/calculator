#include<stdio.h>
struct person
{
    char name[50];
    int phone_number[10];
    char address[100];

};
void deliver(void)
{
    system("cls");
    struct person person1;
    printf("enter name= ");
    scanf("%s",&person1.name);
      printf("enter phone_number= ");
    scanf("%d",&person1.phone_number);
      printf("enter address= ");
    scanf("%s",&person1.address);

    printf("\n\n\n Name='%s'\n",person1.name);
    printf(" Number='%d'\n",person1.phone_number);
    printf(" Address='%s'\n",person1.address);


    return 0;
}
