ACLOCAL_AMFLAGS = -I m4

AM_DISTCHECK_CONFIGURE_FLAGS = \
    --enable-gtk-doc 

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libtlm-nfc.pc

if HAVE_CHECK
SUBDIRS = src docs test
else
SUBDIRS = src docs
endif

valgrind:
	cd test; make valgrind

