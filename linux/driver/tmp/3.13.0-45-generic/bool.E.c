# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/bool.c"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/lib/modules/3.13.0-45-generic/build/include/generated/autoconf.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/bool.c"

# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/kconfig.h" 1 3 4



# 1 "/lib/modules/3.13.0-45-generic/build/include/generated/autoconf.h" 1 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/kconfig.h" 2 3 4
# 3 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/bool.c" 2
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/types.h" 1 3 4




# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/types.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/types.h" 1 3 4






# 1 "/usr/src/linux-headers-3.13.0-45/include/asm-generic/int-ll64.h" 1 3 4
# 10 "/usr/src/linux-headers-3.13.0-45/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/int-ll64.h" 1 3 4
# 11 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/asm-generic/bitsperlong.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/bitsperlong.h" 1 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/asm-generic/bitsperlong.h" 2 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 12 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 11 "/usr/src/linux-headers-3.13.0-45/include/asm-generic/int-ll64.h" 2 3 4




typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;
# 8 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/types.h" 2 3 4
# 5 "/usr/include/x86_64-linux-gnu/asm/types.h" 2 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/types.h" 2 3 4
# 13 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/types.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/posix_types.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/stddef.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/stddef.h" 1 3 4
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
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/stddef.h" 2 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/stddef.h" 2 3 4





enum {
 false = 0,
 true = 1
};
# 5 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/posix_types.h" 2 3 4
# 24 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/posix_types.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 3 4
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/posix_types.h" 1 3 4
# 14 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 71 "/usr/src/linux-headers-3.13.0-45/include/uapi/asm-generic/posix_types.h" 3 4
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 18 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 2 3 4
# 5 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/posix_types.h" 2 3 4
# 36 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/posix_types.h" 2 3 4
# 14 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/types.h" 2 3 4
# 32 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 6 "/usr/src/linux-headers-3.13.0-45/include/linux/types.h" 2 3 4






typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef unsigned short umode_t;
typedef __u32 nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;

typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;



typedef __kernel_old_uid_t old_uid_t;
typedef __kernel_old_gid_t old_gid_t;



typedef __kernel_loff_t loff_t;
# 54 "/usr/src/linux-headers-3.13.0-45/include/linux/types.h" 3 4
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 133 "/usr/src/linux-headers-3.13.0-45/include/linux/types.h" 3 4
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
# 146 "/usr/src/linux-headers-3.13.0-45/include/linux/types.h" 3 4
typedef u64 dma_addr_t;
# 157 "/usr/src/linux-headers-3.13.0-45/include/linux/types.h" 3 4
typedef unsigned gfp_t;
typedef unsigned fmode_t;
typedef unsigned oom_flags_t;


typedef u64 phys_addr_t;




typedef phys_addr_t resource_size_t;





typedef unsigned long irq_hw_number_t;

typedef struct {
 int counter;
} atomic_t;


typedef struct {
 long counter;
} atomic64_t;


struct list_head {
 struct list_head *next, *prev;
};

struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};

struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};






struct callback_head {
 struct callback_head *next;
 void (*func)(struct callback_head *head);
};
# 4 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/bool.c" 2

bool foo;
