prgbindir=$(prefix)/samples/bin
prgbin_PROGRAMS = session
session_SOURCES = session.c

session_LDADD   = $(LDFLAGS) \
                -L$(WSFC_HOME)/lib \
					-laxutil \
                    -laxis2_axiom \
                    -laxis2_engine \
                    -laxis2_parser \
                    -laxis2_http_sender \
                    -laxis2_http_receiver \
                    $(GUTHTHILA_LIBS)

AM_CPPFLAGS = @AXIS2INC@

EXTRA_DIST=README.txt session.mk
