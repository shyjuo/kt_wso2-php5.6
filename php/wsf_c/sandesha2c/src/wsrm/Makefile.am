TESTS =
noinst_LTLIBRARIES = libsandesha2_wsrm.la

libsandesha2_wsrm_la_SOURCES = ack_final.c\
                               identifier.c\
                               endpoint.c\
                               address.c\
                               mc_address.c\
                               acks_to.c\
							   nack.c\
                               accept.c\
                               ack_none.c\
                               ack_range.c\
                               expires.c\
                               fault_code.c\
                               msg_number.c\
                               last_msg_number.c\
                               last_msg.c\
                               ack_requested.c\
                               close_seq.c\
                               close_seq_res.c\
                               seq_offer.c\
                               seq_ack.c\
                               sequence.c\
                               create_seq.c\
                               create_seq_res.c\
                               seq_fault.c\
                               terminate_seq.c\
                               terminate_seq_res.c\
                               rm_elements.c \
							   msg_pending.c \
							   make_connection.c

AM_CPPFLAGS = -I$(top_builddir)/include \
		   	@AXIOMINC@ \
		   	@UTILINC@ \
		   	@NEETHIINC@ \
		   @AXIS2INC@
