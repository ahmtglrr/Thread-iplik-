#include <iostream>
#include <Windows.h>
#include <thread>
using namespace std;
void selamlama(){
	std::cout << "Thread(iplik)s" << endl;
}
int main(){
	std::thread t1(selamlama);
	t1.join();

	system("pause");
}