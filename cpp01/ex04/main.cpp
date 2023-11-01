#include <cstring>
#include <fstream>
#include <iostream>
int main(int argc, char *argv[]) {

	if (argc != 4) {
		std::cout << "Don't\n";
		return 1;
	}

	std::string filename(argv[1]);
	std::ifstream read(filename.c_str());

	if (!read.is_open())
		return (1);

	std::string temp;
	std::string joined;
	size_t found = 0;
	std::ofstream replace;
	while (read.good()) {
		getline(read, temp);
		joined.append(temp);
	}

	while (found != std::string::npos) {
		found = joined.find(argv[2], found + 1);
		if (found != std::string::npos) {
			joined.erase(found, std::strlen(argv[2]));
			joined.insert(found, argv[3]);
		}
	}
	filename.append(".replace");
	replace.open(filename.c_str());
	replace << joined;
	read.close();
	replace.close();

	return 0;
}
