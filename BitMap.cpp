#include "BitMap.h"


void TestBitMap()
{
	BitMap bm(100);
	bm.Set(10);
	cout<<"Test(1)?"<<bm.Test(10)<<endl;
	bm.Set(3);
	cout<<"Test(3)?"<<bm.Test(3)<<endl;
	bm.Set(5);
	cout<<"Test(5)?"<<bm.Test(5)<<endl;
	bm.Set(7);
	cout<<"Test(7)?"<<bm.Test(7)<<endl;
	bm.Set(9);
	cout<<"Test(9)?"<<bm.Test(9)<<endl;
	bm.Reset(9);
	cout<<"Test(9)?"<<bm.Test(9)<<endl;

}

int main()
{
	TestBitMap();
	return 0;
}

