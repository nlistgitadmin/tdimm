# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/dmi_walk=1.c"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/lib/modules/3.13.0-45-generic/build/include/generated/autoconf.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/dmi_walk=1.c"

# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/kconfig.h" 1 3 4



# 1 "/lib/modules/3.13.0-45-generic/build/include/generated/autoconf.h" 1 3 4
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/kconfig.h" 2 3 4
# 3 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/dmi_walk=1.c" 2
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/dmi.h" 1 3 4



# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 1 3 4



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
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 2 3 4

# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/poison.h" 1 3 4
# 7 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 2 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/const.h" 1 3 4
# 8 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 2 3 4
# 24 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 37 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 60 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 74 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 86 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 99 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void __list_del_entry(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
}

static inline __attribute__((no_instrument_function)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 entry->prev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
# 122 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline __attribute__((no_instrument_function)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}





static inline __attribute__((no_instrument_function)) void list_del_init(struct list_head *entry)
{
 __list_del_entry(entry);
 INIT_LIST_HEAD(entry);
}






static inline __attribute__((no_instrument_function)) void list_move(struct list_head *list, struct list_head *head)
{
 __list_del_entry(list);
 list_add(list, head);
}






static inline __attribute__((no_instrument_function)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del_entry(list);
 list_add_tail(list, head);
}






static inline __attribute__((no_instrument_function)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline __attribute__((no_instrument_function)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 204 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline __attribute__((no_instrument_function)) void list_rotate_left(struct list_head *head)
{
 struct list_head *first;

 if (!list_empty(head)) {
  first = head->next;
  list_move_tail(first, head);
 }
}





static inline __attribute__((no_instrument_function)) int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline __attribute__((no_instrument_function)) void __list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 struct list_head *new_first = entry->next;
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry;
 entry->next = list;
 head->next = new_first;
 new_first->prev = head;
}
# 259 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 if (list_empty(head))
  return;
 if (list_is_singular(head) &&
  (head->next != entry && head != entry))
  return;
 if (entry == head)
  INIT_LIST_HEAD(list);
 else
  __list_cut_position(list, head, entry);
}

static inline __attribute__((no_instrument_function)) void __list_splice(const struct list_head *list,
     struct list_head *prev,
     struct list_head *next)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;

 first->prev = prev;
 prev->next = first;

 last->next = next;
 next->prev = last;
}






static inline __attribute__((no_instrument_function)) void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head, head->next);
}






static inline __attribute__((no_instrument_function)) void list_splice_tail(struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head->prev, head);
}
# 318 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
# 335 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
# 597 "/usr/src/linux-headers-3.13.0-45/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline __attribute__((no_instrument_function)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline __attribute__((no_instrument_function)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline __attribute__((no_instrument_function)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline __attribute__((no_instrument_function)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}

static inline __attribute__((no_instrument_function)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}

static inline __attribute__((no_instrument_function)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}


