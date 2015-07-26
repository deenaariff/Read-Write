#include <iostream>

using namespace std;

// Pass Pointer Stack By Reference
void parseFile (string fileUrl, stack <*char>& fileContents) {
	ifstream file;
	char* character;
	file.open(fileUrl);
	while (file.good()) {
		(getline (character, file))? fileContents.push(character) : break;
	}
}

// Write to new File 
void writeFile (const string fileURL, stack <*char> parseFile) {
	ofstream outputFile;
	outputFile.open(fileURL);
}

// main logic
int main () {

	// File URLS
	const string FILE_A_NAME = "./filea.txt";
	const string FILE_B_NAme = "./fileb.txt";

	// Pointer Stack
	stack <*char> fileContents;

	// Execute
	parseFile(FILE_A_NAME, fileContents);
	writeFile(FILE_B_NAme, fileContents);
}