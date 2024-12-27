#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  std::cout << "Hello, World!" << std::endl;

  // STEPS!

  // parse the file
  // create the list of scene objects
  // compile the scene into primitives
  // simulate the path of the light rays
  // render the scene
  // save the image

  // 1. parse the file
  ifstream file(argv[1]);
  if (!file.is_open()) {
    cerr << "Could not open file: " << argv[1] << endl;
    return 1;
  }

  return 0;
}