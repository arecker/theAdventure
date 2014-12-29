#include "screen.h"
class ScreenIterator {
private:
	Screen getScreenByID(int);
public:
	bool HasNext;
	Screen CurrentScreen;
	void getNext();
	ScreenIterator ();
};