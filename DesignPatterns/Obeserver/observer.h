#include <bits/stdc++.h>
using namespace std;

class notificationAlert {
public:
    int user_id;
    string userName;
    virtual void update() = 0;
};

class emailAlert : public notificationAlert {
public:
    string email;
    emailAlert(string email) {
        this->email = email;
    }
    void send_mail() {
        cout << "subscriber notified via email: " << email << endl;
    }
    void update() {
        send_mail();
    }
};

class messageAlert : public notificationAlert {
public:
    string phone_no;
    messageAlert(string phone_no) {
        this->phone_no = phone_no;
    }
    void send_message() {
        cout << "subscriber notified via phone no: " << phone_no << endl;
    }
    void update() {
        send_message();
    }
};

class desktopAlert : public notificationAlert {
public:
    void push_desktop_notification() {
        cout << "subscriber notified via desktop: " << endl;
    }
    void update() {
    }
};
