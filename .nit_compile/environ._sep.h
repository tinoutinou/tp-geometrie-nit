/* This C header file is generated by NIT to compile modules and programs that requires environ. */
#ifndef environ_sep
#define environ_sep
#include "symbol._sep.h"
#include <nit_common.h>
#include <environ_nit.h>
extern const char *LOCATE_environ;
extern const int SFT_environ[];
#define CALL_environ___Symbol___environ(recv) ((environ___Symbol___environ_t)CALL((recv), (SFT_environ[0] + 0)))
#define CALL_environ___NativeString___get_environ(recv) ((environ___NativeString___get_environ_t)CALL((recv), (SFT_environ[1] + 0)))
static const char * const LOCATE_environ___Symbol___environ = "environ::Symbol::environ";
val_t environ___Symbol___environ(val_t p0);
typedef val_t (*environ___Symbol___environ_t)(val_t p0);
val_t NEW_Symbol_symbol___Symbol___init(val_t p0);
static const char * const LOCATE_environ___NativeString___get_environ = "environ::NativeString::get_environ";
val_t environ___NativeString___get_environ(val_t p0);
typedef val_t (*environ___NativeString___get_environ_t)(val_t p0);
val_t NEW_NativeString_string___NativeString___init();
#endif
