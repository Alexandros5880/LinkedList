#include "LinkedList.h"


int main() {

    list<int> * l = new list<int>();

    // Try
    for (int i = 0; i < 10; i++) {
        l->insert(i);
    }
    // Test
    if ( l->getSize() == 10 ) {
        cout << "insert()  [OK]" << endl;
    } else {
        cout << "insert()  [FAILD]" << endl;
    }

    // Try
    l->insert_start(7);
    // Test
    if ( l->get(0) == 7 ) {
        cout << "get()  [OK]" << endl; 
    } else {
        cout << "get()  [FAILD]" << endl;
    }
    
    // Try
    l->insert_position(7,3);
    // Test
    if ( l->get(7) == 3 ) {
        cout << "insert_position()  [OK]" << endl; 
    } else {
        cout << "insert_position()  [FAILD]" << endl;
    }

    // Try
    l->delete_first();
    // Test
    if ( l->get(0) != 7 ) {
        cout << "delete_first()  [OK]" << endl;
    } else {
        cout << "delete_first()  [FAILD]" << endl;
    }

    // Try
    l->delete_last();
    // Test
    if ( (l->get(9) == 8) && (l->getSize() == 10) ) {
        cout << "delete_last()  [OK]" << endl; 
    } else {
        cout << "delete_last()  [FAILD]" << endl;
    }

    // Try
    l->delete_position(9);
    // Test
    if ( (l->get(8) == 7) && (l->getSize() == 9) ) {
        cout << "delete_position()  [OK]" << endl; 
    } else {
        cout << "delete_position()  [FAILD]" << endl;
    }

    l->display();

    return 0;
}