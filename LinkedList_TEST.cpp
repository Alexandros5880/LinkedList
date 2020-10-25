#include "LinkedList.h"


int main() {

    list<int> * l = new list<int>();

    for (int i = 0; i < 10; i++) {
        l->insert(i);
    }

    //l->insert_start(7);
    //l->insert_position(3,3);
    //l->delete_first();
    //l->delete_last();
    //l->delete_position(3);
    l->display();
    cout << l->get(3) << endl;
    cout << l->get(7) << endl;
    return 0;
}