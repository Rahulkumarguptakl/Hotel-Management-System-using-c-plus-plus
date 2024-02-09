/******************************************************************************

      HOTEL MANAGEMANT SYSTEM
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    
int quant;
int choice;
//Quantity 
int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;

// food  iteam sold;
int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
// Total proce of items
int Total_rooms=0,Total_pasta=0, Total_burger=0,Total_noodles=0, Total_snake=0, Total_shake=0,total_chicken=0;
 
cout<<"\n\t Quantity of item we have: ";
cout<<"\n Room avaliable:";
cin>>Qrooms;
cout<<"\n\t Quantity of pasta:";
cin>>Qpasta;
cout<<"\n\t Quantity of burger:";
cin>>Qburger;
cout<<"\n\t Quantity of noodles:";
cin>>Qnoodles;
cout<<"\n\t Quantity of Qshake:";
cin>>Qshake;
cout<<"\n\t Quantity of total_chicken:";
cin>>Qchicken;

m:

cout<<"\n\t\t\t Please select from the menu option";
cout<<"\n\n1) Room";
cout<<"\n2) pasta";
cout<<"\n3) burger";
cout<<"\n4) noodles";
cout<<"\n5) shake";
cout<<"\n6) chicken-roll";
cout<<"\n7) Information regarding sales and collection";
cout<<"\n8) Exit ";

cout<<"\n\n please Enter your choice!";
cin>>choice;

switch(choice)
{
    case1:
    cout<<"\n\n Enter the number of rooms you want:";
    cin>>quant;
    if(quant-Srooms>=quant)
    {
        Srooms=Srooms+quant ;
        Total_rooms=Total_rooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"rooms/rooms have been alloted to you!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
        break;
         
         case 2:
         cout<<"\n\n Enter pasta Quantity : ";
         cin>>quant;
         if(quant-Srooms>=quant)
         {
             Spasta=Spasta+quant;
             Total_pasta=Total_pasta+quant*250;
             cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
             
         }
         else
         cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta remaining in hotel";
         break;
         
         case 3:
         cout<<"\n\n Enter burger Quantity: ";
         cin>>quant;
         if(Qburger-Sburger>=quant)
         {
             Sburger=Sburger+quant;
             Total_burger=Total_burger+quant*120;
             cout<<"\n\n\t\t"<<quant<<"burger is the order!";
             
         }
         else
         cout<<"\n\tOnly"<<Qburger-Sburger<<"burger remaining in hotel";
         break;
         
         case 4:
         cout<<"\n\n Enter noodles Quantity : ";
         cin>>quant;
         if(Qnoodles-Snoodles>=quant)
         {
             Snoodles=Snoodles+quant;
             Total_noodles=Total_noodles+quant*140;
             cout<<"\n\n\t\t"<<quant<<"noodles is the order!";
             
         }
         else
         cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
         break;
         
         
         case 5:
         cout<<"\n\n Enter shake Quantity : ";
         cin>>quant;
         if(Qshake-Sshake>=quant)
         {
            Sshake=Sshake+quant;
             Total_shake=Total_shake+quant*120;
             cout<<"\n\n\t\t"<<quant<<"shake is the order!";
             
         }
         else
         cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remaining in hotel";
         break;
         
         case 6:
         cout<<"\n\n Enter chicken-roll Quantity : ";
         cin>>quant;
         if(Qchicken-Schicken>=quant)
         {
             Schicken=Schicken+quant;
             total_chicken=total_chicken+quant*150;
             cout<<"\n\n\t\t"<<quant<<"chicken-roll is the order!";
             
         }
         else
         cout<<"\n\tOnly"<<Qchicken-Schicken<<"chicken-roll remaining in hotel";
         break;
         
         
         
         case 7:
         cout<<"\n\t\tDetails of sales and collection";
         cout<<"\n\n Number of room we had :"<<Qrooms;
         cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
         cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
         cout<<"\n\n Total rooms collection for the day :"<<Total_rooms;

         cout<<"\n\t\tDetails of sales and collection";
         cout<<"\n\n Number of room we had :"<<Qpasta;
         cout<<"\n\n Number of rooms we gave for rent "<<Spasta;
         cout<<"\n\n Remaining rooms:"<<Qpasta-Spasta;
         cout<<"\n\n Total rooms collection for the day :"<<Total_pasta;
         
         cout<<"\n\t\tDetails of sales and collection";
         cout<<"\n\n Number of room we had :"<<Qburger;
         cout<<"\n\n Number of rooms we gave for rent "<<Sburger;
         cout<<"\n\n Remaining rooms:"<<Qburger-Sburger;
         cout<<"\n\n Total rooms collection for the day :"<<Total_burger;
         
         cout<<"\n\t\tDetails of sales and collection";
         cout<<"\n\n Number of room we had :"<<Qnoodles;
         cout<<"\n\n Number of rooms we gave for rent "<<Snoodles;
         cout<<"\n\n Remaining rooms:"<<Qnoodles-Snoodles;
         cout<<"\n\n Total rooms collection for the day :"<<Total_noodles;

         cout<<"\n\t\tDetails of sales and collection";
         cout<<"\n\n Number of room we had :"<<Qshake;
         cout<<"\n\n Number of rooms we gave for rent "<<Sshake;
         cout<<"\n\n Remaining rooms:"<<Qshake-Sshake;
         cout<<"\n\n Total rooms collection for the day :"<<Total_shake;
        
        cout<<"\n\t\tDetails of sales and collection";
         cout<<"\n\n Number of room we had :"<<Qchicken;
         cout<<"\n\n Number of rooms we gave for rent "<<Schicken;
         cout<<"\n\n Remaining rooms:"<<Qchicken-Schicken;
         cout<<"\n\n Total rooms collection for the day :"<<total_chicken;
         
         case 8:
         
         exit(0);
         
         default:
         
         cout<<"\n please select the numbers mentioned above!";
         


    };
    goto m;
    
}

}









