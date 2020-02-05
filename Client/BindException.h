#pragma once
#include <iostream>
#include <exception>
#include <cassert>

using namespace std;

class BindException : public exception {
public:
	virtual const char* what() const throw()
	{
		return "bind() failed: ";
	}
};
