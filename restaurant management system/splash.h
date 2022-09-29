#include <stdio.h>


int main(void)
{

    int item,con;
    main:   printf("     \n\t\t    WELLCOME TO MAIN MENU.");
    printf("\n\t\t-------------------------------------\n");
       printf("\n\t\t <1> Breakfast");
    printf("\n\t\t <2> Snacks");
    printf("\n\t\t <3> lunch");
    printf("\n\t\t <4> Dinner\n");
    printf("\n\t\t   Choosing the item = ");
    scanf("%d",&item);

    switch(item)
    {
    case 1:
        system("cls");
        int cost=0,order,much,cost1=0,cost2=0;
        printf("\n          -------------------------------------\n");
          printf("                    BREAKFAST\n");
        printf("          -------------------------------------\n\n");
      printf("                <1> Parata            -----10\n");
      printf("                <2> Vegetable vaggi   ----10\n");
      printf("                <3> Alu parata       ------10\n");
      printf("                <4> Chicken parata   ------20\n");
      printf("                <5> Toast jam jelly    -----5\n");
      printf("                <6> Eggs in any style  ----15\n");
      printf("                <7> Bread + banana + jelly--20\n");
      printf("                <8> Main menu \n");
      printf("\n    which type of food are you want to like ? \n");
      printf("\n\n       Select your option = ");
      scanf("%d",&order);
      if(order==8){
            system("cls");
      goto main;}

      printf("      \t how much = ");
      scanf("%d",&much);
      if(order==1)
        cost=cost+(10*much);
    if(order==2)
        cost=cost+(10*much);
    if(order==3)
        cost=cost+(10*much);
    if(order==4)
        cost=cost+(20*much);
    if(order==5)
        cost=cost+(5*much);
    if(order==6)
        cost=cost+(15*much);
    if(order==7)
        cost=cost+(20*much);


       // int con;
     printf("      \t\t\n   You want to take something else!! please choose option.. ");
    printf("         \t\n\n   if\n     yes= 1\n\tNo= 2 \n Main menu= 8   Choice= ");
    scanf("%d",&con);
     if(con==2)
            goto last;

    if(con==1)
     goto another;
      if (con==8)
        system("cls");
        goto main;

 another: {
                    system("cls");

         printf("\n          -------------------------------------\n");
          printf("                    BREAKFAST\n");
        printf("          -------------------------------------\n\n");
      printf("                <1> Parata            -----10\n");
      printf("                <2> Vegetable vaggi   ----10\n");
      printf("                <3> Alu parata       ------10\n");
      printf("                <4> Chicken parata   ------20\n");
      printf("                <5> Toast jam jelly    -----5\n");
      printf("                <6> Eggs in any style  ----15\n");
      printf("                <7> Bread + banana + jelly--20\n");
      printf("                <8> Main menu \n");
      printf("\n    which type of food are you want to like ? \n");
      printf("\n\n       Select your option = ");
      scanf("%d",& order);
      printf("      \t how much = ");
      scanf("%d",& much);
      if(order==1)
        cost1=cost1+(10*much);
    if(order==2)
        cost1=cost1+(10*much);
    if(order==3)
        cost1=cost1+(10*much);
    if(order==4)
        cost1=cost1+(20*much);
    if(order==5)
        cost1=cost1+(5*much);
    if(order==6)
        cost1=cost1+(15*much);
    if(order==7)
        cost1=cost1+(20*much);


       // int opt;
     printf("      \t\t\n   You want to take something else!! please choose option.. ");
    printf("         \t\n\n   if\n     yes= 1\n\tNo= 2 \n Main menu= 8   Choice= ");
    scanf("%d",&con);
    if(con==1)

        goto another1;
     if(con==2)
           goto last;
      if (con==8)
        system("cls");
        goto main;

          }

    another1:   {
                      system("cls");

           printf("\n          -------------------------------------\n");
          printf("                    BREAKFAST\n");
        printf("          -------------------------------------\n\n");
      printf("                <1> Parata            -----10\n");
      printf("                <2> Vegetable vaggi   ----10\n");
      printf("                <3> Alu parata       ------10\n");
      printf("                <4> Chicken parata   ------20\n");
      printf("                <5> Toast jam jelly    -----5\n");
      printf("                <6> Eggs in any style  ----15\n");
      printf("                <7> Bread + banana + jelly--20\n");
      printf("                <8> Main menu \n");
      printf("\n    which type of food are you want to like ? \n");
      printf("\n\n       Select your option = ");
      scanf("%d",&order);
      printf("      \t how much = ");
      scanf("%d",&much);
      if(order==1)
        cost2=cost2+(10*much);
    if(order==2)
       cost2=cost2+(10*much);
    if(order==3)
        cost2=cost2+(10*much);
    if(order==4)
        cost2=cost2+(20*much);
    if(order==5)
        cost2=cost2+(5*much);
    if(order==6)
       cost2=cost2+(15*much);
    if(order==7)
        cost2=cost2+(20*much);


       // int con;
     printf("      \t\t\n   You want to take something else!! please choose option.. ");
    printf("         \t\n\n   if\n     yes= 1\n\tNo= 2 \n Main menu= 8   Choice= ");
    scanf("%d",&con);
    //if(opt==1)
   //  system("cls");
     //   goto another;
     if(con==2)

            goto last;
      if (con==8)
        system("cls");
        goto main;

          }

   {
               int fcost,pay;

 last:          fcost=cost+cost1+cost2;
                    system("cls\n\n\n\n");
                    printf("\n   sir,your food price %d taka.\n",fcost);
        printf("\n   please pay this %d taka.\n",fcost);
         printf("\n   How do you want to payment ?\n ");
        printf(" <1> Cash\n  <2> Bikash\n  <3> Dbbl card\n");
        printf("\n   **Choose your payment method** = ");
        scanf("%d",&pay);
         if(pay==1)
            goto abc;
              if(pay==2)
            goto bka;
            if(pay==3)
            goto dbl;

 abc: {     printf("\n    please insert the money into the black box");

            int quantity,back;
            printf("\n   Input money = ");
            scanf("%d",&quantity);
            if(quantity > fcost)
            {
                back=quantity-fcost;
                printf("    \ntake this change money %d taka",back);
               goto tbl;
            }
            if(quantity==fcost)
            {
                printf("   Thank you sir \n   your payment is completed");
                goto tbl;
            }
     }

      bka:  {
              int bik_no[12],otp[5];
             printf("Please enter your bikash no= ");
                scanf("%d",&bik_no);
                printf("\nPlease check your phone\n enter your 4 digit OTP = ");
                scanf("%d",&otp);
                printf("%d taka has been deducted from your balance\n",fcost);
                printf("Thank you sir your payment is completed ");
                goto tbl;
            }

      dbl:  {
                int pass[5];
                printf("\t\t\t_\n");
                printf("please swipe your card |_| ");
                printf("\n and enter the password = ");
                scanf("%d",pass);
                printf(" %d taka has been deducted from your balance\n",fcost);
                printf("Thank you sir your payment is completed ");
                goto tbl;
            }

    }

     tbl:  {

    int table_no;
    printf("\n\n   Sir would you please tell me your table-no = ");
    scanf("%d",&table_no);
    printf("\n   Thank you sir your order is complete.\n");
    printf("\n   Please wait a few minute and enjoy this food.\n\n");
   }

     break;

     case 2:

          system("cls");
      printf("\n  @ Welcome to HUNGER PANGS restaurant @\n");
    printf("\n\n   I am a Robot. Use me to do any order.\n");
    printf("\n   list of Restaurant foods\n");

    printf("\n  @Snacks food list      price per food\n");
    printf("    ---------------      ---------------\n");
    printf("\n    1.General Burger ----BDT-150");
    printf("\n    2.Chicken Burger ----BDT-200");
    printf("\n    3.pizza\t --------BDT-800");
    printf("\n    4.Sandwich\t     ----BDT-150");
    printf("\n    5.Chicken fry    ----BDT-50");
    printf("\n    6.Hot coffee     ----BDT-100");
    printf("\n    7.Cold coffee    ----BDT-120");
    printf("\n    8.Drinks(red water)--BDT-50");
    printf("\n\n    Sir,what types of food do you order?");




    int x,y,price1=0,price2=0,price3=0,price4=0,
            price5=0;
    printf("\n\n   1\t2\t3\t4\t5\t6\t7\t8\n\n   Sir,Choice your food option= ");
    scanf("\n%d",&x);
    printf("\n   How many would you you like to have? = ");
    scanf("%d",&y);
    if(x==1)
        price1=price1+(150*y);
    if(x==2)
        price1=price1+(200*y);
    if(x==3)
        price1=price1+(800*y);
    if(x==4)
        price1=price1+(150*y);
    if(x==5)
        price1=price1+(50*y);
    if(x==6)
        price1=price1+(100*y);
    if(x==7)
        price1=price1+(120*y);
    if(x==8)
        price1=price1+(50*y);
    printf("\n   You want to take something else!! please choose option.. ");
    printf("\n\n   if\n     yes= 1\n     No= 2 \n\n   Choice= ");
    scanf("%d",&con);
    if(con==1)
        goto k;
    if(con==2)
        goto l;


    {
k:    system("cls");
      printf("\n  @Snacks food list      price per food\n");
    printf("    ---------------      ---------------\n");
    printf("\n    1.General Burger ----BDT-150");
    printf("\n    2.Chicken Burger ----BDT-200");
    printf("\n    3.pizza\t --------BDT-800");
    printf("\n    4.Sandwich\t     ----BDT-150");
    printf("\n    5.Chicken fry    ----BDT-50");
    printf("\n    6.Hot coffee     ----BDT-100");
    printf("\n    7.Cold coffee    ----BDT-120");
    printf("\n    8.Drinks(red water)--BDT-50");
    printf("\n\n    Sir,what types of food do you order?");
        printf("\n\n   1\t2\t3\t4\t5\t6\t7\t8\n\n   Sir,Choice your option= ");
        scanf("\n%d",&x);
        printf("\n   How many would you you like to have? = ");
        scanf("%d",&y);
        if(x==1)
            price2=price2+(150*y);
        if(x==2)
            price2=price2+(200*y);
        if(x==3)
            price2=price2+(800*y);
        if(x==4)
            price2=price2+(150*y);
        if(x==5)
            price2=price2+(50*y);
        if(x==6)
            price2=price2+(100*y);
        if(x==7)
            price2=price2+(120*y);
        if(x==8)
            price2=price2+(50*y);
        printf("\nYou want to take something else!! please choose option.. ");
        printf("\n  if yes= 1\n No= 2 \nChoice= ");
        scanf("%d",&con);
        if(con==1)
            goto m;
        if(con==2)
            goto l;
    }
    {
        //int y;
m:       system("cls");
      printf("\n  @Snacks food list      price per food\n");
    printf("    ---------------      ---------------\n");
    printf("\n    1.General Burger ----BDT-150");
    printf("\n    2.Chicken Burger ----BDT-200");
    printf("\n    3.pizza\t --------BDT-800");
    printf("\n    4.Sandwich\t     ----BDT-150");
    printf("\n    5.Chicken fry    ----BDT-50");
    printf("\n    6.Hot coffee     ----BDT-100");
    printf("\n    7.Cold coffee    ----BDT-120");
    printf("\n    8.Drinks(red water)--BDT-50");
    printf("\n\n    Sir,what types of food do you order?");
        printf("\n\n   1\t2\t3\t4\t5\t6\t7\t8\n\n   Sir,Choice your option= ");
        scanf("\n%d",&x);
        printf("\n   How many would you you like to have? = ");
        scanf("%d",&y);
        if(x==1)
            price3=price3+(150*y);
        if(x==2)
            price3=price3+(200*y);
        if(x==3)
            price3=price3+(800*y);
        if(x==4)
            price3=price3+(150*y);
        if(x==5)
            price3=price3+(50*y);
        if(x==6)
            price3=price3+(100*y);
        if(x==7)
            price3=price3+(120*y);
        if(x==8)
            price3=price3+(50*y);
        printf("\nYou want to take something else!! please choose option.. ");
        printf("\n  if yes= 1\n No= 2 \nChoice= ");
        scanf("%d",&con);
        if(con==1)
            goto n;
        if(con==2)
            goto l;
    }
    {
        //int y;
n:       system("cls");
      printf("\n  @Snacks food list      price per food\n");
    printf("    ---------------      ---------------\n");
    printf("\n    1.General Burger ----BDT-150");
    printf("\n    2.Chicken Burger ----BDT-200");
    printf("\n    3.pizza\t --------BDT-800");
    printf("\n    4.Sandwich\t     ----BDT-150");
    printf("\n    5.Chicken fry    ----BDT-50");
    printf("\n    6.Hot coffee     ----BDT-100");
    printf("\n    7.Cold coffee    ----BDT-120");
    printf("\n    8.Drinks(red water)--BDT-50");
    printf("\n\n    Sir,what types of food do you order?");
        printf("\n\n   1\t2\t3\t4\t5\t6\t7\t8\n\n   Sir,Choice your option= ");
        scanf("\n%d",&x);
        printf("\n   How many would you you like to have? = ");
        scanf("%d",&y);
        if(x==1)
            price4=price4+(150*y);
        if(x==2)
            price4=price4+(200*y);
        if(x==3)
            price4=price4+(800*y);
        if(x==4)
            price4=price4+(150*y);
        if(x==5)
            price4=price4+(50*y);
        if(x==6)
            price4=price4+(100*y);
        if(x==7)
            price4=price4+(120*y);
        if(x==8)
            price4=price4+(50*y);
        printf("\nYou want to take something else!! please choose option.. ");
        printf("\n  if yes= 1\n No= 2 \nChoice= ");
        scanf("%d",&con);
        if(con==1)
            goto u;
        if(con==2)
            goto l;

    }
    {
       // int y;
u:       system("cls");
      printf("\n  @Snacks food list      price per food\n");
    printf("    ---------------      ---------------\n");
    printf("\n    1.General Burger ----BDT-150");
    printf("\n    2.Chicken Burger ----BDT-200");
    printf("\n    3.pizza\t --------BDT-800");
    printf("\n    4.Sandwich\t     ----BDT-150");
    printf("\n    5.Chicken fry    ----BDT-50");
    printf("\n    6.Hot coffee     ----BDT-100");
    printf("\n    7.Cold coffee    ----BDT-120");
    printf("\n    8.Drinks(red water)--BDT-50");
    printf("\n\n    Sir,what types of food do you order?");
        printf("\n\n   1\t2\t3\t4\t5\t6\t7\t8\n\n   Sir,Choice your option= ");
        scanf("\n%d",&x);
        printf("\n   How many would you you like to have? = ");
        scanf("%d",&y);
        if(x==1)
            price5=price5+(150*y);
        if(x==2)
            price5=price5+(200*y);
        if(x==3)
            price5=price5+(800*y);
        if(x==4)
            price5=price5+(150*y);
        if(x==5)
            price5=price5+(50*y);
        if(x==6)
            price5=price5+(100*y);
        if(x==7)
            price5=price5+(120*y);
        if(x==8)
            price5=price5+(50*y);
        printf("\nYou want to take something else!! please choose option.. ");
        printf("\n  if yes= 1\n No= 2 \nChoice= ");
        scanf("%d",&con);
        /*  if(con==1)             //to use next step avoid
              goto v;*/           //  this two comment;
        if(con==2)
            goto l;
    }
    //if(con==2)
    {
        int total,pay;
l:        system("cls");
        total=(price1+price2+price3+price4);
        printf("\n   sir,your food price %d taka.\n",total);
        printf("\n   please pay this %d taka.\n",total);
        // system("start https://www.youtube.com/watch?v=OeAn-DoW4f0 ");
        printf("\n   How do you want to payment ?\n ");
        printf(" <1> Cash\n  <2> Bikash\n  <3> Dbbl card\n");
        printf("\n   **Choose your payment method** = ");
        scanf("%d",&pay);
        if(pay==1)
            goto ab;
         if(pay==2)
            goto bk;
            if (pay==3)
                goto db;

       ab: {     printf("\n    please insert the money into the black box");
            int   quantity_money,backmoney;
            printf("\n   Input money = ");
            scanf("%d",&quantity_money);
            if(quantity_money>total)
            {
                backmoney = quantity_money-total;
                printf("    \ntake this change money %d taka", backmoney);
                goto tb;
            }
            if(quantity_money==total)
            {
                printf("   Thank you sir \n   your payment is completed");
                goto tb;
            }
     }

       bk:  {
              int bik_no[12],otp[5];
             printf("\t\tPlease enter your bikash no= ");
                scanf("%d",&bik_no);
                printf("\n\tPlease check your phone\n\t\t enter your 4 digit OTP = ");
                scanf("%d",&otp);
                printf("\n\t\t%d taka has been deducted from your balance\n",total);
                printf("\t\t\tThank you sir your payment is completed ");
                goto tb;
            }

       db:  {
                int pass[5];
                printf("\t\t\t_\n");
                printf("please swipe your card |_| ");
                printf("\n and enter the password = ");
                scanf("%d",pass);
                printf("<< %d >>taka has been deducted from your balance\n",total);
                printf("Thank you sir your payment is completed ");
                goto tb;
            }

      }

  tb:  {

    int table_no;
    printf("\n\n   Sir would you please tell me your table-no = ");
    scanf("%d",&table_no);
    printf("\n   Thank you sir your order is complete.\n");
    printf("\n   Please wait a few minute and enjoy this food.\n\n");
   }
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
           goto main;           //main menu for goto use

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
    default:
        printf(" <3>Alu parata");
        break;

    }
     getch();
}






