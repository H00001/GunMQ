#include <utility>

//
// Created by dos DRTT on 2019-04-11.
//

#include "MessageQueu.hh"

message_std MessageQueu::getMessage() {
    front = (front % (length - 1));
    message_std *save = list[front];
    front++;
    return *save;

}


int MessageQueu::setMessage(message_std message) {
    if (end + 1 == front) {
        return -3;
    }
    list[end] = new message_std(message);
    end = (end % (length - 1)) + 1;
    return 0;

}

void MessageQueu::setName(std::string name) {
    this->name = std::move(name);
}

std::string MessageQueu::getName() {
    return this->name;
}

MessageQueu::~MessageQueu() {
    for (int i = 0; i < length; ++i) {
        if (list[i] != nullptr) {
            delete list[i];
        }
    }
}

long MessageQueu::getHashCode() {
    long hash = 0;
    for (char i : name) {
        hash += i;
    }
    return hash^(long)this;
}



