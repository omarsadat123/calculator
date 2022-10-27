#include <stdio.h>


void splash(void)
{

    int item,con;

       menu();             // menu header file

    printf("\n\t\t   Choosing the item = ");
    scanf("%d",&item);

    switch(item)
    {
    case 1:

            system("cls");

       breakfast();
                              // breakfast header file
             break;



     case 2:

          system("cls");

          snacks();

     break;


     case 3:


{
                                system("cls");
            int x,y,z,i;
            int total[11],total1=0;

            printf("\n          -------------------------------------\n");
          printf("                    LUNCH ITEM\n");
        printf("          -------------------------------------\n\n");

        printf("            RICE                                     BHARTA        \n");
        printf("          -------                                   --------      \n");
      printf("   <1> Plain Rice(per plate)--      30/-      <4> Alu bharta(per piece)--       15/-\n");
      printf("   <2> Polaue(per plate) --         50/-      <5> Chingri bharta(per piece)--   25/-\n");
      printf("   <3> Vegetable Polaue(per plate)--40/-      <6> Kala bharta(per piece)  --    10/- \n\n\n");


       printf("          VEGETABLE + FISH                        MEAT        \n");
        printf("         -----------------                       ------      \n");
      printf("   <7> Begun Bhajee(per plate)--    10/-      <12> Chicken curry(per plate)-- 100/-\n");
      printf("   <8> Alu Bhajee(per plate) --     20/-      <13> Mutton(per plate)--        200/-\n");
      printf("   <9> Kola curry(per plate) --     30/-      <14> Beef(per plate) --         150/-\n");
      printf("  <10> Hilsha Curry(per piece) --   200/-\n");
      printf("  <11> Vhatki(per piece)  --        150/-\n\n");
      printf("            <15> Drinks(coca cola)  30/-\n");
      printf("      \n            <00> Main menu \n");
         printf("      \n            <0>EXIT \n\n");
    //use structure to fixed price any order
     //   struct price price1;
      //  price1.

       for(i=1;i<=10;i++)
        {
        printf("\tSelect option %d    = ",i);
        scanf("%d",&x);
        if(x==00)                   //goto main
            system("cls");
          menu();           //main menu for goto use

        while(x!=0)
          {
                 printf("\t       how much = ");
                 scanf("%d",&y);

            if(x==1)
                z=30;
            if(x==2)
                z=50;
            if(x==3)
                z=40;
            if(x==4)
                z=15;
            if(x==5)
                z=25;
            if(x==6)
                z=10;
            if(x==7)
                z=10;
            if(x==8)
                z=20;
            if(x==9)
                z=30;
            if(x==10)
                z=200;
            if(x==11)
                z=150;
            if(x==12)
                z=40;
            if(x==13)
                z=100;
            if(x==13)
                z=200;
            if(x==14)
                z=150;
            if(x==15)
                z=30;
           total[i]=z*y;
           total1=total1+total[i];
           total[i]++;
           break;
        }



         while(x==0)
        {

            printf("\t Your Total cost     =%d",total1);
            sleep(3);
             return 0;
             getch();
        }

         }



    getch();
}
    break;

     case 4:

        deliver();
        break;

    default:
        printf(" <3>Alu parata");
        break;

    }
     getch();

}






