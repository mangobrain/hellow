dnl # This file is processed by autoconf to create a shell script named
dnl # "configure".  Usually this is done by invoking autoreconf, not by
dnl # invoking autoconf directly.
dnl # (BTW: "dnl" means "discard the rest of this line", so this comment block
dnl # will not appear in the output file.)

# Initialise autoconf, specifying a package name and version number
AC_INIT([hellow], [1.0])

# Tell it where our source directory is - this performs a quick sanity-check,
# verifying that the unpacked source is actually available when someone runs
# the configure script
AC_CONFIG_SRCDIR([src/hellow.cxx])

# Initialise automake.  Autoconf does not do this by default, since it can be
# used in isolation, and also because this macro can take various options for
# controlling automake behaviour.
AM_INIT_AUTOMAKE

# Check that we have a C++ compiler
AC_PROG_CXX

# Define the output files we expect the configure script to generate.
# In this simple example, all we want are our Makefiles.
AC_OUTPUT([
	Makefile
	src/Makefile
])
