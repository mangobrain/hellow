AC_INIT([hellow], [1.0])

AC_CONFIG_SRCDIR([src/hellow.cxx])

AM_INIT_AUTOMAKE

AC_PROG_CXX
AC_LANG([C++])

AC_CHECK_HEADERS(
	[boost/lexical_cast.hpp],
	[],
	[AC_MSG_ERROR([boost/lexical_cast.hpp not found])]
)

AC_OUTPUT([
	Makefile
	src/Makefile
])
