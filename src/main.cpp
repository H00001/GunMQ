#include <iostream>

#include "MessageQueu.hh"

int main() {
    MessageQueu queu;
    message_std std;
    std.id =65 ;
    queu.setMessage(std);

    std::cout<<queu.getMessage().id<<std::endl;
    std::cout<<queu.getMessage().id<<std::endl;

    return 0;
}