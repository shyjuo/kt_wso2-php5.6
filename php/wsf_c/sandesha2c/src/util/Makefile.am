noinst_LTLIBRARIES = libsandesha_util.la

libsandesha_util_la_SOURCES = \
							error.c \
							sandesha2_utils.c \
							spec_specific_consts.c\
                            fault_data.c\
                            fault_mgr.c\
                            ack_mgr.c \
							seq_mgr.c \
                            terminate_mgr.c \
							msg_init.c \
							msg_creator.c\
                            msg_retrans_adjuster.c\
                            property_bean.c\
                            property_mgr.c

AM_CPPFLAGS = -I$(top_builddir)/include \
		   	@AXIOMINC@ \
		   	@UTILINC@ \
		   	@NEETHIINC@ \
		   	@AXIS2INC@
