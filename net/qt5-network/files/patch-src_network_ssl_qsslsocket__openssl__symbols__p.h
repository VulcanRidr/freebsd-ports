--- src/network/ssl/qsslsocket_openssl_symbols_p.h	2017-02-22 23:44:03 UTC
+++ src/network/ssl/qsslsocket_openssl_symbols_p.h	
@@ -74,6 +74,8 @@ QT_BEGIN_NAMESPACE
 
 #define DUMMYARG
 
+#define SSL_CTRL_GET_SERVER_TMP_KEY 109
+
 #if !defined QT_LINKED_OPENSSL
 // **************** Shared declarations ******************
 // ret func(arg)
@@ -487,6 +489,8 @@ void q_EC_KEY_free(EC_KEY *ecdh);
 size_t q_EC_get_builtin_curves(EC_builtin_curve *r, size_t nitems);
 #if OPENSSL_VERSION_NUMBER >= 0x10002000L
 int q_EC_curve_nist2nid(const char *name);
+int q_SSL_CTX_set1_curves(SSL_CTX *a, int *b, int c);
+int q_SSL_CTX_set1_groups(SSL_CTX *a, const int *b, size_t c);
 #endif // OPENSSL_VERSION_NUMBER >= 0x10002000L
 #endif // OPENSSL_NO_EC
 #if OPENSSL_VERSION_NUMBER >= 0x10002000L
