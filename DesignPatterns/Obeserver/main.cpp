#include "observerable.h"

int main() {
    // observerable.
    stocksMobilePhone *iphone = new stocksIphone;

    // set of observers
    notificationAlert *user1 = new emailAlert("emailID786@gmail.com");
    notificationAlert *user2 = new emailAlert("emailID986@gmail.com");
    notificationAlert *user3 = new messageAlert("9534888434");

    iphone->subscribe(user1);
    iphone->subscribe(user2);
    iphone->subscribe(user3);
    iphone->add_stock(5);
    iphone->unsubscribe(user1);
    iphone->add_stock(-5);
    iphone->add_stock(5);
}