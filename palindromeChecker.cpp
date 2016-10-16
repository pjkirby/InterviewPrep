#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    //We want to check if the strings that are given to us are palindromes or not.
    string A = "STOP";
    string B = "post";
    //First I want to make sure they are the same length
    if(A.length() != B.length())
        cout << "They are not palindromes." << endl;
    else
    {
    
        //These sort the strings in alphabetical order. 
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        //This will make sure all the chars are lowercase.
        for(int i = 0; i < A.length(); i++)
        {
            A[i] = tolower(A[i]);
            B[i] = tolower(B[i]);
        }
        
        //Now all that we have to do is make sure they two strings are equal.
        if(A==B)
            cout << "The two strings you entered are palidromes" << endl;
        else
            cout << "They are not palidromes" << endl;
    }
    

}
