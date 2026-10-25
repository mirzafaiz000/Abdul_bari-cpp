#include <iostream>
#include <string>
using namespace std;
int main()
{
    int vowel_count = 0;
    int consonant_count = 0;
    int word_count = 0;
    string str="how Many wOrds";
    string::iterator i;
    
    if(str.empty()!=1)
    {
        for(i=str.begin();i!=str.end();i++)
        {
            if(*i=='A' || *i=='E' || *i=='I' || *i=='O' || *i=='U' || *i=='a' || *i=='e' || *i=='i' || *i=='o' || *i=='u')
            {
                vowel_count++;
            }
            else if(*i==' ')
            {
                word_count++;
            }
            else
            {
                consonant_count++;
            }
        }
    }
    cout << "Vowels : " << vowel_count << endl;
    cout << "Consonants : " << consonant_count << endl;
    cout << "Words : " << word_count+1 << endl;

    return 0;
}