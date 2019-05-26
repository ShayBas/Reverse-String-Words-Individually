#include <iostream>

using namespace std ; 

int main()
{
    char string[50] ; 
    cout << "Enter the string" << endl ; 
    cin.getline(string,50) ; 
    int start = 0, end = 0, loopCtrl = 0, length, wordLength, temp ;
    system("cls") ; 
    for ( length = 0 ; string[length] != '\0' ; ++length) ; 
    cout << "Original String is:" ; 
    cout.write(string,length) ; 
    cout << endl ; 
    for (int i = 0 ; i <= length ; i++)
    {
        if(string[i] == ' ' || string[i] == '\0') 
        {
            wordLength = i - start ;
            end = i - 1 ; 
             
            for (; loopCtrl < wordLength/2; ++loopCtrl, ++start, --end )
            {
                temp = string[end] ; 
                string[end] = string[start] ; 
                string[start] = temp ; 
                
            }
            loopCtrl = 0 ;
            start = i+1 ; 

        }
    }
    cout << "The String after conversion is:" ; 
    cout.write(string,length) ; 

    return 0 ; 
}