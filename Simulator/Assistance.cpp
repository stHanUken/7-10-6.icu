#include <string>
#include <stdarg.h>
#include "Settings.h"

char isLegal(std::string str, int num, ...)
{
	char legal = '\0';
	std::string::size_type pos = str.npos;
	va_list arg_ptr;
	va_start(arg_ptr, num);
	for ( int i = 0; i < num; i ++ )
		if ( (pos = str.find(va_arg(arg_ptr, int))) != std::string::npos ) {
			legal = str[pos];
			break;
		}
	va_end(arg_ptr);
	return legal;
}

