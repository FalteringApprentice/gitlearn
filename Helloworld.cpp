#include <iostream>
#include <thread>
using namespace std;

void task1() {
    for (int i = 0; i < 20; i++)
        cout << i << endl;
}

void task2() {
    for (char i = 'a'; i < 'z'; i++)
        cout << i << endl;
}

int main() {
    thread thread1(task1);
    thread thread2(task2);
    thread1.join();
    thread2.join();
    return 0;
}
