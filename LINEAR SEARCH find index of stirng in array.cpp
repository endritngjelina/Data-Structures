#include <iostream>
#include <string>


std::string linearSearch(const std::string arr[], int size, std::string t){
     
     for(int i=0; i < size; i++){
          if(arr[i].compare(t)==0)
               return std::string ("Found at index = ") + std::to_string(i);
     }
     return std::string("not found");
}

int main(){
     
     std::string arr[]= {"hello","world","cop3530","piilisatom", "curious"};
     std::string target="curious";
     int size = sizeof(arr)/sizeof(arr[0]);
     std::cout << (linearSearch(arr, size, target));
     return 0;
}