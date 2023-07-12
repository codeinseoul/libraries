#include "message_api.h"
#include "message/message.h"

namespace src::api {

void print_hello() { lib::message::print_message("Hello, World!"); }
void print_bye() { lib::message::print_message("Bye, World!"); }

} // namespace src::api
