#ifndef _STUB_FOR_C_H_
#define _STUB_FOR_C_H_
#ifdef __cplusplus
extern "C"{
#endif
typedef struct Stub Stub;

Stub * newStub();

void stubSet(Stub * s, void * addr_o, void * addr_r);

void stubReset(Stub * s, void * addr_o);

#ifdef __cplusplus
}
#endif
#endif
