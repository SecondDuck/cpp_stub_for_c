#include "stub.h"
#include "stub_for_c.h"

extern "C"{

Stub * newStub(){
    return new Stub();
}

void stubSet(Stub *s, void * addr_o, void * addr_r)
{
    //Stub stub;
    s->set(addr_o, addr_r);
    return;
}

void stubReset(Stub *s, void * addr_o)
{
    s->reset(addr_o);
    return;
}
}