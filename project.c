/*
Programmer : Muhammad Hunain(CS181013) , Muhammad Shahrukh Faizy(CS181038) , Gillman Khan(CS181009)
Project: Hotel Mangement System in C language 
Section : 1B1
Instructor: Sir Zahid
Created on: 15 May 2019
Last Modified: 26 May 2018
*/

#include<stdio.h>
#include<time.h>
#define mixVeg  120.0   /*defining food name & food Prize*/
#define palakPaneer 60.0
#define shahiPaneer 80.0
#define chanaMasala 50.0
#define muttonKorma 100.0
#define muttonMughlai 120.0
#define kadaiMutton  120.0
#define malaiKofta 250.0
#define chickenMughlai 310.0
#define kadaiChicken 300.0
#define chickenKorma 250.0
#define chickenTandoori 500.0
#define chickenTikka 220.0
#define seekhKabab 60.0
#define fishTikka 250.0
#define roti 10.0
#define nan 15.0
#define paratha 20.0
#define alooParatha 50.0
#define UP 50.0
#define Dew 50.0
#define fanta 50.0
#define waterBottle 30.0
void checkIn();  //FUNCTIONS
void list();
void edit();  
void search();
void login();
void food();
int main(){     // MAIN FUNCTION	
	int i=0,choiceFood = 0;
	char customername;
	char choice,records;
  for(i = 0;i<120;++i){
  	printf("=");
  }
  printf("\n\t\t"); //logo
  printf("\n");
  printf("                                 $$  $$   $$$$$   $$$$$$$$  $$$$$$$  $$     \n");
  printf("                                 $$  $$  $$   $$     $$     $$       $$     \n");
  printf("                                 $$$$$$  $$   $$     $$     $$$$$    $$     \n");
  printf("                                 $$  $$  $$   $$     $$     $$       $$     \n");
  printf("                                 $$  $$   $$$$$      $$     $$$$$$$  $$$$$$ \n");
  printf("\n");
  printf("      $$    $$  $$$$$$$  $$$$    $$  $$$$$$$   $$$$$$  $$$$$$$  $$    $$  $$$$$$$  $$$$    $$  $$$$$$$$  \n");
  printf("      $$$  $$$  $$   $$  $$ $$   $$  $$   $$  $$       $$       $$$  $$$  $$       $$ $$   $$     $$     \n");
  printf("      $$ $$ $$  $$$$$$$  $$  $$  $$  $$$$$$$  $$ $$$$  $$$$$    $$ $$ $$  $$$$$    $$  $$  $$     $$     \n");
  printf("      $$    $$  $$   $$  $$   $$ $$  $$   $$  $$   $$  $$       $$    $$  $$       $$   $$ $$     $$     \n");
  printf("      $$    $$  $$   $$  $$    $$$$  $$   $$    $$$$   $$$$$$$  $$    $$  $$$$$$$  $$    $$$$     $$     \n");
  printf("\n\n");
  for(i = 0;i<120;++i){
  	printf("=");
  }
  printf("\n\t\t\t\t\t Press Enter To Review:");
	getch();	
    system("cls");
    login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		
		 for(i=0;i<80;++i)
        {
	    	printf("-");
    	}
		printf("\n\n");//main menu
		printf("   *****************************  |MAIN MENU|  **************************** \n\n");
		for(i=0;i<80;++i){
		printf("-");
	}
		printf("\n\n\n\n\n");
		printf("\n----------------------------------");
		printf(" \n Enter 1 => Check In & Check Out");//records add
		printf("\n----------------------------------");
		printf(" \n Enter 2 => Records");//records search
		printf("\n----------------------------------");
		printf(" \n Enter 3 => Food And Menu");//menu
		printf("\n----------------------------------");
		printf(" \n Enter 4 => Exit");//exit
		printf("\n----------------------------------");
		
		printf("\t\t\n\n **Please enter your choice **:");
		printf("\n");
		choice=getche();
		
		choice = toupper(choice);

		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				checkIn();
				break;
            case '2':
		system("cls");
		
		 for(i=0;i<80;++i){
		printf("-");
    	}
		printf("\n");//main menu
		printf("   ********************************  |RECORDS|  ******************************* \n");
		for(i=0;i<80;++i){
		printf("-");
	    }
		printf("\n");
		printf("\n------------------------");	
		printf(" \n Enter 1 => Search Records");
		printf("\n------------------------");
		printf(" \n Enter 2 => Edit Records");//records search
		printf("\n----------------------------------");
        printf("\t\t\n\n **Please enter your choice**:");
		printf("\n");
		records=getche();
		records=toupper(records);
		switch(records)           // SWITCH STATEMENT
		{
			case '1':
			edit();
			break;
			case '2':
			search();
			break;
	    }
			case '3':
				system("cls");
			    food();
				break;	

			default:
			
				system("cls");
				printf("\n\n\n\n\n\n");
				for(i = 0;i<80;++i){
				    printf("=");
				}
				printf("\n\n\n\n\n\t\t\t *****THANK YOU*****\t\t\t");
				printf("\n\n\n\t\t *****For Using Hotel Management*****\n\n\n");
				printf("\n\t\t\t***Made By M.Hunain***\n");
				printf("\n\t\t\t***Made By Gillman***\n");
				printf("\n\t\t\t***Made By Shahukh***\n");
				printf("\n\t\t***Instructed by Sir Zahid Hussain***\n");
				for(i = 0;i<80;++i){
				    printf("=");
				}
				
				getch();
		}
	}
}
void login()
{
	
	int a=0,i=0;
    char username[10],ch=' '; 
    char password[10],code[10];
    char user[10]="csStudent";/*username = csStudent */
    char pass[10]="doth";/*password = doth */

    do
{
	system("cls");
	
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &username); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    password[i]=getch();
	    ch=password[i];
	    if(ch==13){
	    break;
		}    /*breaking condition*/
	    else 
		{
		 printf("+");
	    ++i;
	    }
	}
	password[i]='\0';
	//char code=pword;

	i=0;


		if(strcmp(username,user)==0 && strcmp(password,pass)==0)/* to check password or username*/
	{
	printf("  \n\n\n\t\t\t\tYour Account is Sucessfully login\n\n");
	
	break;
	}
	else
	{
		printf("\n\t\t\tSorry !!! Incorrect Password or Username\n\n");
		
		++a;
		
		getch();
		
	}
}
	while(a<=2);/* check input valid password */
	if (a>2)
	{
		printf("\nSorry your username or password is incorrect!!!");
		
		getch();

		}
		system("pause");	/*system stop*/
}

