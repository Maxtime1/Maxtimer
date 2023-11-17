#include <iostream>
#include <fstream>
#include <string>
using namespace std;
static void Center(const int &size);
static void tab(const int &size);

int main() {
	Center(20);
	std::count << "First Class" << std::endl;
	tab(1);
	
	return 0;
}

static void Center(const int &size) {
	for(int i = 1; i <= size; i++) {
		std::cout << " ";
	}
}
static void tab(const int &size) {
	int i = 1;	do {
		std::cout << std::endl;
		i += 1;
	}	while(i <= size);
}	
