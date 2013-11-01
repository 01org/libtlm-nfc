NULL=
lib_LTLIBRARIES = libtlm-nfc.la

libtlm_nfc_la_SOURCES = \
    gtlm-nfc.c 

libtlm_nfc_la_CPPFLAGS = \
    -I$(top_builddir) \
    -I$(top_srcdir)/src \
    -I. \
    $(TLM_NFC_CFLAGS) \
    $(NULL)

libgsignond_common_la_LIBADD = \
    $(TLM_NFC_LIBS) \
    $(NULL)
