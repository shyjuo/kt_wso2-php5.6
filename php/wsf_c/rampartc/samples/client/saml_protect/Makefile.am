prgbindir=$(prefix)/samples/bin/rampartc
prgbin_PROGRAMS = saml_protect_echo
saml_protect_echo_SOURCES = echo.c 

saml_protect_echo_LDADD   = $(LDFLAGS) \
                    -L$(WSFC_HOME)/lib \
					-L$(prefix)/lib \
					-laxutil \
                    -laxis2_axiom \
					-lneethi \
                    -laxis2_engine \
                    -laxis2_parser \
                    -lpthread \
                    -laxis2_http_sender \
                    -laxis2_http_receiver \
		    		-lrampart \
                    $(GUTHTHILA_LIBS) \
                    $(LIBXML2_LIBS)

AM_CPPFLAGS = @AXIS2INC@ \
		   -I$(WSFC_HOME)/include \
            -I ../../../include 

EXTRA_DIST = update_n_run.sh update_n_run.bat

install-data-hook:
		cp update_n_run.sh $(prefix)/samples/bin/rampartc/saml_protect_update_n_run.sh
