noinst_LTLIBRARIES = libsandesha2_storage.la

libsandesha2_storage_la_SOURCES = \
								storage_mgr.c \
								create_seq_mgr.c \
								invoker_mgr.c \
								sender_mgr.c \
								next_msg_mgr.c \
								seq_property_mgr.c

AM_CPPFLAGS = -I$(top_builddir)/include \
		   	@AXIS2INC@ \
		   	@AXIOMINC@ \
		   	@NEETHIINC@ \
		   	@UTILINC@