static inline __attribute__((no_instrument_function)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline __attribute__((no_instrument_function)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}


static inline __attribute__((no_instrument_function)) void hlist_add_fake(struct hlist_node *n)
{
 n->pprev = &n->next;
}





static inline __attribute__((no_instrument_function)) void hlist_move_list(struct hlist_head *old,
       struct hlist_head *new)
{
 new->first = old->first;
 if (new->first)
  new->first->pprev = &new->first;
 old->first = ((void *)0);
}
# 5 "/usr/src/linux-headers-3.13.0-45/include/linux/dmi.h" 2 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 1 3 4
# 12 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/uuid.h" 1 3 4
# 23 "/usr/src/linux-headers-3.13.0-45/include/linux/uuid.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/uuid.h" 1 3 4
# 25 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/uuid.h" 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/linux/string.h" 1 3 4







# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 9 "/usr/src/linux-headers-3.13.0-45/include/linux/string.h" 2 3 4
# 1 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/string.h" 1 3 4
# 10 "/usr/src/linux-headers-3.13.0-45/include/linux/string.h" 2 3 4

extern char *strndup_user(const char *, long);
extern void *memdup_user(const void *, size_t);




# 1 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/string.h" 1 3 4



# 1 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/string_64.h" 1 3 4
# 9 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/string_64.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void *__inline_memcpy(void *to, const void *from, size_t n)
{
 unsigned long d0, d1, d2;
 asm volatile("rep ; movsl\n\t"
       "testb $2,%b4\n\t"
       "je 1f\n\t"
       "movsw\n"
       "1:\ttestb $1,%b4\n\t"
       "je 2f\n\t"
       "movsb\n"
       "2:"
       : "=&c" (d0), "=&D" (d1), "=&S" (d2)
       : "0" (n / 4), "q" (n), "1" ((long)to), "2" ((long)from)
       : "memory");
 return to;
}







extern void *memcpy(void *to, const void *from, size_t len);
# 55 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/string_64.h" 3 4
void *memset(void *s, int c, size_t n);


void *memmove(void *dest, const void *src, size_t count);

int memcmp(const void *cs, const void *ct, size_t count);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *cs, const char *ct);
# 5 "/lib/modules/3.13.0-45-generic/build/arch/x86/include/asm/string.h" 2 3 4
# 18 "/usr/src/linux-headers-3.13.0-45/include/linux/string.h" 2 3 4


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


extern int strcasecmp(const char *s1, const char *s2);


extern int strncasecmp(const char *s1, const char *s2, size_t n);


extern char * strchr(const char *,int);


extern char * strnchr(const char *, size_t, int);


extern char * strrchr(const char *,int);

extern char * skip_spaces(const char *);

extern char *strim(char *);

static inline __attribute__((no_instrument_function)) char *strstrip(char *str)
{
 return strim(str);
}


extern char * strstr(const char *, const char *);


extern char * strnstr(const char *, const char *, size_t);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 105 "/usr/src/linux-headers-3.13.0-45/include/linux/string.h" 3 4
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);


extern void * memchr(const void *,int,__kernel_size_t);

void *memchr_inv(const void *s, int c, size_t n);

extern char *kstrdup(const char *s, gfp_t gfp);
extern char *kstrndup(const char *s, size_t len, gfp_t gfp);
extern void *kmemdup(const void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, const char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq(const char *s1, const char *s2);
extern int strtobool(const char *s, bool *res);


int vbin_printf(u32 *bin_buf, size_t size, const char *fmt, va_list args);
int bstr_printf(char *buf, size_t size, const char *fmt, const u32 *bin_buf);
int bprintf(u32 *bin_buf, size_t size, const char *fmt, ...) __attribute__((format(printf, 3, 4)));


extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
           const void *from, size_t available);






static inline __attribute__((no_instrument_function)) bool strstarts(const char *str, const char *prefix)
{
 return strncmp(str, prefix, strlen(prefix)) == 0;
}

size_t memweight(const void *ptr, size_t bytes);
void memzero_explicit(void *s, size_t count);






static inline __attribute__((no_instrument_function)) const char *kbasename(const char *path)
{
 const char *tail = strrchr(path, '/');
 return tail ? tail + 1 : path;
}
# 26 "/usr/src/linux-headers-3.13.0-45/include/uapi/linux/uuid.h" 2 3 4

typedef struct {
 __u8 b[16];
} uuid_le;

typedef struct {
 __u8 b[16];
} uuid_be;
# 24 "/usr/src/linux-headers-3.13.0-45/include/linux/uuid.h" 2 3 4


static inline __attribute__((no_instrument_function)) int uuid_le_cmp(const uuid_le u1, const uuid_le u2)
{
 return memcmp(&u1, &u2, sizeof(uuid_le));
}

static inline __attribute__((no_instrument_function)) int uuid_be_cmp(const uuid_be u1, const uuid_be u2)
{
 return memcmp(&u1, &u2, sizeof(uuid_be));
}

extern void uuid_le_gen(uuid_le *u);
extern void uuid_be_gen(uuid_be *u);
# 13 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 2 3 4
typedef unsigned long kernel_ulong_t;




