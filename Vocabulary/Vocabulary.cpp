#include "Vocabulary.h"


Vocabulary::Vocabulary() {
	ifstream inFile;
	//string word;

	inFile.open("Vocabulary.txt"); // Load Vocabulary data
	if (inFile.fail()) {
		cout << "Error! Vocaublary data not found!" << endl;
		return;
	}
	else {

		for (string line; getline(inFile, line); ) {
			if (vocabWord.count(line) == 1)
				vocabWord[line]++;
			else
				vocabWord[line];
		}
		/*while (!inFile.eof()) {
			inFile >> word;
			if (vocabWord.count(word) == 1)
				vocabWord[word]++;
			else
				vocabWord[word];
		}*/

		for (auto w = vocabWord.begin(); w != vocabWord.end(); ++w) {
			cout.width(20);
			cout << left << w->first << "\t";
			cout << right << "|Ocuurences: " << w->second << endl;
		}
	}
}


Vocabulary::~Vocabulary()  {
	ofstream outFile;
	outFile.open("Vocabulary_Edit.txt");

	if (outFile.fail()) {
		cout << "Error opening Vocabulary_Edit.txt\n";
	}
	else {
		for (auto w = vocabWord.begin(); w != vocabWord.end(); ++w) {
			outFile.width(20);
			outFile << left << w->first << "\t";
			outFile << right << "|Ocuurences: " << w->second << endl;
		}
	}
}
