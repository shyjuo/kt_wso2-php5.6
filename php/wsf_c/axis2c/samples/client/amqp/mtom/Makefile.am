SUBDIRS = resources

prgbindir = $(prefix)/samples/bin/amqp

prgbin_PROGRAMS = mtom

mtom_SOURCES = mtom_client.c

mtom_LDADD = $(LDFLAGS) \
             -L$(WSFC_HOME)/lib \
		     -laxutil \
             -laxis2_axiom \
             -laxis2_engine \
             -laxis2_parser \
             $(GUTHTHILA_LIBS)

AM_CPPFLAGS = @AXIS2INC@
