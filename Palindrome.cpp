
#include <iostream>
#include <cstring>
using namespace std;
// function asks user for two strings of the same length and checks if they are equal
bool checkEqual(char word1[], char word2[], int n) {
    for (int i = 0; i < n; i++){
        if (word1[i] != word2[i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    char word0[80];
    char word1[80];
    char word2[80];
    // fills both arrays will null characters
    memset(word1, '\0', 80); 
    memset(word2, '\0', 80);
    //asks user for an input
    cout << "Enter a string \n";  
    cin.get(word0, 80);
    int k = 0;
    //enters all of the alphanumeric characters of input into array, word1. Got isalnum() function from: cplusplus.com/reference/cctype/isalnum/
    for (int i = 0; i <= strlen(word0); i++) {
        if (isalnum(word0[i])) {
	  word1[k++] = tolower(word0[i]);            
        }
    }
    int length = strlen(word1) - 1;
    //Enters the reverse of the world1 into word2
    for (int i = 0; i <= length; i++) {
        word2[i] = word1[length - i];
    }
    //if word1 and word2 are equal, then the input was a Palindrome
    if (checkEqual(word1,word2,strlen(word1))) {
        cout << "Your word is a palindrome!!!"; 
    }
    //if not, not a palindrome
    else {
        cout << "Your word is not a palindrome :(";
    }
}

