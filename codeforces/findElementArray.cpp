using namespace std;
#include <iostream>
int main()
{
    int s, n;
    cout<<"enter the number  ";
    cin>>n;
    string result =  "no";
    
    int arr[4] = {2, 56, 8, 9};
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == n)
        {
            result = "yes";
        }
    }
    cout<<result;
    return 0;
}
