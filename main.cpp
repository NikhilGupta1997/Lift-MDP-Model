#include "simulate.h"
#include <string>

using namespace std;

int main() {
	simulate simulator(5, 2, 0.8, 0.5, 0.5, 1);
	string input;
	while(input != "done") {
		cin>>input;
		int input_action = stoi(input);
		simulator.perform_action(input_action);
		simulator.print_state();
	}

	return 0;
}