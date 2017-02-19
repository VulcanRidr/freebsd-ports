--- src/network/ssl/qsslsocket_openssl_symbols_p.h.orig	2017-02-19 21:53:03 UTC
+++ src/network/ssl/qsslsocket_openssl_symbols_p.h
@@ -72,6 +72,8 @@
 
 QT_BEGIN_NAMESPACE
 
+#define SSL_CTRL_GET_SERVER_TMP_KEY 109
+
 #define DUMMYARG
 
 #if !defined QT_LINKED_OPENSSL
