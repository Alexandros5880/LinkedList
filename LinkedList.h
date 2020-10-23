// Class Node
template <class T>
class Node {
    public:
        Node(T*);
        void setNext(Node<T>*);
        void setPrevius(Node<T>*);
        Node<T> * getNext();
        Node<T> * getPrevius();
        T* getValue();
        T getData();
    private:
        T * data = NULL;
        Node * next = NULL;
        Node * previus = NULL;
};


// Class Linked List
template <class T>
class LinkedList {
    public:
        LinkedList();
        void append(T *data); // In front
        void extend(T * data); // To the end
        T get(unsigned long index);
        bool del(long index);
        void clear();
        long getSize();
        void reverse();
        void shorting();
    private:
        Node<T> * head = NULL;
        Node<T> * tail = NULL;
        unsigned long counter;
};





// Class Node
template <class T>
Node<T>::Node(T * data) {
    this->data = data;
}

template <class T>
void Node<T>::setNext(Node<T> * node) {
    this->next = node;
}

template <class T>
void Node<T>::setPrevius(Node<T> * node) {
    this->previus = node;
}

template <class T>
Node<T> * Node<T>::getNext() {
    return this->next;
}

template <class T>
Node<T> * Node<T>::getPrevius() {
    return this->previus;
}

template <class T>
T Node<T>::getData() {
    return *this->data;
}




// Class Linked List
template <class T>
LinkedList<T>::LinkedList() {
    this->counter = 0;
}

template <class T> // At the end
void LinkedList<T>::append(T * data) {
    Node<T> * node = new Node<T>(data);
    if (this->getSize() > 0) {
        this->tail->setNext(node);
        node->setPrevius(this->tail);
    } else  {
        this->head = node;
    }
    this->tail = node;
    this->counter++;
}


template <class T> // To the front
void LinkedList<T>::extend(T * data) {
    Node<T>* node = new Node<T>(data);
    if ( this->getSize() > 0 ) {
        node->setNext(this->head);
        this->head->setPrevius(node);
        this->head = node;
    } else {
        this->head = node;
        this->tail = node;
    }
    this->counter++;
}



template <class T>
T LinkedList<T>::get(unsigned long index) {
    Node<T> * currentNode = this->head;
    Node<T> * previusNode = NULL;
    Node<T> * nextNode = NULL;
    for (unsigned long i = 0; i < this->counter; i++) {
        nextNode = currentNode->getNext();
        previusNode = currentNode->getPrevius();
        cout << currentNode->getData() << endl;
        if (i == index) {
            return currentNode->getData();
        }
        currentNode = nextNode;
    }
    return '\0';
}

/*
template <class T>
bool LinkedList<T>::del(long index) {
    bool deleted = false;
    Node<T> * current = head;
    Node<T> * before = current->before;
    Node<T> * after = current->after;
    for ( int i = 0; i < counter; i++ ) {
        if (i == index) {
            if (i == 0) { // If is the first element
                after->before == NULL;
                head = after;
            } else if (i == counter-1) { // If is the last element
                before->after = NULL;
                tail = before;
            } else {
                before->after = after;
                after->before = before;
            }
            delete current;
            delete before;
            delete after;
            deleted = true;
        } else {
            current = current->after;
            before = current->before;
            after = current->after;
        }
    }
    return deleted;
}

template <class T>
void LinkedList<T>::clear() {
    head->setBefore(NULL);
    head->setAfter(NULL);
    tail->setBefore(NULL);
    tail->setAfter(NULL);
    counter = 0;
}
*/
template <class T>
long LinkedList<T>::getSize() {
    return counter;
}
/*
template <class T>
void LinkedList<T>::reverse() {
    LinkedList<T> * list = new LinkedList();
    Node<T> * current = tail;
    for ( int i = counter; i > 0; i-- ) {
        list->extend(current);
        current = current->before;
    }
    this = list;
}

template <class T>
void LinkedList<T>::shorting() {
    Node<T> * current = head;
    Node<T> * before = current->before;
    Node<T> * after = current->after;
    T * data;
    for ( int i = 0; i < counter; i++ ) {
        if (current->data < after->data) {
            data = current->data;
            current->data = after->data;
            after->data = data;
            delete data;
        }
        current = current->after;
        before = current->before;
        after = current->after;
    }
}
*/