prglibdir=$(prefix)/samples/lib/rampartc
prglib_LTLIBRARIES = librdflatfile.la
librdflatfile_la_SOURCES = rampart_replay_detector_flat_file.c
librdflatfile_la_LIBADD  = $(LDFLAGS) \
						   		-L$(WSFC_HOME)/lib \
								-laxutil \
								../../src/util/librampart.la

AM_CPPFLAGS = -I ../../include\
			@AXIS2INC@
