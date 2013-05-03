#ifndef CLICK_MYNOTHINGELEMENT_HH
#define CLICK_MYNOTHINGELEMENT_HH
#include <click/element.hh>
#include <click/string.hh>
#include <click/ewma.hh>
CLICK_DECLS
class MyNothingElement : public Element {
public:
    MyNothingElement() { }
    ~MyNothingElement() { }
    const char *class_name() const { return "MyNothingElement"; }
    const char *port_count() const { return PORTS_1_1; }
    const char *processing() const { return PUSH; }
    void push(int port, Packet *p);

private:
	String _string;

	RateEWMA _rate;

};
CLICK_ENDDECLS
#endif
