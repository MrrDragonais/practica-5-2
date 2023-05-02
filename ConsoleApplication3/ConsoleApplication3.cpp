#include <iostream>
#include "LogElement.h"
int main() {
	using namespace std;
	cout << "Test v5.01:OK.\n";
	LogElement logElement;
	logElement.setIn1(true);
	logElement.setIn2(false);
	cout << "Res: " << logElement.getRes();
	return 0;
}

class LogElement {
private:
	bool _in1;
	bool _in2;
protected:
	bool _res;
public:
	void setIn1(bool newIn1);
	void setIn2(bool newIn2);
	bool getRes();

};
void LogElement::setIn1(bool newIn1) {
	_in1 = newIn1;
}
void LogElement::setIn2(bool newIn2) {
	_in2 = newIn2;
}
bool LogElement::getRes() {
	return _res;
}
