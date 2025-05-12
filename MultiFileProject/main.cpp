#include<iostream>
#include"dog.h"
#include"operations.h"
#include"log.h"
using namespace std;
int main(){
    Dog dog1("Fliftzy");
    dog1.print_info();
    cout<<add(4,6)<<endl;
    log_data("Hello there",LogType::FETAL_ERROR);
    return 0;
}