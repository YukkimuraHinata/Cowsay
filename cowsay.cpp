#include <iostream>
#include <string>

using namespace std;

void printline(int counts) {
	for(int j = 0;j < counts;j++) {
		cout << "-";
	}
	cout << endl;
}

void  cowsay(string var) {
        const size_t var_length = var.size();
		constexpr size_t string_length = 20;
		string line;
		int top_and_bottom = min(string_length,var_length);
		top_and_bottom += 4;
		printline(top_and_bottom);  //TOP
		for(size_t i = 0;i < var_length;i += string_length) {
			line = var.substr(i,string_length);
			if(line.size() < top_and_bottom -4) {
				line.resize(string_length , ' ');
			}
			cout << "| " << line << " |" << endl;
		}
		printline(top_and_bottom);  //BOTTOM
        cout << "  " << "\n"
                "         \\   ^__^\n" //double slashes to tell gcc that we're not running wizardy commands or anythin'
                "          \\  (oo)\\_______\n"
                "             (__)\\       )\\/\\\n"
                "               ||----w |\n"
                "               ||     ||\n" << endl;
}

int main(int argc,char* argv[]) {	
	if (argc == 1) {
		cout << "Usage: ./cowsay [text]" << endl;
	}
	else {
		string arg = argv[1];
		cowsay(arg);
	}
 	return 0;
}
