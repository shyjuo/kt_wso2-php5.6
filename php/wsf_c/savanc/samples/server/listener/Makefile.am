prglibdir=$(prefix)/services/listener
samplesdir=$(prefix)/samples/server/listener
prglib_LTLIBRARIES = liblistener.la
prglib_DATA= services.xml
noinst_HEADERS = listener.h
SUBDIRS =
liblistener_la_SOURCES = listener.c listener_skeleton.c
liblistener_la_LIBADD  =
AM_CPPFLAGS =  @AXIS2INC@ \
		@SAVANINC@

EXTRA_DIST=services.xml
