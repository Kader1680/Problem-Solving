// link ==> https://codeforces.com/contest/59/problem/A

#include <iostream>
#include <vector>
using namespace std;
#include <string>
int main()
{
    string word;
    cin>>word;
    int lower = 0, upper = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if ((word[i]<=90))
            upper++;
            else   
                lower++;
    }
    if (lower >= upper)
        for (int i = 0; i < word.size(); i++)
        {
        
            word[i] = tolower(word[i]);
            cout<<word[i];
        }
        else
            for (int i = 0; i < word.size(); i++)
                {
                    word[i] = toupper(word[i]);
                    cout<<word[i];
                }

    
    return 0;
}
