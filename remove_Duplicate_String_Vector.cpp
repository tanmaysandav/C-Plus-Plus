
// This program to illustrate basic working and sorting of vectors 
// Remove duplicate entries from vector

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "std_lib_facilities.h"


int main()
{
	vector<string> words;
	vector<string> w2;
	cout << " Please Input statement with duplicate word and enter RBS to exit \n" << endl ;
	for (string s; cin >> s && s != "RBS";)
		words.push_back(s);
	for (int i = 0; i < words.size(); i++)
			cout << "Pushing " << words[i] << " into vector words.\n";
	cout << "Vector words before sorting\n";
	for (int i = 0; i < words.size(); i++)
		cout << "Word " << i << " has " << words[i] << endl;
	sort(words.begin(), words.end());
	cout << "sorted \n";
	cout << "Total number of words inputed : " << words.size() << endl;
	cout << "Vector words after sorting \n";
	for (int i = 0; i < words.size(); i++)
		cout << "Words " << i << " has :" << words[i] << endl;
	for (int i = 0; i < words.size(); i++) {
		if (i == 0 || words[i - 1] != words[i]) {
			w2.push_back(words[i]);					// Copy first vector into another vector
			if (i != words.size() - 1)
				cout << "Found new word " << words[i] << endl;
		}
		else
			cout << "Found  duplication " << words[i] << endl;
	}
	cout << "Word after removing duplicates";
	cout << "Found " << words.size() - w2.size() << " duplicates\n";
	for (int i = 0; i < w2.size(); i++)
		cout << w2[i] << endl;
	keep_window_open();

}


