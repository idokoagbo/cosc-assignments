//
//  main.cpp
//  algebra
//
//  Created by Al Ghoul on 28/01/2022.
//

#include <iostream>
using namespace std;


// function print array

void printArray(int arr[], int arraySize){
    for(int index = 0; index < arraySize; index++){
        cout<<arr[index];
        if(index == (arraySize -1)){
            cout<<endl;
        }else{
            cout<<',';
        }
        
    }
}

int main(int argc, const char * argv[]) {
    
    int values[5];
    int result[5];
    
    for(int index = 0; index < 5; index++){
        cout<<"Enter value for index "<<index<<":";  // prompt to get input from user
        cin>>values[index];  // store input in array index
        cout<<endl;  // take cursor to next line, keep terminal tidy
        result[index] = (2 * values[index] + 9);  // calculate 2x+9 and store result
    }
    
    printArray(result, 5);
    
    
    return 0;
}
