// #include <iostream>

// // Node class to represent each element in the linked list
// template <typename T>
// class Node {
// public:
//     T data;
//     Node* next;

//     Node(T value) : data(value), next(nullptr) {}
// };

// // LinkedList class to manage the linked list
// template <typename T>
// class LinkedList {
// private:
//     Node<T>* head;

// public:
//     LinkedList() : head(nullptr) {}

//     // Function to insert a new element at the end of the list
//     void insert(T value) {
//         Node<T>* newNode = new Node<T>(value);
//         if (head == nullptr) {
//             head = newNode;
//         } else {
//             Node<T>* current = head;
//             while (current->next != nullptr) {
//                 current = current->next;
//             }
//             current->next = newNode;
//         }
//     }

//     // Function to insert a new element at the front of the list
//     void insertFront(T value) {
//         Node<T>* newNode = new Node<T>(value);
//         newNode->next = head;
//         head = newNode;
//     }

//     // Function to insert a new element after a node with a particular value
//     void insertAfter(T valueToFind, T valueToInsert) {
//         Node<T>* current = head;
//         while (current != nullptr && current->data != valueToFind) {
//             current = current->next;
//         }

//         if (current != nullptr) {
//             Node<T>* newNode = new Node<T>(valueToInsert);
//             newNode->next = current->next;
//             current->next = newNode;
//         }
//     }

//     // Function to display the elements in the list
//     void display() {
//         Node<T>* current = head;
//         while (current != nullptr) {
//             std::cout << current->data << " ";
//             current = current->next;
//         }
//         std::cout << std::endl;
//     }

//     // Destructor to free memory when the list is destroyed
//     ~LinkedList() {
//         Node<T>* current = head;
//         Node<T>* nextNode;
//         while (current != nullptr) {
//             nextNode = current->next;
//             delete current;
//             current = nextNode;
//         }
//     }
// };

// int main() {
//     // Creating a linked list of integers
//     LinkedList<int> myList;

//     // Inserting elements into the list
//     myList.insert(10);
//     myList.insert(20);
//     myList.insert(30);

//     // Displaying the elements in the list
//     myList.display();

//     // Inserting a new element after the node with value 20
//     myList.insertAfter(20, 25);

//     // Displaying the elements after insertion
//     myList.display();

//     myList.insert(56);
//     myList.display();

//     return 0;
// }


/*
how to compile- g++ -std=c++0x linked_list.cpp -o output
*/

// #include <iostream>

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int value) : data(value), prev(nullptr), next(nullptr) {}
// };

// class DoublyLinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     DoublyLinkedList() : head(nullptr), tail(nullptr) {}

//     // Function to insert a new node at the end of the list
//     void insert(int value) {
//         Node* newNode = new Node(value);
//         if (!head) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }

//     // Function to search for a value in the list
//     bool search(int value) {
//         Node* current = head;
//         while (current) {
//             if (current->data == value) {
//                 return true;
//             }
//             current = current->next;
//         }
//         return false;
//     }

//     // Function to remove the head node from the list
//     void removeHead() {
//         if (!head) {
//             std::cout << "List is empty. No head to remove." << std::endl;
//             return;
//         }

//         Node* temp = head;
//         head = head->next;
//         if (head) {
//             head->prev = nullptr;
//         } else {
//             tail = nullptr;
//         }
//         delete temp;
//     }

//     // Function to remove the tail node from the list
//     void removeTail() {
//         if (!tail) {
//             std::cout << "List is empty. No tail to remove." << std::endl;
//             return;
//         }

//         Node* temp = tail;
//         tail = tail->prev;
//         if (tail) {
//             tail->next = nullptr;
//         } else {
//             head = nullptr;
//         }
//         delete temp;
//     }

//     // Function to print the elements of the list
//     void print() {
//         Node* current = head;
//         while (current) {
//             std::cout << current->data << " ";
//             current = current->next;
//         }
//         std::cout << std::endl;
//     }
// };

// int main() {
//     DoublyLinkedList dll;

//     dll.insert(1);
//     dll.insert(2);
//     dll.insert(3);
//     dll.insert(4);

//     std::cout << "Original list: ";
//     dll.print();

//     int searchValue = 3;
//     std::cout << "Search for value " << searchValue << ": ";
//     if (dll.search(searchValue))
//         std::cout << "Found" << std::endl;
//     else
//         std::cout << "Not Found" << std::endl;

//     std::cout << "Removing head..." << std::endl;
//     dll.removeHead();
//     std::cout << "List after removing head: ";
//     dll.print();

//     std::cout << "Removing tail..." << std::endl;
//     dll.removeTail();
//     std::cout << "List after removing tail: ";
//     dll.print();

//     return 0;
// }


// #include <iostream>
// #include <string>

// class BrowserHistory {
// private:
//     struct Node {
//         std::string url;
//         Node* prev;
//         Node* next;
//         Node(const std::string& u) : url(u), prev(nullptr), next(nullptr) {}
//     };

//     Node* current;

