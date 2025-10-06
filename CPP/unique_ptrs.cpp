#include <iostream>
#include <memory>
/*
unique_ptrs:
- use <memory>
- can be dereference using * or -> as raw ptrs
- get(): 
    - returns the raw pointer that the unique_ptr is managing, without releasing ownership.
    - get() is for temporary access, not ownership.
- reset(new object): destroy current obj & point to new obj or nullptr if empty
- release(): Release resource to a raw ptr, dont forget to delete & nullptr
- 
*/

class Robot{
    private:
        std::string name="Hurricane";
        int id=2345;
    public:
        Robot(int idty):id(idty){
            std::cout<<name <<" Robot "<<id<<" created."<<std::endl;
        }
        ~Robot(){
            std::cout<<name <<" Robot "<<id<<" destroyed."<<std::endl;
        }
        void whoami(){
            std::cout<<"I am Robot "<<name<<" id:"<< id<<std::endl;
        }
};

int main (){
    // Raw pointer way
    Robot* ptr = new Robot(1);

    // Unique ptr
    auto uptr = std::make_unique<Robot>(2);
    uptr->whoami();

    auto nptr = uptr.get();
    nptr->whoami();

    // DO NOT delete or free borrowed raw pointers.
    // delete nptr; nptr = nullptr;

    uptr->whoami();

    uptr.reset(); //destroy obj & point to nullptr
    uptr.reset(new Robot(3)); // creates new Robot obj, destroys current object being pointed and start pointing to new
    

    // Release resource to a raw ptr, dont forget to delete & nullptr
    Robot* rptr = uptr.release();
    // uptr->whoami(); // exception occurs here as uptr is nullptr
    rptr->whoami();
    delete rptr; rptr = nullptr;


    delete ptr;
    ptr = nullptr;
    return 0;
}