struct pci_device_id {
 __u32 vendor, device;
 __u32 subvendor, subdevice;
 __u32 class, class_mask;
 kernel_ulong_t driver_data;
};







struct ieee1394_device_id {
 __u32 match_flags;
 __u32 vendor_id;
 __u32 model_id;
 __u32 specifier_id;
 __u32 version;
 kernel_ulong_t driver_data;
};
# 101 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct usb_device_id {

 __u16 match_flags;


 __u16 idVendor;
 __u16 idProduct;
 __u16 bcdDevice_lo;
 __u16 bcdDevice_hi;


 __u8 bDeviceClass;
 __u8 bDeviceSubClass;
 __u8 bDeviceProtocol;


 __u8 bInterfaceClass;
 __u8 bInterfaceSubClass;
 __u8 bInterfaceProtocol;


 __u8 bInterfaceNumber;


 kernel_ulong_t driver_info
  __attribute__((aligned(sizeof(kernel_ulong_t))));
};
# 146 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct hid_device_id {
 __u16 bus;
 __u16 group;
 __u32 vendor;
 __u32 product;
 kernel_ulong_t driver_data;
};


struct ccw_device_id {
 __u16 match_flags;

 __u16 cu_type;
 __u16 dev_type;
 __u8 cu_model;
 __u8 dev_model;

 kernel_ulong_t driver_info;
};







struct ap_device_id {
 __u16 match_flags;
 __u8 dev_type;
 kernel_ulong_t driver_info;
};




struct css_device_id {
 __u8 match_flags;
 __u8 type;
 kernel_ulong_t driver_data;
};



struct acpi_device_id {
 __u8 id[9];
 kernel_ulong_t driver_data;
};




struct pnp_device_id {
 __u8 id[8];
 kernel_ulong_t driver_data;
};

struct pnp_card_device_id {
 __u8 id[8];
 kernel_ulong_t driver_data;
 struct {
  __u8 id[8];
 } devs[8];
};




struct serio_device_id {
 __u8 type;
 __u8 extra;
 __u8 id;
 __u8 proto;
};




struct of_device_id
{
 char name[32];
 char type[32];
 char compatible[128];
 const void *data;
};


struct vio_device_id {
 char type[32];
 char compat[32];
};



struct pcmcia_device_id {
 __u16 match_flags;

 __u16 manf_id;
 __u16 card_id;

 __u8 func_id;


 __u8 function;


 __u8 device_no;

 __u32 prod_id_hash[4];


 const char * prod_id[4];


 kernel_ulong_t driver_info;
 char * cisfile;
};
# 302 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct input_device_id {

 kernel_ulong_t flags;

 __u16 bustype;
 __u16 vendor;
 __u16 product;
 __u16 version;

 kernel_ulong_t evbit[0x1f / 64 + 1];
 kernel_ulong_t keybit[0x2ff / 64 + 1];
 kernel_ulong_t relbit[0x0f / 64 + 1];
 kernel_ulong_t absbit[0x3f / 64 + 1];
 kernel_ulong_t mscbit[0x07 / 64 + 1];
 kernel_ulong_t ledbit[0x0f / 64 + 1];
 kernel_ulong_t sndbit[0x07 / 64 + 1];
 kernel_ulong_t ffbit[0x7f / 64 + 1];
 kernel_ulong_t swbit[0x0f / 64 + 1];

 kernel_ulong_t driver_info;
};






struct eisa_device_id {
 char sig[8];
 kernel_ulong_t driver_data;
};



struct parisc_device_id {
 __u8 hw_type;
 __u8 hversion_rev;
 __u16 hversion;
 __u32 sversion;
};
# 352 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct sdio_device_id {
 __u8 class;
 __u16 vendor;
 __u16 device;
 kernel_ulong_t driver_data;
};


