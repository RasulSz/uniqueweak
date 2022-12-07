/*
This class template is deprecated as of C++11. unique_ptr is a new facility with a similar
functionality, but with improved security.
auto_ptr is a smart pointer that manages an object obtained via new expression and
deletes that object when auto_ptr itself is destroyed.
An object when described using auto_ptr class it stores a pointer to a single allocated
object which ensures that when it goes out of scope, the object it points to must get
automatically destroyed. It is based on exclusive ownership model i.e. two pointers of
the same type can’t point to the same resource at the same time. As shown in the below program, copying or
assigning of pointers changes the ownership i.e. source pointer has to give ownership to the destination pointer.
*/

//#include <iostream>
//#include <memory>
//using namespace std;
//
//class A {
//public:
//    void show() { cout << "A::show()" << endl; }
//};
//
//int main()
//{
//    // p1 is an auto_ptr of type A
//    auto_ptr<A> p1(new A);
//    p1->show();
//
//    // returns the memory address of p1
//    cout << p1.get() << endl;
//
//    // copy constructor called, this makes p1 empty.
//    auto_ptr<A> p2(p1);
//    p2->show();
//
//    // p1 is empty now
//    cout << p1.get() << endl;
//
//    // p1 gets copied in p2
//    cout << p2.get() << endl;
//
//    return 0;
//}





/*
A weak_ptr is created as a copy of shared_ptr. It provides access to an
object that is owned by one or more shared_ptr instances but does not
participate in reference counting. The existence or destruction of
weak_ptr has no effect on the shared_ptr or its other copies. It
is required in some cases to break circular references between shared_ptr instances.
Cyclic Dependency (Problems with shared_ptr): Let’s consider a scenario
where we have two classes A and B, both have pointers to other classes.
So, it’s always like A is pointing to B and B is pointing to A. Hence,
use_count will never reach zero and they never get deleted.
*/

//#include <iostream>
//#include <memory>
//using namespace std;
//std::weak_ptr<int> gw;
//
//void observe()
//{
//    std::cout << "gw.use_count() == " << gw.use_count() << "; ";
//    // we have to make a copy of shared pointer before usage:
//    if (std::shared_ptr<int> spt = gw.lock()) {
//        std::cout << "*spt == " << *spt << '\n';
//    }
//    else {
//        std::cout << "gw is expired\n";
//    }
//}
//
//int main()
//{
//    {
//        auto sp = std::make_shared<int>(42);
//        gw = sp;
//
//        observe();
//    }
//
//    observe();
//}