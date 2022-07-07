#include "../LinkedList.h"

void list_methods(){
    LinkedList list;
    list.insert_end(3);
    list.insert_end(4);
    list.insert_end(5);
    list.insert_end(7);
    list.insert_front(2);
    list.delete_front();
    list.delete_end();
    list.print();
}