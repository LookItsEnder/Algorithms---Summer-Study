/*  Linked Lists are very simple Data Structures!
    Usually represented with vertices in a sorted or unsorted order

    LL a  =  1 -> 2 -> 3 -> 4 -> 5 -> ... -> n

    Common LL ADT operations include:

    .get(i) -> return a[i]

    .search(v) -> deduce if v exists within a, returns index if found, else return -1 (non existing index)

    .insert(i, v) -> insert data v into specific index i, shifts other items to the RIGHT to make space 

    .remove(i) -> removes the item at index i, shifts items to the LEFT to close the gap.

* To remove an item with a specific value, you could call:   a.remove(a.search(v));

* You CAN have multiple vertices with the same value

*/

struct Vertex { // Basic vertex node for a Linked List
    int item; // Data is stored here
    Vertex* next; // Pointer that tels us where the next vertex is
};

