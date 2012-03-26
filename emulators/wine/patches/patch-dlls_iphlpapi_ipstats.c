--- dlls/iphlpapi/ipstats.c.orig	Wed Mar  7 18:11:48 2012
+++ dlls/iphlpapi/ipstats.c	Thu Mar 22 19:58:55 2012
@@ -653,7 +653,7 @@ DWORD WINAPI GetIpStatistics(PMIB_IPSTATS stats)
         }
         if (kc) kstat_close( kc );
     }
-#elif defined(HAVE_SYS_SYSCTL_H) && defined(IPCTL_STATS)
+#elif (defined(HAVE_SYS_SYSCTL_H) && defined(IPCTL_STATS)) && !defined(__OpenBSD__)
     {
         int mib[] = {CTL_NET, PF_INET, IPPROTO_IP, IPCTL_STATS};
 #define MIB_LEN (sizeof(mib) / sizeof(mib[0]))
@@ -1758,7 +1758,7 @@ DWORD WINAPI AllocateAndGetTcpTableFromStack( PMIB_TCP
         }
         else ret = ERROR_NOT_SUPPORTED;
     }
-#elif defined(HAVE_SYS_SYSCTL_H) && defined(HAVE_STRUCT_XINPGEN)
+#elif (defined(HAVE_SYS_SYSCTL_H) && defined(HAVE_STRUCT_XINPGEN)) && !defined(__OpenBSD__)
     {
         size_t Len = 0;
         char *Buf = NULL;
