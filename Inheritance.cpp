#include <iostream>
using namespace std;

class App {
public:
    void openApp() {  
        cout << "Opening App..." << endl;
    }
};

class Zerodha : public App {
public:
    void tradeStocks() {
        cout << "Trading stocks on Zerodha..." << endl;
    }
};

class WhatsApp : public App {
public:
    void sendMessage() {
        cout << "Sending message on WhatsApp..." << endl;
    }
};

class Uber : public App {
public:
    void bookRide() {
        cout << "Booking ride on Uber..." << endl;
    }
};

class Zomato : public App {
public:
    void orderFood() {
        cout << "Ordering food on Zomato..." << endl;
    }
};

int main() {
    Zerodha z;
    z.openApp();     
    z.tradeStocks();  

    WhatsApp w;
    w.openApp();      
    w.sendMessage();  

    Uber u;
    u.openApp();      
    u.bookRide();     

    Zomato zm;
    zm.openApp();     
    zm.orderFood();   

    return 0;
}
#include <iostream>
using namespace std;

class App {
public:
    void openApp() {  
        cout << "Opening App..." << endl;
    }
};

class Zerodha : public App {
public:
    void tradeStocks() {
        cout << "Trading stocks on Zerodha..." << endl;
    }
};

class WhatsApp : public App {
public:
    void sendMessage() {
        cout << "Sending message on WhatsApp..." << endl;
    }
};

class Uber : public App {
public:
    void bookRide() {
        cout << "Booking ride on Uber..." << endl;
    }
};

class Zomato : public App {
public:
    void orderFood() {
        cout << "Ordering food on Zomato..." << endl;
    }
};

int main() {
    Zerodha z;
    z.openApp();      
    z.tradeStocks();  

    WhatsApp w;
    w.openApp();      
    w.sendMessage();  

    Uber u;
    u.openApp();      
    u.bookRide();     

    Zomato zm;
    zm.openApp();     
    zm.orderFood();   

    return 0;
}
