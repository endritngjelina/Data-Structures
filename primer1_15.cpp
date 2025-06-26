#include <iostream>

 class ResourceHolder {
 public:
//     // Constructor
     ResourceHolder(int size) {
         resource = new int[size];
         std::cout << "Resource allocated." << std::endl;
     }

//     // Destructor
     ~ResourceHolder() {
         delete[] resource;
         std::cout << "Resource deallocated." << std::endl;
     }

//     // Function to perform some operation with the resource
     void performOperation() {
         std::cout << "Performing operation with the resource." << std::endl;
//         // ... (some operation)
     }

 private:
     int* resource;
 };

 int main() {
//     // Creating an object of ResourceHolder
     ResourceHolder holder(10);

     // Using the resource
     holder.performOperation();

//     // The destructor is automatically called when 'holder' goes out of scope
     // or when 'holder' is explicitly deleted
     return 0;
}

/*
In this example:

The ResourceHolder class has a constructor that allocates a dynamic array (resource) of integers.

The destructor (~ResourceHolder()) is responsible for deallocating the dynamic memory 
when the object goes out of scope or is explicitly deleted.

The performOperation function demonstrates using the allocated resource.

In the main function, an instance of ResourceHolder is created, and its performOperation function is called.
 When the ResourceHolder object goes out of scope at the end of the main function, 
the destructor is automatically called, freeing the allocated memory
*/