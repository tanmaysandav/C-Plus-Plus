//ISD-TEMPLATE CPP FILE. PROF. WEI FANG V1

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
	vector<string> words;
	vector<string> w2;
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
		cout << "Words " << i << " has this " << words[i] << endl;
	for (int i = 0; i < words.size(); i++) {
		if (i == 0 || words[i - 1] != words[i]) {
			w2.push_back(words[i]);
			if (i != words.size() - 1)
				cout << "Found new word " << words[i] << endl;
		}
		else
			cout << "Found  duplication " << words[i] << endl;
	}
	cout << "Foud " << words.size() - w2.size() << " duplicates\n";
	for (int i = 0; i < w2.size(); i++)
		cout << w2[i] << endl;
	keep_window_open();
}


