#include <iostream>
using namespace std;


template <class T>
struct node {
    T data;
    node *next;
    node *previus;
};	


template <class T>
class list {
    public:
        list();
        void insert(T value);
        void insert_start(int value);
        void insert_position(int pos, int value);
        void display();
        long getSize();
        void delete_first();
        void delete_last();
        void delete_position(int pos);
        T get(int pos);
    private:
        node<T> *head, *tail;
        long size = 0;
};





template <class T>
list<T>::list() {
    this->head = NULL;
    this->tail = NULL;
}


template <class T>
void list<T>::insert(T value) {
    node<T> *temp = new node<T>;
    temp->data = value;
    temp->next = NULL;
    temp->previus = NULL;
    if(head == NULL) {
        this->head = temp;
        this->tail = temp;
        temp = NULL;
    } else {	
        this->tail->next = temp;
        temp->previus = this->tail;
        tail = temp;
    }
    this->size++;
}


template <class T>
void list<T>::insert_start(int value) {
    node<T> *temp = new node<T>;
    temp->data = value;
    temp->next = this->head;
    this->head->previus = temp;
    head = temp;
    this->size++;
}


template <class T>
void list<T>::insert_position(int pos, int value) {
    node<T> *temp = new node<T>;
    temp->data = value;
    node<T> *cur = new node<T>;

    if ( pos < (this->size/2) ) { // It's close to start
        cur = this->head;
        for ( int i = 1; i <= pos; i++ ) {
            cur = cur->next;
        }
    } else { // It's close to the end
        cur = this->tail;
        for ( int i = (this->size-1); i > pos; i-- ) {
            cur = cur->previus;
        }
    }
    cur->previus->next = temp;
    temp->previus = cur->previus;
    temp->next = cur;
    cur->previus = temp;
    this->size++;
}


template <class T>
void list<T>::display() {
    node<T> *temp = new node<T>;
    temp = this->head;
    while ( temp != NULL ) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}


template <class T>
long list<T>::getSize() {
    return this->size;
}


template <class T>
void list<T>::delete_first() {
    node<T> *temp = new node<T>;
    temp = this->head;
    this->head = temp->next;
    this->head->previus = NULL;
    delete temp;
    this->size--;
}


template <class T>
void list<T>::delete_last() {
    node<T> *temp = new node<T>;
    temp = this->tail;
    this->tail = temp->previus;
    this->tail->next = NULL;
    delete temp;
    this->size--;
}



template <class T>
void list<T>::delete_position(int pos) {
    node<T> *current = new node<T>;
    if ( pos < (this->size/2) ) { // It's close to start
        current = this->head;
        for ( int i = 0; i < pos; i++) {
            current = current->next;
        }
    } else { // It's close to the end
        current = this->tail;
        for ( int i = this->size-1; i > pos; i--) {
            current = current->previus;
        }
    }
    current->previus->next = current->next;
    current->next->previus = current->previus;
    this->size--;
}


template <class T>
T list<T>::get(int pos) {
    node<T> *current = new node<T>;
    if ( pos < (this->size/2) ) { // It's close to start
        current = this->head;
        for ( int i = 0; i < pos; i++) {
            current = current->next;
        }
    } else { // It's close to the end
        current = this->tail;
        for ( int i = this->size-1; i > pos; i--) {
            current = current->previus;
        }
    }
    return current->data;
}
