prgbindir=$(bindir)
prgbin_PROGRAMS = axis2_tcp_server
SUBDIRS =
AM_CFLAGS = -g 
axis2_tcp_server_SOURCES = tcp_server_main.c 

axis2_tcp_server_LDADD   =  $(LDFLAGS) \
		             $(top_builddir)/src/core/transport/http/common/libaxis2_http_common.la \
			     $(top_builddir)/axiom/src/om/libaxis2_axiom.la \
			     $(top_builddir)/util/src/libaxutil.la \
			     $(top_builddir)/axiom/src/parser/$(WRAPPER_DIR)/libaxis2_parser.la \
                             $(top_builddir)/src/core/description/libaxis2_description.la \
			     $(top_builddir)/src/core/deployment/libaxis2_deployment.la \
			     $(top_builddir)/src/core/context/libaxis2_context.la \
			     $(top_builddir)/src/core/clientapi/libaxis2_clientapi.la \
			     $(top_builddir)/src/core/engine/libaxis2_engine.la \
			     $(top_builddir)/src/core/transport/tcp/sender/libaxis2_tcp_sender.la \
			     $(top_builddir)/src/core/transport/tcp/receiver/libaxis2_tcp_receiver.la \
			     $(top_builddir)/neethi/src/libneethi.la

AM_CPPFLAGS =  -I$(top_builddir)/include \
            -I$(top_builddir)/src/core/description\
            -I$(top_builddir)/src/core/context \
            -I$(top_builddir)/src/core/deployment\
            -I$(top_builddir)/src/core/phaseresolver \
            -I$(top_builddir)/src/core/engine \
            -I$(top_builddir)/util/include \
            -I../.. \
            -I$(top_builddir)/axiom/include
