#include "scheduler.hpp"
#include <iostream>

void do_work(){
    int i;
    for(i=0;i<100;i++){
        ;;
    }
    return;
}

int do_work2(int &x){
    int i;
    for(i=0;i<100;i++){
        x++;
    }
    return 100;
}

int main(int argc, char** argv){
    std::printf("Hello world haha\n");
    int n = 0;
    RunTimeScheduler* r = new RunTimeScheduler(2);
    r->launch_task(do_work);
    r->launch_task(do_work2,n);
    delete r;
    std::cout << "Here, value of n = " << n << std::endl;
    return 0;
}