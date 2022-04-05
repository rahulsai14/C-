#include<stdio.h>
#include<stdlib.h>
void booking();
void seatallotment(int);
void checkout(int);
int main()
{
int a;
printf("********************Welcome to Movie Ticket Booking*********************\n");
printf("\n");
printf("1. Cinema1\n");
printf("2. Cinema2\n");
printf("3. Cinema3\n");
printf("________________________________\n");
printf("Select the movie code: ");
scanf("%d",&a);
system("CLS");
if(a==1||a==2||a==3)
booking();
}
void booking()
{
int s;
printf(" Screen\n");
printf(" __________\n");
printf("\n");
int i,n,j;
for(j=1;j<=70;j++)
{
printf("%d\t",j);
if(j%10==0)
{
printf("\n\n");
}
}
printf("Enter the number of seats: ");
scanf("%d",&n);
if(n<=70)
{
seatallotment(n);
}
else
{
return;
}
int ss;
printf("\n__________________________________________________________________\n");
printf("Press 1 To checkout\n");
printf("Press 2 To Select seats again\n");
scanf("%d",&ss);
if(ss==1)
{
system("CLS");
checkout(n);
}
if(ss==2)
{
seatallotment(n);
printf("\n");
printf("Press 1 To checkout\n");
 scanf("%d",&ss);
 if(ss==1)
 {
 system("CLS");
 checkout(n);
 } 
}
}
void seatallotment(int n)
{
int i,seat[n];
for(i=0;i<n;i++)
{
printf("Enter seat %d: ",i+1);
 scanf("%d",&seat[i]);
}
printf("\n");
printf("Selected seats are: ");
for(i=0;i<n;i++)
{
printf("%d, ",seat[i]);
}
}
void checkout(int n)
{
int can;
char name[10];
printf("---------------------------Checkout-----------------------------\n");
printf("\n");
printf("Enter your Billing name: ");
scanf("%s",name);
printf("\nCost per ticket: 100\n");
printf("Total cost is: %d\n",n*100);
printf("__________________________________________________________________\n");
printf("\n");
printf("Press 3 To cancel the ticket\n");
printf("Press 4 to proceed\n");
scanf("%d",&can);
if(can==3)
{
system("CLS");
printf("Tickets Cancelled Successfully amount will be refunded to your account within 4-5 working days\n");
printf("\n");
printf("Thank You");
}
if(can==4)
{
system("CLS");
printf("Thank You Tickets booked Successfully");
printf("\n");
}
}

