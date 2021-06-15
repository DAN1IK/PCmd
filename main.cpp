#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int echo(string text) {
  cout << text << endl;
  return 0;
}

int help() {
  return 0;
}

int main() {
  cout << "Welcome to PECmd v0.A!\n";
  string cmd;
  while (cmd != "exit") {
    cout << "(pcmd) ";
    cin >> cmd;

    if (cmd == "exit") {
      cout << "Goodbye... ;)\n";
      exit(0);
    } else if (cmd == "echo") {
      string etext;
      cout << "Enter the text: ";
      cin >> etext;
      echo(etext);
    } else if (cmd == "clear" || cmd == "cls") {
      system("clear");
    } else if (cmd == "ver" || cmd == "version") {
      cout << "                           .___\n"
	   << "______   ____   _____    __| _/\n"
	   << "\\____ \\_/ ___\\ /     \\  / __ |\n"
	   << "|  |_> >  \\___|  Y Y  \\/ /_/ |\n"
	   << "|   __/ \\___  >__|_|  /\\____ |\n"
	   << "|__|        \\/      \\/      \\/\n"
	   << "\n"
	   << "Version 0.A [Alpha]\n"
	   << "License: GNU GPL 2.0\n"
	   << "2021 | Daniil Baltan\n"; 
    }
    else {
      system(("./Apps/" + cmd).c_str());
    }
  }
}
