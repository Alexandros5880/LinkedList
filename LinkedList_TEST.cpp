#include <iostream>
using namespace std;

#include "LinkedList.h"


LinkedList<int> * list;


bool test_append();
bool test_extend();
bool test_get();
bool test_del();
bool test_clear();
bool test_getSize();
bool test_reverse();
bool test_shorting();



int main() {


    if ( test_append() ) {
        cout << "test_append() [OK]" << endl;
    } else {
        cout << "test_append() [FAILD]" << endl;
    }
    if ( test_extend() ) {
        cout << "test_extend() [OK]" << endl;
    } else {
        cout << "test_extend() [FAILD]" << endl;
    }
    if ( test_get() ) {
        cout << "test_get() [OK]" << endl;
    } else {
        cout << "test_get() [FAILD]" << endl;
    }
    if ( test_del() ) {
        cout << "test_del() [OK]" << endl;
    } else {
        cout << "test_del() [FAILD]" << endl;
    }
    if ( test_clear() ) {
        cout << "test_clear() [OK]" << endl;
    } else {
        cout << "test_clear() [FAILD]" << endl;
    }
    if ( test_getSize() ) {
        cout << "test_getSize() [OK]" << endl;
    } else {
        cout << "test_getSize() [FAILD]" << endl;
    }
    if ( test_reverse() ) {
        cout << "test_reverse() [OK]" << endl;
    } else {
        cout << "test_reverse() [FAILD]" << endl;
    }
    if ( test_shorting() ) {
        cout << "test_shorting() [OK]" << endl;
    } else {
        cout << "test_shorting() [FAILD]" << endl;
    }
    

    return 0;
}




bool test_append() {
    list = new LinkedList<int>();
    for (int i = 0; i < 10; i++) {
        list->append(&i);
    }
    if (list->getSize() == 10) {
        delete list;
        return true;
    } else {
        delete list;
        return false;
    }
   return true;
}


bool test_extend() {
    list = new LinkedList<int>();
    for (int i = 0; i < 10; i++) {
        list->extend(&i);
    }
    if (list->getSize() == 10) {
        delete list;
        return true;
    } else {
        delete list;
        return false;
    }
}


bool test_get() {
    list = new LinkedList<int>();
    for (int i = 0; i < 10; i++) {
        list->append(&i);
    }
    if ( list->get(5) == 5 ) {
        delete list;
        return true;
    } else {
        //cout << list->get(5) << endl;
        delete list;
        return false;
    }
}


bool test_del() {
    return true;
}


bool test_clear() {
    return true;
}


bool test_getSize() {
    return true;
}


bool test_reverse() {
    return true;
}


bool test_shorting() {
    return true;
}


