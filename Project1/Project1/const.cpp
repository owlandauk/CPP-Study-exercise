//#include <iostream>
//class Entity
//{
//private:
//	int m_X, m_Y;
//	mutable int var;
//public:
//	int GetX() const
//	{
//		var = 2;
//		//m_X = 2; can change the value of m_X
//		return m_X;
//	}
//};
//
//void PrintEntity(const Entity& e)
//{
//	std::cout << e.GetX() << std::endl;
//}
//int main()
//{
//	Entity e;
//	const int MAX_AGE = 90;
//
//	int* a = new int;
//	//const int* a = new int;不能修改指针指向的地址
//	//int* const a = new int;不能修改指针指向的地址里面存储的值
//
//	*a = 2;
//	a = (int*)&MAX_AGE;
//
//	std::cout << *a << std::endl;
//	std::cin.get();
//}