// public:
//     BrowserHistory(const std::string& homepage) {
//         current = new Node(homepage);
//     }

//     ~BrowserHistory() {
//         while (current->prev) {
//             current = current->prev;
//         }
//         while (current) {
//             Node* next = current->next;
//             delete current;
//             current = next;
//         }
//     }

//     void visit(const std::string& url) {
//         // Delete forward history
//         while (current->next) {
//             Node* temp = current->next;
//             current->next = temp->next;
//             delete temp;
//         }

//         // Add new page--> adding a new tail to our dll
//         Node* newPage = new Node(url);
//         current->next = newPage;
//         newPage->prev = current;
//         current = newPage;
//     }

//     std::string back(int steps) {
//         while (steps > 0 && current->prev) {
//             current = current->prev;
//             steps--;
//         }
//         return current->url;
//     }

//     std::string forward(int steps) {
//         while (steps > 0 && current->next) {
//             current = current->next;
//             steps--;
//         }
//         return current->url;
//     }

//     void printHistory() {
//         Node* temp = current;
//         while (temp->prev) {
//             temp = temp->prev;
//         }
//         std::cout << "History: ";
//         while (temp) {
//             std::cout << temp->url;
//             if (temp == current) {
//                 std::cout << "*";
//             }
//             if (temp->next) {
//                 std::cout << " <-> ";
//             }
//             temp = temp->next;
//         }
//         std::cout << std::endl;
//     }
// };

// int main() {
//     BrowserHistory history("https://www.example.com");
    
//     std::cout << "Initial state:" << std::endl;
//     history.printHistory();

//     history.visit("https://www.google.com");
//     history.visit("https://www.github.com");
//     std::cout << "\nAfter visiting Google and GitHub:" << std::endl;
//     history.printHistory();

//     std::cout << "\nGoing back 1 step: " << history.back(1) << std::endl;
//     history.printHistory();

//     history.visit("https://www.stackoverflow.com");
//     std::cout << "\nAfter visiting Stack Overflow:" << std::endl;
//     history.printHistory();

//     std::cout << "\nGoing forward 1 step: " << history.forward(1) << std::endl;
//     history.printHistory();

//     std::cout << "\nGoing back 2 steps: " << history.back(2) << std::endl;
//     history.printHistory();

//     std::cout << "\nTrying to go back 3 more steps: " << history.back(3) << std::endl;
//     history.printHistory();

//     return 0;
// }

/* Text editor buffer implementation*/

#include <iostream>
#include <string>

class TextBuffer {
    struct Node {
        char data;
        Node* next;
        Node* prev;
        Node(char c) : data(c), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    Node* tail;
    Node* cursor;
    std::string clipboard;


    void insertNode(Node* pos, char c) {
        Node* newNode = new Node(c);
        newNode->prev = pos;
        newNode->next = pos->next;
        if (pos->next) {
            pos->next->prev = newNode;
        } else {
            tail = newNode;
        }
        pos->next = newNode;
    }

    void removeNode(Node* node) {
        if (node->prev) {
            node->prev->next = node->next;
        } else {
            head = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        } else {
            tail = node->prev;
        }
        delete node;
    }

public:
    TextBuffer() {
        head = new Node('\0'); // Dummy head
        tail = new Node('\0'); // Dummy tail
        head->next = tail;
        tail->prev = head;
        cursor = tail;
    }

    // Insert a character before the cursor
    void insert(char c) {
        Node* newNode = new Node(c);
        Node* prevNode = cursor->prev;

        newNode->next = cursor;
        newNode->prev = prevNode;
        cursor->prev = newNode;
        prevNode->next = newNode;
    }
    void deleteChar() {
        if (cursor != head) {
            cursor = cursor->prev;
            removeNode(cursor->next);
        }
    }

    // Print the current state of the buffer
    void print() {
        std::cout << "Buffer: ";
        Node* current = head->next;
        while (current != tail) {
            if (current == cursor) {
                std::cout << "|";
            }
            std::cout << current->data;
            current = current->next;
        }
        if (cursor == tail) {
            std::cout << "|";
        }
        std::cout << std::endl;
    }

    void moveCursorLeft() {
        if (cursor != head) {
            cursor = cursor->prev;
        }
    }

    void moveCursorRight() {
        if (cursor->next) {
            cursor = cursor->next;
        }
    }

    void cut(size_t n) {
        clipboard.clear();
        while (n > 0 && cursor != head && cursor) {
            cursor = cursor->prev;
            clipboard = cursor->next->data + clipboard;
            removeNode(cursor->next);
            n--;
        }
}};

int main() {
    TextBuffer editor;

    // Insert "Hello" into the buffer
    editor.insert('H');
    editor.insert('e');
    editor.insert('l');
    editor.insert('l');
    editor.insert('o');
    editor.print();  // This should now print: Hello|

    editor.moveCursorLeft();
    editor.moveCursorLeft();
    editor.deleteChar();
    editor.print();
    editor.cut(1);
    editor.print();

   

    return 0;
}
