#pragma once
// C++ program to illustrate the race conditions
#include <iostream>
#include <thread>

using namespace std;

// Shared resource
int number = 0;

// function to increment the number
void increment()
{

    // increment number by 1 for 1000000 times
    for (int i = 0; i < 1000000; i++)
    {
        number++;
    }
}

void run_not_mutex()
{
    // Create thread t1 to perform increment()
    thread t1(increment);

    // Create thread t2 to perform increment()
    thread t2(increment);

    // Start both threads simultaneously
    t1.join();
    t2.join();

    // Print the number after the execution of both threads
    cout << "Number after execution of t1 and t2 is " << number << endl;

    return;
}

/*
- Run 1
-- Number after execution of t1 and t2 is 1058072

- Run 2
-- Number after execution of t1 and t2 is 1456656

- Run 3
-- Number after execution of t1 and t2 is 2000000
*/