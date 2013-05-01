// ================== elements/local/mynothingelement.cc ==================
#include <click/config.h>
#include "nothingelement.hh"
#include <click/glue.hh>
#include <click/straccum.hh>
CLICK_DECLS

void MyNothingElement::push(int port, Packet *p)
{
	_rate.update(p->length());

	unsigned r = _rate.scaled_average();
	unsigned r2 = _rate.rate();

	click_chatter("%u\n", r2);

	//click_chatter("Hello click!\n");
	output(0).push(p);
}

CLICK_ENDDECLS
EXPORT_ELEMENT(MyNothingElement)
