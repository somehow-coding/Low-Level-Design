#include "observer.h"
#include <bits/stdc++.h>
using namespace std;

class stocksMobilePhone {
public:
    virtual void subscribe(notificationAlert *observer) = 0;
    virtual void unsubscribe(notificationAlert *observer) = 0;
    virtual void notify_subscribers() = 0;
    virtual void add_stock(int cnt) = 0;
};

class stocksIphone : public stocksMobilePhone {
public:
    int count;
    set<notificationAlert *> observerList;
    stocksIphone() {
        count = 0;
    }
    void subscribe(notificationAlert *observer) {
        observerList.insert(observer);
    }
    void unsubscribe(notificationAlert *observer) {
        observerList.erase(observer);
    }
    void notify_subscribers() {
        for (auto it : observerList) {
            it->update();
        }
    }
    void add_stock(int add) {
        if (count == 0) {
            notify_subscribers();
        }
        count += add;
    }
};

class stocksSamsung : public stocksMobilePhone {
    int count;
    set<notificationAlert *> observerList;
    stocksSamsung() {
        count = 0;
    }
    void subscribe(notificationAlert *observer) {
        observerList.insert(observer);
    }
    void unsubscribe(notificationAlert *observer) {
        observerList.erase(observer);
    }
    void notify_subscribers() {
        for (auto it : observerList) {
            it->update();
        }
    }
    void add_stock(int add) {
        if (count == 0) {
            notify_subscribers();
        }
        count += add;
    }
};
