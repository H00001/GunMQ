//
// Created by dos DRTT on 2019-04-11.
//

#ifndef GUNMQ_MESSAGEQUEUS_HH
#define GUNMQ_MESSAGEQUEUS_HH


#include "data_origin/message_std.hh"

class MessageQueus {
private:
    message_std **list;
    int front;
    int end;
    int length;
public:
    MessageQueus() : list(nullptr), front(0), end(0), length(30) {
        list = new message_std *[length];
    }

    message_std getMessage();

    int setMessage(message_std message);
};


#endif //GUNMQ_MESSAGEQUEUS_HH
