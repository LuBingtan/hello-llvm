#include <iostream>
#include <fstream>
#include <laxer.hpp>


int main(int argc, char* args[]) {
    char buffer[256];
    std::ifstream in;
    in.open("./test.k", std::ios::in);
    while (!in.eof()) {
        in.getline(buffer, 1024);
        std::cout<<buffer<<std::endl;
    }
    int rst = gettok();
    std::cout<<"get tok: "<<rst<<std::endl;
    return 0;
}