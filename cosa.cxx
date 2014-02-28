#include "cosa.hxx"


cosa::cosa(int x)
{
	_x = x;
}

int cosa::get()
{
	return _x;
}void cosa::put(int x){ _x = x; }
