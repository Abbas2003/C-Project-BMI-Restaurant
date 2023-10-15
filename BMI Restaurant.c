#include <stdio.h>			//header files
#include <ctype.h>
#include<conio.h>

void weght();
void bfast();		// prototype's
void lunch();
void dinner();
void m_m();
void exit();

int num;		//global variable
float price;
float total;
float tax;
float finaltotal;
char choice;
char name;
int weight;
int again;




void main()
{
clrscr();
textcolor(BLUE);
cprintf("\n\n\n\n\n\n\n\n\n\n\n\n                             Enter your Name : ");
scanf("%s",&name);
//printf("enter your weight ; ");
//scanf("%d",&weight);
//printf("your name ; ",name);            //do't know no importance
//printf("your weight ; ",weight);
	m_m();
}


void m_m()  // main menu screen
{

	char choice = ' ' ; //local variable



  printf("\n\n\t\t\t   Welcome to HABBAR Restaurant.\n");
  printf("\t\t\t  +============================+          \n\n");
  printf("  && Please select the meal that you would like to purchase. && \n\n");
  printf("\t\t      [A] weight 20 to 50\n");
  printf("\t\t      [B] weight 50 to 80\n");
  printf("\t\t      [C] weight 80 to 120\n");
  printf("\t\t      [D] Exit\n\n");
  printf("\n\nEnter your choice here : ");
  scanf("%c", &choice);
  clrscr();


		{
		if (toupper(choice) == 'A' )
		  bfast();
		else
			if (toupper(choice) == 'B')
				  lunch();
			else
				if (toupper(choice) == 'C')
					  dinner();
				else
					  if (toupper(choice) == 'D')
						  exit();
					  else
						  if (toupper(choice) != 'A' , 'B' , 'C' , 'D')
						  {
							  m_m();
						  }
	}


}
void bfast() //Breakfast Menu Screen
{
  int choice = 0; //local variables
  int quantity = 0;
  int again = 0;

  fflush(stdin);
  printf("\n\n\t\t\t  Welcome to HABBAR Restaurant.         \n ");
  printf("\t\t\t +============================+          \n\n");
  printf("\t\t\t  $  Weight 20 to 50 Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Pizza - Rs 800.00\n");
  printf("\t\t   [2] Zinger Burger - Rs 350.00\n");
  printf("\t\t   [3] Stake - Rs 600.00\n");


  printf("\n\nEnter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 800.00 * quantity ;
	  tax = 6*total/100;
	  finaltotal=total+tax;
	   printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n\n\n ", total);
	   printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			clrscr();

			 if (again == 1 )
				bfast();
			 else
				 if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\n\t\tSorry Invalid Decision Entered\n\n");
				 exit();
				}
      }

	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 350.00 * quantity ;
		  tax = 6*total/100;
		  finaltotal = total+tax;
		  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n ", total);
		    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			scanf("%d", &again);
			clrscr();

			 if (again == 1 )
				bfast();
			 else if (again == 2 )
				m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\t\t\t  Sorry Invalid Decision Entered\n");
				 exit();
				}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 600.00 * quantity ;
			  tax = 6*total/100;
			  finaltotal = total+tax;
			  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n ", total);
		       printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
			   scanf("%d", &again);
			   clrscr();

			  if (again == 1 )
				{
				bfast();
				 }
			  else
				  if (again == 2 )
				{
				m_m();
				}
				else
				    if (again != 1 , 2)
					{
					 printf("\n\t\tSorry Invalid Decision Entered\n");
					 exit();
					}
			  }
			  else
					if (choice != 1 , 2 , 3 )
						{
						fflush(stdin);
						clrscr();
						printf("\n\t\t   Invalid Choice Entered\n");
						bfast();
						}
    }
  }

