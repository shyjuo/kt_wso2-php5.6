TESTS = test_oxs
noinst_PROGRAMS = test_oxs

#AM_CFLAGS = -g -O2 -pthread

test_oxs_SOURCES =  test.c

AM_CPPFLAGS = -I$(top_builddir)/include \
		    -I ../../include \
		    @OPENSSLINC@ \
		    @AXIS2INC@ \
		    @UTILINC@ \
		    @AXIOMINC@ 

test_oxs_LDADD   = $(top_builddir)/src/util/librampart_util.la \
                    $(top_builddir)/src/omxmlsec/libomxmlsec.la \
                    $(top_builddir)/src/omxmlsec/openssl/libomopenssl.la \
                    $(top_builddir)/src/omxmlsec/tokens/liboxstokens.la \
		    ${WSFC_HOME}/lib/libaxutil.la \
		    ${WSFC_HOME}/lib/libaxis2_axiom.la \
		    ${WSFC_HOME}/lib/libaxis2_parser.la \
		    @OPENSSLLIB@\
           	    -lxml2
