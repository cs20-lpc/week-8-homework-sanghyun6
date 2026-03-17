#include <iostream>
#include "LinkedListStack.hpp"

using namespace std;

int main()
{
    LinkedListStack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;

    s.rotate(Stack<int>::LEFT);
    cout << s.peek() << endl;

    s.rotate(Stack<int>::RIGHT);
    cout << s.peek() << endl;

    LinkedListStack<int> s2 = s;
    cout << s2.peek() << endl;

    s.clear();
    cout << s.isEmpty() << endl;

    return 0;
}