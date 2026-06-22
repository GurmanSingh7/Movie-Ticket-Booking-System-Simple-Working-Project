#include <iostream>
using namespace std;



class booking        

{  
private:
    string customername;
    string moviename;
    int ticket;
    int ticketprice;
    float totalamount; //->when we apply percentage to the amount it will come in float type so amount should be in float to prevent error and successful execution of the code of same.

public:
    static int totalbooking; 
    static int totalseatbooked;

    booking()
    {
        ticket = 0;
        ticketprice = 0;
        totalamount = 0;
    }

    void inputdetail()
    {
        int choice;
        cout<<"Enter Customer name: ";
        cin>>customername;

        cout<<"Select the Movie according to your choice: "<<endl;
        cout<<"1) Avengers - 200"<<endl;
        cout<<"2) Jawan - 150"<<endl;
        cout<<"3) Leo - 180"<<endl;
        
        cout<<"Enter Choice: "<<endl;
        cin>>choice;

        if(choice==1)
        {
            moviename = "Avengers";
            ticketprice = 200;
        }
        else if(choice==2)
        {
            moviename = "Jawan";
            ticketprice = 150;
        }
        else if(choice==3)
        {
            moviename = "Leo";
            ticketprice = 180;
        }

        cout<<"Number of Ticket: "<<endl;
        cin>>ticket;

        totalbooking++;
        totalseatbooked+=ticket;
    }

    void calculatetotal()
    {
        totalamount = ticket*ticketprice;
        if(ticket>=5)
        {
            totalamount = totalamount-(0.10*totalamount);
        }
    }
    void displaybooking()
    {
        calculatetotal();
        cout<<"----------Booking Summary----------"<<endl;
        cout<<"Customer name: "<<customername<<endl;
        cout<<"Movie: "<<moviename<<endl;
        cout<<"Tickets: "<<ticket<<endl;
        if(ticket >=5)
        {
            cout<<"Discount Applied: 10%"<<endl;
        }
        cout<<"Total Amount: "<<totalamount<<endl;
    }
    static void showstatitics()
    {
        cout<<"----------Booking Statistics----------"<<endl;
        cout<<"Total Bookings: "<<totalbooking<<endl;
        cout<<"Total Seats Booked: "<<totalseatbooked<<endl;
    }
};
int booking::totalbooking = 0;
int booking::totalseatbooked = 0;
int main()
{
    booking b1 , b2    ;
    b1.inputdetail();
    b1.displaybooking();
    b2.inputdetail();
    b2.displaybooking();
    booking::showstatitics();
    return 0;
}
