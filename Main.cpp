#include "Stack.h"
using namespace std;

int main()
{
    Stack<int> s;

    cout << "Stack Implementation!" << endl;
    cout << "Pushing Values in Stack!" << endl;
    s.push(1);
    cout << "The value of top is = " << s.getTop() << endl;
    s.push(2);
    cout << "The value of top is = " << s.getTop() << endl;
    s.push(3);
    cout << "The value of top is = " << s.getTop() << endl;
    cout << "Poping Values!" << endl;
    cout << "The value of top is = " << s.getTop() << endl;
    s.pop();
    cout << "The value of top is = " << s.getTop() << endl;
    s.pop();
    cout << "The value of top is = " << s.getTop() << endl;
    s.pop();
    cout << "Is Stack Empty?" << s.isEmpty() << endl;
    return 0;
}