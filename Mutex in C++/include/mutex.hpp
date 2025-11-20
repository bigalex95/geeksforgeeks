#pragma once
// C++ program to illustrate the thread synchronization using mutex
#include <iostream>
#include <thread>

using namespace std;

// import mutex from C++ standard library
#include <mutex>

// Create object for mutex
mutex mtx;

// Shared resource
int number_mtx = 0;

// function to increment the number
void increment_mtx()
{

    // Lock the thread using lock
    mtx.lock();

    // increment number by 1 for 1000000 times
    for (int i = 0; i < 1000000; i++)
    {
        number_mtx++;
    }

    // Release the lock using unlock()
    mtx.unlock();
}

void run_mutex()
{
    // Create thread t1 to perform increment()
    thread t1(increment_mtx);

    // Create thread t2 to perform increment()
    thread t2(increment_mtx);

    // Start both threads simultaneously
    t1.join();
    t2.join();

    // Print the number after the execution of both threads
    std::cout << "Number after execution of t1 and t2 is " << number_mtx << endl;

    return;
}

/*
- Run 1
-- Number after execution of t1 and t2 is 2000000

- Run 2
-- Number after execution of t1 and t2 is 2000000

- Run 3
-- Number after execution of t1 and t2 is 2000000
*/