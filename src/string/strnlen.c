#include <string.h>

size_t strnlen(const char *s : itype(_Array_ptr<const char>) count(n), size_t n)
_Checked{
	_Array_ptr<const char> p : count(n) = memchr(s, 0, n);
	return p ? p-s : n;
}