void lunch() // weight 50 t0 80 Menu
{
  int choice;  //local variables
  int quantity;
  int again;


  printf("\n\n\t\t\t   Welcome to HABBAR Restaurant.          \n ");
  printf("\t\t\t  +============================+         \n\n");
  printf("\t\t\t   $  Weight 50 t0 80 Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n\n");
  printf("\t\t   [1] chinese - Rs 700.00\n");
  printf("\t\t   [2] Pasta- Rs 400.00\n");
  printf("\t\t   [3] Fish Head Curry with Rice - Rs 1200.00\n\n\n");

  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 700.00 * quantity ;
	  tax = 6*total/100;
	  finaltotal = total+tax;
	  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n ", total);
	  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		clrscr();
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\t\tSorry Invalid Decision Entered\n");
			 exit();
			}
		}
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 400.00 * quantity ;
		  tax = 6*total/100;
		  finaltotal = total+tax;
		  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n ", total);
		  {
		printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		clrscr();
		if (again == 1 )
			lunch();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\t\tSorry Invalid Decision Entered\n\n");
			 exit();
			}
		}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 1200.00 * quantity ;
			  tax = 6*total/100;
			  finaltotal = total+tax;
			  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n ", total);
			   {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				clrscr();
				if (again == 1 )
					lunch();
				else
					if (again == 2 )
						m_m();
				else
					if (again != 1 , 2)
					{
					 printf("\n\t\tSorry Invalid Decision Entered\n");
					 exit();
					}
		   }
			  }

				 else
					 if (choice != 1 , 2 , 3)
						{
						fflush(stdin);
						clrscr();
						printf("\n\n\t\t  Invalid Choice Entered\n");
						lunch();
						}
	  }




}





void dinner() // weight 80 to 120 Menu Screen
{
  int choice;  //local variables
  int quantity;
  int again;


  printf("\n\n\t\t\t   Welcome to HABBAR Restaurant.          \n ");
  printf("\t\t\t  +============================+          \n\n");
  printf("\t\t\t   $  weight 80 to 120 Menu  $ \n\n");
  printf("  && Please select the food that you would like to purchase. && \n\n");
  printf("\t\t   [1] Bihari Tikka - Rs 600.0\n");
  printf("\t\t   [2] Italian - Rs 800.00\n");
  printf("\t\t   [3] Fruit Salad - Rs 400.00\n\n\n");

  printf("Enter your choice here : ");
  scanf("%d", &choice);
  {
  if (choice == 1)
	  {
	  printf("Enter quantity : ");
	  scanf("%d", &quantity);
	  total = 600.00 * quantity ;
	  tax = 6*total/100;
	  finaltotal=total+tax;

	  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n  ", finaltotal);
	    {
		 printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
		scanf("%d", &again);
		clrscr();
		if (again == 1 )
			dinner();
		else
			if (again == 2 )
				m_m();
		else
			if (again != 1 , 2)
			{
			 printf("\n\t\tSorry Invalid Decision Entered\n\n");
			 exit();
			}

	    }
      }
	else
		  if ( choice == 2)
		  {
		  printf("Enter quantity : ");
		  scanf("%d", &quantity);
		  total = 800.00 * quantity ;
		  tax = 6*total/100;
		  finaltotal = total+tax;
		  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n ", total);
		    {
			printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
			scanf("%d", &again);
			clrscr();
			if (again == 1 )
				dinner();
			else
				if (again == 2 )
					m_m();
			else
				if (again != 1 , 2)
				{
				 printf("\n\t\tSorry Invalid Decision Entered\n");
				 exit();
				}
		}
		  }
		  else
			  if ( choice == 3 )
			  {
			  printf("Enter quantity : ");
			  scanf("%d", &quantity);
			  total = 400.00 * quantity ;
			  tax = 6*total/100;
			  finaltotal = total+tax;
			  printf("Your total amount with tax is Rs%.2f , Please pay at the counter\n\n\n ", total);
			    {
				printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : ");
				scanf("%d", &again);
				clrscr();
				if (again == 1 )
					dinner();
				else
					if (again == 2 )
						m_m();
				else
					if (again != 1 , 2)
					{
					 printf("\n\t\tSorry Invalid Decision Entered\n");
					 exit();
					}

				 }
			  }

				 else
					 if (choice != 1 , 2 , 3)
						{
						fflush(stdin);
						clrscr();
						printf("\n\t\t   Invalid Choice Entered\n\n");
						dinner();
						}
		 }

}

void exit()  // Exit Screen
{

  printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t       Thank You Very Much          \n ");
  printf("\t\t\t  +============================+\n\n");
  printf("\n\n\n\n\t\t\t      && Please come again.&& ");
  getch();
 }