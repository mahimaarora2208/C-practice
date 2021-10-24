// Program for Palindrome 
#include <iostream>
#include <vector>
#include <math.h>
using std::cout;
using std::endl;
using std::vector;

using namespace std;

bool isPalindrome_v1(int input){
    bool result = false;
    int temp;
    int inputDuplicate = input;
    int left;
    string rev;

    for (int i = 0; i < to_string(input).length(); i++)
    {
        temp = inputDuplicate % 10; 
        left = floor(inputDuplicate/ 10);
        rev = rev + to_string(temp) ; 
        inputDuplicate = left;  
        if ( to_string(input).length() == 1 && inputDuplicate != 0 )
        {
            
            rev = rev + to_string(inputDuplicate);
        }   
    }
     if (rev == to_string(input))
        {
           cout << rev + " is a palindrome!" <<endl;
        }
        else
        {
            cout << rev + " is NOT a palindrome!" <<endl;
        }
    return result;
}

/*
bool isPalindrome_v2(int input){
    bool result = false;
    int lenInput =  to_string(input).length();
    for (int i = 0; i < lenInput; i++)
    {
        cout << to_string(input)[i] << " : " << input[lenInput - 1 - i] << endl;
        if (to_string(input)[i]== to_string(input).length() - 1 - i)
        {
            cout << input + "is a palindrome!!" <<endl;
            result = true;
            break;
        }
        else
        {
        cout << input + "is NOT a palindrome!!" <<endl;
        }
    }
    return result;
}
*/
bool isPalindrome_v2(string input){
     bool result = false;
     string check;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i]== input[input.length() - 1 - i])
        {
            check = check +input[input.length() - 1 - i];
        }
        else
        {
        cout << input + " is NOT a palindrome!!" <<endl;
        break;
        }
    }
    if (input == check)
    {
        cout << input + " is a palindrome!!" <<endl;
        result = true;
    }
    
    return result;
}
         

int main(){
isPalindrome_v1(0);
}
