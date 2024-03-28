#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>'a'&& ch<'z'){
        return ch;
    }
    else
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
}

bool checkPlalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase( a[s]) !=toLowerCase( a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        return 1;
    }
}

void reverse(char word[], int length)
{
    int s = 0;
    int e = length - 1;
    while (s < e)
    {
        // swap(word[s], word[e]);
        // s++;
        // e--;

        swap(word[s++], word[e--]);
    }
    cout << word << endl;
}

int getlength(char word[])
{
    int length = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    cout << "Please enter a word: " << endl;
    char word[1000];
    cin >> word;

    // we have to find length of character in the word
    cout << getlength(word) << endl;
    int length = getlength(word);
    reverse(word, length);

    cout << checkPlalindrome(word, length)<<endl;

    cout<<toLowerCase('A')<<endl;
    return 0;
}