struct CustomerDetails   /*STRUCTURE DECLARATION*/
{
	char roomNumber[10];
	char name[20];
	char address[25];
	char phoneNumber[15];
	char nationality[15];	
	char email[20];
	char period[10];
	char arrivalDate[10];
}s;

void checkIn()/*func call*/
{
	FILE *fptr;
	char aschii;
	fptr=fopen("records.txt","a+");
	if(fptr==0)
	{   fptr=fopen("records.txt","w+");
		system("cls");
	
		getch();
	}
	while(1)
	{
		system("cls");
        printf("\n*************************");
		printf("\n Enter Customer Details:");
		printf("\n*************************");
		printf("\nEnter Room number: ");
		scanf("\n%s",s.roomNumber);
		fflush(stdin);
		printf("\nEnter Name: ");
		scanf("%s",s.name);
		fflush(stdin);
		printf("\nEnter Address: ");
		scanf("%s",s.address);
		fflush(stdin);
		printf("\nEnter Phone Number: ");
		scanf("%s",s.phoneNumber);
		fflush(stdin);
		printf("\nEnter Nationality: ");
		scanf("%s",s.nationality);
		fflush(stdin);
		printf("\nEnter Email:format(xyz@gmail.com) ");
		scanf(" %s",s.email);
		fflush(stdin);
		printf("\nEnter Period('n'days): ");
		scanf("%s",&s.period);
		fflush(stdin);
		printf("\nEnter Arrival date(dd\\mm\\yyyy): ");
		scanf("%s",&s.arrivalDate);
		fflush(stdin);
		fwrite(&s,sizeof(s),1,fptr);
		fflush(stdin);
		printf("\n\n\t\t\t====================================================");
		printf("\n\t\t\t\t1 Room is successfully booked!!");
		printf("\n\t\t\t\tPress esc key to exit:");
		printf("\n\t\t\t\tPress Enter to add records");
		printf("\n\t\t\t====================================================");
		aschii=getche();
		if(aschii==27)
			break;
	}
	fclose(fptr);
}

