# LinkedList

    #include "LinkedList.h"
    
    list * l = new list();
    l->insert(3);
    long mySize = l->getSize();
    l->insert_start(7);
    l->insert_position(7,3); // pos, data
    l->delete_first();
    l->delete_last();
    l->delete_position(9);
    l->display();
