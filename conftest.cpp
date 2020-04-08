/* confdefs.h */
#define PACKAGE_NAME "timecoin Core"
#define PACKAGE_TARNAME "timecoin"
#define PACKAGE_VERSION "0.18.1"
#define PACKAGE_STRING "timecoin Core 0.18.1"
#define PACKAGE_BUGREPORT "https://github.com/timecoin-project/timecoin/issues"
#define PACKAGE_URL "https://timecoin.org/"
#define HAVE_CXX11 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define USE_ASM 1
#define ENABLE_SSE41 1
#define ENABLE_AVX2 1
#define ENABLE_SHANI 1
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define HAVE_DECL_STRERROR_R 1
#define HAVE_STRERROR_R 1
#define STRERROR_R_CHAR_P 1
/* end confdefs.h.  */


                    int foo_def( void ) __attribute__((visibility("default")));
                    int foo_hid( void ) __attribute__((visibility("hidden")));
                    int foo_int( void ) __attribute__((visibility("internal")));
                    int foo_pro( void ) __attribute__((visibility("protected")));

int
main ()
{

  ;
  return 0;
}

