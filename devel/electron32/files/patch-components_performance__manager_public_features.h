--- components/performance_manager/public/features.h.orig	2024-08-14 20:54:51 UTC
+++ components/performance_manager/public/features.h
@@ -21,7 +21,7 @@ BASE_DECLARE_FEATURE(kRunOnMainThreadSync);
 
 #if !BUILDFLAG(IS_ANDROID)
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #define URGENT_DISCARDING_FROM_PERFORMANCE_MANAGER() false
 #else
 #define URGENT_DISCARDING_FROM_PERFORMANCE_MANAGER() true
