#include<stdio.h>
void snacks(void)
{
                              // payment header file
     payment();

    printf("\n\n    Sir,what types of food do you order?");




    int x,y,price1=0,price2=0,price3=0,price4=0,
            price5=0,con;
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

     payment();              // payment header file

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

       payment();              // payment header file

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

      payment();              // payment header file

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

    payment();              // payment header file


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
                printf("\n\n  enter the password = ");
                scanf("%d",pass);
                printf("<< %d >>taka has been deducted from your balance\n",total);
                printf("Thank you sir your payment is completed ");
                goto tb;

            }

      }

  int table_no;
                 {
        tb:              printf("\n\n   Sir would you please tell me your table-no = ");
    scanf("%d",&table_no);
    printf("\n   Thank you sir your order is complete.\n");
    printf("\n   Please wait a few minute and enjoy this food.\n\n");

                 }




}

