#include<stdio.h>
void breakfast(void)
{

 int cost=0,order,much,cost1=0,cost2=0,con;

       design();


      printf("\n    which type of food are you want to like ? \n");
      printf("\n\n       Select your option = ");
      scanf("%d",&order);
      if(order==8){
            system("cls");

          menu();

      }

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
        menu();

 another: {
                    system("cls");

               design();

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
         menu();

          }

    another1:   {
                      system("cls");

                      design();

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
        menu();

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

            int quantity,backmoney;
            printf("\n   Input money = ");
            scanf("%d",&quantity);
            if(quantity > fcost)
            {
                backmoney=quantity-fcost;
                printf("    \ntake this change money %d taka",backmoney);
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

}
