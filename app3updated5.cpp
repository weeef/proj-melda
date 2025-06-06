#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
#include"/usr/local/cs/cs251/react.h"
//#include "State.h"
bool game_running = 0;
bool just_starting = 0;
/*void _main_loop() {
  bool just_starting = true;
  while(1) {
    string input;
    if (!just_starting) {
      if (!getline(cin, input)) break;
      if ("q" == input) break;
    }

    ifstream fs;
    if (just_starting) fs.open("initial_state");
    else fs.open("curr_state");
    State state(fs);
    fs.close();
    state.update((just_starting || !state.get_show_buttons()) ? "NEW_GAME" : input);
    display_text(state, cout);

    ofstream fs2("curr_state");
    state.write_to(fs2);

    just_starting = false;
  }
}
void get_show_buttons(){

}*/

class State {
  int point;
  int health;
  int width;
  int height; 
  int menu_screen;

public:
  static const int offset;

  State(istream &is) { is >> point; is >> health; width= 130; height =150; } 
   /*std::ifstream g("data.txt"); //reads in health and points from a txt file
            g >> width >> height; 
            g.close();

            //cout << "You have " << points << " points"<< endl;
            //cout << "You have "<< health << " lives" << endl;
            //std::ofstream f("data.txt"); //method of writing into file
            //f << "4" << std::endl;*/
             
  int get_point() const { return point; }
  int get_health() const { return health; }
  int get_width() const { return width ; }
  int get_height() const {return height;}
  int get_menuscreen() const{return menu_screen;}
  void write_to(ostream &os) const { os << point << endl; os << health << endl; os << width << endl; os << height << endl; }
  int size_in_bytes() const { ostringstream oss; write_to(oss); return oss.str().size(); }
  void update() 
  {
    //int i = 0;
     //while(i < 10) {
     if(_received_event() && 'f' == _global_mem[100])
      _add_yaml("battlescreen.yaml",{{"top_index", i}, {"input_index", 100}});
      
     }  
     //if(_received_event() && 'a' == _global_mem[100]) height-=30, width-=30;
     
    //i++;
  //}
  
};


const int State::offset = 1;

void display(const State &state) {
  string s = "point is " + to_string(state.get_point());
  string t = "health is " + to_string(state.get_health());
  int i = 3 + state.size_in_bytes();
  _put_tilde_terminated_string(t, _global_mem + i);
  _put_tilde_terminated_string(s, _global_mem + 15);
  _add_yaml("StartScreen.yaml", {{"top_index", i}, {"input_index", 100}});
  //_add_yaml("melda.yaml", {{"top_index", state.get_width()}, {"left_index", state.get_height()}});
  //_add_yaml("melda.yaml", {{"top_index", i}, {"input_index", 100}});
  //_add_yaml("dot.yaml", {{"top_index", state.get_width()}, {"left_index", state.get_height()}});
 /* int j = 0;
     while(j < 100) {
      _add_yaml("dot.yaml", {{"top_index", state.get_width()}, {"left_index", state.get_height()}});
    j++;*/
  }
  
/*switch(state.getmenuScreen)(){
  case  0;{
    _add_yaml("StartScreen.yaml");
    for(int i = 0; i < state.gethealth();i++){
      _add_yaml("homescreenhealth.yaml");
    }
  }
 case 1:{
  break;
 } 
 case 2:{
  break;
 }
 case 3:{
  _add_yaml("count.yaml");
  break;
 }
}
  
  
*/

void _receive_and_send() {
  // initialization
  //game_running = 1;
  
  _read_event_info_file("event_info");
  if (_just_starting()) _read_global_mem_from_file("startup_mem");
  else _read_global_mem_from_file("begin_mem");
  istringstream iss(_global_mem + State::offset);
  State state(iss);

  // event handling and display
  /*while(game_running = 1){
  if(!_just_starting){*/
  state.update();
  display(state);
  
  
  
  // write out the end state 
  ostringstream oss;
  state.write_to(oss);
  string s = oss.str();
  s.copy(_global_mem + state.offset, s.length());

  _write_global_mem_to_file("end_mem");
  _write_global_yaml_to_file("react.yaml");
  delete [] _global_mem;
}

int main() {
 
  _receive_and_send();
 // _main_loop();
}

