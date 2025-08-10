#include<bits.stdc++.h>
using namespace std;

class ZerodhaAccount()
{
    private:
    double balance;
    
    public:
    ZerodhaAccount(double bal) : balance(bal) {}
    void placeOrder(double amount)
    {
        if(amount<=balance)
        balance-=amount;
    }
    double getBalance()
    {
        return balance;
    }

}

class SwiggyAccount {
private:
    string location;     
    int totalOrders;     

public:
    int restaurant;
    SwiggyAccount(int totalOrd, string loc, string res) 
        : totalOrders(totalOrd), location(loc), restaurant(res) {}

    void placeOrder() {
        totalOrders++;
        cout << "Order placed from " << restaurant 
             << " to " << location << ". Total orders: " << totalOrders << endl;
    }

    int getTotalOrders() { 
        return totalOrders; 
    }
};

class WhatsAppAccount {
private:
    string username;   
    string status;     
public:
    WhatsAppAccount(string user, string stat) : username(user), status(stat) {}

    string getUsername() { return username; }
    string getStatus() { return status; }

    void setUsername(string newUser) {
        if(newUser.size() > 0) 
            username = newUser;
    }
    void setStatus(string newStatus) {
        status = newStatus;
    }
};

#include <iostream>
#include <string>
using namespace std;

class UberRide {
private:
    string pickupLocation;  
    string dropLocation;     
    double fare;             

public:
    UberRide(string pickup, string drop, double rideFare) 
        : pickupLocation(pickup), dropLocation(drop), fare(rideFare) {}

    void applyDiscount(double discount) {
        if (discount > 0 && discount < fare) {
            fare -= discount;
        }
    }

    double getFare() { return fare; }
    string getPickupLocation() { return pickupLocation; }
    string getDropLocation() { return dropLocation; }
};



