#include <stdio.h>
#include <vector>

using namespace std;

int main() {

    //Challenge 07: 

    vector<int> vector1 {};
    vector<int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    printf("Element at index 0 of vector1: %d\n", vector1.at(0));
    //write same for size method
    printf("Size of vector1: %lu\n", vector1.size());
    //write same for capacity method
    printf("Capacity of vector1: %lu\n", vector1.capacity());

    vector2.push_back(100);
    vector2.push_back(1000);

    printf("Element at index 0 of vector2: %d\n", vector2.at(0));
    printf("Size of vector2: %lu\n", vector2.size());
    printf("Capacity of vector2: %lu\n", vector2.capacity());


    //Now declare the 2d vector
    vector <vector<int>> vector2D {};

    //add vector1 to vector2D
    vector2D.push_back(vector1);
    //add vector2 to vector2D
    vector2D.push_back(vector2);
    
   printf("Element at index 0, 0 of vector2D: %d\n", vector2D.at(0).at(0));

   vector1.at(0) = 1000;

   printf("Element at index 0, 0 of vector2D after modification: %d\n", vector2D.at(0).at(0));


   printf("Element at index 0 of vector1 after modification: %d\n", vector1.at(0));

     

    return 0;
}