#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
int main() 
{
    while ( true )
    {
        string letters;
        cout << "Please enter a string (Enter - exit): ";
        getline( cin, letters );

        if ( letters.empty() ) break;

        stack<char> 
            s(stack<char>::container_type( letters.begin(), letters.end() ) );
        queue<char> 
            q(queue<char>::container_type( letters.begin(), letters.end() ) );

        while ( !s.empty() && s.top() == q.front() )
        {
            s.pop();
            q.pop();
        }

        if ( s.empty() ) std::cout << "The string is a palindrome" << endl;
        else 
			cout <<"The string is not a palindrome"<< endl;
    }
    return 0;
}
