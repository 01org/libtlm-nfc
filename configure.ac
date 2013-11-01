AC_INIT([libtlm-nfc], [0.0.0],[],[],[http://tizen.org])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([])

LT_INIT([disable-static])

# Checks for libraries.
PKG_CHECK_MODULES([GSIGNOND], 
                  [glib-2.0 >= 2.30
                   gio-2.0
                   gio-unix-2.0
                   gmodule-2.0
                   ])
AC_SUBST(TLM_NFC_CFLAGS)
AC_SUBST(TLM_NFC_LIBS)


# AM_PATH_CHECK() is deprecated, but check documentation fails to tell that :-/
PKG_CHECK_MODULES([CHECK], [check >= 0.9.4], [have_check=yes], [have_check=no])
AC_SUBST(CHECK_CFLAGS)
AC_SUBST(CHECK_LIBS)

# gtk-doc
GTK_DOC_CHECK([1.18],[--flavour no-tmpl])

# Checks for typedefs, structures, and compiler characteristics.
TLM_NFC_CFLAGS="$GSIGNOND_CFLAGS -Wall -Werror -DG_LOG_DOMAIN=\\\"gsignond\\\""

AC_OUTPUT([
Makefile
${PACKAGE_NAME}.pc
docs/Makefile
src/Makefile
test/Makefile
])

