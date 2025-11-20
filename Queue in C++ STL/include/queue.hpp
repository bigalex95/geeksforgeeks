#pragma once
#include <iostream>
#include <queue>

using namespace std;

void run_queue()
{
    queue<int> q;
    q.push(10);
    q.push(5);

    // Accessing the front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Removing an element from the front
    q.pop();

    cout << "Front element after pop: " << q.front() << endl;
    return;
}

void run_insert2queue()
{
    queue<int> q;

    // Pushing elements into the queue
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Queue size: " << q.size() << endl;

    return;
}

void run_access2queue()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);

    // Accessing the front and back elements
    cout << "queue front element: " << q.front() << endl;
    cout << "queue back element: " << q.back() << endl;

    return;
}

void delete_from_queue()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);

    // Deleting elements from the front of the queue
    q.pop();

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return;
}

void check_empty_queue()
{

    queue<int> q;
    if (q.empty())
    {
        cout << "Queue is empty " << endl;
    }
    q.push(100);
    if (!q.empty())
    {
        cout << "Queue is not empty. Front element: " << q.front() << endl;
    }

    return;
}

void size_of_queue()
{

    queue<int> q;
    q.push(10);
    q.push(5);
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;

    return;
}