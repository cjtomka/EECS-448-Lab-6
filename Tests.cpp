/**
* @file Tests.cpp
* @author Cameron Tomka
* @brief This file implements the member functions (tests) of the Tests class.
* @date 11/18/2019
**/
#include "Tests.h"
#include <iostream>

void Tests::test1()
{
    Queue* newQueue = new Queue();
    if(!(newQueue->isEmpty()))
    {
        std::cout << "Test 1: A freshly created queue is considered empty by isEmpty(): FAILED\n";
    }
    else
    {
        std::cout << "Test 1: A freshly created queue is considered empty by isEmpty(): PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test2()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(0);
    if(newQueue->isEmpty())
    {
        std::cout << "Test 2: Enqueueing a value causes isEmpty() to return false: FAILED\n";
    }
    else
    {
        std::cout << "Test 2: Enqueueing a value causes isEmpty() to return false: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test3()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(0);
    newQueue->dequeue();
    if(!(newQueue->isEmpty()))
    {
        std::cout << "Test 3: Enqueueing and dequeueing causes isEmpty() to return true: FAILED\n";
    }
    else
    {
        std::cout << "Test 3: Enqueueing and dequeueing causes isEmpty() to return true: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test4()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(1);
    if(newQueue->peekFront()!=1)
    {
        std::cout << "Test 4: The peekFront() method correctly returns the value of a single element queue: FAILED\n";
    }
    else
    {
        std::cout << "Test 4: The peekFront() method correctly returns the value of a single element queue: PASSED\n";

    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test5()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(0);
    newQueue->enqueue(1);
    newQueue->enqueue(2);
    if(newQueue->peekFront()!=0)
    {
        std::cout << "Test 5: Enqueueing an element adds it to the back of the queue: FAILED\n";
    }
    else
    {
        std::cout << "Test 5: Enqueueing an element adds it to the back of the queue: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test6()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(1);
    newQueue->enqueue(2);
    newQueue->enqueue(3);
    newQueue->enqueue(4);
    newQueue->dequeue();
    if(newQueue->peekFront!=2)
    {
        std::cout << "Test 6: Enqueueing an element adds it to the front of the queue: FAILED\n";
    }
    else
    {
        std::cout << "Test 6: Enqueueing an element adds it to the front of the queue: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test7()
{
    Queue* newQueue = new Queue();
    bool errorThrown = false;
    try
    {
        newQueue->dequeue();
    }
    catch(const std::exception& e)
    {
        errorThrown = true;
        std::cout << "Test 7: The error thrown by the dequeue() method is thrown when attempting to dequeue an empty queue: PASSED\n";
    }
    if(!errorThrown)
    {
        std::cout << "Test 7: The error thrown by the dequeue() method is thrown when attempting to dequeue an empty queue: FAILED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test8()
{
    Queue* newQueue = new Queue();
    bool errorThrown = false;
    try
    {
        newQueue->peekFront();
    }
    catch(const std::exception& e)
    {
        errorThrown = true;
        std::cout << "Test 8: The error thrown by the peekFront() method is thrown when attempting to peek at an empty queue: PASSED\n";
    }
    if(!errorThrown)
    {
        std::cout << "Test 8: The error thrown by the peekFront() method is thrown when attempting to peek at an empty queue: FAILED\n";    
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test9()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(0);
    newQueue->enqueue(1);
    newQueue->enqueue(2);
    newQueue->enqueue(3);
    newQueue->dequeue();
    if(newQueue->peekFront()!=2)
    {
        std::cout << "Test 9: Dequeueing an element removes it from the front: FAILED\n";
    }
    else
    {
        std::cout << "Test 9: Dequeueing an element removes it from the front: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test10()
{
    Queue* newQueue = new Queue();
    newQueue->enqueue(0);
    newQueue->enqueue(1);
    newQueue->enqueue(2);
    newQueue->enqueue(3);
    newQueue->dequeue();
    if(newQueue->peekFront()!=3)
    {
        std::cout << "Test 10: Dequeueing an element removes it from somewhere other than the front: FAILED\n";
    }
    else
    {
        std::cout << "Test 9: Dequeueing an element removes it from somewhere other than the front: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::test11()
{
    Queue* newQueue = new Queue();
    for (int i=0; i<8; i++)
    {
        newQueue->enqueue(i);
    }
    for (int j=0; j<4; j++)
    {
        newQueue->dequeue();
    }
    if(newQueue->peekFront()!=3)
    {
        std::cout << "Test 11: After a series of dequeues, the peekFront() method returns the expected value given the enqueue() bug: FAILED\n";
    }
    else
    {
        std::cout << "Test 11: After a series of dequeues, the peekFront() method returns the expected value given the enqueue() bug: PASSED\n";
    }
    delete newQueue;
    newQueue = nullptr;
}
void Tests::testAll()
{
    std::cout << "\n\n";
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    std::cout << "\n\n All tests have executed.\n\n";
}