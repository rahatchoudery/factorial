//find the factorial of any given number                                                                                                                                                                                                 
#include <iostream>
using namespace std;

void printTable (int *table, int M);

main() {
  int N; //user's input                                                                                                                                                                                            
  int A[300]; //declaration of array                                                                                                                                                                               
  int size = 300; //size of array                                                                                                                                                                                  

  cout << "Please enter a value for N: ";
  cin >> N; //read in user's input                                                                                                                                                                                 

  if (N < 0) {
    cout << "Error! Please enter a postive number." << endl;
  } //return error if the user's input is less than 0                                                                                                                                                              

  else {
    //clearTable                                                                                                                                                                                                   
    for (int i = 0; i < size; i++) {
      A[i] = 0; //set all cells of array to 0                                                                                                                                                                      
    }
    A[0] = 1; //set last cell in array to 1                                                                                                                                                                        

    //calcFact                                                                                                                                                                                                     
    int carry;
    int temp;
    for (int num = 1; num <= N; num++) {
      carry = 0;

      for (int j = 0; j < (size - 1); j++) {
        temp = A[j] * num + carry;
        A[j] = temp % 10; //manipulate code so that there is only one number in each cell                                                                                                                          
        carry = temp / 10; //carry the remainder over to next cell                                                                                                                                                 
      }
    }

    //printable                                                                                                                                                                                                    
    cout << "The factorial of " << N << " is: ";
    int j = size - 1;
    while (A[j] == 0) {
      j = j - 1;
    } //end of while loop                                                                                                                                                                                          

    while (j >= 0) {
      cout << A[j];
      j = j - 1;
    } //end of second while loop                                                                                                                                                                                   
    cout << endl;

  } //end of else statement                                                                                                                                                                                        
} //end of main

void printTable (int *table, int M) {
  for (int i = M - 1; i >= 0; i--) {
    cout << table[i];
  }
  cout << endl;
}
