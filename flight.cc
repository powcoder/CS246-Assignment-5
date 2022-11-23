https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "flight.h"

Flight(std::string from, std::string to, int duration, int price, std::string name) : from{from}, to{to}, duration{duration}, price{price}, name{name} {}

std::string getFrom() {
    return from;
}
std::string getTo() {
    return to;
}
int getDuration() {
    return duration;
}
int getPrice() {
    return price;
}
std::string getName() {
    return name;
}