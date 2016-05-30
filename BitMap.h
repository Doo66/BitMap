#ifndef __BITMAP_H__
#define __BITMAP_H__

#include <iostream>
#include <vector>
using namespace std;

class BitMap
{
public:
	BitMap(size_t n)
	{
		_a.resize((n>>5) +1);
	}
public:
	void Set(size_t x)
	{
		size_t index = x>>5;
		size_t num = x % 32;
		if(((_a[index]) & (1<<num)) == 0)
		{
			_a[index] |= (1<<num);
		}
	}
	void Reset(size_t x)
	{
		size_t index = x>>5;
		size_t num = x % 32;
		if((_a[index] & (1<<num)) != 0)
		{
			_a[index] &= ~(1<<num);
		}
	}
	bool Test(size_t x)
	{
		size_t index = x>>5;
		size_t num = x % 32;
		if((_a[index] & (1<<num)) == 0)
		{
			return false;
		}
		return true;
	}
private:
	vector<int> _a;
};

#endif