struct ssb_device_id {
 __u16 vendor;
 __u16 coreid;
 __u8 revision;
 __u8 __pad;
} __attribute__((packed, aligned(2)));
# 376 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct bcma_device_id {
 __u16 manuf;
 __u16 id;
 __u8 rev;
 __u8 class;
} __attribute__((packed,aligned(2)));
# 392 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct virtio_device_id {
 __u32 device;
 __u32 vendor;
};





struct hv_vmbus_device_id {
 __u8 guid[16];
 kernel_ulong_t driver_data;
};






struct rpmsg_device_id {
 char name[32];
};






struct i2c_device_id {
 char name[20];
 kernel_ulong_t driver_data;
};






struct spi_device_id {
 char name[32];
 kernel_ulong_t driver_data;
};


enum dmi_field {
 DMI_NONE,
 DMI_BIOS_VENDOR,
 DMI_BIOS_VERSION,
 DMI_BIOS_DATE,
 DMI_SYS_VENDOR,
 DMI_PRODUCT_NAME,
 DMI_PRODUCT_VERSION,
 DMI_PRODUCT_SERIAL,
 DMI_PRODUCT_UUID,
 DMI_BOARD_VENDOR,
 DMI_BOARD_NAME,
 DMI_BOARD_VERSION,
 DMI_BOARD_SERIAL,
 DMI_BOARD_ASSET_TAG,
 DMI_CHASSIS_VENDOR,
 DMI_CHASSIS_TYPE,
 DMI_CHASSIS_VERSION,
 DMI_CHASSIS_SERIAL,
 DMI_CHASSIS_ASSET_TAG,
 DMI_STRING_MAX,
};

struct dmi_strmatch {
 unsigned char slot:7;
 unsigned char exact_match:1;
 char substr[79];
};

struct dmi_system_id {
 int (*callback)(const struct dmi_system_id *);
 const char *ident;
 struct dmi_strmatch matches[4];
 void *driver_data;
};
# 485 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct platform_device_id {
 char name[20];
 kernel_ulong_t driver_data;
};
# 511 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct mdio_device_id {
 __u32 phy_id;
 __u32 phy_id_mask;
};

struct zorro_device_id {
 __u32 id;
 kernel_ulong_t driver_data;
};






struct isapnp_device_id {
 unsigned short card_vendor, card_device;
 unsigned short vendor, function;
 kernel_ulong_t driver_data;
};
# 540 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct amba_id {
 unsigned int id;
 unsigned int mask;
 void *data;
};






struct x86_cpu_id {
 __u16 vendor;
 __u16 family;
 __u16 model;
 __u16 feature;
 kernel_ulong_t driver_data;
};
# 569 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct ipack_device_id {
 __u8 format;
 __u32 vendor;
 __u32 device;
};




struct mei_cl_device_id {
 char name[32];
 kernel_ulong_t driver_info;
};
# 597 "/usr/src/linux-headers-3.13.0-45/include/linux/mod_devicetable.h" 3 4
struct rio_device_id {
 __u16 did, vid;
 __u16 asm_did, asm_vid;
};
# 6 "/usr/src/linux-headers-3.13.0-45/include/linux/dmi.h" 2 3 4



enum dmi_device_type {
 DMI_DEV_TYPE_ANY = 0,
 DMI_DEV_TYPE_OTHER,
 DMI_DEV_TYPE_UNKNOWN,
 DMI_DEV_TYPE_VIDEO,
 DMI_DEV_TYPE_SCSI,
 DMI_DEV_TYPE_ETHERNET,
 DMI_DEV_TYPE_TOKENRING,
 DMI_DEV_TYPE_SOUND,
 DMI_DEV_TYPE_PATA,
 DMI_DEV_TYPE_SATA,
 DMI_DEV_TYPE_SAS,
 DMI_DEV_TYPE_IPMI = -1,
 DMI_DEV_TYPE_OEM_STRING = -2,
 DMI_DEV_TYPE_DEV_ONBOARD = -3,
};

