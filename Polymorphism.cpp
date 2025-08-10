#include <iostream>
using namespace std;

class WhatsApp {
public:
    virtual void sendMessage() { 
        cout << "Sending a simple text message.\n";
    }
};

class WhatsAppBusiness : public WhatsApp {
public:
    void sendMessage() override { 
        cout << "Sending an automated business reply.\n";
    }
};

int main() {
    WhatsApp* user = new WhatsAppBusiness();
    user->sendMessage(); 
    delete user;
}


class ZerodhaAccount {
public:
    virtual void placeOrder(double amount) {
        cout << "Placing generic order worth ₹" << amount << endl;
    }
    virtual ~ZerodhaAccount() {} 
};

class EquityAccount : public ZerodhaAccount {
public:
    void placeOrder(double amount) override {
        cout << "Equity order placed. Brokerage: ₹20 flat. Amount: ₹" << amount << endl;
    }
};

class CommodityAccount : public ZerodhaAccount {
public:
    void placeOrder(double amount) override {
        cout << "Commodity order placed. Brokerage: 0.25% of order. Amount: ₹" << amount << endl;
    }
};

int main() {
    ZerodhaAccount* acc;

    acc = new EquityAccount();
    acc->placeOrder(50000);

    acc = new CommodityAccount();
    acc->placeOrder(80000);

    delete acc;
}
