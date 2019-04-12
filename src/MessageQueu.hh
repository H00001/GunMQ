//
// Created by dos DRTT on 2019-04-11.
//

#ifndef GUNMQ_MESSAGEQUEU_HH
#define GUNMQ_MESSAGEQUEU_HH


#include "data_origin/message_std.hh"
#include "hashble.hh"
#include <string>

class MessageQueu : public hashble {
private:
    message_std **list;
    int front;
    int end;
    std::string name;
    int length;
public:

    long getHashCode() override;

    void setName(std::string name);

    MessageQueu() : list(nullptr), front(0), end(0), length(30) {
        list = new message_std *[length]{nullptr};
    }

    message_std getMessage();

    int setMessage(message_std message);

    std::string getName();

    ~MessageQueu();
};


#endif //GUNMQ_MESSAGEQUEU_HH
