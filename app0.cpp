#include<iostream>
#include<fstream>
using namespace std;
#include"State.h"

void _main_loop_early_draft() {
  ifstream fs("initial_state");
  State state(fs);
  state.update("NEW_GAME");
  display_text(state, cout);

  string input;
  getline(cin, input);

  state.update(input);
  display_text(state, cout);
}

int main() {
  _main_loop_early_draft();
}