void search()/*func call*/
{
system("cls");
	FILE *fptr;
	char roomNumber[20];
	int flag=1;
	fptr=fopen("records.txt","r+");
	if(fptr==0)
		
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	
	scanf("%s", roomNumber);
	
	while(fread(&s,sizeof(s),1,fptr)==1)
	{
		if(strcmp(s.roomNumber,roomNumber)==0){
			flag=0;
			printf("\n*************************");
			printf("\n**SEARCH RECORDS**");
			printf("\n*************************");
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomNumber);
			printf("\nName:\t\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phoneNumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t\t%s",s.email);
			printf("\nPeriod:\t\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivalDate);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(fptr);
}

void edit()
{
	FILE *fptr;
	int k=1;
	char roomNumber[20];
	long int size=sizeof(s);
	if((fptr=fopen("add.txt","r+"))==NULL)
		
	system("cls");
	printf("\n*************************");
	printf("\n**EDIT RECORDS**");
	printf("\n*************************");
	printf("Enter Room number of the customer to edit:\n\n");
	gets(roomNumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,fptr)==1)
	{
		if(strcmp(s.roomNumber,roomNumber)==0)
		{
			k=0;
			printf("\nEnter Room Number:");
			gets(s.roomNumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&s.phoneNumber);
			printf("\nEnter Nationality :");
			scanf("%s",&s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&s.email);
			printf("\nEnter Period :");
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",&s.arrivalDate);
			fseek(fptr,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,fptr);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(fptr);
		getch();
	}
	else{
	fclose(fptr);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}
}
void food()
{

 	int choiceFood = 0,i = 0;
    float totalPrice = 0;
 
 	    for(i = 0;i<80;++i)
 	    {
 	    	printf("*");
		}
        printf("\tSNO. \t MENU CARD:            \n\n");/*MENU CARD*/
        for(i = 0;i<80;++i)
        {
        	printf("*");
		}
		printf("\n\n");
		for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\t       VEGETARIAN  \n");
		for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\n\n");
        printf("\t1. MIX VEG.               Rs%.2f/- \n",mixVeg);
        printf("\t2. PALAK PANEER           Rs%.2f/- \n",palakPaneer);
        printf("\t3. SHAHI PANEER           Rs%.2f/- \n",shahiPaneer);
        printf("\t4. CHANA MASALA           Rs%.2f/- \n", chanaMasala);
        for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\t   MUTTON \n");
        for(i = 0;i<80;++i){
		printf("-");
	    }
		printf("\n\n");
        printf("\t5. MUTTON KORMA           Rs%.2f/- \n", muttonKorma);
        printf("\t6. MUTTON MUGHLAI         Rs%.2f/- \n",muttonMughlai);
        printf("\t7. KADAI MUTTON           Rs%.2f/- \n",kadaiMutton);
        printf("\t8. MALAI KOFTA            Rs%.2f/- \n",malaiKofta);
        for(i = 0;i<80;++i){
		  printf("-");
	    }
        printf("\t   CHICKEN\n");
        for(i = 0;i<80;++i){
		printf("-");
	    }
		printf("\n\n\t9.  CHICKEN MUGHLAI(1/2)  Rs%.2f/- \n",chickenMughlai);
        printf("\t10. KADAI CHICKEN         Rs%.2f/- \n",kadaiChicken);
        printf("\t11. CHICKEN KORMA         Rs%.2f/- \n",chickenKorma);
        printf("\t12. CHICKEN TANDOORI      Rs%.2f/- \n",chickenTandoori);
        for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\t   BAR-BE-QUE\n");
        for(i = 0;i<80;++i){
		printf("-");
	    }
		printf("\n\n\t13. CHICKEN THIKKA        Rs%.2f/- \n",chickenTikka);  
        printf("\t14. FISH TIKKA            Rs%.2f/- \n",fishTikka);
        printf("\t15. SEEKH KABAB           Rs%.2f/- \n", seekhKabab);
        for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\t   BEVERAGES \n:");
        for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\n\n");
        printf("\t16. 7UP                   Rs%.2f/- \n",UP);
        printf("\t17. DEW                   Rs%.2f/- \n",Dew);
        printf("\t18. FANTA                 Rs%.2f/- \n",fanta);
        printf("\t19. NESTLE WATER          Rs%.2f/- \n",waterBottle);
        for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\t   EXTRAS\n");
        for(i = 0;i<80;++i){
		printf("-");
	    }
        printf("\n\n\t20. ROTI (CHIPATI)        Rs%.2f/- \n",roti);
        printf("\t21. NAN(pathan)           Rs%.2f/- \n",nan);
        printf("\t22. PARATHA               Rs%.2f/- \n",paratha);
        printf("\t23. ALOO PARATHA          Rs%.2f/- \n",alooParatha);
        for(i = 0;i<80;++i){
		printf("x");
	    }
        printf("\n\n\t24. place Order\n\n");
        for(i = 0;i<80;++i){
		printf("x");
       }
	    printf("\n\n\t\tEnter an item number you want to order: ");
        scanf("%d", &choiceFood);
        int n = 0;
        printf("\n\t\tEnter how many Item you want to Add: ");
        scanf("%d",&n);
        
        for(i = 0;i<n;++i){
		
        switch(choiceFood){/*Calculate BILLING*/
		case 1:
            totalPrice += mixVeg;
            break;
        case 2:
            totalPrice +=palakPaneer;
            break;
        case 3:
            totalPrice += shahiPaneer;
            break;
        case 4:
            totalPrice +=  chanaMasala;
            break;
        case 5:
            totalPrice +=  muttonKorma;
            break;
        case 6:
            totalPrice += muttonMughlai;
            break;
        case 7:
            totalPrice += kadaiMutton;
            break;
        case 8:
            totalPrice +=malaiKofta;
            break;
        case 9:
            totalPrice += chickenMughlai;
            break;
        case 10:
            totalPrice += kadaiChicken ;
            break;
        case 11:
            totalPrice += chickenKorma;
            break;
        case 12:
            totalPrice += chickenTandoori;
            break;
        case 13:
            totalPrice += chickenTikka;
            break;
        case 14:
            totalPrice +=fishTikka;
            break;
        case 15:
            totalPrice += seekhKabab;
            break;
        case 16:
            totalPrice +=  UP;
            break;
        case 17:
            totalPrice +=  Dew;
            break;
        case 18:
            totalPrice += fanta;
            break;
        case 19:
            totalPrice += waterBottle;
            break;
        case 20:
            totalPrice += roti;
            break;
        case 21:
            totalPrice += nan;
            break;
        case 22:
            totalPrice += paratha;
            break;
        case 23:
            totalPrice += alooParatha;
            break;  
		case 24:
			 printf("Thanks For Odering"); 
			 break; 
        default:
            printf("Sorry Sir!!:  This is not in the menu list. \n");
            break;
    }
        
	}
    printf("\n\nTotal Bill is: Rs %.2f/-\n\n", totalPrice);
    printf("Your order is Rs%.2f/- \n\n", totalPrice);
    printf("Have a nice day!.\n\n");
    system("pause");
}
