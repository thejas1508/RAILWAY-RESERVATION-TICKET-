#include <stdio.h> 
#include <stdlib.h>
int first=5,second=5,third=5; 
struct node
{
int ticketNo; 
int phoneNo;
char name[100]; 
char address[100];
}s[15];
int i=0;
void booking()
{
printf("Enter your Details:"); 
printf("\n Name:"); 
scanf("%s",s[i].name); 
printf("\n PhoneNumber:"); 
scanf("%d",&s[i].phoneNo); 
printf("\n Address:"); 
scanf("%s",s[i].address);
printf("\n Ticketnumber only 1-10:"); 
scanf("%d",&s[i].ticketNo);
i++;
}
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
void availability()
{
int c;
printf("Availability Checking");
printf("\n1.first class\n2.second class\n3.third class\n"); 
printf("Enter the option :");
scanf("%d",&c); 
switch(c)
{
case 1:if(first>0)
{
printf("Seat Available\n"); 
first--;
}
else
{
printf("Seat not Available");
}
break;
case 2: if(second>0)
{
printf("Seat Available\n"); 
second--;
}
else
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
{
printf("Seat not Available");
}
break;
case 3: if(third>0)
{
printf("Seat Available\n"); 
third--;
}
else
{
printf("Seat not Available");
}
break; 
default:
break;
}
}
void cancel()
{
int c; 
printf("cancel\n");
printf("Which class you want to cancel");
printf("\n1.first class\n2.second class\n3.third class\n"); 
printf("Enter the option :");
}
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
scanf("%d",&c); 
switch(c)
{
case 1:
first++; 
break; 
case 2:
second++; 
break; 
case 3:
third++; 
break; 
default:
break;
}
printf("Ticket is Canceled");
}
void chart()
{
int c; 
for(c=0;c<i;c++)
{
printf("\n Ticket No\t Name"); 
printf("%d\t%s\n",s[c].ticketNo,s[c].name);
}
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
}
void main()
{
int n;
printf("WELCOME TO RAILWAY TICKET RESERVATION!\n");
while(1) {
printf("1.Booking\n2.Availability Checking\n3.Cancel\n4.Chart \n5.Exit\n Enter your Option:"); 
scanf("%d",&n);
switch(n)
{
case 1: booking(); 
break;
case 2: availability(); 
break;
case 3: cancel(); 
break;
case 4: chart(); 
break;
case 5:
printf("\n THANK YOU VISIT AGAIN!");
exit(0); 
default: 
break;
}
KGISL INSTITUTE OF TECHNOLOGY 
20IT54
711720205053
THEJASKUMAR.B
}
