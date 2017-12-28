//============================================================================
// Name        : gitTestProj.cpp
// Author      : zw
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ppl {
private:
	vector<string> _hobby;

public: 
	string nikName;

	// constructor
	ppl(const string & name, const vector<string> & hobbies);

	void add_hobby(const string & myhobby);
	vector<string> get_hobby() const;
};

inline ppl::ppl(const string & name, const vector<string> & hobbies) {
	nikName = name;
	_hobby = hobbies;
};

inline void ppl::add_hobby(const string & myhobby) {
	for(auto s :_hobby)
	{
	  if(s == myhobby)
	    return;
	}

	_hobby.push_back(myhobby);

	return;
};

inline vector<string> ppl::get_hobby() const {
	return _hobby;
};


int main() {
	ppl Zhao("ZW", {"sports", "reading"});

	cout << "zhao's nikName is" << Zhao.nikName << endl;
	cout << "zhao's hobbies are :" << endl;
	for(auto s: Zhao.get_hobby())
		cout << s << endl;

	return 1;
}

