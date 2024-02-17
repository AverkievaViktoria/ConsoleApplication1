#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <string>
#include <chrono>
#include <type_traits>
#include <queue>
#include <deque>
#include <string>
#include <cstdint>
#include <algorithm>
#include <iterator>
#include <memory>
#include <cstdint>
#include <list>
#include <stack> 
#include <queue>
#include <map>
using namespace std;

//class A {  };
//auto Deleter1 = [](A* pA) {delete pA; };
//auto Deleter2 = [](A* pA) {};
//class A
//{
//	
//		int m_a;
//	public:
//		void something() { }
//		A(int a = 0) : m_a(a) { }
//	
//	};
//void process(const A& a) {  }
//unique_ptr<A> ptrA1(new A(55));
//
//std::map<std::string, int> m = { {"234",1} };

//int f() { return 33; }
class A { };
auto Deleter1 = [](A* pA) {delete pA; };
auto Deleter2 = [](A* pA) {};
int main() {
	shared_ptr<A> sh1(new A, Deleter1);
	A a;
	shared_ptr<A> sh2(&a, Deleter2);

	vector< shared_ptr<A> > v{ sh1, sh2 };
	int n = 1;
	const int& cr = n;
//	auto a = cr;
	//unique_ptr<A> ptrA3 = move(ptrA1);

	//
	//	A a = *ptrA1;
	//	//unique_ptr<A> ptrA2 = ptrA1;
	//const string& r = "Hello!";

	//unique_ptr<A> ptrA3(new A(66));
	//ptrA1 = move(ptrA3);
	//unique_ptr<A> ptrA3(new A(66));
	//double d = 1.123;
	//int y(d);
	
//	int i;
//	constexpr auto y = 2;
//	constexpr int ar3[]{ 1,2,y };
//	
//; constexpr int ar[]{ 1,2,3 };
//decltype(i++) l;
//decltype(i) k;
	/*A* a = new A;
	shared_ptr<A> sh1(a, Deleter1);
	shared_ptr<A> sh2(a, Deleter1);

	vector< shared_ptr<A> > v{ sh1, sh2 };*/
}

