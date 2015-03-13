# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/is_err_or_null.c"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/lib/modules/3.13.0-45-generic/build/include/generated/autoconf.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/is_err_or_null.c"

# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/kconfig.h" 1 3 4



# 1 "/lib/modules/3.13.0-45-generic/build/include/generated/autoconf.h" 1 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/kconfig.h" 2 3 4
# 3 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/is_err_or_null.c" 2
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/err.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler.h" 1 3 4
# 54 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler-gcc.h" 1 3 4
# 106 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler-gcc.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler-gcc4.h" 1 3 4
# 107 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler-gcc.h" 2 3 4
# 55 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler.h" 2 3 4
# 72 "/usr/src/linux-headers-3.13.0-45/include/linux/compiler.h" 3 4
struct ftrace_branch_data {
 const char *func;
 const char *file;
 unsigned line;
 union {
  struct {
   unsigned long correct;
   unsigned long incorrect;
  };
  struct {
   unsigned long miss;
   unsigned long hit;
  };
  unsigned long miss_hit[2];
 };
};
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/err.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/errno.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 7 "/usr/src/linux-headers-3.13.0-45/include/linux/err.h" 2 3 4
# 22 "/usr/src/linux-headers-3.13.0-45/include/linux/err.h" 3 4
static inline __attribute__((no_instrument_function)) void * ERR_PTR(long error)
{
 return (void *) error;
}

static inline __attribute__((no_instrument_function)) long PTR_ERR( const void *ptr)
{
 return (long) ptr;
}

static inline __attribute__((no_instrument_function)) long IS_ERR( const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}

static inline __attribute__((no_instrument_function)) long IS_ERR_OR_NULL( const void *ptr)
{
 return !ptr || __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 49 "/usr/src/linux-headers-3.13.0-45/include/linux/err.h" 3 4
static inline __attribute__((no_instrument_function)) void * ERR_CAST( const void *ptr)
{

 return (void *) ptr;
}

static inline __attribute__((no_instrument_function)) int PTR_ERR_OR_ZERO( const void *ptr)
{
 if (IS_ERR(ptr))
  return PTR_ERR(ptr);
 else
  return 0;
}
# 4 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/is_err_or_null.c" 2

void *ptr;
void foo(void)
{
 if (IS_ERR_OR_NULL(ptr)) {
  ;
 }
}
