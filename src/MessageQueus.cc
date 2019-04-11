//
// Created by dos DRTT on 2019-04-11.
//

#include "MessageQueus.hh"

message_std MessageQueus::getMessage() {
    front++;
    return *list[front];
}

int MessageQueus::setMessage(message_std message) {
    if (end + 1 == front) {
        return -3;
    }
    list[end] = new message_std(message);
    end = (end % (length - 1)) + 1;
    return 0;

}


