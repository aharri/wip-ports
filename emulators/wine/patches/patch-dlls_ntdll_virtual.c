--- dlls/ntdll/virtual.c.orig	Wed Mar  7 18:11:48 2012
+++ dlls/ntdll/virtual.c	Thu Mar 22 19:58:55 2012
@@ -882,7 +882,7 @@ static NTSTATUS map_file_into_view( struct file_view *
     {
         int flags = MAP_FIXED | (shared_write ? MAP_SHARED : MAP_PRIVATE);
 
-        if (mmap( (char *)view->base + start, size, prot, flags, fd, offset ) != (void *)-1)
+        if (mmap( (char *)view->base + start, ROUND_ADDR(size + page_mask, page_mask), prot, flags, fd, offset ) != (void *)-1)
             goto done;
 
         if ((errno == EPERM) && (prot & PROT_EXEC))