enum dmi_entry_type {
 DMI_ENTRY_BIOS = 0,
 DMI_ENTRY_SYSTEM,
 DMI_ENTRY_BASEBOARD,
 DMI_ENTRY_CHASSIS,
 DMI_ENTRY_PROCESSOR,
 DMI_ENTRY_MEM_CONTROLLER,
 DMI_ENTRY_MEM_MODULE,
 DMI_ENTRY_CACHE,
 DMI_ENTRY_PORT_CONNECTOR,
 DMI_ENTRY_SYSTEM_SLOT,
 DMI_ENTRY_ONBOARD_DEVICE,
 DMI_ENTRY_OEMSTRINGS,
 DMI_ENTRY_SYSCONF,
 DMI_ENTRY_BIOS_LANG,
 DMI_ENTRY_GROUP_ASSOC,
 DMI_ENTRY_SYSTEM_EVENT_LOG,
 DMI_ENTRY_PHYS_MEM_ARRAY,
 DMI_ENTRY_MEM_DEVICE,
 DMI_ENTRY_32_MEM_ERROR,
 DMI_ENTRY_MEM_ARRAY_MAPPED_ADDR,
 DMI_ENTRY_MEM_DEV_MAPPED_ADDR,
 DMI_ENTRY_BUILTIN_POINTING_DEV,
 DMI_ENTRY_PORTABLE_BATTERY,
 DMI_ENTRY_SYSTEM_RESET,
 DMI_ENTRY_HW_SECURITY,
 DMI_ENTRY_SYSTEM_POWER_CONTROLS,
 DMI_ENTRY_VOLTAGE_PROBE,
 DMI_ENTRY_COOLING_DEV,
 DMI_ENTRY_TEMP_PROBE,
 DMI_ENTRY_ELECTRICAL_CURRENT_PROBE,
 DMI_ENTRY_OOB_REMOTE_ACCESS,
 DMI_ENTRY_BIS_ENTRY,
 DMI_ENTRY_SYSTEM_BOOT,
 DMI_ENTRY_MGMT_DEV,
 DMI_ENTRY_MGMT_DEV_COMPONENT,
 DMI_ENTRY_MGMT_DEV_THRES,
 DMI_ENTRY_MEM_CHANNEL,
 DMI_ENTRY_IPMI_DEV,
 DMI_ENTRY_SYS_POWER_SUPPLY,
 DMI_ENTRY_ADDITIONAL,
 DMI_ENTRY_ONBOARD_DEV_EXT,
 DMI_ENTRY_MGMT_CONTROLLER_HOST,
 DMI_ENTRY_INACTIVE = 126,
 DMI_ENTRY_END_OF_TABLE = 127,
};

struct dmi_header {
 u8 type;
 u8 length;
 u16 handle;
};

struct dmi_device {
 struct list_head list;
 int type;
 const char *name;
 void *device_data;
};



struct dmi_dev_onboard {
 struct dmi_device dev;
 int instance;
 int segment;
 int bus;
 int devfn;
};

extern int dmi_check_system(const struct dmi_system_id *list);
const struct dmi_system_id *dmi_first_match(const struct dmi_system_id *list);
extern const char * dmi_get_system_info(int field);
extern const struct dmi_device * dmi_find_device(int type, const char *name,
 const struct dmi_device *from);
extern void dmi_scan_machine(void);
extern void dmi_memdev_walk(void);
extern void dmi_set_dump_stack_arch_desc(void);
extern bool dmi_get_date(int field, int *yearp, int *monthp, int *dayp);
extern int dmi_name_in_vendors(const char *str);
extern int dmi_name_in_serial(const char *str);
extern int dmi_available;
extern int dmi_walk(void (*decode)(const struct dmi_header *, void *),
 void *private_data);
extern bool dmi_match(enum dmi_field f, const char *str);
extern void dmi_memdev_name(u16 handle, const char **bank, const char **device);
# 4 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/dmi_walk=1.c" 2

static void dmi_walk_cb(const struct dmi_header *dm)
{
}

void foo(void)
{
 dmi_walk(&dmi_walk_cb);
}
