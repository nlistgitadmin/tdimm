# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/acpi_tables.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/lib/modules/3.11.0-15-generic/build/include/generated/autoconf.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/acpi_tables.c"

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kconfig.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/generated/autoconf.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/kconfig.h" 2 3 4
# 3 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/acpi_tables.c" 2
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 1 3 4
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/errno.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/errno.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/errno-base.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/errno.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/errno.h" 2 3 4
# 29 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/ioport.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/ioport.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler.h" 1 3 4
# 54 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler-gcc.h" 1 3 4
# 103 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler-gcc.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler-gcc4.h" 1 3 4
# 104 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler-gcc.h" 2 3 4
# 55 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler.h" 2 3 4
# 72 "/lib/modules/3.11.0-15-generic/build/include/linux/compiler.h" 3 4
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
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/ioport.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/types.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/types.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/types.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/int-ll64.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/int-ll64.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/int-ll64.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitsperlong.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/bitsperlong.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitsperlong.h" 2 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 11 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/int-ll64.h" 2 3 4




typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;
# 8 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/types.h" 2 3 4
# 5 "/usr/include/x86_64-linux-gnu/asm/types.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/types.h" 2 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/types.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/posix_types.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/stddef.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/stddef.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/stddef.h" 2 3 4





enum {
 false = 0,
 true = 1
};
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/posix_types.h" 2 3 4
# 24 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/posix_types.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 3 4
typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;

typedef unsigned long __kernel_old_dev_t;
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/posix_types.h" 2 3 4
# 36 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/posix_types.h" 2 3 4
# 14 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/types.h" 2 3 4
# 32 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/types.h" 2 3 4






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
# 54 "/lib/modules/3.11.0-15-generic/build/include/linux/types.h" 3 4
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
# 133 "/lib/modules/3.11.0-15-generic/build/include/linux/types.h" 3 4
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
# 146 "/lib/modules/3.11.0-15-generic/build/include/linux/types.h" 3 4
typedef u64 dma_addr_t;
# 157 "/lib/modules/3.11.0-15-generic/build/include/linux/types.h" 3 4
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
# 14 "/lib/modules/3.11.0-15-generic/build/include/linux/ioport.h" 2 3 4




struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};
# 138 "/lib/modules/3.11.0-15-generic/build/include/linux/ioport.h" 3 4
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern struct resource *request_resource_conflict(struct resource *root, struct resource *new);
extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
void release_child_resources(struct resource *new);
extern void reserve_region_with_split(struct resource *root,
        resource_size_t start, resource_size_t end,
        const char *name);
extern struct resource *insert_resource_conflict(struct resource *parent, struct resource *new);
extern int insert_resource(struct resource *parent, struct resource *new);
extern void insert_resource_expand_to_fit(struct resource *root, struct resource *new);
extern void arch_remove_reservations(struct resource *avail);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        resource_size_t (*alignf)(void *,
             const struct resource *,
             resource_size_t,
             resource_size_t),
        void *alignf_data);
struct resource *lookup_resource(struct resource *root, resource_size_t start);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);
static inline __attribute__((no_instrument_function)) resource_size_t resource_size(const struct resource *res)
{
 return res->end - res->start + 1;
}
static inline __attribute__((no_instrument_function)) unsigned long resource_type(const struct resource *res)
{
 return res->flags & 0x00001f00;
}
# 182 "/lib/modules/3.11.0-15-generic/build/include/linux/ioport.h" 3 4
extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n,
     const char *name, int flags);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

extern int release_mem_region_adjustable(struct resource *, resource_size_t,
    resource_size_t);


static inline __attribute__((no_instrument_function)) int check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&ioport_resource, s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, const char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
extern int iomem_map_sanity_check(resource_size_t addr, unsigned long size);
extern int iomem_is_exclusive(u64 addr);

extern int
walk_system_ram_range(unsigned long start_pfn, unsigned long nr_pages,
  void *arg, int (*func)(unsigned long, unsigned long, void *));


static inline __attribute__((no_instrument_function)) bool resource_overlaps(struct resource *r1, struct resource *r2)
{
       return (r1->start <= r2->end && r1->end >= r2->start);
}
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 1 3 4
# 20 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 1 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/poison.h" 1 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/const.h" 1 3 4
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 2 3 4
# 24 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 37 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 60 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 74 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 86 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 99 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
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
# 122 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
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
# 204 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
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
# 259 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
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
# 318 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
# 335 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
static inline __attribute__((no_instrument_function)) void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
# 570 "/lib/modules/3.11.0-15-generic/build/include/linux/list.h" 3 4
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
# 21 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/lockdep.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/lockdep.h" 3 4
struct task_struct;
struct lockdep_map;


extern int prove_locking;
extern int lock_stat;
# 370 "/lib/modules/3.11.0-15-generic/build/include/linux/lockdep.h" 3 4
static inline __attribute__((no_instrument_function)) void lockdep_off(void)
{
}

static inline __attribute__((no_instrument_function)) void lockdep_on(void)
{
}
# 411 "/lib/modules/3.11.0-15-generic/build/include/linux/lockdep.h" 3 4
struct lock_class_key { };
# 465 "/lib/modules/3.11.0-15-generic/build/include/linux/lockdep.h" 3 4
static inline __attribute__((no_instrument_function)) void print_irqtrace_events(struct task_struct *curr)
{
}
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject_ns.h" 1 3 4
# 20 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject_ns.h" 3 4
struct sock;
struct kobject;





enum kobj_ns_type {
 KOBJ_NS_TYPE_NONE = 0,
 KOBJ_NS_TYPE_NET,
 KOBJ_NS_TYPES
};
# 40 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject_ns.h" 3 4
struct kobj_ns_type_operations {
 enum kobj_ns_type type;
 void *(*grab_current_ns)(void);
 const void *(*netlink_ns)(struct sock *sk);
 const void *(*initial_ns)(void);
 void (*drop_ns)(void *);
};

int kobj_ns_type_register(const struct kobj_ns_type_operations *ops);
int kobj_ns_type_registered(enum kobj_ns_type type);
const struct kobj_ns_type_operations *kobj_child_ns_ops(struct kobject *parent);
const struct kobj_ns_type_operations *kobj_ns_ops(struct kobject *kobj);

void *kobj_ns_grab_current(enum kobj_ns_type type);
const void *kobj_ns_netlink(enum kobj_ns_type type, struct sock *sk);
const void *kobj_ns_initial(enum kobj_ns_type type);
void kobj_ns_drop(enum kobj_ns_type type, void *ns);
# 20 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/stat.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/stat.h" 1 3 4
# 68 "/usr/include/x86_64-linux-gnu/asm/stat.h" 3 4
struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;

 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 long __unused[3];
};



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;






 unsigned int st_size;
 unsigned int st_atime;
 unsigned int st_mtime;
 unsigned int st_ctime;

};
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/stat.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/stat.h" 1 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/stat.h" 2 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/stat.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/cache.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 1 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 102 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/linkage.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/stringify.h" 1 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/linkage.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/export.h" 1 3 4
# 26 "/lib/modules/3.11.0-15-generic/build/include/linux/export.h" 3 4
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/linkage.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/linkage.h" 1 3 4
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/linkage.h" 2 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 1 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 3 4
extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);





# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 1 3 4
# 16 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/asm.h" 1 3 4
# 8 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 2 3 4
# 45 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 3 4
struct alt_instr {
 s32 instr_offset;
 s32 repl_offset;
 u16 cpuid;
 u8 instrlen;
 u8 replacementlen;
};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;


extern void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end);
extern void alternatives_smp_module_del(struct module *mod);
extern void alternatives_enable_smp(void);
extern int alternatives_text_reserved(void *start, void *end);
extern bool skip_smp_alternatives;
# 131 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/required-features.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 2 3 4
# 237 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 1 3 4
# 238 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 2 3 4

extern const char * const x86_cap_flags[10*32];
extern const char * const x86_power_flags[32];
# 359 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
extern void warn_pre_alternatives(void);
extern bool __static_cpu_has_safe(u16 bit);






static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) __attribute__((pure)) bool __static_cpu_has(u16 bit)
{
# 389 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
  do { asm goto("1: jmp %l[t_no]\n" "2:\n" ".section .altinstructions,\"a\"\n" " .long 1b - .\n" " .long 0\n" " .word %P0\n" " .byte 2b - 1b\n" " .byte 0\n" ".previous\n" : : "i" (bit) : : t_no); asm (""); } while (0)
# 399 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
                           ;
  return true;
 t_no:
  return false;
# 431 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
}
# 442 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) __attribute__((pure)) bool _static_cpu_has_safe(u16 bit)
{







  do { asm goto("1: .byte 0xe9\n .long %l[t_dynamic] - 2f\n" "2:\n" ".section .altinstructions,\"a\"\n" " .long 1b - .\n" " .long 3f - .\n" " .word %P1\n" " .byte 2b - 1b\n" " .byte 4f - 3f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "3: .byte 0xe9\n .long %l[t_no] - 2b\n" "4:\n" ".previous\n" ".section .altinstructions,\"a\"\n" " .long 1b - .\n" " .long 0\n" " .word %P0\n" " .byte 2b - 1b\n" " .byte 0\n" ".previous\n" : : "i" (bit), "i" ((3*32+21)) : : t_dynamic, t_no); asm (""); } while (0)
# 472 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
                        ;
  return true;
 t_no:
  return false;
 t_dynamic:
  return __static_cpu_has_safe(bit);
# 515 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpufeature.h" 3 4
}
# 132 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 2 3 4
# 198 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 3 4
struct paravirt_patch_site;

void apply_paravirt(struct paravirt_patch_site *start,
      struct paravirt_patch_site *end);
# 210 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 3 4
extern void *text_poke_early(void *addr, const void *opcode, size_t len);
# 229 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/alternative.h" 3 4
struct text_poke_param {
 void *addr;
 const void *opcode;
 size_t len;
};

extern void *text_poke(void *addr, const void *opcode, size_t len);
extern void *text_poke_smp(void *addr, const void *opcode, size_t len);
extern void text_poke_smp_batch(struct text_poke_param *params, int n);
# 17 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4
# 61 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void
set_bit(unsigned int nr, volatile unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "orb %1,%0"
   : "+m" (*(volatile long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7)))
   : "memory");
 } else {
  asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "bts %1,%0"
   : "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");
 }
}
# 84 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) void __set_bit(int nr, volatile unsigned long *addr)
{
 asm volatile("bts %1,%0" : "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");
}
# 99 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void
clear_bit(int nr, volatile unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "andb %1,%0"
   : "+m" (*(volatile long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)~(1 << ((nr) & 7))));
 } else {
  asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btr %1,%0"
   : "+m" (*(volatile long *) (addr))
   : "Ir" (nr));
 }
}
# 121 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) void clear_bit_unlock(unsigned nr, volatile unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline __attribute__((no_instrument_function)) void __clear_bit(int nr, volatile unsigned long *addr)
{
 asm volatile("btr %1,%0" : "+m" (*(volatile long *) (addr)) : "Ir" (nr));
}
# 144 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) void __clear_bit_unlock(unsigned nr, volatile unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
# 162 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) void __change_bit(int nr, volatile unsigned long *addr)
{
 asm volatile("btc %1,%0" : "+m" (*(volatile long *) (addr)) : "Ir" (nr));
}
# 176 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) void change_bit(int nr, volatile unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xorb %1,%0"
   : "+m" (*(volatile long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7))));
 } else {
  asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btc %1,%0"
   : "+m" (*(volatile long *) (addr))
   : "Ir" (nr));
 }
}
# 197 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int test_and_set_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "bts %2,%1\n\t"
       "sbb %0,%0" : "=r" (oldbit), "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}
# 214 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int
test_and_set_bit_lock(int nr, volatile unsigned long *addr)
{
 return test_and_set_bit(nr, addr);
}
# 229 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int __test_and_set_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm("bts %2,%1\n\t"
     "sbb %0,%0"
     : "=r" (oldbit), "+m" (*(volatile long *) (addr))
     : "Ir" (nr));
 return oldbit;
}
# 248 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}
# 275 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int __test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile("btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr))
       : "Ir" (nr));
 return oldbit;
}


static inline __attribute__((no_instrument_function)) int __test_and_change_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile("btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr))
       : "Ir" (nr) : "memory");

 return oldbit;
}
# 307 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int test_and_change_bit(int nr, volatile unsigned long *addr)
{
 int oldbit;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*(volatile long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int constant_test_bit(unsigned int nr, const volatile unsigned long *addr)
{
 return ((1UL << (nr % 64)) &
  (addr[nr / 64])) != 0;
}

static inline __attribute__((no_instrument_function)) int variable_test_bit(int nr, volatile const unsigned long *addr)
{
 int oldbit;

 asm volatile("bt %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit)
       : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}
# 356 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long __ffs(unsigned long word)
{
 asm("rep; bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static inline __attribute__((no_instrument_function)) unsigned long ffz(unsigned long word)
{
 asm("rep; bsf %1,%0"
  : "=r" (word)
  : "r" (~word));
 return word;
}







static inline __attribute__((no_instrument_function)) unsigned long __fls(unsigned long word)
{
 asm("bsr %1,%0"
     : "=r" (word)
     : "rm" (word));
 return word;
}
# 406 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int ffs(int x)
{
 int r;
# 420 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
 asm("bsfl %1,%0"
     : "=r" (r)
     : "rm" (x), "0" (-1));
# 433 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
 return r + 1;
}
# 447 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) int fls(int x)
{
 int r;
# 461 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
 asm("bsrl %1,%0"
     : "=r" (r)
     : "rm" (x), "0" (-1));
# 474 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
 return r + 1;
}
# 489 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int fls64(__u64 x)
{
 int bitpos = -1;





 asm("bsrq %1,%q0"
     : "+r" (bitpos)
     : "rm" (x));
 return bitpos + 1;
}




# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/find.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/find.h" 3 4
extern unsigned long find_next_bit(const unsigned long *addr, unsigned long
  size, unsigned long offset);
# 22 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/find.h" 3 4
extern unsigned long find_next_zero_bit(const unsigned long *addr, unsigned
  long size, unsigned long offset);
# 35 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/find.h" 3 4
extern unsigned long find_first_bit(const unsigned long *addr,
        unsigned long size);
# 45 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/find.h" 3 4
extern unsigned long find_first_zero_bit(const unsigned long *addr,
      unsigned long size);
# 507 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/sched.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int sched_find_first_bit(const unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
# 29 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/sched.h" 3 4
}
# 509 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/arch_hweight.h" 1 3 4
# 24 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/arch_hweight.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int __arch_hweight32(unsigned int w)
{
 unsigned int res = 0;

 asm ("661:\n\t" "call __sw_hweight32" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(4*32+23)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0xf3,0x40,0x0f,0xb8,0xc7" "\n" "664""1" ":\n\t" ".popsection"
       : "=""a" (res)
       : "D" (w));

 return res;
}

static inline __attribute__((no_instrument_function)) unsigned int __arch_hweight16(unsigned int w)
{
 return __arch_hweight32(w & 0xffff);
}

static inline __attribute__((no_instrument_function)) unsigned int __arch_hweight8(unsigned int w)
{
 return __arch_hweight32(w & 0xff);
}

static inline __attribute__((no_instrument_function)) unsigned long __arch_hweight64(__u64 w)
{
 unsigned long res = 0;





 asm ("661:\n\t" "call __sw_hweight64" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(4*32+23)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0xf3,0x48,0x0f,0xb8,0xc7" "\n" "664""1" ":\n\t" ".popsection"
       : "=""a" (res)
       : "D" (w));


 return res;
}
# 513 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/const_hweight.h" 1 3 4
# 515 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/le.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/byteorder.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/byteorder/little_endian.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/byteorder/little_endian.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/byteorder/little_endian.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/swab.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/swab.h" 1 3 4





# 1 "/usr/include/x86_64-linux-gnu/asm/swab.h" 1 3 4






static __inline__ __attribute__((no_instrument_function)) __u32 __arch_swab32(__u32 val)
{
# 21 "/usr/include/x86_64-linux-gnu/asm/swab.h" 3 4
 __asm__("bswapl %0"
     : "=r" (val)
     : "0" (val));

 return val;
}


static __inline__ __attribute__((no_instrument_function)) __u64 __arch_swab64(__u64 val)
{
# 53 "/usr/include/x86_64-linux-gnu/asm/swab.h" 3 4
 __asm__("bswapq %0"
     : "=r" (val)
     : "0" (val));
 return val;

}
# 7 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/swab.h" 2 3 4
# 46 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/swab.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((__const__)) __u16 __fswab16(__u16 val)
{





 return ((__u16)( (((__u16)(val) & (__u16)0x00ffU) << 8) | (((__u16)(val) & (__u16)0xff00U) >> 8)));

}

static inline __attribute__((no_instrument_function)) __attribute__((__const__)) __u32 __fswab32(__u32 val)
{

 return __builtin_bswap32(val);





}

static inline __attribute__((no_instrument_function)) __attribute__((__const__)) __u64 __fswab64(__u64 val)
{

 return __builtin_bswap64(val);
# 81 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/swab.h" 3 4
}

static inline __attribute__((no_instrument_function)) __attribute__((__const__)) __u32 __fswahw32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x0000ffffUL) << 16) | (((__u32)(val) & (__u32)0xffff0000UL) >> 16)));

}

static inline __attribute__((no_instrument_function)) __attribute__((__const__)) __u32 __fswahb32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));

}
# 154 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/swab.h" 3 4
static inline __attribute__((no_instrument_function)) __u16 __swab16p(const __u16 *p)
{



 return (__builtin_constant_p((__u16)(*p)) ? ((__u16)( (((__u16)(*p) & (__u16)0x00ffU) << 8) | (((__u16)(*p) & (__u16)0xff00U) >> 8))) : __fswab16(*p));

}





static inline __attribute__((no_instrument_function)) __u32 __swab32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x000000ffUL) << 24) | (((__u32)(*p) & (__u32)0x0000ff00UL) << 8) | (((__u32)(*p) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(*p) & (__u32)0xff000000UL) >> 24))) : __fswab32(*p));

}





static inline __attribute__((no_instrument_function)) __u64 __swab64p(const __u64 *p)
{



 return (__builtin_constant_p((__u64)(*p)) ? ((__u64)( (((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(*p) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(*p) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(*p));

}







static inline __attribute__((no_instrument_function)) __u32 __swahw32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x0000ffffUL) << 16) | (((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) : __fswahw32(*p));

}







static inline __attribute__((no_instrument_function)) __u32 __swahb32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) : __fswahb32(*p));

}





static inline __attribute__((no_instrument_function)) void __swab16s(__u16 *p)
{



 *p = __swab16p(p);

}




static inline __attribute__((no_instrument_function)) void __swab32s(__u32 *p)
{



 *p = __swab32p(p);

}





static inline __attribute__((no_instrument_function)) void __swab64s(__u64 *p)
{



 *p = __swab64p(p);

}







static inline __attribute__((no_instrument_function)) void __swahw32s(__u32 *p)
{



 *p = __swahw32p(p);

}







static inline __attribute__((no_instrument_function)) void __swahb32s(__u32 *p)
{



 *p = __swahb32p(p);

}
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/swab.h" 2 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/byteorder/little_endian.h" 2 3 4
# 43 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/byteorder/little_endian.h" 3 4
static inline __attribute__((no_instrument_function)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline __attribute__((no_instrument_function)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline __attribute__((no_instrument_function)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline __attribute__((no_instrument_function)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline __attribute__((no_instrument_function)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline __attribute__((no_instrument_function)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline __attribute__((no_instrument_function)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __attribute__((no_instrument_function)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __attribute__((no_instrument_function)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __attribute__((no_instrument_function)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __attribute__((no_instrument_function)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __attribute__((no_instrument_function)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/byteorder/little_endian.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/byteorder/generic.h" 1 3 4
# 143 "/lib/modules/3.11.0-15-generic/build/include/linux/byteorder/generic.h" 3 4
static inline __attribute__((no_instrument_function)) void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline __attribute__((no_instrument_function)) void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline __attribute__((no_instrument_function)) void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}

static inline __attribute__((no_instrument_function)) void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)(__builtin_constant_p((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))) ? ((__u16)( (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0x00ffU) << 8) | (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0xff00U) >> 8))) : __fswab16(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))));
}

static inline __attribute__((no_instrument_function)) void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)(__builtin_constant_p((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))) ? ((__u32)( (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x000000ffUL) << 24) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0xff000000UL) >> 24))) : __fswab32(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))));
}

static inline __attribute__((no_instrument_function)) void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)(__builtin_constant_p((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))) ? ((__u64)( (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))));
}
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/byteorder/little_endian.h" 2 3 4
# 5 "/usr/include/x86_64-linux-gnu/asm/byteorder.h" 2 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/le.h" 2 3 4





static inline __attribute__((no_instrument_function)) unsigned long find_next_zero_bit_le(const void *addr,
  unsigned long size, unsigned long offset)
{
 return find_next_zero_bit(addr, size, offset);
}

static inline __attribute__((no_instrument_function)) unsigned long find_next_bit_le(const void *addr,
  unsigned long size, unsigned long offset)
{
 return find_next_bit(addr, size, offset);
}

static inline __attribute__((no_instrument_function)) unsigned long find_first_zero_bit_le(const void *addr,
  unsigned long size)
{
 return find_first_zero_bit(addr, size);
}
# 52 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/le.h" 3 4
static inline __attribute__((no_instrument_function)) int test_bit_le(int nr, const void *addr)
{
 return (__builtin_constant_p((nr ^ 0)) ? constant_test_bit((nr ^ 0), (addr)) : variable_test_bit((nr ^ 0), (addr)));
}

static inline __attribute__((no_instrument_function)) void set_bit_le(int nr, void *addr)
{
 set_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) void clear_bit_le(int nr, void *addr)
{
 clear_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) void __set_bit_le(int nr, void *addr)
{
 __set_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) void __clear_bit_le(int nr, void *addr)
{
 __clear_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) int test_and_set_bit_le(int nr, void *addr)
{
 return test_and_set_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) int test_and_clear_bit_le(int nr, void *addr)
{
 return test_and_clear_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) int __test_and_set_bit_le(int nr, void *addr)
{
 return __test_and_set_bit(nr ^ 0, addr);
}

static inline __attribute__((no_instrument_function)) int __test_and_clear_bit_le(int nr, void *addr)
{
 return __test_and_clear_bit(nr ^ 0, addr);
}
# 517 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bitops/ext2-atomic-setbit.h" 1 3 4
# 519 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bitops.h" 2 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 2 3 4
# 46 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 3 4
static __inline__ __attribute__((no_instrument_function)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ __attribute__((no_instrument_function)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline __attribute__((no_instrument_function)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? (__builtin_constant_p(w) ? ((( (!!((w) & (1ULL << 0))) + (!!((w) & (1ULL << 1))) + (!!((w) & (1ULL << 2))) + (!!((w) & (1ULL << 3))) + (!!((w) & (1ULL << 4))) + (!!((w) & (1ULL << 5))) + (!!((w) & (1ULL << 6))) + (!!((w) & (1ULL << 7))) ) + ( (!!(((w) >> 8) & (1ULL << 0))) + (!!(((w) >> 8) & (1ULL << 1))) + (!!(((w) >> 8) & (1ULL << 2))) + (!!(((w) >> 8) & (1ULL << 3))) + (!!(((w) >> 8) & (1ULL << 4))) + (!!(((w) >> 8) & (1ULL << 5))) + (!!(((w) >> 8) & (1ULL << 6))) + (!!(((w) >> 8) & (1ULL << 7))) )) + (( (!!(((w) >> 16) & (1ULL << 0))) + (!!(((w) >> 16) & (1ULL << 1))) + (!!(((w) >> 16) & (1ULL << 2))) + (!!(((w) >> 16) & (1ULL << 3))) + (!!(((w) >> 16) & (1ULL << 4))) + (!!(((w) >> 16) & (1ULL << 5))) + (!!(((w) >> 16) & (1ULL << 6))) + (!!(((w) >> 16) & (1ULL << 7))) ) + ( (!!((((w) >> 16) >> 8) & (1ULL << 0))) + (!!((((w) >> 16) >> 8) & (1ULL << 1))) + (!!((((w) >> 16) >> 8) & (1ULL << 2))) + (!!((((w) >> 16) >> 8) & (1ULL << 3))) + (!!((((w) >> 16) >> 8) & (1ULL << 4))) + (!!((((w) >> 16) >> 8) & (1ULL << 5))) + (!!((((w) >> 16) >> 8) & (1ULL << 6))) + (!!((((w) >> 16) >> 8) & (1ULL << 7))) ))) : __arch_hweight32(w)) : (__builtin_constant_p(w) ? (((( (!!((w) & (1ULL << 0))) + (!!((w) & (1ULL << 1))) + (!!((w) & (1ULL << 2))) + (!!((w) & (1ULL << 3))) + (!!((w) & (1ULL << 4))) + (!!((w) & (1ULL << 5))) + (!!((w) & (1ULL << 6))) + (!!((w) & (1ULL << 7))) ) + ( (!!(((w) >> 8) & (1ULL << 0))) + (!!(((w) >> 8) & (1ULL << 1))) + (!!(((w) >> 8) & (1ULL << 2))) + (!!(((w) >> 8) & (1ULL << 3))) + (!!(((w) >> 8) & (1ULL << 4))) + (!!(((w) >> 8) & (1ULL << 5))) + (!!(((w) >> 8) & (1ULL << 6))) + (!!(((w) >> 8) & (1ULL << 7))) )) + (( (!!(((w) >> 16) & (1ULL << 0))) + (!!(((w) >> 16) & (1ULL << 1))) + (!!(((w) >> 16) & (1ULL << 2))) + (!!(((w) >> 16) & (1ULL << 3))) + (!!(((w) >> 16) & (1ULL << 4))) + (!!(((w) >> 16) & (1ULL << 5))) + (!!(((w) >> 16) & (1ULL << 6))) + (!!(((w) >> 16) & (1ULL << 7))) ) + ( (!!((((w) >> 16) >> 8) & (1ULL << 0))) + (!!((((w) >> 16) >> 8) & (1ULL << 1))) + (!!((((w) >> 16) >> 8) & (1ULL << 2))) + (!!((((w) >> 16) >> 8) & (1ULL << 3))) + (!!((((w) >> 16) >> 8) & (1ULL << 4))) + (!!((((w) >> 16) >> 8) & (1ULL << 5))) + (!!((((w) >> 16) >> 8) & (1ULL << 6))) + (!!((((w) >> 16) >> 8) & (1ULL << 7))) ))) + ((( (!!(((w) >> 32) & (1ULL << 0))) + (!!(((w) >> 32) & (1ULL << 1))) + (!!(((w) >> 32) & (1ULL << 2))) + (!!(((w) >> 32) & (1ULL << 3))) + (!!(((w) >> 32) & (1ULL << 4))) + (!!(((w) >> 32) & (1ULL << 5))) + (!!(((w) >> 32) & (1ULL << 6))) + (!!(((w) >> 32) & (1ULL << 7))) ) + ( (!!((((w) >> 32) >> 8) & (1ULL << 0))) + (!!((((w) >> 32) >> 8) & (1ULL << 1))) + (!!((((w) >> 32) >> 8) & (1ULL << 2))) + (!!((((w) >> 32) >> 8) & (1ULL << 3))) + (!!((((w) >> 32) >> 8) & (1ULL << 4))) + (!!((((w) >> 32) >> 8) & (1ULL << 5))) + (!!((((w) >> 32) >> 8) & (1ULL << 6))) + (!!((((w) >> 32) >> 8) & (1ULL << 7))) )) + (( (!!((((w) >> 32) >> 16) & (1ULL << 0))) + (!!((((w) >> 32) >> 16) & (1ULL << 1))) + (!!((((w) >> 32) >> 16) & (1ULL << 2))) + (!!((((w) >> 32) >> 16) & (1ULL << 3))) + (!!((((w) >> 32) >> 16) & (1ULL << 4))) + (!!((((w) >> 32) >> 16) & (1ULL << 5))) + (!!((((w) >> 32) >> 16) & (1ULL << 6))) + (!!((((w) >> 32) >> 16) & (1ULL << 7))) ) + ( (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 0))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 1))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 2))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 3))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 4))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 5))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 6))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 7))) )))) : __arch_hweight64(w));
}






static inline __attribute__((no_instrument_function)) __u64 rol64(__u64 word, unsigned int shift)
{
 return (word << shift) | (word >> (64 - shift));
}






static inline __attribute__((no_instrument_function)) __u64 ror64(__u64 word, unsigned int shift)
{
 return (word >> shift) | (word << (64 - shift));
}






static inline __attribute__((no_instrument_function)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline __attribute__((no_instrument_function)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline __attribute__((no_instrument_function)) __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline __attribute__((no_instrument_function)) __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline __attribute__((no_instrument_function)) __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline __attribute__((no_instrument_function)) __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}






static inline __attribute__((no_instrument_function)) __s32 sign_extend32(__u32 value, int index)
{
 __u8 shift = 31 - index;
 return (__s32)(value << shift) >> shift;
}

static inline __attribute__((no_instrument_function)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 175 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long __ffs64(u64 word)
{






 return __ffs((unsigned long)word);
}
# 196 "/lib/modules/3.11.0-15-generic/build/include/linux/bitops.h" 3 4
extern unsigned long find_last_bit(const unsigned long *addr,
       unsigned long size);
# 11 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/log2.h" 1 3 4
# 21 "/lib/modules/3.11.0-15-generic/build/include/linux/log2.h" 3 4
extern __attribute__((const, noreturn))
int ____ilog2_NaN(void);
# 31 "/lib/modules/3.11.0-15-generic/build/include/linux/log2.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((const))
int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline __attribute__((no_instrument_function)) __attribute__((const))
int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline __attribute__((no_instrument_function)) __attribute__((const))
bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline __attribute__((no_instrument_function)) __attribute__((const))
unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline __attribute__((no_instrument_function)) __attribute__((const))
unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/typecheck.h" 1 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/printk.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/init.h" 1 3 4
# 137 "/lib/modules/3.11.0-15-generic/build/include/linux/init.h" 3 4
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


typedef void (*ctor_fn_t)(void);


extern int do_one_initcall(initcall_t fn);
extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) load_default_modules(void);

extern void (*late_time_init)(void);

extern bool initcall_debug;
# 226 "/lib/modules/3.11.0-15-generic/build/include/linux/init.h" 3 4
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 255 "/lib/modules/3.11.0-15-generic/build/include/linux/init.h" 3 4
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) parse_early_param(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) parse_early_options(char *cmdline);
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/printk.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kern_levels.h" 1 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/printk.h" 2 3 4


extern const char linux_banner[];
extern const char linux_proc_banner[];

static inline __attribute__((no_instrument_function)) int printk_get_level(const char *buffer)
{
 if (buffer[0] == '\001' && buffer[1]) {
  switch (buffer[1]) {
  case '0' ... '7':
  case 'd':
   return buffer[1];
  }
 }
 return 0;
}

static inline __attribute__((no_instrument_function)) const char *printk_skip_level(const char *buffer)
{
 if (printk_get_level(buffer)) {
  switch (buffer[1]) {
  case '0' ... '7':
  case 'd':
   return buffer + 2;
  }
 }
 return buffer;
}

extern int console_printk[];






static inline __attribute__((no_instrument_function)) void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline __attribute__((no_instrument_function)) void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

struct va_format {
 const char *fmt;
 va_list *va;
};
# 94 "/lib/modules/3.11.0-15-generic/build/include/linux/printk.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((format(printf, 1, 2)))
int no_printk(const char *fmt, ...)
{
 return 0;
}


extern __attribute__((format(printf, 1, 2)))
void early_printk(const char *fmt, ...);
void early_vprintk(const char *fmt, va_list ap);






 __attribute__((format(printf, 5, 0)))
int vprintk_emit(int facility, int level,
   const char *dict, size_t dictlen,
   const char *fmt, va_list args);

 __attribute__((format(printf, 1, 0)))
int vprintk(const char *fmt, va_list args);

 __attribute__((format(printf, 5, 6))) __attribute__((__cold__))
 int printk_emit(int facility, int level,
      const char *dict, size_t dictlen,
      const char *fmt, ...);

 __attribute__((format(printf, 1, 2))) __attribute__((__cold__))
int printk(const char *fmt, ...);




__attribute__((format(printf, 1, 2))) __attribute__((__cold__)) int printk_sched(const char *fmt, ...);






extern int __printk_ratelimit(const char *func);

extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);

extern int printk_delay_msec;
extern int dmesg_restrict;
extern int kptr_restrict;

extern void wake_up_klogd(void);

void log_buf_kexec_setup(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) setup_log_buf(int early);
void dump_stack_set_arch_desc(const char *fmt, ...);
void dump_stack_print_info(const char *log_lvl);
void show_regs_print_info(const char *log_lvl);
# 203 "/lib/modules/3.11.0-15-generic/build/include/linux/printk.h" 3 4
extern void dump_stack(void) __attribute__((__cold__));
# 354 "/lib/modules/3.11.0-15-generic/build/include/linux/printk.h" 3 4
extern const struct file_operations kmsg_fops;

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern void hex_dump_to_buffer(const void *buf, size_t len,
          int rowsize, int groupsize,
          char *linebuf, size_t linebuflen, bool ascii);

extern void print_hex_dump(const char *level, const char *prefix_str,
      int prefix_type, int rowsize, int groupsize,
      const void *buf, size_t len, bool ascii);
# 14 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/dynamic_debug.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/dynamic_debug.h" 3 4
struct _ddebug {




 const char *modname;
 const char *function;
 const char *filename;
 const char *format;
 unsigned int lineno:18;
# 35 "/lib/modules/3.11.0-15-generic/build/include/linux/dynamic_debug.h" 3 4
 unsigned int flags:8;
} __attribute__((aligned(8)));


int ddebug_add_module(struct _ddebug *tab, unsigned int n,
    const char *modname);


extern int ddebug_remove_module(const char *mod_name);
extern __attribute__((format(printf, 2, 3)))
int __dynamic_pr_debug(struct _ddebug *descriptor, const char *fmt, ...);

extern int ddebug_dyndbg_module_param_cb(char *param, char *val,
     const char *modname);

struct device;

extern __attribute__((format(printf, 3, 4)))
int __dynamic_dev_dbg(struct _ddebug *descriptor, const struct device *dev,
        const char *fmt, ...);

struct net_device;

extern __attribute__((format(printf, 3, 4)))
int __dynamic_netdev_dbg(struct _ddebug *descriptor,
    const struct net_device *dev,
    const char *fmt, ...);
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/kernel.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sysinfo.h" 1 3 4






struct sysinfo {
 __kernel_long_t uptime;
 __kernel_ulong_t loads[3];
 __kernel_ulong_t totalram;
 __kernel_ulong_t freeram;
 __kernel_ulong_t sharedram;
 __kernel_ulong_t bufferram;
 __kernel_ulong_t totalswap;
 __kernel_ulong_t freeswap;
 __u16 procs;
 __u16 pad;
 __kernel_ulong_t totalhigh;
 __kernel_ulong_t freehigh;
 __u32 mem_unit;
 char _f[20-2*sizeof(__kernel_ulong_t)-sizeof(__u32)];
};
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/kernel.h" 2 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 2 3 4
# 140 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
struct completion;
struct pt_regs;
struct user;


extern int _cond_resched(void);
# 166 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
  static inline __attribute__((no_instrument_function)) void __might_sleep(const char *file, int line,
       int preempt_offset) { }
# 199 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
static inline __attribute__((no_instrument_function)) void might_fault(void) { }


extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(int state);
__attribute__((format(printf, 1, 2)))
void panic(const char *fmt, ...)
 __attribute__((noreturn)) __attribute__((__cold__));
extern void oops_enter(void);
extern void oops_exit(void);
void print_oops_end_marker(void);
extern int oops_may_print(void);
void do_exit(long error_code)
 __attribute__((noreturn));
void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));


int _kstrtoul(const char *s, unsigned int base, unsigned long *res);
int _kstrtol(const char *s, unsigned int base, long *res);

int kstrtoull(const char *s, unsigned int base, unsigned long long *res);
int kstrtoll(const char *s, unsigned int base, long long *res);
# 239 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
static inline __attribute__((no_instrument_function)) int kstrtoul(const char *s, unsigned int base, unsigned long *res)
{




 if (sizeof(unsigned long) == sizeof(unsigned long long) &&
     __alignof__(unsigned long) == __alignof__(unsigned long long))
  return kstrtoull(s, base, (unsigned long long *)res);
 else
  return _kstrtoul(s, base, res);
}
# 268 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
static inline __attribute__((no_instrument_function)) int kstrtol(const char *s, unsigned int base, long *res)
{




 if (sizeof(long) == sizeof(long long) &&
     __alignof__(long) == __alignof__(long long))
  return kstrtoll(s, base, (long long *)res);
 else
  return _kstrtol(s, base, res);
}

int kstrtouint(const char *s, unsigned int base, unsigned int *res);
int kstrtoint(const char *s, unsigned int base, int *res);

static inline __attribute__((no_instrument_function)) int kstrtou64(const char *s, unsigned int base, u64 *res)
{
 return kstrtoull(s, base, res);
}

static inline __attribute__((no_instrument_function)) int kstrtos64(const char *s, unsigned int base, s64 *res)
{
 return kstrtoll(s, base, res);
}

static inline __attribute__((no_instrument_function)) int kstrtou32(const char *s, unsigned int base, u32 *res)
{
 return kstrtouint(s, base, res);
}

static inline __attribute__((no_instrument_function)) int kstrtos32(const char *s, unsigned int base, s32 *res)
{
 return kstrtoint(s, base, res);
}

int kstrtou16(const char *s, unsigned int base, u16 *res);
int kstrtos16(const char *s, unsigned int base, s16 *res);
int kstrtou8(const char *s, unsigned int base, u8 *res);
int kstrtos8(const char *s, unsigned int base, s8 *res);

int kstrtoull_from_user(const char *s, size_t count, unsigned int base, unsigned long long *res);
int kstrtoll_from_user(const char *s, size_t count, unsigned int base, long long *res);
int kstrtoul_from_user(const char *s, size_t count, unsigned int base, unsigned long *res);
int kstrtol_from_user(const char *s, size_t count, unsigned int base, long *res);
int kstrtouint_from_user(const char *s, size_t count, unsigned int base, unsigned int *res);
int kstrtoint_from_user(const char *s, size_t count, unsigned int base, int *res);
int kstrtou16_from_user(const char *s, size_t count, unsigned int base, u16 *res);
int kstrtos16_from_user(const char *s, size_t count, unsigned int base, s16 *res);
int kstrtou8_from_user(const char *s, size_t count, unsigned int base, u8 *res);
int kstrtos8_from_user(const char *s, size_t count, unsigned int base, s8 *res);

static inline __attribute__((no_instrument_function)) int kstrtou64_from_user(const char *s, size_t count, unsigned int base, u64 *res)
{
 return kstrtoull_from_user(s, count, base, res);
}

static inline __attribute__((no_instrument_function)) int kstrtos64_from_user(const char *s, size_t count, unsigned int base, s64 *res)
{
 return kstrtoll_from_user(s, count, base, res);
}

static inline __attribute__((no_instrument_function)) int kstrtou32_from_user(const char *s, size_t count, unsigned int base, u32 *res)
{
 return kstrtouint_from_user(s, count, base, res);
}

static inline __attribute__((no_instrument_function)) int kstrtos32_from_user(const char *s, size_t count, unsigned int base, s32 *res)
{
 return kstrtoint_from_user(s, count, base, res);
}



extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);





extern int num_to_str(char *buf, int size, unsigned long long num);



extern __attribute__((format(printf, 2, 3))) int sprintf(char *buf, const char * fmt, ...);
extern __attribute__((format(printf, 2, 0))) int vsprintf(char *buf, const char *, va_list);
extern __attribute__((format(printf, 3, 4)))
int snprintf(char *buf, size_t size, const char *fmt, ...);
extern __attribute__((format(printf, 3, 0)))
int vsnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern __attribute__((format(printf, 3, 4)))
int scnprintf(char *buf, size_t size, const char *fmt, ...);
extern __attribute__((format(printf, 3, 0)))
int vscnprintf(char *buf, size_t size, const char *fmt, va_list args);
extern __attribute__((format(printf, 2, 3)))
char *kasprintf(gfp_t gfp, const char *fmt, ...);
extern char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);

extern __attribute__((format(scanf, 2, 3)))
int sscanf(const char *, const char *, ...);
extern __attribute__((format(scanf, 2, 0)))
int vsscanf(const char *, const char *, va_list);

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(const char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int core_kernel_data(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int func_ptr_is_kernel_text(void *ptr);

struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);

unsigned long int_sqrt(unsigned long);

extern void bust_spinlocks(int yes);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int panic_on_io_nmi;
extern int sysctl_panic_on_stackoverflow;
extern const char *print_tainted(void);
enum lockdep_ok {
 LOCKDEP_STILL_OK,
 LOCKDEP_NOW_UNRELIABLE
};
extern void add_taint(unsigned flag, enum lockdep_ok);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
extern int root_mountflags;

extern bool early_boot_irqs_disabled;


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
} system_state;
# 431 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
extern const char hex_asc[];



static inline __attribute__((no_instrument_function)) char *hex_byte_pack(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}

static inline __attribute__((no_instrument_function)) char * pack_hex_byte(char *buf, u8 byte)
{
 return hex_byte_pack(buf, byte);
}

extern int hex_to_bin(char ch);
extern int hex2bin(u8 *dst, const char *src, size_t count);

int mac_pton(const char *s, u8 *mac);
# 473 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
void tracing_off_permanent(void);




enum ftrace_dump_mode {
 DUMP_NONE,
 DUMP_ALL,
 DUMP_ORIG,
};


void tracing_on(void);
void tracing_off(void);
int tracing_is_on(void);
void tracing_snapshot(void);
void tracing_snapshot_alloc(void);

extern void tracing_start(void);
extern void tracing_stop(void);
extern void ftrace_off_permanent(void);

static inline __attribute__((no_instrument_function)) __attribute__((format(printf, 1, 2)))
void ____trace_printk_check_format(const char *fmt, ...)
{
}
# 558 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
extern __attribute__((format(printf, 2, 3)))
int __trace_bprintk(unsigned long ip, const char *fmt, ...);

extern __attribute__((format(printf, 2, 3)))
int __trace_printk(unsigned long ip, const char *fmt, ...);
# 599 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
extern int __trace_bputs(unsigned long ip, const char *str);
extern int __trace_puts(unsigned long ip, const char *str, int size);

extern void trace_dump_stack(int skip);
# 621 "/lib/modules/3.11.0-15-generic/build/include/linux/kernel.h" 3 4
extern int
__ftrace_vbprintk(unsigned long ip, const char *fmt, va_list ap);

extern int
__ftrace_vprintk(unsigned long ip, const char *fmt, va_list ap);

extern void ftrace_dump(enum ftrace_dump_mode oops_dump_mode);
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/cache.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cache.h" 1 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/cache.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 1 3 4
# 29 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 1 3 4
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/preempt.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/preempt.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/thread_info.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/include/linux/thread_info.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/bug.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bug.h" 1 3 4
# 38 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bug.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bug.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bug.h" 3 4
struct bug_entry {



 signed int bug_addr_disp;





 signed int file_disp;

 unsigned short line;

 unsigned short flags;
};
# 65 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/bug.h" 3 4
extern __attribute__((format(printf, 3, 4)))
void warn_slowpath_fmt(const char *file, const int line,
         const char *fmt, ...);
extern __attribute__((format(printf, 4, 5)))
void warn_slowpath_fmt_taint(const char *file, const int line, unsigned taint,
        const char *fmt, ...);
extern void warn_slowpath_null(const char *file, const int line);
# 39 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/bug.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/bug.h" 2 3 4


enum bug_trap_type {
 BUG_TRAP_TYPE_NONE = 0,
 BUG_TRAP_TYPE_WARN = 1,
 BUG_TRAP_TYPE_BUG = 2,
};

struct pt_regs;
# 91 "/lib/modules/3.11.0-15-generic/build/include/linux/bug.h" 3 4
static inline __attribute__((no_instrument_function)) int is_warning_bug(const struct bug_entry *bug)
{
 return bug->flags & (1 << 0);
}

const struct bug_entry *find_bug(unsigned long bugaddr);

enum bug_trap_type report_bug(unsigned long bug_addr, struct pt_regs *regs);


int is_valid_bugaddr(unsigned long addr);
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/thread_info.h" 2 3 4

struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
   u32 *uaddr2;
  } futex;

  struct {
   clockid_t clockid;
   struct timespec *rmtp;

   struct compat_timespec *compat_rmtp;

   u64 expires;
  } nanosleep;

  struct {
   struct pollfd *ufds;
   int nfds;
   int has_timeout;
   unsigned long tv_sec;
   unsigned long tv_nsec;
  } poll;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_types.h" 1 3 4
# 37 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_types.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_64_types.h" 1 3 4
# 38 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_types.h" 2 3 4






extern int devmem_is_allowed(unsigned long pagenr);

extern unsigned long max_low_pfn_mapped;
extern unsigned long max_pfn_mapped;

static inline __attribute__((no_instrument_function)) phys_addr_t get_max_mapped(void)
{
 return (phys_addr_t)max_pfn_mapped << 12;
}

bool pfn_range_is_mapped(unsigned long start_pfn, unsigned long end_pfn);

extern unsigned long init_memory_mapping(unsigned long start,
      unsigned long end);

extern void initmem_init(void);
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_64.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_64.h" 3 4
extern unsigned long max_pfn;
extern unsigned long phys_base;

static inline __attribute__((no_instrument_function)) unsigned long __phys_addr_nodebug(unsigned long x)
{
 unsigned long y = x - (0xffffffff80000000UL);


 x = y + ((x > y) ? phys_base : ((0xffffffff80000000UL) - ((unsigned long)(0xffff880000000000UL))));

 return x;
}
# 37 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page_64.h" 3 4
void clear_page(void *page);
void copy_page(void *to, void *from);
# 12 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 2 3 4






struct page;

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/range.h" 1 3 4



struct range {
 u64 start;
 u64 end;
};

int add_range(struct range *range, int az, int nr_range,
  u64 start, u64 end);


int add_range_with_merge(struct range *range, int az, int nr_range,
    u64 start, u64 end);

void subtract_range(struct range *range, int az, u64 start, u64 end);

int clean_sort_range(struct range *range, int az);

void sort_range(struct range *range, int nr_range);


static inline __attribute__((no_instrument_function)) resource_size_t cap_resource(u64 val)
{
 if (val > ((resource_size_t)~0))
  return ((resource_size_t)~0);

 return val;
}
# 21 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 2 3 4
extern struct range pfn_mapped[];
extern int nr_pfn_mapped;

static inline __attribute__((no_instrument_function)) void clear_user_page(void *page, unsigned long vaddr,
       struct page *pg)
{
 clear_page(page);
}

static inline __attribute__((no_instrument_function)) void copy_user_page(void *to, void *from, unsigned long vaddr,
      struct page *topage)
{
 copy_page(to, from);
}
# 65 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 3 4
extern bool __virt_addr_valid(unsigned long kaddr);




# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/memory_model.h" 1 3 4
# 71 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/getorder.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/getorder.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((__const__))
int __get_order(unsigned long size)
{
 int order;

 size--;
 size >>= 12;



 order = fls64(size);

 return order;
}
# 72 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/page.h" 2 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 2 3 4
# 20 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 3 4
struct task_struct;
struct exec_domain;
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor-flags.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/processor-flags.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor-flags.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4


struct task_struct;
struct mm_struct;

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/segment.h" 1 3 4
# 216 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/segment.h" 3 4
extern const char early_idt_handlers[32][2+2+5];
# 264 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/segment.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 asm("lsll %1,%0" : "=r" (__limit) : "r" (segment));
 return __limit + 1;
}
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/ptrace.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/ptrace-abi.h" 1 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/ptrace.h" 2 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 2 3 4
# 33 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;

 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;


 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;

};





# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 1 3 4
# 42 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/desc_defs.h" 1 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/desc_defs.h" 3 4
struct desc_struct {
 union {
  struct {
   unsigned int a;
   unsigned int b;
  };
  struct {
   u16 limit0;
   u16 base0;
   unsigned base1: 8, type: 4, s: 1, dpl: 2, p: 1;
   unsigned limit: 4, avl: 1, l: 1, d: 1, g: 1, base2: 8;
  };
 };
} __attribute__((packed));







enum {
 GATE_INTERRUPT = 0xE,
 GATE_TRAP = 0xF,
 GATE_CALL = 0xC,
 GATE_TASK = 0x5,
};


struct gate_struct64 {
 u16 offset_low;
 u16 segment;
 unsigned ist : 3, zero0 : 5, type : 5, dpl : 2, p : 1;
 u16 offset_middle;
 u32 offset_high;
 u32 zero1;
} __attribute__((packed));





enum {
 DESC_TSS = 0x9,
 DESC_LDT = 0x2,
 DESCTYPE_S = 0x10,
};


struct ldttss_desc64 {
 u16 limit0;
 u16 base0;
 unsigned base1 : 8, type : 5, dpl : 2, p : 1;
 unsigned limit1 : 4, zero0 : 3, g : 1, base2 : 8;
 u32 base3;
 u32 zero1;
} __attribute__((packed));


typedef struct gate_struct64 gate_desc;
typedef struct ldttss_desc64 ldt_desc;
typedef struct ldttss_desc64 tss_desc;
# 94 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/desc_defs.h" 3 4
struct desc_ptr {
 unsigned short size;
 unsigned long address;
} __attribute__((packed)) ;
# 43 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/kmap_types.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/kmap_types.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/kmap_types.h" 2 3 4
# 44 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 1 3 4
# 226 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_64_types.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/sparsemem.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_64_types.h" 2 3 4







typedef unsigned long pteval_t;
typedef unsigned long pmdval_t;
typedef unsigned long pudval_t;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;

typedef struct { pteval_t pte; } pte_t;
# 227 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 2 3 4
# 239 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 3 4
typedef struct pgprot { pgprotval_t pgprot; } pgprot_t;

typedef struct { pgdval_t pgd; } pgd_t;

static inline __attribute__((no_instrument_function)) pgd_t native_make_pgd(pgdval_t val)
{
 return (pgd_t) { val };
}

static inline __attribute__((no_instrument_function)) pgdval_t native_pgd_val(pgd_t pgd)
{
 return pgd.pgd;
}

static inline __attribute__((no_instrument_function)) pgdval_t pgd_flags(pgd_t pgd)
{
 return native_pgd_val(pgd) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}


typedef struct { pudval_t pud; } pud_t;

static inline __attribute__((no_instrument_function)) pud_t native_make_pud(pmdval_t val)
{
 return (pud_t) { val };
}

static inline __attribute__((no_instrument_function)) pudval_t native_pud_val(pud_t pud)
{
 return pud.pud;
}
# 280 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 3 4
typedef struct { pmdval_t pmd; } pmd_t;

static inline __attribute__((no_instrument_function)) pmd_t native_make_pmd(pmdval_t val)
{
 return (pmd_t) { val };
}

static inline __attribute__((no_instrument_function)) pmdval_t native_pmd_val(pmd_t pmd)
{
 return pmd.pmd;
}
# 300 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 3 4
static inline __attribute__((no_instrument_function)) pudval_t pud_flags(pud_t pud)
{
 return native_pud_val(pud) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}

static inline __attribute__((no_instrument_function)) pmdval_t pmd_flags(pmd_t pmd)
{
 return native_pmd_val(pmd) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}

static inline __attribute__((no_instrument_function)) pte_t native_make_pte(pteval_t val)
{
 return (pte_t) { .pte = val };
}

static inline __attribute__((no_instrument_function)) pteval_t native_pte_val(pte_t pte)
{
 return pte.pte;
}

static inline __attribute__((no_instrument_function)) pteval_t pte_flags(pte_t pte)
{
 return native_pte_val(pte) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}





typedef struct page *pgtable_t;

extern pteval_t __supported_pte_mask;
extern void set_nx(void);
extern int nx_enabled;


extern pgprot_t pgprot_writecombine(pgprot_t prot);





struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t *vma_prot);


void set_pte_vaddr(unsigned long vaddr, pte_t pte);







struct seq_file;
extern void arch_report_meminfo(struct seq_file *m);

enum pg_level {
 PG_LEVEL_NONE,
 PG_LEVEL_4K,
 PG_LEVEL_2M,
 PG_LEVEL_1G,
 PG_LEVEL_NUM
};


extern void update_page_count(int level, unsigned long pages);
# 380 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pgtable_types.h" 3 4
extern pte_t *lookup_address(unsigned long address, unsigned int *level);
extern phys_addr_t slow_virt_to_phys(void *__address);
# 45 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 2 3 4

struct page;
struct thread_struct;
struct desc_ptr;
struct tss_struct;
struct mm_struct;
struct desc_struct;
struct task_struct;
struct cpumask;





struct paravirt_callee_save {
 void *func;
};


struct pv_info {
 unsigned int kernel_rpl;
 int shared_kernel_pmd;


 u16 extra_user_64bit_cs;


 int paravirt_enabled;
 const char *name;
};

struct pv_init_ops {
# 85 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 3 4
 unsigned (*patch)(u8 type, u16 clobber, void *insnbuf,
     unsigned long addr, unsigned len);
};


struct pv_lazy_ops {

 void (*enter)(void);
 void (*leave)(void);
 void (*flush)(void);
};

struct pv_time_ops {
 unsigned long long (*sched_clock)(void);
 unsigned long long (*steal_clock)(int cpu);
 unsigned long (*get_tsc_khz)(void);
};

struct pv_cpu_ops {

 unsigned long (*get_debugreg)(int regno);
 void (*set_debugreg)(int regno, unsigned long value);

 void (*clts)(void);

 unsigned long (*read_cr0)(void);
 void (*write_cr0)(unsigned long);

 unsigned long (*read_cr4_safe)(void);
 unsigned long (*read_cr4)(void);
 void (*write_cr4)(unsigned long);


 unsigned long (*read_cr8)(void);
 void (*write_cr8)(unsigned long);



 void (*load_tr_desc)(void);
 void (*load_gdt)(const struct desc_ptr *);
 void (*load_idt)(const struct desc_ptr *);

 void (*store_idt)(struct desc_ptr *);
 void (*set_ldt)(const void *desc, unsigned entries);
 unsigned long (*store_tr)(void);
 void (*load_tls)(struct thread_struct *t, unsigned int cpu);

 void (*load_gs_index)(unsigned int idx);

 void (*write_ldt_entry)(struct desc_struct *ldt, int entrynum,
    const void *desc);
 void (*write_gdt_entry)(struct desc_struct *,
    int entrynum, const void *desc, int size);
 void (*write_idt_entry)(gate_desc *,
    int entrynum, const gate_desc *gate);
 void (*alloc_ldt)(struct desc_struct *ldt, unsigned entries);
 void (*free_ldt)(struct desc_struct *ldt, unsigned entries);

 void (*load_sp0)(struct tss_struct *tss, struct thread_struct *t);

 void (*set_iopl_mask)(unsigned mask);

 void (*wbinvd)(void);
 void (*io_delay)(void);


 void (*cpuid)(unsigned int *eax, unsigned int *ebx,
        unsigned int *ecx, unsigned int *edx);



 u64 (*read_msr)(unsigned int msr, int *err);
 int (*write_msr)(unsigned int msr, unsigned low, unsigned high);

 u64 (*read_tsc)(void);
 u64 (*read_pmc)(int counter);
 unsigned long long (*read_tscp)(unsigned int *aux);







 void (*irq_enable_sysexit)(void);







 void (*usergs_sysret64)(void);







 void (*usergs_sysret32)(void);



 void (*iret)(void);

 void (*swapgs)(void);

 void (*start_context_switch)(struct task_struct *prev);
 void (*end_context_switch)(struct task_struct *next);
};

struct pv_irq_ops {
# 207 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 3 4
 struct paravirt_callee_save save_fl;
 struct paravirt_callee_save restore_fl;
 struct paravirt_callee_save irq_disable;
 struct paravirt_callee_save irq_enable;

 void (*safe_halt)(void);
 void (*halt)(void);


 void (*adjust_exception_frame)(void);

};

struct pv_apic_ops {

 void (*startup_ipi_hook)(int phys_apicid,
     unsigned long start_eip,
     unsigned long start_esp);

};

struct pv_mmu_ops {
 unsigned long (*read_cr2)(void);
 void (*write_cr2)(unsigned long);

 unsigned long (*read_cr3)(void);
 void (*write_cr3)(unsigned long);





 void (*activate_mm)(struct mm_struct *prev,
       struct mm_struct *next);
 void (*dup_mmap)(struct mm_struct *oldmm,
    struct mm_struct *mm);
 void (*exit_mmap)(struct mm_struct *mm);



 void (*flush_tlb_user)(void);
 void (*flush_tlb_kernel)(void);
 void (*flush_tlb_single)(unsigned long addr);
 void (*flush_tlb_others)(const struct cpumask *cpus,
     struct mm_struct *mm,
     unsigned long start,
     unsigned long end);


 int (*pgd_alloc)(struct mm_struct *mm);
 void (*pgd_free)(struct mm_struct *mm, pgd_t *pgd);





 void (*alloc_pte)(struct mm_struct *mm, unsigned long pfn);
 void (*alloc_pmd)(struct mm_struct *mm, unsigned long pfn);
 void (*alloc_pud)(struct mm_struct *mm, unsigned long pfn);
 void (*release_pte)(unsigned long pfn);
 void (*release_pmd)(unsigned long pfn);
 void (*release_pud)(unsigned long pfn);


 void (*set_pte)(pte_t *ptep, pte_t pteval);
 void (*set_pte_at)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep, pte_t pteval);
 void (*set_pmd)(pmd_t *pmdp, pmd_t pmdval);
 void (*set_pmd_at)(struct mm_struct *mm, unsigned long addr,
      pmd_t *pmdp, pmd_t pmdval);
 void (*pte_update)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep);
 void (*pte_update_defer)(struct mm_struct *mm,
     unsigned long addr, pte_t *ptep);
 void (*pmd_update)(struct mm_struct *mm, unsigned long addr,
      pmd_t *pmdp);
 void (*pmd_update_defer)(struct mm_struct *mm,
     unsigned long addr, pmd_t *pmdp);

 pte_t (*ptep_modify_prot_start)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep);
 void (*ptep_modify_prot_commit)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep, pte_t pte);

 struct paravirt_callee_save pte_val;
 struct paravirt_callee_save make_pte;

 struct paravirt_callee_save pgd_val;
 struct paravirt_callee_save make_pgd;
# 306 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 3 4
 void (*set_pud)(pud_t *pudp, pud_t pudval);

 struct paravirt_callee_save pmd_val;
 struct paravirt_callee_save make_pmd;


 struct paravirt_callee_save pud_val;
 struct paravirt_callee_save make_pud;

 void (*set_pgd)(pgd_t *pudp, pgd_t pgdval);



 struct pv_lazy_ops lazy_mode;





 void (*set_fixmap)(unsigned idx,
      phys_addr_t phys, pgprot_t flags);
};

struct arch_spinlock;
struct pv_lock_ops {
 int (*spin_is_locked)(struct arch_spinlock *lock);
 int (*spin_is_contended)(struct arch_spinlock *lock);
 void (*spin_lock)(struct arch_spinlock *lock);
 void (*spin_lock_flags)(struct arch_spinlock *lock, unsigned long flags);
 int (*spin_trylock)(struct arch_spinlock *lock);
 void (*spin_unlock)(struct arch_spinlock *lock);
};




struct paravirt_patch_template {
 struct pv_init_ops pv_init_ops;
 struct pv_time_ops pv_time_ops;
 struct pv_cpu_ops pv_cpu_ops;
 struct pv_irq_ops pv_irq_ops;
 struct pv_apic_ops pv_apic_ops;
 struct pv_mmu_ops pv_mmu_ops;
 struct pv_lock_ops pv_lock_ops;
};

extern struct pv_info pv_info;
extern struct pv_init_ops pv_init_ops;
extern struct pv_time_ops pv_time_ops;
extern struct pv_cpu_ops pv_cpu_ops;
extern struct pv_irq_ops pv_irq_ops;
extern struct pv_apic_ops pv_apic_ops;
extern struct pv_mmu_ops pv_mmu_ops;
extern struct pv_lock_ops pv_lock_ops;
# 393 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 3 4
unsigned paravirt_patch_nop(void);
unsigned paravirt_patch_ident_32(void *insnbuf, unsigned len);
unsigned paravirt_patch_ident_64(void *insnbuf, unsigned len);
unsigned paravirt_patch_ignore(unsigned len);
unsigned paravirt_patch_call(void *insnbuf,
        const void *target, u16 tgt_clobbers,
        unsigned long addr, u16 site_clobbers,
        unsigned len);
unsigned paravirt_patch_jmp(void *insnbuf, const void *target,
       unsigned long addr, unsigned len);
unsigned paravirt_patch_default(u8 type, u16 clobbers, void *insnbuf,
    unsigned long addr, unsigned len);

unsigned paravirt_patch_insns(void *insnbuf, unsigned len,
         const char *start, const char *end);

unsigned native_patch(u8 type, u16 clobbers, void *ibuf,
        unsigned long addr, unsigned len);

int paravirt_disable_iospace(void);
# 671 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt_types.h" 3 4
enum paravirt_lazy_mode {
 PARAVIRT_LAZY_NONE,
 PARAVIRT_LAZY_MMU,
 PARAVIRT_LAZY_CPU,
};

enum paravirt_lazy_mode paravirt_get_lazy_mode(void);
void paravirt_start_context_switch(struct task_struct *prev);
void paravirt_end_context_switch(struct task_struct *next);

void paravirt_enter_lazy_mmu(void);
void paravirt_leave_lazy_mmu(void);
void paravirt_flush_lazy_mmu(void);

void _paravirt_nop(void);
u32 _paravirt_ident_32(u32);
u64 _paravirt_ident_64(u64);




struct paravirt_patch_site {
 u8 *instr;
 u8 instrtype;
 u8 len;
 u16 clobbers;
};

extern struct paravirt_patch_site __parainstructions[],
 __parainstructions_end[];
# 66 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 2 3 4


struct cpuinfo_x86;
struct task_struct;

extern unsigned long profile_pc(struct pt_regs *regs);


extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);
extern void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs,
    int error_code, int si_code);

extern long syscall_trace_enter(struct pt_regs *);
extern void syscall_trace_leave(struct pt_regs *);

static inline __attribute__((no_instrument_function)) unsigned long regs_return_value(struct pt_regs *regs)
{
 return regs->ax;
}
# 94 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) int user_mode(struct pt_regs *regs)
{



 return !!(regs->cs & 3);

}

static inline __attribute__((no_instrument_function)) int user_mode_vm(struct pt_regs *regs)
{




 return user_mode(regs);

}

static inline __attribute__((no_instrument_function)) int v8086_mode(struct pt_regs *regs)
{



 return 0;

}


static inline __attribute__((no_instrument_function)) bool user_64bit_mode(struct pt_regs *regs)
{
# 133 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
 return regs->cs == (6*8+3) || regs->cs == pv_info.extra_user_64bit_cs;

}
# 148 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long kernel_stack_pointer(struct pt_regs *regs)
{
 return regs->sp;
}






# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/ptrace.h" 1 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long instruction_pointer(struct pt_regs *regs)
{
 return ((regs)->ip);
}
static inline __attribute__((no_instrument_function)) void instruction_pointer_set(struct pt_regs *regs,
                                           unsigned long val)
{
 (((regs)->ip) = (val));
}
# 44 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long user_stack_pointer(struct pt_regs *regs)
{
 return ((regs)->sp);
}
static inline __attribute__((no_instrument_function)) void user_stack_pointer_set(struct pt_regs *regs,
                                          unsigned long val)
{
 (((regs)->sp) = (val));
}
# 62 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long frame_pointer(struct pt_regs *regs)
{
 return ((regs)->bp);
}
static inline __attribute__((no_instrument_function)) void frame_pointer_set(struct pt_regs *regs,
                                     unsigned long val)
{
 (((regs)->bp) = (val));
}
# 159 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 2 3 4


extern int regs_query_register_offset(const char *name);
extern const char *regs_query_register_name(unsigned int offset);
# 174 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long regs_get_register(struct pt_regs *regs,
           unsigned int offset)
{
 if (__builtin_expect(!!(offset > (__builtin_offsetof(struct pt_regs,ss))), 0))
  return 0;
# 188 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
 return *(unsigned long *)((unsigned long)regs + offset);
}
# 199 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) int regs_within_kernel_stack(struct pt_regs *regs,
        unsigned long addr)
{
 return ((addr & ~((((1UL) << 12) << 1) - 1)) ==
  (kernel_stack_pointer(regs) & ~((((1UL) << 12) << 1) - 1)));
}
# 215 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
            unsigned int n)
{
 unsigned long *addr = (unsigned long *)kernel_stack_pointer(regs);
 addr += n;
 if (regs_within_kernel_stack(regs, (unsigned long)addr))
  return *addr;
 else
  return 0;
}
# 235 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ptrace.h" 3 4
struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
         struct user_desc *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
         struct user_desc *info, int can_allocate);
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/vm86.h" 1 3 4
# 62 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/vm86.h" 3 4
struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};
struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};
# 7 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 2 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 3 4
struct kernel_vm86_regs {



 struct pt_regs pt;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
# 42 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 3 4
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
# 59 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 3 4
};
# 75 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vm86.h" 3 4
static inline __attribute__((no_instrument_function)) int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c)
{
 return 0;
}
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/math_emu.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/math_emu.h" 3 4
struct math_emu_info {
 long ___orig_eip;
 union {
  struct pt_regs *regs;
  struct kernel_vm86_regs *vm86;
 };
};
# 12 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/sigcontext.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/sigcontext.h" 1 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/sigcontext.h" 3 4
struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
# 136 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/sigcontext.h" 3 4
struct _fpstate {
 __u16 cwd;
 __u16 swd;
 __u16 twd;

 __u16 fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 reserved2[12];
 union {
  __u32 reserved3[12];
  struct _fpx_sw_bytes sw_reserved;

 };
};
# 197 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/sigcontext.h" 3 4
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/sigcontext.h" 2 3 4
# 40 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/sigcontext.h" 3 4
struct sigcontext {
 unsigned long r8;
 unsigned long r9;
 unsigned long r10;
 unsigned long r11;
 unsigned long r12;
 unsigned long r13;
 unsigned long r14;
 unsigned long r15;
 unsigned long di;
 unsigned long si;
 unsigned long bp;
 unsigned long bx;
 unsigned long dx;
 unsigned long ax;
 unsigned long cx;
 unsigned long sp;
 unsigned long ip;
 unsigned long flags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
# 75 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/sigcontext.h" 3 4
 void *fpstate;
 unsigned long reserved1[8];
};
# 15 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/current.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/percpu.h" 1 3 4
# 88 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/percpu.h" 3 4
extern void __bad_percpu_size(void);
# 499 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/percpu.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int x86_this_cpu_constant_test_bit(unsigned int nr,
                        const unsigned long *addr)
{
 unsigned long *a = (unsigned long *)addr + nr / 64;


 return ((1UL << (nr % 64)) & ({ typeof((*a)) pfo_ret__; switch (sizeof((*a))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"(*a)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(*a)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(*a)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(*a)); break; default: __bad_percpu_size(); } pfo_ret__; })) != 0;



}

static inline __attribute__((no_instrument_function)) int x86_this_cpu_variable_test_bit(int nr,
                        const unsigned long *addr)
{
 int oldbit;

 asm volatile("bt ""%%""gs"":" "%P" "2"",%1\n\t"
   "sbb %0,%0"
   : "=r" (oldbit)
   : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}







# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/percpu.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/threads.h" 1 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/percpu.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu-defs.h" 1 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/percpu.h" 2 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/percpu.h" 3 4
extern unsigned long __per_cpu_offset[256];
# 72 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/percpu.h" 3 4
extern void setup_per_cpu_areas(void);
# 531 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/percpu.h" 2 3 4


extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) this_cpu_off;
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/current.h" 2 3 4


struct task_struct;

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct task_struct *) current_task;

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) struct task_struct *get_current(void)
{
 return ({ typeof(current_task) pfo_ret__; switch (sizeof(current_task)) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "p" (&(current_task))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(current_task))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(current_task))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(current_task))); break; default: __bad_percpu_size(); } pfo_ret__; });
}
# 16 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/msr.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/msr-index.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/msr.h" 2 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/ioctl.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/ioctl.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/ioctl.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/ioctl.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/ioctl.h" 2 3 4


extern unsigned int __invalid_size_argument_for_IOC;
# 1 "/usr/include/x86_64-linux-gnu/asm/ioctl.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/ioctl.h" 2 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/msr.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpumask.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/bitmap.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/string.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/string.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/string.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/string.h" 2 3 4

extern char *strndup_user(const char *, long);
extern void *memdup_user(const void *, size_t);




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/string.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/string_64.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/string_64.h" 3 4
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
# 55 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/string_64.h" 3 4
void *memset(void *s, int c, size_t n);


void *memmove(void *dest, const void *src, size_t count);

int memcmp(const void *cs, const void *ct, size_t count);
size_t strlen(const char *s);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);
int strcmp(const char *cs, const char *ct);
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/string.h" 2 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/string.h" 2 3 4


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
# 105 "/lib/modules/3.11.0-15-generic/build/include/linux/string.h" 3 4
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

extern size_t memweight(const void *ptr, size_t bytes);






static inline __attribute__((no_instrument_function)) const char *kbasename(const char *path)
{
 const char *tail = strrchr(path, '/');
 return tail ? tail + 1 : path;
}
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/bitmap.h" 2 3 4
# 91 "/lib/modules/3.11.0-15-generic/build/include/linux/bitmap.h" 3 4
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern int __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern void bitmap_set(unsigned long *map, int i, int len);
extern void bitmap_clear(unsigned long *map, int start, int nr);
extern unsigned long bitmap_find_next_zero_area(unsigned long *map,
      unsigned long size,
      unsigned long start,
      unsigned int nr,
      unsigned long align_mask);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern int bitmap_parselist_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
  const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);
extern void bitmap_copy_le(void *dst, const unsigned long *src, int nbits);
extern int bitmap_ord_to_pos(const unsigned long *bitmap, int n, int bits);
# 159 "/lib/modules/3.11.0-15-generic/build/include/linux/bitmap.h" 3 4
static inline __attribute__((no_instrument_function)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline __attribute__((no_instrument_function)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (!(__builtin_constant_p(nbits) && (nbits) <= 64)) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline __attribute__((no_instrument_function)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline __attribute__((no_instrument_function)) int bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return (*dst = *src1 & *src2) != 0;
 return __bitmap_and(dst, src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return (*dst = *src1 & ~(*src2)) != 0;
 return __bitmap_andnot(dst, src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_full(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline __attribute__((no_instrument_function)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline __attribute__((no_instrument_function)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline __attribute__((no_instrument_function)) int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 2 3 4


typedef struct cpumask { unsigned long bits[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
extern int nr_cpu_ids;
# 79 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
extern const struct cpumask *const cpu_possible_mask;
extern const struct cpumask *const cpu_online_mask;
extern const struct cpumask *const cpu_present_mask;
extern const struct cpumask *const cpu_active_mask;
# 105 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int cpumask_check(unsigned int cpu)
{



 return cpu;
}
# 158 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int cpumask_first(const struct cpumask *srcp)
{
 return find_first_bit(((srcp)->bits), 256);
}
# 170 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int cpumask_next(int n, const struct cpumask *srcp)
{

 if (n != -1)
  cpumask_check(n);
 return find_next_bit(((srcp)->bits), 256, n+1);
}
# 185 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int cpumask_next_zero(int n, const struct cpumask *srcp)
{

 if (n != -1)
  cpumask_check(n);
 return find_next_zero_bit(((srcp)->bits), 256, n+1);
}

int cpumask_next_and(int n, const struct cpumask *, const struct cpumask *);
int cpumask_any_but(const struct cpumask *mask, unsigned int cpu);
# 255 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) void cpumask_set_cpu(unsigned int cpu, struct cpumask *dstp)
{
 set_bit(cpumask_check(cpu), ((dstp)->bits));
}






static inline __attribute__((no_instrument_function)) void cpumask_clear_cpu(int cpu, struct cpumask *dstp)
{
 clear_bit(cpumask_check(cpu), ((dstp)->bits));
}
# 291 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_test_and_set_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_set_bit(cpumask_check(cpu), ((cpumask)->bits));
}
# 305 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_test_and_clear_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_clear_bit(cpumask_check(cpu), ((cpumask)->bits));
}





static inline __attribute__((no_instrument_function)) void cpumask_setall(struct cpumask *dstp)
{
 bitmap_fill(((dstp)->bits), 256);
}





static inline __attribute__((no_instrument_function)) void cpumask_clear(struct cpumask *dstp)
{
 bitmap_zero(((dstp)->bits), 256);
}
# 336 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_and(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 return bitmap_and(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 256);
}







static inline __attribute__((no_instrument_function)) void cpumask_or(struct cpumask *dstp, const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 bitmap_or(((dstp)->bits), ((src1p)->bits),
          ((src2p)->bits), 256);
}







static inline __attribute__((no_instrument_function)) void cpumask_xor(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 bitmap_xor(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 256);
}
# 379 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_andnot(struct cpumask *dstp,
      const struct cpumask *src1p,
      const struct cpumask *src2p)
{
 return bitmap_andnot(((dstp)->bits), ((src1p)->bits),
       ((src2p)->bits), 256);
}






static inline __attribute__((no_instrument_function)) void cpumask_complement(struct cpumask *dstp,
          const struct cpumask *srcp)
{
 bitmap_complement(((dstp)->bits), ((srcp)->bits),
           256);
}






static inline __attribute__((no_instrument_function)) bool cpumask_equal(const struct cpumask *src1p,
    const struct cpumask *src2p)
{
 return bitmap_equal(((src1p)->bits), ((src2p)->bits),
       256);
}






static inline __attribute__((no_instrument_function)) bool cpumask_intersects(const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 return bitmap_intersects(((src1p)->bits), ((src2p)->bits),
            256);
}
# 430 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_subset(const struct cpumask *src1p,
     const struct cpumask *src2p)
{
 return bitmap_subset(((src1p)->bits), ((src2p)->bits),
        256);
}





static inline __attribute__((no_instrument_function)) bool cpumask_empty(const struct cpumask *srcp)
{
 return bitmap_empty(((srcp)->bits), 256);
}





static inline __attribute__((no_instrument_function)) bool cpumask_full(const struct cpumask *srcp)
{
 return bitmap_full(((srcp)->bits), 256);
}





static inline __attribute__((no_instrument_function)) unsigned int cpumask_weight(const struct cpumask *srcp)
{
 return bitmap_weight(((srcp)->bits), 256);
}







static inline __attribute__((no_instrument_function)) void cpumask_shift_right(struct cpumask *dstp,
           const struct cpumask *srcp, int n)
{
 bitmap_shift_right(((dstp)->bits), ((srcp)->bits), n,
            256);
}







static inline __attribute__((no_instrument_function)) void cpumask_shift_left(struct cpumask *dstp,
          const struct cpumask *srcp, int n)
{
 bitmap_shift_left(((dstp)->bits), ((srcp)->bits), n,
           256);
}






static inline __attribute__((no_instrument_function)) void cpumask_copy(struct cpumask *dstp,
    const struct cpumask *srcp)
{
 bitmap_copy(((dstp)->bits), ((srcp)->bits), 256);
}
# 542 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnprintf(buf, len, ((srcp)->bits), 256);
}
# 556 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_parse_user(const char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parse_user(buf, len, ((dstp)->bits), 256);
}
# 570 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_parselist_user(const char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parselist_user(buf, len, ((dstp)->bits),
       256);
}
# 586 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpulist_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnlistprintf(buf, len, ((srcp)->bits),
        256);
}
# 600 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpumask_parse(const char *buf, struct cpumask *dstp)
{
 char *nl = strchr(buf, '\n');
 int len = nl ? nl - buf : strlen(buf);

 return bitmap_parse(buf, len, ((dstp)->bits), 256);
}
# 615 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int cpulist_parse(const char *buf, struct cpumask *dstp)
{
 return bitmap_parselist(buf, ((dstp)->bits), 256);
}






static inline __attribute__((no_instrument_function)) size_t cpumask_size(void)
{


 return (((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(long);
}
# 674 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
typedef struct cpumask cpumask_var_t[1];

static inline __attribute__((no_instrument_function)) bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 return true;
}

static inline __attribute__((no_instrument_function)) bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 return true;
}

static inline __attribute__((no_instrument_function)) bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 cpumask_clear(*mask);
 return true;
}

static inline __attribute__((no_instrument_function)) bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 cpumask_clear(*mask);
 return true;
}

static inline __attribute__((no_instrument_function)) void alloc_bootmem_cpumask_var(cpumask_var_t *mask)
{
}

static inline __attribute__((no_instrument_function)) void free_cpumask_var(cpumask_var_t mask)
{
}

static inline __attribute__((no_instrument_function)) void free_bootmem_cpumask_var(cpumask_var_t mask)
{
}




extern const unsigned long cpu_all_bits[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
# 726 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
void set_cpu_possible(unsigned int cpu, bool possible);
void set_cpu_present(unsigned int cpu, bool present);
void set_cpu_online(unsigned int cpu, bool online);
void set_cpu_active(unsigned int cpu, bool active);
void init_cpu_present(const struct cpumask *src);
void init_cpu_possible(const struct cpumask *src);
void init_cpu_online(const struct cpumask *src);
# 748 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) int __check_is_bitmap(const unsigned long *bitmap)
{
 return 1;
}
# 760 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
extern const unsigned long
 cpu_bit_bitmap[64 +1][(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

static inline __attribute__((no_instrument_function)) const struct cpumask *get_cpu_mask(unsigned int cpu)
{
 const unsigned long *p = cpu_bit_bitmap[1 + cpu % 64];
 p -= cpu / 64;
 return ((struct cpumask *)(1 ? (p) : (void *)sizeof(__check_is_bitmap(p))));
}
# 831 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
int __first_cpu(const cpumask_t *srcp);
int __next_cpu(int n, const cpumask_t *srcp);
# 849 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
int __next_cpu_nr(int n, const cpumask_t *srcp);
# 860 "/lib/modules/3.11.0-15-generic/build/include/linux/cpumask.h" 3 4
static inline __attribute__((no_instrument_function)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline __attribute__((no_instrument_function)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline __attribute__((no_instrument_function)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((no_instrument_function)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline __attribute__((no_instrument_function)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline __attribute__((no_instrument_function)) int __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cpumask.h" 2 3 4

extern cpumask_var_t cpu_callin_mask;
extern cpumask_var_t cpu_callout_mask;
extern cpumask_var_t cpu_initialized_mask;
extern cpumask_var_t cpu_sibling_setup_mask;

extern void setup_cpu_local_masks(void);
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 2 3 4

struct msr {
 union {
  struct {
   u32 l;
   u32 h;
  };
  u64 q;
 };
};

struct msr_info {
 u32 msr_no;
 struct msr reg;
 struct msr *msrs;
 int err;
};

struct msr_regs_info {
 u32 *regs;
 int err;
};

static inline __attribute__((no_instrument_function)) unsigned long long native_read_tscp(unsigned int *aux)
{
 unsigned long low, high;
 asm volatile(".byte 0x0f,0x01,0xf9"
       : "=a" (low), "=d" (high), "=c" (*aux));
 return low | ((u64)high << 32);
}
# 60 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long long native_read_msr(unsigned int msr)
{
 unsigned low, high;

 asm volatile("rdmsr" : "=a" (low), "=d" (high) : "c" (msr));
 return ((low) | ((u64)(high) << 32));
}

static inline __attribute__((no_instrument_function)) unsigned long long native_read_msr_safe(unsigned int msr,
            int *err)
{
 unsigned low, high;

 asm volatile("2: rdmsr ; xor %[err],%[err]\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %[fault],%[err] ; jmp 1b\n\t"
       ".previous\n\t"
       " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "2b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n"
       : [err] "=r" (*err), "=a" (low), "=d" (high)
       : "c" (msr), [fault] "i" (-5));
 return ((low) | ((u64)(high) << 32));
}

static inline __attribute__((no_instrument_function)) void native_write_msr(unsigned int msr,
        unsigned low, unsigned high)
{
 asm volatile("wrmsr" : : "c" (msr), "a"(low), "d" (high) : "memory");
}


__attribute__((no_instrument_function)) static inline __attribute__((no_instrument_function)) int native_write_msr_safe(unsigned int msr,
     unsigned low, unsigned high)
{
 int err;
 asm volatile("2: wrmsr ; xor %[err],%[err]\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %[fault],%[err] ; jmp 1b\n\t"
       ".previous\n\t"
       " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "2b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n"
       : [err] "=a" (err)
       : "c" (msr), "0" (low), "d" (high),
         [fault] "i" (-5)
       : "memory");
 return err;
}

extern unsigned long long native_read_tsc(void);

extern int rdmsr_safe_regs(u32 regs[8]);
extern int wrmsr_safe_regs(u32 regs[8]);

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) unsigned long long __native_read_tsc(void)
{
 unsigned low, high;

 asm volatile("rdtsc" : "=a" (low), "=d" (high));

 return ((low) | ((u64)(high) << 32));
}

static inline __attribute__((no_instrument_function)) unsigned long long native_read_pmc(int counter)
{
 unsigned low, high;

 asm volatile("rdpmc" : "=a" (low), "=d" (high) : "c" (counter));
 return ((low) | ((u64)(high) << 32));
}


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) int paravirt_enabled(void)
{
 return pv_info.paravirt_enabled;
}

static inline __attribute__((no_instrument_function)) void load_sp0(struct tss_struct *tss,
        struct thread_struct *thread)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.load_sp0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_sp0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_sp0)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(tss)), "S" ((unsigned long)(thread)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) void __cpuid(unsigned int *eax, unsigned int *ebx,
      unsigned int *ecx, unsigned int *edx)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.cpuid); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.cpuid) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.cpuid)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(eax)), "S" ((unsigned long)(ebx)), "d" ((unsigned long)(ecx)), "c" ((unsigned long)(edx)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}




static inline __attribute__((no_instrument_function)) unsigned long paravirt_get_debugreg(int reg)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.get_debugreg); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.get_debugreg) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.get_debugreg)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.get_debugreg) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.get_debugreg)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void set_debugreg(unsigned long val, int reg)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.set_debugreg); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.set_debugreg) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.set_debugreg)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(reg)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void clts(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.clts); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.clts) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.clts)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) unsigned long read_cr0(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_cr0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr0)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr0)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void write_cr0(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_cr0); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_cr0) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_cr0)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) unsigned long read_cr2(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.read_cr2); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr2) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr2)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr2) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr2)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void write_cr2(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.write_cr2); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.write_cr2) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.write_cr2)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) unsigned long read_cr3(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.read_cr3); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr3) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr3)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.read_cr3) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.read_cr3)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void write_cr3(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.write_cr3); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.write_cr3) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.write_cr3)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) unsigned long read_cr4(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_cr4); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}
static inline __attribute__((no_instrument_function)) unsigned long read_cr4_safe(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_cr4_safe); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4_safe) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4_safe)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr4_safe) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr4_safe)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void write_cr4(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_cr4); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_cr4) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_cr4)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) unsigned long read_cr8(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_cr8); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr8) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr8)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_cr8) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_cr8)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void write_cr8(unsigned long x)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_cr8); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_cr8) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_cr8)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) void arch_safe_halt(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_irq_ops.safe_halt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.safe_halt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.safe_halt)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void halt(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_irq_ops.halt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.halt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.halt)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void wbinvd(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.wbinvd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.wbinvd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.wbinvd)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}



static inline __attribute__((no_instrument_function)) u64 paravirt_read_msr(unsigned msr, int *err)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_msr); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(err)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(err)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) int paravirt_write_msr(unsigned msr, unsigned low, unsigned high)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_msr); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(low)), "d" ((unsigned long)(high)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_msr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_msr)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(msr)), "S" ((unsigned long)(low)), "d" ((unsigned long)(high)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}
# 169 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) int rdmsrl_safe(unsigned msr, unsigned long long *p)
{
 int err;

 *p = paravirt_read_msr(msr, &err);
 return err;
}

static inline __attribute__((no_instrument_function)) u64 paravirt_read_tsc(void)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_tsc); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tsc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tsc)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tsc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tsc)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
# 190 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long long paravirt_sched_clock(void)
{
 return ({ unsigned long long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_time_ops.sched_clock); if (sizeof(unsigned long long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.sched_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.sched_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.sched_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.sched_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long long)__eax; } __ret; });
}

struct static_key;
extern struct static_key paravirt_steal_enabled;
extern struct static_key paravirt_steal_rq_enabled;

static inline __attribute__((no_instrument_function)) u64 paravirt_steal_clock(int cpu)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_time_ops.steal_clock); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.steal_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.steal_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(cpu)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_time_ops.steal_clock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_time_ops.steal_clock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(cpu)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) unsigned long long paravirt_read_pmc(int counter)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_pmc); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_pmc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_pmc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(counter)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_pmc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_pmc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(counter)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
# 218 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long long paravirt_rdtscp(unsigned int *aux)
{
 return ({ u64 __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.read_tscp); if (sizeof(u64) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tscp) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tscp)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(aux)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.read_tscp) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.read_tscp)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(aux)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
# 239 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) void paravirt_alloc_ldt(struct desc_struct *ldt, unsigned entries)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.alloc_ldt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.alloc_ldt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.alloc_ldt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ldt)), "S" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void paravirt_free_ldt(struct desc_struct *ldt, unsigned entries)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.free_ldt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.free_ldt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.free_ldt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ldt)), "S" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void load_TR_desc(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.load_tr_desc); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_tr_desc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_tr_desc)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void load_gdt(const struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.load_gdt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_gdt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_gdt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void load_idt(const struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.load_idt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_idt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_idt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void set_ldt(const void *addr, unsigned entries)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.set_ldt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.set_ldt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.set_ldt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(addr)), "S" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void store_idt(struct desc_ptr *dtr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.store_idt); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_idt) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_idt)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) unsigned long paravirt_store_tr(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.store_tr); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_tr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_tr)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.store_tr) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.store_tr)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void load_TLS(struct thread_struct *t, unsigned cpu)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.load_tls); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_tls) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_tls)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(t)), "S" ((unsigned long)(cpu)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) void load_gs_index(unsigned int gs)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.load_gs_index); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.load_gs_index) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.load_gs_index)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(gs)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) void write_ldt_entry(struct desc_struct *dt, int entry,
       const void *desc)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_ldt_entry); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_ldt_entry) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_ldt_entry)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dt)), "S" ((unsigned long)(entry)), "d" ((unsigned long)(desc)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void write_gdt_entry(struct desc_struct *dt, int entry,
       void *desc, int type)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_gdt_entry); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_gdt_entry) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_gdt_entry)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dt)), "S" ((unsigned long)(entry)), "d" ((unsigned long)(desc)), "c" ((unsigned long)(type)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void write_idt_entry(gate_desc *dt, int entry, const gate_desc *g)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.write_idt_entry); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.write_idt_entry) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.write_idt_entry)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(dt)), "S" ((unsigned long)(entry)), "d" ((unsigned long)(g)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void set_iopl_mask(unsigned mask)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.set_iopl_mask); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.set_iopl_mask) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.set_iopl_mask)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mask)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) void slow_down_io(void)
{
 pv_cpu_ops.io_delay();





}


static inline __attribute__((no_instrument_function)) void startup_ipi_hook(int phys_apicid, unsigned long start_eip,
        unsigned long start_esp)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_apic_ops.startup_ipi_hook); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_apic_ops.startup_ipi_hook) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_apic_ops.startup_ipi_hook)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(phys_apicid)), "S" ((unsigned long)(start_eip)), "d" ((unsigned long)(start_esp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                                        ;
}


static inline __attribute__((no_instrument_function)) void paravirt_activate_mm(struct mm_struct *prev,
     struct mm_struct *next)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.activate_mm); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.activate_mm) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.activate_mm)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(prev)), "S" ((unsigned long)(next)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void arch_dup_mmap(struct mm_struct *oldmm,
     struct mm_struct *mm)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.dup_mmap); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.dup_mmap) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.dup_mmap)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(oldmm)), "S" ((unsigned long)(mm)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void arch_exit_mmap(struct mm_struct *mm)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.exit_mmap); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.exit_mmap) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.exit_mmap)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void __flush_tlb(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.flush_tlb_user); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_user) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_user)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void __flush_tlb_global(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.flush_tlb_kernel); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_kernel) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_kernel)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void __flush_tlb_single(unsigned long addr)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.flush_tlb_single); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_single) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_single)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(addr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void flush_tlb_others(const struct cpumask *cpumask,
        struct mm_struct *mm,
        unsigned long start,
        unsigned long end)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.flush_tlb_others); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.flush_tlb_others) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.flush_tlb_others)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(cpumask)), "S" ((unsigned long)(mm)), "d" ((unsigned long)(start)), "c" ((unsigned long)(end)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) int paravirt_pgd_alloc(struct mm_struct *mm)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pgd_alloc); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_alloc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_alloc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_alloc) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_alloc)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) void paravirt_pgd_free(struct mm_struct *mm, pgd_t *pgd)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pgd_free); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_free) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_free)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pgd)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void paravirt_alloc_pte(struct mm_struct *mm, unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.alloc_pte); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.alloc_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.alloc_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void paravirt_release_pte(unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.release_pte); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.release_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.release_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void paravirt_alloc_pmd(struct mm_struct *mm, unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.alloc_pmd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.alloc_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.alloc_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void paravirt_release_pmd(unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.release_pmd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.release_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.release_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void paravirt_alloc_pud(struct mm_struct *mm, unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.alloc_pud); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.alloc_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.alloc_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void paravirt_release_pud(unsigned long pfn)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.release_pud); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.release_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.release_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void pte_update(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pte_update); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_update) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_update)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline __attribute__((no_instrument_function)) void pmd_update(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pmd_update); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_update) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_update)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(pmdp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void pte_update_defer(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pte_update_defer); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_update_defer) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_update_defer)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void pmd_update_defer(struct mm_struct *mm, unsigned long addr,
        pmd_t *pmdp)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pmd_update_defer); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_update_defer) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_update_defer)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(pmdp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) pte_t __pte(pteval_t val)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pte.func); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })

                           ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pte.func); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pte.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pte.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })

           ;

 return (pte_t) { .pte = ret };
}

static inline __attribute__((no_instrument_function)) pteval_t pte_val(pte_t pte)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pte_val.func); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)), "S" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)), "S" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })
                                   ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pte_val.func); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)) : "memory", "cc" ); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pte_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pte_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pte.pte)) : "memory", "cc" ); __ret = (pteval_t)__eax; } __ret; })
               ;

 return ret;
}

static inline __attribute__((no_instrument_function)) pgd_t __pgd(pgdval_t val)
{
 pgdval_t ret;

 if (sizeof(pgdval_t) > sizeof(long))
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pgd.func); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
                           ;
 else
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pgd.func); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pgd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pgd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
           ;

 return (pgd_t) { ret };
}

static inline __attribute__((no_instrument_function)) pgdval_t pgd_val(pgd_t pgd)
{
 pgdval_t ret;

 if (sizeof(pgdval_t) > sizeof(long))
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pgd_val.func); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)), "S" ((unsigned long)((u64)pgd.pgd >> 32)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)), "S" ((unsigned long)((u64)pgd.pgd >> 32)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
                                    ;
 else
  ret = ({ pgdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pgd_val.func); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)) : "memory", "cc" ); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pgd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pgd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pgd.pgd)) : "memory", "cc" ); __ret = (pgdval_t)__eax; } __ret; })
                ;

 return ret;
}


static inline __attribute__((no_instrument_function)) pte_t ptep_modify_prot_start(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 pteval_t ret;

 ret = ({ pteval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.ptep_modify_prot_start); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.ptep_modify_prot_start) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.ptep_modify_prot_start)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.ptep_modify_prot_start) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.ptep_modify_prot_start)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
                   ;

 return (pte_t) { .pte = ret };
}

static inline __attribute__((no_instrument_function)) void ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.ptep_modify_prot_commit(mm, addr, ptep, pte);
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.ptep_modify_prot_commit); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.ptep_modify_prot_commit) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.ptep_modify_prot_commit)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)), "c" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                               ;
}

static inline __attribute__((no_instrument_function)) void set_pte(pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pte); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ptep)), "S" ((unsigned long)(pte.pte)), "d" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                                   ;
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pte); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pte) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pte)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(ptep)), "S" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
               ;
}

static inline __attribute__((no_instrument_function)) void set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.set_pte_at(mm, addr, ptep, pte);
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pte_at); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pte_at) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pte_at)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(ptep)), "c" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void set_pmd_at(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp, pmd_t pmd)
{
 if (sizeof(pmdval_t) > sizeof(long))

  pv_mmu_ops.set_pmd_at(mm, addr, pmdp, pmd);
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pmd_at); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pmd_at) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pmd_at)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(mm)), "S" ((unsigned long)(addr)), "d" ((unsigned long)(pmdp)), "c" ((unsigned long)(native_pmd_val(pmd))) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
}

static inline __attribute__((no_instrument_function)) void set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 pmdval_t val = native_pmd_val(pmd);

 if (sizeof(pmdval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pmd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pmdp)), "S" ((unsigned long)(val)), "d" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pmd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pmd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pmd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pmdp)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) pmd_t __pmd(pmdval_t val)
{
 pmdval_t ret;

 if (sizeof(pmdval_t) > sizeof(long))
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pmd.func); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
                           ;
 else
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pmd.func); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pmd.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pmd.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
           ;

 return (pmd_t) { ret };
}

static inline __attribute__((no_instrument_function)) pmdval_t pmd_val(pmd_t pmd)
{
 pmdval_t ret;

 if (sizeof(pmdval_t) > sizeof(long))
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pmd_val.func); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)), "S" ((unsigned long)((u64)pmd.pmd >> 32)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)), "S" ((unsigned long)((u64)pmd.pmd >> 32)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
                                    ;
 else
  ret = ({ pmdval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pmd_val.func); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)) : "memory", "cc" ); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pmd_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pmd_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pmd.pmd)) : "memory", "cc" ); __ret = (pmdval_t)__eax; } __ret; })
                ;

 return ret;
}

static inline __attribute__((no_instrument_function)) void set_pud(pud_t *pudp, pud_t pud)
{
 pudval_t val = native_pud_val(pud);

 if (sizeof(pudval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pud); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pudp)), "S" ((unsigned long)(val)), "d" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pud); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pud) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pud)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pudp)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
           ;
}

static inline __attribute__((no_instrument_function)) pud_t __pud(pudval_t val)
{
 pudval_t ret;

 if (sizeof(pudval_t) > sizeof(long))
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pud.func); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)), "S" ((unsigned long)((u64)val >> 32)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
                           ;
 else
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.make_pud.func); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.make_pud.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.make_pud.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(val)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
           ;

 return (pud_t) { ret };
}

static inline __attribute__((no_instrument_function)) pudval_t pud_val(pud_t pud)
{
 pudval_t ret;

 if (sizeof(pudval_t) > sizeof(long))
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pud_val.func); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)), "S" ((unsigned long)((u64)pud.pud >> 32)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)), "S" ((unsigned long)((u64)pud.pud >> 32)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
                                    ;
 else
  ret = ({ pudval_t __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.pud_val.func); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)) : "memory", "cc" ); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.pud_val.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.pud_val.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(pud.pud)) : "memory", "cc" ); __ret = (pudval_t)__eax; } __ret; })
                ;

 return ret;
}

static inline __attribute__((no_instrument_function)) void set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 pgdval_t val = native_pgd_val(pgd);

 if (sizeof(pgdval_t) > sizeof(long))
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pgd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pgd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pgd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pgdp)), "S" ((unsigned long)(val)), "d" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
 else
  ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.set_pgd); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.set_pgd) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.set_pgd)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(pgdp)), "S" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
           ;
}

static inline __attribute__((no_instrument_function)) void pgd_clear(pgd_t *pgdp)
{
 set_pgd(pgdp, __pgd(0));
}

static inline __attribute__((no_instrument_function)) void pud_clear(pud_t *pudp)
{
 set_pud(pudp, __pud(0));
}
# 663 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) void set_pte_atomic(pte_t *ptep, pte_t pte)
{
 set_pte(ptep, pte);
}

static inline __attribute__((no_instrument_function)) void pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 set_pte_at(mm, addr, ptep, __pte(0));
}

static inline __attribute__((no_instrument_function)) void pmd_clear(pmd_t *pmdp)
{
 set_pmd(pmdp, __pmd(0));
}



static inline __attribute__((no_instrument_function)) void arch_start_context_switch(struct task_struct *prev)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.start_context_switch); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.start_context_switch) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.start_context_switch)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(prev)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void arch_end_context_switch(struct task_struct *next)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_cpu_ops.end_context_switch); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_cpu_ops.end_context_switch) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_cpu_ops.end_context_switch)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(next)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline __attribute__((no_instrument_function)) void arch_enter_lazy_mmu_mode(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.lazy_mode.enter); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.lazy_mode.enter) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.lazy_mode.enter)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void arch_leave_lazy_mmu_mode(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.lazy_mode.leave); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.lazy_mode.leave) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.lazy_mode.leave)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void arch_flush_lazy_mmu_mode(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_mmu_ops.lazy_mode.flush); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_mmu_ops.lazy_mode.flush) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_mmu_ops.lazy_mode.flush)), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) void __set_fixmap(unsigned idx,
    phys_addr_t phys, pgprot_t flags)
{
 pv_mmu_ops.set_fixmap(idx, phys, flags);
}



static inline __attribute__((no_instrument_function)) int arch_spin_is_locked(struct arch_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_lock_ops.spin_is_locked); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_locked) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_locked)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_locked) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_locked)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) int arch_spin_is_contended(struct arch_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_lock_ops.spin_is_contended); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_contended) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_contended)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_is_contended) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_is_contended)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}


static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void arch_spin_lock(struct arch_spinlock *lock)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_lock_ops.spin_lock); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_lock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_lock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void arch_spin_lock_flags(struct arch_spinlock *lock,
        unsigned long flags)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_lock_ops.spin_lock_flags); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_lock_flags) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_lock_flags)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)), "S" ((unsigned long)(flags)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int arch_spin_trylock(struct arch_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_lock_ops.spin_trylock); if (sizeof(int) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_trylock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_trylock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_trylock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_trylock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void arch_spin_unlock(struct arch_spinlock *lock)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_lock_ops.spin_unlock); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_lock_ops.spin_unlock) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_lock_ops.spin_unlock)), [paravirt_clobber] "i" (((1 << 9) - 1)), "D" ((unsigned long)(lock)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
# 822 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) unsigned long arch_local_save_flags(void)
{
 return ({ unsigned long __ret; unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_irq_ops.save_fl.func); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.save_fl.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.save_fl.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.save_fl.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.save_fl.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); __ret = (unsigned long)__eax; } __ret; });
}

static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) void arch_local_irq_restore(unsigned long f)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_irq_ops.restore_fl.func); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.restore_fl.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.restore_fl.func)), [paravirt_clobber] "i" (((1 << 0))), "D" ((unsigned long)(f)) : "memory", "cc" ); });
}

static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) void arch_local_irq_disable(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_irq_ops.irq_disable.func); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.irq_disable.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.irq_disable.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); });
}

static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) void arch_local_irq_enable(void)
{
 ({ unsigned long __edi = __edi, __esi = __esi, __edx = __edx, __ecx = __ecx, __eax = __eax; ((void)pv_irq_ops.irq_enable.func); asm volatile("" "771:\n\t" "call *%c[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=a" (__eax) : [paravirt_typenum] "i" ((__builtin_offsetof(struct paravirt_patch_template,pv_irq_ops.irq_enable.func) / sizeof(void *))), [paravirt_opptr] "i" (&(pv_irq_ops.irq_enable.func)), [paravirt_clobber] "i" (((1 << 0))) : "memory", "cc" ); });
}

static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) unsigned long arch_local_irq_save(void)
{
 unsigned long f;

 f = arch_local_save_flags();
 arch_local_irq_disable();
 return f;
}
# 867 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/paravirt.h" 3 4
extern void default_banner(void);
# 132 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 2 3 4
# 215 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/msr.h" 3 4
struct msr *msrs_alloc(void);
void msrs_free(struct msr *msrs);


int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
void rdmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs);
void wrmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs);
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
int wrmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
# 21 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/nops.h" 1 3 4
# 142 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/nops.h" 3 4
extern const unsigned char * const *ideal_nops;
extern void arch_init_ideal_nops(void);
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/special_insns.h" 1 3 4






static inline __attribute__((no_instrument_function)) void native_clts(void)
{
 asm volatile("clts");
}
# 19 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/special_insns.h" 3 4
extern unsigned long __force_order;

static inline __attribute__((no_instrument_function)) unsigned long native_read_cr0(void)
{
 unsigned long val;
 asm volatile("mov %%cr0,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline __attribute__((no_instrument_function)) void native_write_cr0(unsigned long val)
{
 asm volatile("mov %0,%%cr0": : "r" (val), "m" (__force_order));
}

static inline __attribute__((no_instrument_function)) unsigned long native_read_cr2(void)
{
 unsigned long val;
 asm volatile("mov %%cr2,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline __attribute__((no_instrument_function)) void native_write_cr2(unsigned long val)
{
 asm volatile("mov %0,%%cr2": : "r" (val), "m" (__force_order));
}

static inline __attribute__((no_instrument_function)) unsigned long native_read_cr3(void)
{
 unsigned long val;
 asm volatile("mov %%cr3,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline __attribute__((no_instrument_function)) void native_write_cr3(unsigned long val)
{
 asm volatile("mov %0,%%cr3": : "r" (val), "m" (__force_order));
}

static inline __attribute__((no_instrument_function)) unsigned long native_read_cr4(void)
{
 unsigned long val;
 asm volatile("mov %%cr4,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline __attribute__((no_instrument_function)) unsigned long native_read_cr4_safe(void)
{
 unsigned long val;
# 75 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/special_insns.h" 3 4
 val = native_read_cr4();

 return val;
}

static inline __attribute__((no_instrument_function)) void native_write_cr4(unsigned long val)
{
 asm volatile("mov %0,%%cr4": : "r" (val), "m" (__force_order));
}


static inline __attribute__((no_instrument_function)) unsigned long native_read_cr8(void)
{
 unsigned long cr8;
 asm volatile("movq %%cr8,%0" : "=r" (cr8));
 return cr8;
}

static inline __attribute__((no_instrument_function)) void native_write_cr8(unsigned long val)
{
 asm volatile("movq %0,%%cr8" :: "r" (val) : "memory");
}


static inline __attribute__((no_instrument_function)) void native_wbinvd(void)
{
 asm volatile("wbinvd": : :"memory");
}

extern void native_load_gs_index(unsigned);
# 189 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/special_insns.h" 3 4
static inline __attribute__((no_instrument_function)) void clflush(volatile void *__p)
{
 asm volatile("clflush %0" : "+m" (*(volatile char *)__p));
}
# 24 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/personality.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/personality.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/personality.h" 3 4
enum {
 UNAME26 = 0x0020000,
 ADDR_NO_RANDOMIZE = 0x0040000,
 FDPIC_FUNCPTRS = 0x0080000,


 MMAP_PAGE_ZERO = 0x0100000,
 ADDR_COMPAT_LAYOUT = 0x0200000,
 READ_IMPLIES_EXEC = 0x0400000,
 ADDR_LIMIT_32BIT = 0x0800000,
 SHORT_INODE = 0x1000000,
 WHOLE_SECONDS = 0x2000000,
 STICKY_TIMEOUTS = 0x4000000,
 ADDR_LIMIT_3GB = 0x8000000,
};
# 41 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/personality.h" 3 4
enum {
 PER_LINUX = 0x0000,
 PER_LINUX_32BIT = 0x0000 | ADDR_LIMIT_32BIT,
 PER_LINUX_FDPIC = 0x0000 | FDPIC_FUNCPTRS,
 PER_SVR4 = 0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_SVR3 = 0x0002 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_SCOSVR3 = 0x0003 | STICKY_TIMEOUTS |
      WHOLE_SECONDS | SHORT_INODE,
 PER_OSR5 = 0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS,
 PER_WYSEV386 = 0x0004 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_ISCR4 = 0x0005 | STICKY_TIMEOUTS,
 PER_BSD = 0x0006,
 PER_SUNOS = 0x0006 | STICKY_TIMEOUTS,
 PER_XENIX = 0x0007 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_LINUX32 = 0x0008,
 PER_LINUX32_3GB = 0x0008 | ADDR_LIMIT_3GB,
 PER_IRIX32 = 0x0009 | STICKY_TIMEOUTS,
 PER_IRIXN32 = 0x000a | STICKY_TIMEOUTS,
 PER_IRIX64 = 0x000b | STICKY_TIMEOUTS,
 PER_RISCOS = 0x000c,
 PER_SOLARIS = 0x000d | STICKY_TIMEOUTS,
 PER_UW7 = 0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_OSF4 = 0x000f,
 PER_HPUX = 0x0010,
 PER_MASK = 0x00ff,
};
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/personality.h" 2 3 4






struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned int);
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/personality.h" 3 4
typedef void (*handler_t)(int, struct pt_regs *);

struct exec_domain {
 const char *name;
 handler_t handler;
 unsigned char pers_low;
 unsigned char pers_high;
 unsigned long *signal_map;
 unsigned long *signal_invmap;
 struct map_segment *err_map;
 struct map_segment *socktype_map;
 struct map_segment *sockopt_map;
 struct map_segment *af_map;
 struct module *module;
 struct exec_domain *next;
};
# 26 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/math64.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/div64.h" 1 3 4
# 63 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/div64.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/div64.h" 1 3 4
# 64 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/div64.h" 2 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/math64.h" 2 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/math64.h" 3 4
static inline __attribute__((no_instrument_function)) u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline __attribute__((no_instrument_function)) s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline __attribute__((no_instrument_function)) u64 div64_u64(u64 dividend, u64 divisor)
{
 return dividend / divisor;
}




static inline __attribute__((no_instrument_function)) s64 div64_s64(s64 dividend, s64 divisor)
{
 return dividend / divisor;
}
# 84 "/lib/modules/3.11.0-15-generic/build/include/linux/math64.h" 3 4
static inline __attribute__((no_instrument_function)) u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline __attribute__((no_instrument_function)) s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}
# 30 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/err.h" 1 3 4





# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/err.h" 2 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/err.h" 3 4
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
# 49 "/lib/modules/3.11.0-15-generic/build/include/linux/err.h" 3 4
static inline __attribute__((no_instrument_function)) void * ERR_CAST( const void *ptr)
{

 return (void *) ptr;
}

static inline __attribute__((no_instrument_function)) int PTR_RET( const void *ptr)
{
 if (IS_ERR(ptr))
  return PTR_ERR(ptr);
 else
  return 0;
}
# 32 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/irqflags.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/irqflags.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/irqflags.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/irqflags.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long native_save_fl(void)
{
 unsigned long flags;






 asm volatile("# __raw_save_flags\n\t"
       "pushf ; pop %0"
       : "=rm" (flags)
       :
       : "memory");

 return flags;
}

static inline __attribute__((no_instrument_function)) void native_restore_fl(unsigned long flags)
{
 asm volatile("push %0 ; popf"
       :
       :"g" (flags)
       :"memory", "cc");
}

static inline __attribute__((no_instrument_function)) void native_irq_disable(void)
{
 asm volatile("cli": : :"memory");
}

static inline __attribute__((no_instrument_function)) void native_irq_enable(void)
{
 asm volatile("sti": : :"memory");
}

static inline __attribute__((no_instrument_function)) void native_safe_halt(void)
{
 asm volatile("sti; hlt": : :"memory");
}

static inline __attribute__((no_instrument_function)) void native_halt(void)
{
 asm volatile("hlt": : :"memory");
}
# 155 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/irqflags.h" 3 4
static inline __attribute__((no_instrument_function)) int arch_irqs_disabled_flags(unsigned long flags)
{
 return !(flags & ((1UL) << (9)));
}

static inline __attribute__((no_instrument_function)) int arch_irqs_disabled(void)
{
 unsigned long flags = arch_local_save_flags();

 return arch_irqs_disabled_flags(flags);
}
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/irqflags.h" 2 3 4
# 33 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 2 3 4
# 47 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
static inline __attribute__((no_instrument_function)) void *current_text_addr(void)
{
 void *pc;

 asm volatile("mov $1f, %0; 1:":"=r" (pc));

 return pc;
}
# 64 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
enum tlb_infos {
 ENTRIES,
 NR_INFO
};

extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lli_4k[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lli_2m[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lli_4m[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lld_4k[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lld_2m[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lld_4m[NR_INFO];
extern s8 __attribute__((__section__(".data..read_mostly"))) tlb_flushall_shift;







struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
# 97 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
 int x86_tlbsize;

 __u8 x86_virt_bits;
 __u8 x86_phys_bits;

 __u8 x86_coreid_bits;

 __u32 extended_cpuid_level;

 int cpuid_level;
 __u32 x86_capability[10 + 1];
 char x86_vendor_id[16];
 char x86_model_id[64];

 int x86_cache_size;
 int x86_cache_alignment;
 int x86_power;
 unsigned long loops_per_jiffy;

 u16 x86_max_cores;
 u16 apicid;
 u16 initial_apicid;
 u16 x86_clflush_size;

 u16 booted_cores;

 u16 phys_proc_id;

 u16 cpu_core_id;

 u8 compute_unit_id;

 u16 cpu_index;
 u32 microcode;
} __attribute__((__aligned__((1 << (6)))));
# 147 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
extern struct cpuinfo_x86 boot_cpu_data;
extern struct cpuinfo_x86 new_cpu_data;

extern struct tss_struct doublefault_tss;
extern __u32 cpu_caps_cleared[10];
extern __u32 cpu_caps_set[10];


extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(struct cpuinfo_x86) cpu_info __attribute__((__aligned__((1 << (6)))));






extern const struct seq_operations cpuinfo_op;



extern void cpu_detect(struct cpuinfo_x86 *c);
extern void fpu_detect(struct cpuinfo_x86 *c);

extern void early_cpu_init(void);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
void print_cpu_msr(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern void init_amd_cacheinfo(struct cpuinfo_x86 *c);

extern void detect_extended_topology(struct cpuinfo_x86 *c);
extern void detect_ht(struct cpuinfo_x86 *c);




static inline __attribute__((no_instrument_function)) int have_cpuid_p(void)
{
 return 1;
}

static inline __attribute__((no_instrument_function)) void native_cpuid(unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{

 asm volatile("cpuid"
     : "=a" (*eax),
       "=b" (*ebx),
       "=c" (*ecx),
       "=d" (*edx)
     : "0" (*eax), "2" (*ecx)
     : "memory");
}

static inline __attribute__((no_instrument_function)) void load_cr3(pgd_t *pgdir)
{
 write_cr3(__phys_addr_nodebug((unsigned long)(pgdir)));
}
# 241 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
struct x86_hw_tss {
 u32 reserved1;
 u64 sp0;
 u64 sp1;
 u64 sp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;

} __attribute__((packed)) __attribute__((__aligned__((1 << (6)))));
# 265 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
struct tss_struct {



 struct x86_hw_tss x86_tss;







 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];




 unsigned long stack[64];

} __attribute__((__aligned__((1 << (6)))));

extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(struct tss_struct) init_tss __attribute__((__aligned__((1 << (6)))));




struct orig_ist {
 unsigned long ist[7];
};



struct i387_fsave_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;


 u32 st_space[20];


 u32 status;
};

struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 union {
  struct {
   u64 rip;
   u64 rdp;
  };
  struct {
   u32 fip;
   u32 fcs;
   u32 foo;
   u32 fos;
  };
 };
 u32 mxcsr;
 u32 mxcsr_mask;


 u32 st_space[32];


 u32 xmm_space[64];

 u32 padding[12];

 union {
  u32 padding1[12];
  u32 sw_reserved[12];
 };

} __attribute__((aligned(16)));

struct i387_soft_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;

 u32 st_space[20];
 u8 ftop;
 u8 changed;
 u8 lookahead;
 u8 no_update;
 u8 rm;
 u8 alimit;
 struct math_emu_info *info;
 u32 entry_eip;
};

struct ymmh_struct {

 u32 ymmh_space[64];
};

struct xsave_hdr_struct {
 u64 xstate_bv;
 u64 reserved1[2];
 u64 reserved2[5];
} __attribute__((packed));

struct xsave_struct {
 struct i387_fxsave_struct i387;
 struct xsave_hdr_struct xsave_hdr;
 struct ymmh_struct ymmh;

} __attribute__ ((packed, aligned (64)));

union thread_xstate {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
 struct xsave_struct xsave;
};

struct fpu {
 unsigned int last_cpu;
 unsigned int has_fpu;
 union thread_xstate *state;
};


extern __attribute__((section(".data..percpu" ""))) __typeof__(struct orig_ist) orig_ist;

union irq_stack_union {
 char irq_stack[(((1UL) << 12) << 2)];





 struct {
  char gs_base[40];
  unsigned long stack_canary;
 };
};

extern __attribute__((section(".data..percpu" "..first"))) __typeof__(union irq_stack_union) irq_stack_union;
extern typeof(irq_stack_union) init_per_cpu__irq_stack_union;

extern __attribute__((section(".data..percpu" ""))) __typeof__(char *) irq_stack_ptr;
extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned int) irq_count;
extern void ignore_sysret(void);
# 437 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
extern unsigned int xstate_size;
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;

struct perf_event;

struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long sp0;
 unsigned long sp;



 unsigned long usersp;
 unsigned short es;
 unsigned short ds;
 unsigned short fsindex;
 unsigned short gsindex;





 unsigned long fs;

 unsigned long gs;

 struct perf_event *ptrace_bps[4];

 unsigned long debugreg6;

 unsigned long ptrace_dr7;

 unsigned long cr2;
 unsigned long trap_nr;
 unsigned long error_code;

 struct fpu fpu;
# 487 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
 unsigned long *io_bitmap_ptr;
 unsigned long iopl;

 unsigned io_bitmap_max;
};




static inline __attribute__((no_instrument_function)) void native_set_iopl_mask(unsigned mask)
{
# 510 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
}

static inline __attribute__((no_instrument_function)) void
native_load_sp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->x86_tss.sp0 = thread->sp0;







}

static inline __attribute__((no_instrument_function)) void native_swapgs(void)
{

 asm volatile("swapgs" ::: "memory");

}
# 553 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
extern unsigned long mmu_cr4_features;
extern u32 *trampoline_cr4_features;

static inline __attribute__((no_instrument_function)) void set_in_cr4(unsigned long mask)
{
 unsigned long cr4;

 mmu_cr4_features |= mask;
 if (trampoline_cr4_features)
  *trampoline_cr4_features = mmu_cr4_features;
 cr4 = read_cr4();
 cr4 |= mask;
 write_cr4(cr4);
}

static inline __attribute__((no_instrument_function)) void clear_in_cr4(unsigned long mask)
{
 unsigned long cr4;

 mmu_cr4_features &= ~mask;
 if (trampoline_cr4_features)
  *trampoline_cr4_features = mmu_cr4_features;
 cr4 = read_cr4();
 cr4 &= ~mask;
 write_cr4(cr4);
}

typedef struct {
 unsigned long seg;
} mm_segment_t;



extern void release_thread(struct task_struct *);

unsigned long get_wchan(struct task_struct *p);






static inline __attribute__((no_instrument_function)) void cpuid(unsigned int op,
    unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = 0;
 __cpuid(eax, ebx, ecx, edx);
}


static inline __attribute__((no_instrument_function)) void cpuid_count(unsigned int op, int count,
          unsigned int *eax, unsigned int *ebx,
          unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = count;
 __cpuid(eax, ebx, ecx, edx);
}




static inline __attribute__((no_instrument_function)) unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return eax;
}

static inline __attribute__((no_instrument_function)) unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ebx;
}

static inline __attribute__((no_instrument_function)) unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ecx;
}

static inline __attribute__((no_instrument_function)) unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return edx;
}


static inline __attribute__((no_instrument_function)) void rep_nop(void)
{
 asm volatile("rep; nop" ::: "memory");
}

static inline __attribute__((no_instrument_function)) void cpu_relax(void)
{
 rep_nop();
}


static inline __attribute__((no_instrument_function)) void sync_core(void)
{
 int tmp;
# 687 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
 asm volatile("cpuid"
       : "=a" (tmp)
       : "0" (1)
       : "ebx", "ecx", "edx", "memory");

}

static inline __attribute__((no_instrument_function)) void __monitor(const void *eax, unsigned long ecx,
        unsigned long edx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc8;"
       :: "a" (eax), "c" (ecx), "d"(edx));
}

static inline __attribute__((no_instrument_function)) void __mwait(unsigned long eax, unsigned long ecx)
{

 asm volatile(".byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

static inline __attribute__((no_instrument_function)) void __sti_mwait(unsigned long eax, unsigned long ecx)
{
 do { } while (0);

 asm volatile("sti; .byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

extern void select_idle_routine(const struct cpuinfo_x86 *c);
extern void init_amd_e400_c1e_mask(void);

extern unsigned long boot_option_idle_override;
extern bool amd_e400_c1e_detected;

enum idle_boot_override {IDLE_NO_OVERRIDE=0, IDLE_HALT, IDLE_NOMWAIT,
    IDLE_POLL};

extern void enable_sep_cpu(void);
extern int sysenter_setup(void);

extern void early_trap_init(void);
void early_trap_pf_init(void);


extern struct desc_ptr early_gdt_descr;

extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(int);
extern void load_percpu_segment(int);
extern void cpu_init(void);

static inline __attribute__((no_instrument_function)) unsigned long get_debugctlmsr(void)
{
 unsigned long debugctlmsr = 0;





 do { int _err; debugctlmsr = paravirt_read_msr(0x000001d9, &_err); } while (0);

 return debugctlmsr;
}

static inline __attribute__((no_instrument_function)) void update_debugctlmsr(unsigned long debugctlmsr)
{




 do { paravirt_write_msr(0x000001d9, (u32)((u64)(debugctlmsr)), ((u64)(debugctlmsr))>>32); } while (0);
}

extern void set_task_blockstep(struct task_struct *task, bool on);





extern unsigned int machine_id;
extern unsigned int machine_submodel_id;
extern unsigned int BIOS_revision;


extern int bootloader_type;
extern int bootloader_version;

extern char ignore_fpu_irq;
# 795 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
static inline __attribute__((no_instrument_function)) void prefetch(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(0*32+25)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "prefetchnta (%1)" "\n" "664""1" ":\n\t" ".popsection" : : "i" (0), "r" (x))


             ;
}






static inline __attribute__((no_instrument_function)) void prefetchw(const void *x)
{
 asm volatile ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(1*32+31)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "prefetchw (%1)" "\n" "664""1" ":\n\t" ".popsection" : : "i" (0), "r" (x))


             ;
}

static inline __attribute__((no_instrument_function)) void spin_lock_prefetch(const void *x)
{
 prefetchw(x);
}
# 916 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
extern unsigned long KSTK_ESP(struct task_struct *task);




extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) old_rsp;



extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
            unsigned long new_sp);
# 940 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h" 3 4
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);

extern u16 amd_get_nb_id(int cpu);

struct aperfmperf {
 u64 aperf, mperf;
};

static inline __attribute__((no_instrument_function)) void get_aperfmperf(struct aperfmperf *am)
{
 ({ static bool __attribute__ ((__section__(".data.unlikely"))) __warned; int __ret_warn_once = !!(!(__builtin_constant_p((3*32+28)) && ( ((((3*32+28))>>5)==0 && (1UL<<(((3*32+28))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((3*32+28))>>5)==1 && (1UL<<(((3*32+28))&31) & ((1<<((1*32+29) & 31))|0))) || ((((3*32+28))>>5)==2 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==3 && (1UL<<(((3*32+28))&31) & ((1<<((3*32+20) & 31))))) || ((((3*32+28))>>5)==4 && (1UL<<(((3*32+28))&31) & (0))) || ((((3*32+28))>>5)==5 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==6 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==7 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==8 && (1UL<<(((3*32+28))&31) & 0)) || ((((3*32+28))>>5)==9 && (1UL<<(((3*32+28))&31) & 0)) ) ? 1 : (__builtin_constant_p(((3*32+28))) ? constant_test_bit(((3*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((3*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability)))))); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/processor.h", 951); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = true; __builtin_expect(!!(__ret_warn_once), 0); });

 do { int _err; am->aperf = paravirt_read_msr(0x000000e8, &_err); } while (0);
 do { int _err; am->mperf = paravirt_read_msr(0x000000e7, &_err); } while (0);
}



static inline __attribute__((no_instrument_function))
unsigned long calc_aperfmperf_ratio(struct aperfmperf *old,
        struct aperfmperf *new)
{
 u64 aperf = new->aperf - old->aperf;
 u64 mperf = new->mperf - old->mperf;
 unsigned long ratio = aperf;

 mperf >>= 10;
 if (mperf)
  ratio = div64_u64(aperf, mperf);

 return ratio;
}

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);

bool xen_set_default_idle(void);




void stop_this_cpu(void *dummy);
void df_debug(struct pt_regs *regs, long error_code);
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/atomic.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cmpxchg.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cmpxchg.h" 3 4
extern void __xchg_wrong_size(void)
 __attribute__((error("Bad argument size for xchg")));
extern void __cmpxchg_wrong_size(void)
 __attribute__((error("Bad argument size for cmpxchg")));
extern void __xadd_wrong_size(void)
 __attribute__((error("Bad argument size for xadd")));
extern void __add_wrong_size(void)
 __attribute__((error("Bad argument size for add")));
# 143 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cmpxchg.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cmpxchg_64.h" 1 3 4



static inline __attribute__((no_instrument_function)) void set_64bit(volatile u64 *ptr, u64 val)
{
 *ptr = val;
}
# 144 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cmpxchg.h" 2 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 2 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_read(const atomic_t *v)
{
 return (*(volatile int *)&(v)->counter);
}
# 35 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic_set(atomic_t *v, int i)
{
 v->counter = i;
}
# 47 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic_add(int i, atomic_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addl %1,%0"
       : "+m" (v->counter)
       : "ir" (i));
}
# 61 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic_sub(int i, atomic_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "subl %1,%0"
       : "+m" (v->counter)
       : "ir" (i));
}
# 77 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_sub_and_test(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "subl %2,%0; sete %1"
       : "+m" (v->counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}







static inline __attribute__((no_instrument_function)) void atomic_inc(atomic_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "incl %0"
       : "+m" (v->counter));
}







static inline __attribute__((no_instrument_function)) void atomic_dec(atomic_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "decl %0"
       : "+m" (v->counter));
}
# 119 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_dec_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "decl %0; sete %1"
       : "+m" (v->counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 137 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_inc_and_test(atomic_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "incl %0; sete %1"
       : "+m" (v->counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
# 156 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_add_negative(int i, atomic_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addl %2,%0; sets %1"
       : "+m" (v->counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
# 173 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_add_return(int i, atomic_t *v)
{
 return i + ({ __typeof__ (*(((&v->counter)))) __ret = (((i))); switch (sizeof(*(((&v->counter))))) { case 1: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "b %b0, %1\n" : "+q" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 2: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "w %w0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 4: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "l %0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 8: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "q %q0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; default: __xadd_wrong_size(); } __ret; });
}
# 185 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_sub_return(int i, atomic_t *v)
{
 return atomic_add_return(-i, v);
}




static inline __attribute__((no_instrument_function)) int atomic_cmpxchg(atomic_t *v, int old, int new)
{
 return ({ __typeof__(*((&v->counter))) __ret; __typeof__(*((&v->counter))) __old = ((old)); __typeof__(*((&v->counter))) __new = ((new)); switch ((sizeof(*(&v->counter)))) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; });
}

static inline __attribute__((no_instrument_function)) int atomic_xchg(atomic_t *v, int new)
{
 return ({ __typeof__ (*((&v->counter))) __ret = ((new)); switch (sizeof(*((&v->counter)))) { case 1: asm volatile ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 2: asm volatile ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 4: asm volatile ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 8: asm volatile ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}
# 212 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int __atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;
 c = atomic_read(v);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = atomic_cmpxchg((v), c, c + (a));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c;
}
# 234 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) short int atomic_inc_short(short int *v)
{
 asm(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addw $1, %0" : "+m" (*v));
 return *v;
}
# 249 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic_or_long(unsigned long *v1, unsigned long v2)
{
 asm(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "orq %1, %0" : "+m" (*v1) : "r" (v2));
}
# 274 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 1 3 4
# 19 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) long atomic64_read(const atomic64_t *v)
{
 return (*(volatile long *)&(v)->counter);
}
# 31 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic64_set(atomic64_t *v, long i)
{
 v->counter = i;
}
# 43 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic64_add(long i, atomic64_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addq %1,%0"
       : "=m" (v->counter)
       : "er" (i), "m" (v->counter));
}
# 57 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) void atomic64_sub(long i, atomic64_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "subq %1,%0"
       : "=m" (v->counter)
       : "er" (i), "m" (v->counter));
}
# 73 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic64_sub_and_test(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "subq %2,%0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "er" (i), "m" (v->counter) : "memory");
 return c;
}







static inline __attribute__((no_instrument_function)) void atomic64_inc(atomic64_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "incq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline __attribute__((no_instrument_function)) void atomic64_dec(atomic64_t *v)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "decq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
# 117 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic64_dec_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "decq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 135 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic64_inc_and_test(atomic64_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "incq %0; sete %1"
       : "=m" (v->counter), "=qm" (c)
       : "m" (v->counter) : "memory");
 return c != 0;
}
# 154 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic64_add_negative(long i, atomic64_t *v)
{
 unsigned char c;

 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addq %2,%0; sets %1"
       : "=m" (v->counter), "=qm" (c)
       : "er" (i), "m" (v->counter) : "memory");
 return c;
}
# 171 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) long atomic64_add_return(long i, atomic64_t *v)
{
 return i + ({ __typeof__ (*(((&v->counter)))) __ret = (((i))); switch (sizeof(*(((&v->counter))))) { case 1: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "b %b0, %1\n" : "+q" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 2: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "w %w0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 4: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "l %0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 8: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "q %q0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; default: __xadd_wrong_size(); } __ret; });
}

static inline __attribute__((no_instrument_function)) long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i, v);
}




static inline __attribute__((no_instrument_function)) long atomic64_cmpxchg(atomic64_t *v, long old, long new)
{
 return ({ __typeof__(*((&v->counter))) __ret; __typeof__(*((&v->counter))) __old = ((old)); __typeof__(*((&v->counter))) __new = ((new)); switch ((sizeof(*(&v->counter)))) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&v->counter)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; });
}

static inline __attribute__((no_instrument_function)) long atomic64_xchg(atomic64_t *v, long new)
{
 return ({ __typeof__ (*((&v->counter))) __ret = ((new)); switch (sizeof(*((&v->counter)))) { case 1: asm volatile ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 2: asm volatile ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 4: asm volatile ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 8: asm volatile ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}
# 203 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic64_add_unless(atomic64_t *v, long a, long u)
{
 long c, old;
 c = atomic64_read(v);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = atomic64_cmpxchg((v), c, c + (a));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
# 227 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic64_64.h" 3 4
static inline __attribute__((no_instrument_function)) long atomic64_dec_if_positive(atomic64_t *v)
{
 long c, old, dec;
 c = atomic64_read(v);
 for (;;) {
  dec = c - 1;
  if (__builtin_expect(!!(dec < 0), 0))
   break;
  old = atomic64_cmpxchg((v), c, dec);
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return dec;
}
# 275 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/atomic.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/atomic.h" 2 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_add_unless(atomic_t *v, int a, int u)
{
 return __atomic_add_unless(v, a, u) != u;
}
# 44 "/lib/modules/3.11.0-15-generic/build/include/linux/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_inc_not_zero_hint(atomic_t *v, int hint)
{
 int val, c = hint;


 if (!hint)
  return atomic_add_unless((v), 1, 0);

 do {
  val = atomic_cmpxchg(v, c, c + 1);
  if (val == c)
   return 1;
  c = val;
 } while (c);

 return 0;
}



static inline __attribute__((no_instrument_function)) int atomic_inc_unless_negative(atomic_t *p)
{
 int v, v1;
 for (v = 0; v >= 0; v = v1) {
  v1 = atomic_cmpxchg(p, v, v + 1);
  if (__builtin_expect(!!(v1 == v), 1))
   return 1;
 }
 return 0;
}



static inline __attribute__((no_instrument_function)) int atomic_dec_unless_positive(atomic_t *p)
{
 int v, v1;
 for (v = 0; v <= 0; v = v1) {
  v1 = atomic_cmpxchg(p, v, v - 1);
  if (__builtin_expect(!!(v1 == v), 1))
   return 1;
 }
 return 0;
}
# 97 "/lib/modules/3.11.0-15-generic/build/include/linux/atomic.h" 3 4
static inline __attribute__((no_instrument_function)) int atomic_dec_if_positive(atomic_t *v)
{
 int c, old, dec;
 c = atomic_read(v);
 for (;;) {
  dec = c - 1;
  if (__builtin_expect(!!(dec < 0), 0))
   break;
  old = atomic_cmpxchg((v), c, dec);
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return dec;
}



static inline __attribute__((no_instrument_function)) void atomic_or(int i, atomic_t *v)
{
 int old;
 int new;

 do {
  old = atomic_read(v);
  new = old | i;
 } while (atomic_cmpxchg(v, old, new) != old);
}


# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/atomic-long.h" 1 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/atomic-long.h" 3 4
typedef atomic64_t atomic_long_t;



static inline __attribute__((no_instrument_function)) long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_read(v);
}

static inline __attribute__((no_instrument_function)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_set(v, i);
}

static inline __attribute__((no_instrument_function)) void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline __attribute__((no_instrument_function)) void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline __attribute__((no_instrument_function)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline __attribute__((no_instrument_function)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}

static inline __attribute__((no_instrument_function)) int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_sub_and_test(i, v);
}

static inline __attribute__((no_instrument_function)) int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_dec_and_test(v);
}

static inline __attribute__((no_instrument_function)) int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_inc_and_test(v);
}

static inline __attribute__((no_instrument_function)) int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_add_negative(i, v);
}

static inline __attribute__((no_instrument_function)) long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_return(i, v);
}

static inline __attribute__((no_instrument_function)) long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline __attribute__((no_instrument_function)) long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_add_return(1, (v)));
}

static inline __attribute__((no_instrument_function)) long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1, (v)));
}

static inline __attribute__((no_instrument_function)) long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_unless(v, a, u);
}
# 128 "/lib/modules/3.11.0-15-generic/build/include/linux/atomic.h" 2 3 4
# 24 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 2 3 4

struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;
 void *sysenter_return;






 unsigned int sig_on_uaccess_error:1;
 unsigned int uaccess_err:1;
};
# 203 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 3 4
extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) kernel_stack;

static inline __attribute__((no_instrument_function)) struct thread_info *current_thread_info(void)
{
 struct thread_info *ti;
 ti = (void *)(({ typeof(kernel_stack) pfo_ret__; switch (sizeof(kernel_stack)) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "p" (&(kernel_stack))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(kernel_stack))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(kernel_stack))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "p" (&(kernel_stack))); break; default: __bad_percpu_size(); } pfo_ret__; }) +
        (5*8) - (((1UL) << 12) << 1));
 return ti;
}
# 244 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h" 3 4
static inline __attribute__((no_instrument_function)) void set_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 ti->status |= 0x0008;
 ({ int __ret_warn_on = !!(!(__builtin_constant_p((2)) ? constant_test_bit((2), ((unsigned long *)&ti->flags)) : variable_test_bit((2), ((unsigned long *)&ti->flags)))); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/thread_info.h", 248); __builtin_expect(!!(__ret_warn_on), 0); });
}
static inline __attribute__((no_instrument_function)) void clear_restore_sigmask(void)
{
 current_thread_info()->status &= ~0x0008;
}
static inline __attribute__((no_instrument_function)) bool test_restore_sigmask(void)
{
 return current_thread_info()->status & 0x0008;
}
static inline __attribute__((no_instrument_function)) bool test_and_clear_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 if (!(ti->status & 0x0008))
  return false;
 ti->status &= ~0x0008;
 return true;
}

static inline __attribute__((no_instrument_function)) bool is_ia32_task(void)
{




 if (current_thread_info()->status & 0x0002)
  return true;

 return false;
}



extern void arch_task_cache_init(void);
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
extern void arch_release_task_struct(struct task_struct *tsk);
# 55 "/lib/modules/3.11.0-15-generic/build/include/linux/thread_info.h" 2 3 4
# 71 "/lib/modules/3.11.0-15-generic/build/include/linux/thread_info.h" 3 4
static inline __attribute__((no_instrument_function)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((no_instrument_function)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((no_instrument_function)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((no_instrument_function)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline __attribute__((no_instrument_function)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p((flag)) ? constant_test_bit((flag), ((unsigned long *)&ti->flags)) : variable_test_bit((flag), ((unsigned long *)&ti->flags)));
}
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/preempt.h" 2 3 4
# 131 "/lib/modules/3.11.0-15-generic/build/include/linux/preempt.h" 3 4
struct preempt_notifier;
# 147 "/lib/modules/3.11.0-15-generic/build/include/linux/preempt.h" 3 4
struct preempt_ops {
 void (*sched_in)(struct preempt_notifier *notifier, int cpu);
 void (*sched_out)(struct preempt_notifier *notifier,
     struct task_struct *next);
};
# 160 "/lib/modules/3.11.0-15-generic/build/include/linux/preempt.h" 3 4
struct preempt_notifier {
 struct hlist_node link;
 struct preempt_ops *ops;
};

void preempt_notifier_register(struct preempt_notifier *notifier);
void preempt_notifier_unregister(struct preempt_notifier *notifier);

static inline __attribute__((no_instrument_function)) void preempt_notifier_init(struct preempt_notifier *notifier,
         struct preempt_ops *ops)
{
 INIT_HLIST_NODE(&notifier->link);
 notifier->ops = ops;
}
# 51 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/bottom_half.h" 1 3 4



extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
# 58 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/barrier.h" 1 3 4
# 110 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/barrier.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void rdtsc_barrier(void)
{
 asm volatile ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+17)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "mfence" "\n" "664""1" ":\n\t" ".popsection" : : : "memory");
 asm volatile ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+18)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "lfence" "\n" "664""1" ":\n\t" ".popsection" : : : "memory");
}
# 59 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4
# 81 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 1 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock_types.h" 1 3 4
# 14 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock_types.h" 3 4
typedef u16 __ticket_t;
typedef u32 __ticketpair_t;




typedef struct arch_spinlock {
 union {
  __ticketpair_t head_tail;
  struct __raw_tickets {
   __ticket_t head, tail;
  } tickets;
 };
} arch_spinlock_t;



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/rwlock.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/rwlock.h" 3 4
typedef union {
 s32 lock;
 s32 write;
} arch_rwlock_t;
# 32 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock_types.h" 2 3 4
# 14 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 2 3 4






typedef struct raw_spinlock {
 arch_spinlock_t raw_lock;
# 32 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 3 4
} raw_spinlock_t;
# 64 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 3 4
typedef struct spinlock {
 union {
  struct raw_spinlock rlock;
# 75 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 3 4
 };
} spinlock_t;
# 86 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_types.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_types.h" 3 4
typedef struct {
 arch_rwlock_t raw_lock;
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_types.h" 3 4
} rwlock_t;
# 87 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_types.h" 2 3 4
# 82 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock.h" 1 3 4
# 50 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void __ticket_spin_lock(arch_spinlock_t *lock)
{
 register struct __raw_tickets inc = { .tail = 1 };

 inc = ({ __typeof__ (*(((&lock->tickets)))) __ret = (((inc))); switch (sizeof(*(((&lock->tickets))))) { case 1: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "b %b0, %1\n" : "+q" (__ret), "+m" (*(((&lock->tickets)))) : : "memory", "cc"); break; case 2: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "w %w0, %1\n" : "+r" (__ret), "+m" (*(((&lock->tickets)))) : : "memory", "cc"); break; case 4: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "l %0, %1\n" : "+r" (__ret), "+m" (*(((&lock->tickets)))) : : "memory", "cc"); break; case 8: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "q %q0, %1\n" : "+r" (__ret), "+m" (*(((&lock->tickets)))) : : "memory", "cc"); break; default: __xadd_wrong_size(); } __ret; });

 for (;;) {
  if (inc.head == inc.tail)
   break;
  cpu_relax();
  inc.head = (*(volatile typeof(lock->tickets.head) *)&(lock->tickets.head));
 }
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int __ticket_spin_trylock(arch_spinlock_t *lock)
{
 arch_spinlock_t old, new;

 old.tickets = (*(volatile typeof(lock->tickets) *)&(lock->tickets));
 if (old.tickets.head != old.tickets.tail)
  return 0;

 new.head_tail = old.head_tail + (1 << (sizeof(__ticket_t) * 8));


 return ({ __typeof__(*((&lock->head_tail))) __ret; __typeof__(*((&lock->head_tail))) __old = ((old.head_tail)); __typeof__(*((&lock->head_tail))) __new = ((new.head_tail)); switch ((sizeof(*(&lock->head_tail)))) { case 1: { volatile u8 *__ptr = (volatile u8 *)((&lock->head_tail)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { volatile u16 *__ptr = (volatile u16 *)((&lock->head_tail)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { volatile u32 *__ptr = (volatile u32 *)((&lock->head_tail)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { volatile u64 *__ptr = (volatile u64 *)((&lock->head_tail)); asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; }) == old.head_tail;
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void __ticket_spin_unlock(arch_spinlock_t *lock)
{
 ({ __typeof__ (*(&lock->tickets.head)) __ret = (1); switch (sizeof(*(&lock->tickets.head))) { case 1: asm volatile ( "addb %b1, %0\n" : "+m" (*(&lock->tickets.head)) : "qi" (1) : "memory", "cc"); break; case 2: asm volatile ( "addw %w1, %0\n" : "+m" (*(&lock->tickets.head)) : "ri" (1) : "memory", "cc"); break; case 4: asm volatile ( "addl %1, %0\n" : "+m" (*(&lock->tickets.head)) : "ri" (1) : "memory", "cc"); break; case 8: asm volatile ( "addq %1, %0\n" : "+m" (*(&lock->tickets.head)) : "ri" (1) : "memory", "cc"); break; default: __add_wrong_size(); } __ret; });
}

static inline __attribute__((no_instrument_function)) int __ticket_spin_is_locked(arch_spinlock_t *lock)
{
 struct __raw_tickets tmp = (*(volatile typeof(lock->tickets) *)&(lock->tickets));

 return tmp.tail != tmp.head;
}

static inline __attribute__((no_instrument_function)) int __ticket_spin_is_contended(arch_spinlock_t *lock)
{
 struct __raw_tickets tmp = (*(volatile typeof(lock->tickets) *)&(lock->tickets));

 return (__ticket_t)(tmp.tail - tmp.head) > 1;
}
# 134 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) void arch_spin_unlock_wait(arch_spinlock_t *lock)
{
 while (arch_spin_is_locked(lock))
  cpu_relax();
}
# 158 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) int arch_read_can_lock(arch_rwlock_t *lock)
{
 return lock->lock > 0;
}





static inline __attribute__((no_instrument_function)) int arch_write_can_lock(arch_rwlock_t *lock)
{
 return lock->write == 0x00100000;
}

static inline __attribute__((no_instrument_function)) void arch_read_lock(arch_rwlock_t *rw)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "decl" " " " (%0)\n\t"
       "jns 1f\n"
       "call __read_lock_failed\n\t"
       "1:\n"
       ::"D" (rw) : "memory");
}

static inline __attribute__((no_instrument_function)) void arch_write_lock(arch_rwlock_t *rw)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "subl %1" "," "(%0)\n\t"
       "jz 1f\n"
       "call __write_lock_failed\n\t"
       "1:\n"
       ::"D" (&rw->write), "i" (0x00100000)
       : "memory");
}

static inline __attribute__((no_instrument_function)) int arch_read_trylock(arch_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)lock;

 if ((atomic_sub_return(1, count)) >= 0)
  return 1;
 atomic_inc(count);
 return 0;
}

static inline __attribute__((no_instrument_function)) int arch_write_trylock(arch_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)&lock->write;

 if (atomic_sub_and_test(0x00100000, count))
  return 1;
 atomic_add(0x00100000, count);
 return 0;
}

static inline __attribute__((no_instrument_function)) void arch_read_unlock(arch_rwlock_t *rw)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "incl" " " " %0"
       :"+m" (rw->lock) : : "memory");
}

static inline __attribute__((no_instrument_function)) void arch_write_unlock(arch_rwlock_t *rw)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "addl %1" "," "%0"
       : "+m" (rw->write) : "i" (0x00100000) : "memory");
}
# 88 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4
# 145 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) void do_raw_spin_lock(raw_spinlock_t *lock)
{
 (void)0;
 arch_spin_lock(&lock->raw_lock);
}

static inline __attribute__((no_instrument_function)) void
do_raw_spin_lock_flags(raw_spinlock_t *lock, unsigned long *flags)
{
 (void)0;
 arch_spin_lock_flags(&lock->raw_lock, *flags);
}

static inline __attribute__((no_instrument_function)) int do_raw_spin_trylock(raw_spinlock_t *lock)
{
 return arch_spin_trylock(&(lock)->raw_lock);
}

static inline __attribute__((no_instrument_function)) void do_raw_spin_unlock(raw_spinlock_t *lock)
{
 arch_spin_unlock(&lock->raw_lock);
 (void)0;
}
# 265 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock.h" 1 3 4
# 266 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_api_smp.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_api_smp.h" 3 4
int in_lock_functions(unsigned long addr);



void __attribute__((section(".spinlock.text"))) _raw_spin_lock(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_lock_nested(raw_spinlock_t *lock, int subclass)
        ;
void __attribute__((section(".spinlock.text")))
_raw_spin_lock_nest_lock(raw_spinlock_t *lock, struct lockdep_map *map)
        ;
void __attribute__((section(".spinlock.text"))) _raw_spin_lock_bh(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_lock_irq(raw_spinlock_t *lock)
        ;

unsigned long __attribute__((section(".spinlock.text"))) _raw_spin_lock_irqsave(raw_spinlock_t *lock)
        ;
unsigned long __attribute__((section(".spinlock.text")))
_raw_spin_lock_irqsave_nested(raw_spinlock_t *lock, int subclass)
        ;
int __attribute__((section(".spinlock.text"))) _raw_spin_trylock(raw_spinlock_t *lock);
int __attribute__((section(".spinlock.text"))) _raw_spin_trylock_bh(raw_spinlock_t *lock);
void __attribute__((section(".spinlock.text"))) _raw_spin_unlock(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_unlock_bh(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_spin_unlock_irq(raw_spinlock_t *lock) ;
void __attribute__((section(".spinlock.text")))
_raw_spin_unlock_irqrestore(raw_spinlock_t *lock, unsigned long flags)
        ;
# 86 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_api_smp.h" 3 4
static inline __attribute__((no_instrument_function)) int __raw_spin_trylock(raw_spinlock_t *lock)
{
 __asm__ __volatile__("": : :"memory");
 if (do_raw_spin_trylock(lock)) {
  do { } while (0);
  return 1;
 }
 __asm__ __volatile__("": : :"memory");
 return 0;
}
# 104 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_api_smp.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long __raw_spin_lock_irqsave(raw_spinlock_t *lock)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); do { } while (0); } while (0);
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
# 119 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_api_smp.h" 3 4
 do_raw_spin_lock_flags(lock, &flags);

 return flags;
}

static inline __attribute__((no_instrument_function)) void __raw_spin_lock_irq(raw_spinlock_t *lock)
{
 do { arch_local_irq_disable(); do { } while (0); } while (0);
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do_raw_spin_lock(lock);
}

static inline __attribute__((no_instrument_function)) void __raw_spin_lock_bh(raw_spinlock_t *lock)
{
 local_bh_disable();
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do_raw_spin_lock(lock);
}

static inline __attribute__((no_instrument_function)) void __raw_spin_lock(raw_spinlock_t *lock)
{
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do_raw_spin_lock(lock);
}



static inline __attribute__((no_instrument_function)) void __raw_spin_unlock(raw_spinlock_t *lock)
{
 do { } while (0);
 do_raw_spin_unlock(lock);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_spin_unlock_irqrestore(raw_spinlock_t *lock,
         unsigned long flags)
{
 do { } while (0);
 do_raw_spin_unlock(lock);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); do { } while (0); } else { do { } while (0); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_spin_unlock_irq(raw_spinlock_t *lock)
{
 do { } while (0);
 do_raw_spin_unlock(lock);
 do { do { } while (0); arch_local_irq_enable(); } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_spin_unlock_bh(raw_spinlock_t *lock)
{
 do { } while (0);
 do_raw_spin_unlock(lock);
 __asm__ __volatile__("": : :"memory");
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
}

static inline __attribute__((no_instrument_function)) int __raw_spin_trylock_bh(raw_spinlock_t *lock)
{
 local_bh_disable();
 __asm__ __volatile__("": : :"memory");
 if (do_raw_spin_trylock(lock)) {
  do { } while (0);
  return 1;
 }
 __asm__ __volatile__("": : :"memory");
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
 return 0;
}

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_api_smp.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_api_smp.h" 3 4
void __attribute__((section(".spinlock.text"))) _raw_read_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_lock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_lock_irq(rwlock_t *lock) ;
unsigned long __attribute__((section(".spinlock.text"))) _raw_read_lock_irqsave(rwlock_t *lock)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _raw_write_lock_irqsave(rwlock_t *lock)
       ;
int __attribute__((section(".spinlock.text"))) _raw_read_trylock(rwlock_t *lock);
int __attribute__((section(".spinlock.text"))) _raw_write_trylock(rwlock_t *lock);
void __attribute__((section(".spinlock.text"))) _raw_read_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_read_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _raw_write_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text")))
_raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
void __attribute__((section(".spinlock.text")))
_raw_write_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
# 117 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_api_smp.h" 3 4
static inline __attribute__((no_instrument_function)) int __raw_read_trylock(rwlock_t *lock)
{
 __asm__ __volatile__("": : :"memory");
 if (arch_read_trylock(&(lock)->raw_lock)) {
  do { } while (0);
  return 1;
 }
 __asm__ __volatile__("": : :"memory");
 return 0;
}

static inline __attribute__((no_instrument_function)) int __raw_write_trylock(rwlock_t *lock)
{
 __asm__ __volatile__("": : :"memory");
 if (arch_write_trylock(&(lock)->raw_lock)) {
  do { } while (0);
  return 1;
 }
 __asm__ __volatile__("": : :"memory");
 return 0;
}
# 146 "/lib/modules/3.11.0-15-generic/build/include/linux/rwlock_api_smp.h" 3 4
static inline __attribute__((no_instrument_function)) void __raw_read_lock(rwlock_t *lock)
{
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_read_lock(&(lock)->raw_lock); } while (0);
}

static inline __attribute__((no_instrument_function)) unsigned long __raw_read_lock_irqsave(rwlock_t *lock)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); do { } while (0); } while (0);
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_read_lock(&((lock))->raw_lock); } while (0)
                                       ;
 return flags;
}

static inline __attribute__((no_instrument_function)) void __raw_read_lock_irq(rwlock_t *lock)
{
 do { arch_local_irq_disable(); do { } while (0); } while (0);
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_read_lock(&(lock)->raw_lock); } while (0);
}

static inline __attribute__((no_instrument_function)) void __raw_read_lock_bh(rwlock_t *lock)
{
 local_bh_disable();
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_read_lock(&(lock)->raw_lock); } while (0);
}

static inline __attribute__((no_instrument_function)) unsigned long __raw_write_lock_irqsave(rwlock_t *lock)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); do { } while (0); } while (0);
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_write_lock(&((lock))->raw_lock); } while (0)
                                        ;
 return flags;
}

static inline __attribute__((no_instrument_function)) void __raw_write_lock_irq(rwlock_t *lock)
{
 do { arch_local_irq_disable(); do { } while (0); } while (0);
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_write_lock(&(lock)->raw_lock); } while (0);
}

static inline __attribute__((no_instrument_function)) void __raw_write_lock_bh(rwlock_t *lock)
{
 local_bh_disable();
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_write_lock(&(lock)->raw_lock); } while (0);
}

static inline __attribute__((no_instrument_function)) void __raw_write_lock(rwlock_t *lock)
{
 __asm__ __volatile__("": : :"memory");
 do { } while (0);
 do {(void)0; arch_write_lock(&(lock)->raw_lock); } while (0);
}



static inline __attribute__((no_instrument_function)) void __raw_write_unlock(rwlock_t *lock)
{
 do { } while (0);
 do {arch_write_unlock(&(lock)->raw_lock); (void)0; } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_read_unlock(rwlock_t *lock)
{
 do { } while (0);
 do {arch_read_unlock(&(lock)->raw_lock); (void)0; } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void
__raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
{
 do { } while (0);
 do {arch_read_unlock(&(lock)->raw_lock); (void)0; } while (0);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); do { } while (0); } else { do { } while (0); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_read_unlock_irq(rwlock_t *lock)
{
 do { } while (0);
 do {arch_read_unlock(&(lock)->raw_lock); (void)0; } while (0);
 do { do { } while (0); arch_local_irq_enable(); } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_read_unlock_bh(rwlock_t *lock)
{
 do { } while (0);
 do {arch_read_unlock(&(lock)->raw_lock); (void)0; } while (0);
 __asm__ __volatile__("": : :"memory");
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
}

static inline __attribute__((no_instrument_function)) void __raw_write_unlock_irqrestore(rwlock_t *lock,
          unsigned long flags)
{
 do { } while (0);
 do {arch_write_unlock(&(lock)->raw_lock); (void)0; } while (0);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); do { } while (0); } else { do { } while (0); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_write_unlock_irq(rwlock_t *lock)
{
 do { } while (0);
 do {arch_write_unlock(&(lock)->raw_lock); (void)0; } while (0);
 do { do { } while (0); arch_local_irq_enable(); } while (0);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __raw_write_unlock_bh(rwlock_t *lock)
{
 do { } while (0);
 do {arch_write_unlock(&(lock)->raw_lock); (void)0; } while (0);
 __asm__ __volatile__("": : :"memory");
 local_bh_enable_ip((unsigned long)__builtin_return_address(0));
}
# 195 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock_api_smp.h" 2 3 4
# 272 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 2 3 4
# 280 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) raw_spinlock_t *spinlock_check(spinlock_t *lock)
{
 return &lock->rlock;
}







static inline __attribute__((no_instrument_function)) void spin_lock(spinlock_t *lock)
{
 _raw_spin_lock(&lock->rlock);
}

static inline __attribute__((no_instrument_function)) void spin_lock_bh(spinlock_t *lock)
{
 _raw_spin_lock_bh(&lock->rlock);
}

static inline __attribute__((no_instrument_function)) int spin_trylock(spinlock_t *lock)
{
 return (_raw_spin_trylock(&lock->rlock));
}
# 316 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) void spin_lock_irq(spinlock_t *lock)
{
 _raw_spin_lock_irq(&lock->rlock);
}
# 331 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) void spin_unlock(spinlock_t *lock)
{
 __raw_spin_unlock(&lock->rlock);
}

static inline __attribute__((no_instrument_function)) void spin_unlock_bh(spinlock_t *lock)
{
 _raw_spin_unlock_bh(&lock->rlock);
}

static inline __attribute__((no_instrument_function)) void spin_unlock_irq(spinlock_t *lock)
{
 __raw_spin_unlock_irq(&lock->rlock);
}

static inline __attribute__((no_instrument_function)) void spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
{
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _raw_spin_unlock_irqrestore(&lock->rlock, flags); } while (0);
}

static inline __attribute__((no_instrument_function)) int spin_trylock_bh(spinlock_t *lock)
{
 return (_raw_spin_trylock_bh(&lock->rlock));
}

static inline __attribute__((no_instrument_function)) int spin_trylock_irq(spinlock_t *lock)
{
 return ({ do { arch_local_irq_disable(); do { } while (0); } while (0); (_raw_spin_trylock(&lock->rlock)) ? 1 : ({ do { do { } while (0); arch_local_irq_enable(); } while (0); 0; }); });
}






static inline __attribute__((no_instrument_function)) void spin_unlock_wait(spinlock_t *lock)
{
 arch_spin_unlock_wait(&(&lock->rlock)->raw_lock);
}

static inline __attribute__((no_instrument_function)) int spin_is_locked(spinlock_t *lock)
{
 return arch_spin_is_locked(&(&lock->rlock)->raw_lock);
}

static inline __attribute__((no_instrument_function)) int spin_is_contended(spinlock_t *lock)
{
 return arch_spin_is_contended(&(&lock->rlock)->raw_lock);
}

static inline __attribute__((no_instrument_function)) int spin_can_lock(spinlock_t *lock)
{
 return (!arch_spin_is_locked(&(&lock->rlock)->raw_lock));
}
# 401 "/lib/modules/3.11.0-15-generic/build/include/linux/spinlock.h" 3 4
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 2 3 4
# 39 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;
# 59 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned __read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = (*(volatile typeof(s->sequence) *)&(s->sequence));
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }
 return ret;
}
# 81 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = __read_seqcount_begin(s);
 __asm__ __volatile__("": : :"memory");
 return ret;
}
# 102 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned raw_seqcount_begin(const seqcount_t *s)
{
 unsigned ret = (*(volatile typeof(s->sequence) *)&(s->sequence));
 __asm__ __volatile__("": : :"memory");
 return ret & ~1;
}
# 123 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) int __read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 return __builtin_expect(!!(s->sequence != start), 0);
}
# 138 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) int read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 __asm__ __volatile__("": : :"memory");
 return __read_seqcount_retry(s, start);
}






static inline __attribute__((no_instrument_function)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 168 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) void write_seqcount_barrier(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence+=2;
}

typedef struct {
 struct seqcount seqcount;
 spinlock_t lock;
} seqlock_t;
# 201 "/lib/modules/3.11.0-15-generic/build/include/linux/seqlock.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned read_seqbegin(const seqlock_t *sl)
{
 return read_seqcount_begin(&sl->seqcount);
}

static inline __attribute__((no_instrument_function)) unsigned read_seqretry(const seqlock_t *sl, unsigned start)
{
 return read_seqcount_retry(&sl->seqcount, start);
}






static inline __attribute__((no_instrument_function)) void write_seqlock(seqlock_t *sl)
{
 spin_lock(&sl->lock);
 write_seqcount_begin(&sl->seqcount);
}

static inline __attribute__((no_instrument_function)) void write_sequnlock(seqlock_t *sl)
{
 write_seqcount_end(&sl->seqcount);
 spin_unlock(&sl->lock);
}

static inline __attribute__((no_instrument_function)) void write_seqlock_bh(seqlock_t *sl)
{
 spin_lock_bh(&sl->lock);
 write_seqcount_begin(&sl->seqcount);
}

static inline __attribute__((no_instrument_function)) void write_sequnlock_bh(seqlock_t *sl)
{
 write_seqcount_end(&sl->seqcount);
 spin_unlock_bh(&sl->lock);
}

static inline __attribute__((no_instrument_function)) void write_seqlock_irq(seqlock_t *sl)
{
 spin_lock_irq(&sl->lock);
 write_seqcount_begin(&sl->seqcount);
}

static inline __attribute__((no_instrument_function)) void write_sequnlock_irq(seqlock_t *sl)
{
 write_seqcount_end(&sl->seqcount);
 spin_unlock_irq(&sl->lock);
}

static inline __attribute__((no_instrument_function)) unsigned long __write_seqlock_irqsave(seqlock_t *sl)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = _raw_spin_lock_irqsave(spinlock_check(&sl->lock)); } while (0); } while (0);
 write_seqcount_begin(&sl->seqcount);
 return flags;
}




static inline __attribute__((no_instrument_function)) void
write_sequnlock_irqrestore(seqlock_t *sl, unsigned long flags)
{
 write_seqcount_end(&sl->seqcount);
 spin_unlock_irqrestore(&sl->lock, flags);
}
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/time.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/time.h" 3 4
struct timespec {
 __kernel_time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 __kernel_time_t tv_sec;
 __kernel_suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 34 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/time.h" 3 4
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 2 3 4

extern struct timezone sys_tz;
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 3 4
static inline __attribute__((no_instrument_function)) int timespec_equal(const struct timespec *a,
                                 const struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline __attribute__((no_instrument_function)) int timespec_compare(const struct timespec *lhs, const struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline __attribute__((no_instrument_function)) int timeval_compare(const struct timeval *lhs, const struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, s64 nsec);






extern struct timespec timespec_add_safe(const struct timespec lhs,
      const struct timespec rhs);


static inline __attribute__((no_instrument_function)) struct timespec timespec_add(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec + rhs.tv_sec,
    lhs.tv_nsec + rhs.tv_nsec);
 return ts_delta;
}




static inline __attribute__((no_instrument_function)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}
# 97 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 3 4
static inline __attribute__((no_instrument_function)) bool timespec_valid(const struct timespec *ts)
{

 if (ts->tv_sec < 0)
  return false;

 if ((unsigned long)ts->tv_nsec >= 1000000000L)
  return false;
 return true;
}

static inline __attribute__((no_instrument_function)) bool timespec_valid_strict(const struct timespec *ts)
{
 if (!timespec_valid(ts))
  return false;

 if ((unsigned long long)ts->tv_sec >= (((s64)~((u64)1 << 63)) / 1000000000L))
  return false;
 return true;
}

extern bool persistent_clock_exist;

static inline __attribute__((no_instrument_function)) bool has_persistent_clock(void)
{
 return persistent_clock_exist;
}

extern void read_persistent_clock(struct timespec *ts);
extern void read_boot_clock(struct timespec *ts);
extern int persistent_clock_is_local;
extern int update_persistent_clock(struct timespec now);
void timekeeping_init(void);
extern int timekeeping_suspended;

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);
struct timespec __current_kernel_time(void);
struct timespec get_monotonic_coarse(void);
void get_xtime_and_monotonic_and_sleep_offset(struct timespec *xtim,
    struct timespec *wtom, struct timespec *sleep);
void timekeeping_inject_sleeptime(struct timespec *delta);
# 156 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 3 4
extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(const struct timespec *tv);
extern int do_sys_settimeofday(const struct timespec *tv,
          const struct timezone *tz);

extern long do_utimes(int dfd, const char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern int __getnstimeofday(struct timespec *tv);
extern void getnstimeofday(struct timespec *tv);
extern void getrawmonotonic(struct timespec *ts);
extern void getnstime_raw_and_real(struct timespec *ts_raw,
  struct timespec *ts_real);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);
extern void get_monotonic_boottime(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern u64 timekeeping_max_deferment(void);
extern int timekeeping_inject_offset(struct timespec *ts);
extern s32 timekeeping_get_tai_offset(void);
extern void timekeeping_set_tai_offset(s32 tai_offset);
extern void timekeeping_clocktai(struct timespec *ts);

struct tms;
extern void do_sys_times(struct tms *);





struct tm {




 int tm_sec;

 int tm_min;

 int tm_hour;

 int tm_mday;

 int tm_mon;

 long tm_year;

 int tm_wday;

 int tm_yday;
};

void time_to_tm(time_t totalsecs, int offset, struct tm *result);
# 222 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 3 4
static inline __attribute__((no_instrument_function)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 234 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 3 4
static inline __attribute__((no_instrument_function)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);
# 264 "/lib/modules/3.11.0-15-generic/build/include/linux/time.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
 a->tv_nsec = ns;
}
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/stat.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/uidgid.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/uidgid.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/highuid.h" 1 3 4
# 34 "/lib/modules/3.11.0-15-generic/build/include/linux/highuid.h" 3 4
extern int overflowuid;
extern int overflowgid;

extern void __bad_uid(void);
extern void __bad_gid(void);
# 81 "/lib/modules/3.11.0-15-generic/build/include/linux/highuid.h" 3 4
extern int fs_overflowuid;
extern int fs_overflowgid;
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/uidgid.h" 2 3 4

struct user_namespace;
extern struct user_namespace init_user_ns;
# 46 "/lib/modules/3.11.0-15-generic/build/include/linux/uidgid.h" 3 4
typedef uid_t kuid_t;
typedef gid_t kgid_t;

static inline __attribute__((no_instrument_function)) uid_t __kuid_val(kuid_t uid)
{
 return uid;
}

static inline __attribute__((no_instrument_function)) gid_t __kgid_val(kgid_t gid)
{
 return gid;
}
# 70 "/lib/modules/3.11.0-15-generic/build/include/linux/uidgid.h" 3 4
static inline __attribute__((no_instrument_function)) bool uid_eq(kuid_t left, kuid_t right)
{
 return __kuid_val(left) == __kuid_val(right);
}

static inline __attribute__((no_instrument_function)) bool gid_eq(kgid_t left, kgid_t right)
{
 return __kgid_val(left) == __kgid_val(right);
}

static inline __attribute__((no_instrument_function)) bool uid_gt(kuid_t left, kuid_t right)
{
 return __kuid_val(left) > __kuid_val(right);
}

static inline __attribute__((no_instrument_function)) bool gid_gt(kgid_t left, kgid_t right)
{
 return __kgid_val(left) > __kgid_val(right);
}

static inline __attribute__((no_instrument_function)) bool uid_gte(kuid_t left, kuid_t right)
{
 return __kuid_val(left) >= __kuid_val(right);
}

static inline __attribute__((no_instrument_function)) bool gid_gte(kgid_t left, kgid_t right)
{
 return __kgid_val(left) >= __kgid_val(right);
}

static inline __attribute__((no_instrument_function)) bool uid_lt(kuid_t left, kuid_t right)
{
 return __kuid_val(left) < __kuid_val(right);
}

static inline __attribute__((no_instrument_function)) bool gid_lt(kgid_t left, kgid_t right)
{
 return __kgid_val(left) < __kgid_val(right);
}

static inline __attribute__((no_instrument_function)) bool uid_lte(kuid_t left, kuid_t right)
{
 return __kuid_val(left) <= __kuid_val(right);
}

static inline __attribute__((no_instrument_function)) bool gid_lte(kgid_t left, kgid_t right)
{
 return __kgid_val(left) <= __kgid_val(right);
}

static inline __attribute__((no_instrument_function)) bool uid_valid(kuid_t uid)
{
 return !uid_eq(uid, ((kuid_t) -1 ));
}

static inline __attribute__((no_instrument_function)) bool gid_valid(kgid_t gid)
{
 return !gid_eq(gid, ((kgid_t) -1 ));
}
# 152 "/lib/modules/3.11.0-15-generic/build/include/linux/uidgid.h" 3 4
static inline __attribute__((no_instrument_function)) kuid_t make_kuid(struct user_namespace *from, uid_t uid)
{
 return ((kuid_t) uid );
}

static inline __attribute__((no_instrument_function)) kgid_t make_kgid(struct user_namespace *from, gid_t gid)
{
 return ((kgid_t) gid );
}

static inline __attribute__((no_instrument_function)) uid_t from_kuid(struct user_namespace *to, kuid_t kuid)
{
 return __kuid_val(kuid);
}

static inline __attribute__((no_instrument_function)) gid_t from_kgid(struct user_namespace *to, kgid_t kgid)
{
 return __kgid_val(kgid);
}

static inline __attribute__((no_instrument_function)) uid_t from_kuid_munged(struct user_namespace *to, kuid_t kuid)
{
 uid_t uid = from_kuid(to, kuid);
 if (uid == (uid_t)-1)
  uid = overflowuid;
 return uid;
}

static inline __attribute__((no_instrument_function)) gid_t from_kgid_munged(struct user_namespace *to, kgid_t kgid)
{
 gid_t gid = from_kgid(to, kgid);
 if (gid == (gid_t)-1)
  gid = overflowgid;
 return gid;
}

static inline __attribute__((no_instrument_function)) bool kuid_has_mapping(struct user_namespace *ns, kuid_t uid)
{
 return true;
}

static inline __attribute__((no_instrument_function)) bool kgid_has_mapping(struct user_namespace *ns, kgid_t gid)
{
 return true;
}
# 20 "/lib/modules/3.11.0-15-generic/build/include/linux/stat.h" 2 3 4

struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 kuid_t uid;
 kgid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 21 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 2 3 4


struct kobject;
struct module;
struct bin_attribute;
enum kobj_ns_type;

struct attribute {
 const char *name;
 umode_t mode;





};
# 59 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 3 4
struct attribute_group {
 const char *name;
 umode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
 struct bin_attribute **bin_attrs;
};
# 113 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 3 4
struct file;
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct file *, struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct file *,struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct file *, struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};
# 170 "/lib/modules/3.11.0-15-generic/build/include/linux/sysfs.h" 3 4
struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
 const void *(*namespace)(struct kobject *, const struct attribute *);
};

struct sysfs_dirent;



int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
       void *data, struct module *owner);

int sysfs_create_dir(struct kobject *kobj);
void sysfs_remove_dir(struct kobject *kobj);
int sysfs_rename_dir(struct kobject *kobj, const char *new_name);
int sysfs_move_dir(struct kobject *kobj,
    struct kobject *new_parent_kobj);

int sysfs_create_file(struct kobject *kobj,
       const struct attribute *attr);
int sysfs_create_files(struct kobject *kobj,
       const struct attribute **attr);
int sysfs_chmod_file(struct kobject *kobj,
      const struct attribute *attr, umode_t mode);
void sysfs_remove_file(struct kobject *kobj, const struct attribute *attr);
void sysfs_remove_files(struct kobject *kobj, const struct attribute **attr);

int sysfs_create_bin_file(struct kobject *kobj,
           const struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj,
      const struct bin_attribute *attr);

int sysfs_create_link(struct kobject *kobj, struct kobject *target,
       const char *name);
int sysfs_create_link_nowarn(struct kobject *kobj,
       struct kobject *target,
       const char *name);
void sysfs_remove_link(struct kobject *kobj, const char *name);

int sysfs_rename_link(struct kobject *kobj, struct kobject *target,
   const char *old_name, const char *new_name);

void sysfs_delete_link(struct kobject *dir, struct kobject *targ,
   const char *name);

int sysfs_create_group(struct kobject *kobj,
        const struct attribute_group *grp);
int sysfs_update_group(struct kobject *kobj,
         const struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
   const struct attribute_group *grp);
int sysfs_add_file_to_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);
int sysfs_merge_group(struct kobject *kobj,
         const struct attribute_group *grp);
void sysfs_unmerge_group(struct kobject *kobj,
         const struct attribute_group *grp);
int sysfs_add_link_to_group(struct kobject *kobj, const char *group_name,
       struct kobject *target, const char *link_name);
void sysfs_remove_link_from_group(struct kobject *kobj, const char *group_name,
      const char *link_name);

void sysfs_notify(struct kobject *kobj, const char *dir, const char *attr);
void sysfs_notify_dirent(struct sysfs_dirent *sd);
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
          const void *ns,
          const unsigned char *name);
struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd);
void sysfs_put(struct sysfs_dirent *sd);

int sysfs_init(void);
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 1 3 4
# 21 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 1 3 4
# 49 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 3 4
struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;

 struct task_struct *owner;


 void *spin_mlock;
# 67 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 3 4
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;



};
# 99 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 3 4
static inline __attribute__((no_instrument_function)) void mutex_destroy(struct mutex *lock) {}
# 119 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 3 4
extern void __mutex_init(struct mutex *lock, const char *name,
    struct lock_class_key *key);







static inline __attribute__((no_instrument_function)) int mutex_is_locked(struct mutex *lock)
{
 return atomic_read(&lock->count) != 1;
}
# 157 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 3 4
extern void mutex_lock(struct mutex *lock);
extern int mutex_lock_interruptible(struct mutex *lock);
extern int mutex_lock_killable(struct mutex *lock);
# 173 "/lib/modules/3.11.0-15-generic/build/include/linux/mutex.h" 3 4
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);

extern int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock);
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 2 3 4


struct kref {
 atomic_t refcount;
};





static inline __attribute__((no_instrument_function)) void kref_init(struct kref *kref)
{
 atomic_set(&kref->refcount, 1);
}





static inline __attribute__((no_instrument_function)) void kref_get(struct kref *kref)
{




 ({ static bool __attribute__ ((__section__(".data.unlikely"))) __warned; int __ret_warn_once = !!((atomic_add_return(1, &kref->refcount)) < 2); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/include/linux/kref.h", 47); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = true; __builtin_expect(!!(__ret_warn_once), 0); });
}
# 68 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 3 4
static inline __attribute__((no_instrument_function)) int kref_sub(struct kref *kref, unsigned int count,
      void (*release)(struct kref *kref))
{
 ({ int __ret_warn_on = !!(release == ((void *)0)); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/include/linux/kref.h", 71); __builtin_expect(!!(__ret_warn_on), 0); });

 if (atomic_sub_and_test((int) count, &kref->refcount)) {
  release(kref);
  return 1;
 }
 return 0;
}
# 97 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 3 4
static inline __attribute__((no_instrument_function)) int kref_put(struct kref *kref, void (*release)(struct kref *kref))
{
 return kref_sub(kref, 1, release);
}
# 115 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 3 4
static inline __attribute__((no_instrument_function)) int kref_put_spinlock_irqsave(struct kref *kref,
  void (*release)(struct kref *kref),
  spinlock_t *lock)
{
 unsigned long flags;

 ({ int __ret_warn_on = !!(release == ((void *)0)); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/include/linux/kref.h", 121); __builtin_expect(!!(__ret_warn_on), 0); });
 if (atomic_add_unless(&kref->refcount, -1, 1))
  return 0;
 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = _raw_spin_lock_irqsave(spinlock_check(lock)); } while (0); } while (0);
 if (atomic_dec_and_test(&kref->refcount)) {
  release(kref);
  do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); do { } while (0); } else { do { } while (0); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
  return 1;
 }
 spin_unlock_irqrestore(lock, flags);
 return 0;
}

static inline __attribute__((no_instrument_function)) int kref_put_mutex(struct kref *kref,
     void (*release)(struct kref *kref),
     struct mutex *lock)
{
 ({ int __ret_warn_on = !!(release == ((void *)0)); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/include/linux/kref.h", 138); __builtin_expect(!!(__ret_warn_on), 0); });
 if (__builtin_expect(!!(!atomic_add_unless(&kref->refcount, -1, 1)), 0)) {
  mutex_lock(lock);
  if (__builtin_expect(!!(!atomic_dec_and_test(&kref->refcount)), 0)) {
   mutex_unlock(lock);
   return 0;
  }
  release(kref);
  return 1;
 }
 return 0;
}
# 167 "/lib/modules/3.11.0-15-generic/build/include/linux/kref.h" 3 4
static inline __attribute__((no_instrument_function)) int kref_get_unless_zero(struct kref *kref)
{
 return atomic_add_unless(&kref->refcount, 1, 0);
}
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/wait.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 2 3 4

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int flags, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int flags, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;

};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 67 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
extern void __init_waitqueue_head(wait_queue_head_t *q, const char *name, struct lock_class_key *);
# 85 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
static inline __attribute__((no_instrument_function)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline __attribute__((no_instrument_function)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline __attribute__((no_instrument_function)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}

extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);

static inline __attribute__((no_instrument_function)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline __attribute__((no_instrument_function)) void __add_wait_queue_exclusive(wait_queue_head_t *q,
           wait_queue_t *wait)
{
 wait->flags |= 0x01;
 __add_wait_queue(q, wait);
}

static inline __attribute__((no_instrument_function)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline __attribute__((no_instrument_function)) void __add_wait_queue_tail_exclusive(wait_queue_head_t *q,
           wait_queue_t *wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}

static inline __attribute__((no_instrument_function)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
void __wake_up_locked_key(wait_queue_head_t *q, unsigned int mode, void *key);
void __wake_up_sync_key(wait_queue_head_t *q, unsigned int mode, int nr,
   void *key);
void __wake_up_locked(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
void wake_up_atomic_t(atomic_t *);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_atomic_t(atomic_t *, int (*)(atomic_t *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 877 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait,
   unsigned int mode, void *key);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 937 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
static inline __attribute__((no_instrument_function)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p((bit)) ? constant_test_bit((bit), (word)) : variable_test_bit((bit), (word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 961 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
static inline __attribute__((no_instrument_function)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 979 "/lib/modules/3.11.0-15-generic/build/include/linux/wait.h" 3 4
static inline __attribute__((no_instrument_function))
int wait_on_atomic_t(atomic_t *val, int (*action)(atomic_t *), unsigned mode)
{
 if (atomic_read(val) == 0)
  return 0;
 return out_of_line_wait_on_atomic_t(val, action, mode);
}
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 2 3 4







extern char uevent_helper[];


extern u64 uevent_seqnum;
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 3 4
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 const char *name;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 struct kref kref;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
 unsigned int uevent_suppress:1;
};

extern __attribute__((format(printf, 2, 3)))
int kobject_set_name(struct kobject *kobj, const char *name, ...);
extern int kobject_set_name_vargs(struct kobject *kobj, const char *fmt,
      va_list vargs);

static inline __attribute__((no_instrument_function)) const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern __attribute__((format(printf, 3, 4)))
int kobject_add(struct kobject *kobj, struct kobject *parent,
  const char *fmt, ...);
extern __attribute__((format(printf, 4, 5)))
int kobject_init_and_add(struct kobject *kobj,
    struct kobj_type *ktype, struct kobject *parent,
    const char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * kobject_create(void);
extern struct kobject * kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int kobject_rename(struct kobject *, const char *new_name);
extern int kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 const struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
 const struct kobj_ns_type_operations *(*child_ns_type)(struct kobject *kobj);
 const void *(*namespace)(struct kobject *kobj);
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (* const filter)(struct kset *kset, struct kobject *kobj);
 const char *(* const name)(struct kset *kset, struct kobject *kobj);
 int (* const uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

extern const struct sysfs_ops kobj_sysfs_ops;

struct sock;
# 159 "/lib/modules/3.11.0-15-generic/build/include/linux/kobject.h" 3 4
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 const struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * kset_create_and_add(const char *name,
      const struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline __attribute__((no_instrument_function)) struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline __attribute__((no_instrument_function)) struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline __attribute__((no_instrument_function)) void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline __attribute__((no_instrument_function)) struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);


extern struct kobject *kernel_kobj;

extern struct kobject *mm_kobj;

extern struct kobject *hypervisor_kobj;

extern struct kobject *power_kobj;

extern struct kobject *firmware_kobj;

int kobject_uevent(struct kobject *kobj, enum kobject_action action);
int kobject_uevent_env(struct kobject *kobj, enum kobject_action action,
   char *envp[]);

__attribute__((format(printf, 2, 3)))
int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...);

int kobject_action_type(const char *buf, size_t count,
   enum kobject_action *type);
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/klist.h" 1 3 4
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/klist.h" 3 4
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
} __attribute__ ((aligned (sizeof(void *))));
# 36 "/lib/modules/3.11.0-15-generic/build/include/linux/klist.h" 3 4
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 void *n_klist;
 struct list_head n_node;
 struct kref n_ref;
};

extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);

extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);

extern int klist_node_attached(struct klist_node *n);


struct klist_iter {
 struct klist *i_klist;
 struct klist_node *i_cur;
};


extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
     struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/pinctrl/devinfo.h" 1 3 4
# 43 "/lib/modules/3.11.0-15-generic/build/include/linux/pinctrl/devinfo.h" 3 4
static inline __attribute__((no_instrument_function)) int pinctrl_bind_pins(struct device *dev)
{
 return 0;
}
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 1 3 4
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 1 3 4
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 1 3 4
# 56 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/timex.h" 1 3 4
# 64 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/timex.h" 3 4
struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};
# 57 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 2 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/param.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/param.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/param.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/param.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/param.h" 2 3 4
# 64 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/timex.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/tsc.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/tsc.h" 3 4
typedef unsigned long long cycles_t;

extern unsigned int cpu_khz;
extern unsigned int tsc_khz;

extern void disable_TSC(void);

static inline __attribute__((no_instrument_function)) cycles_t get_cycles(void)
{
 unsigned long long ret = 0;





 (ret = paravirt_read_tsc());

 return ret;
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) cycles_t vget_cycles(void)
{
# 45 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/tsc.h" 3 4
 return (cycles_t)__native_read_tsc();
}

extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern int check_tsc_unstable(void);
extern unsigned long native_calibrate_tsc(void);

extern int tsc_clocksource_reliable;





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);

extern int notsc_setup(char *);
extern void tsc_save_sched_clock_state(void);
extern void tsc_restore_sched_clock_state(void);
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/timex.h" 2 3 4
# 66 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 2 3 4
# 125 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 3 4
extern unsigned long tick_usec;
extern unsigned long tick_nsec;
# 140 "/lib/modules/3.11.0-15-generic/build/include/linux/timex.h" 3 4
extern int do_adjtimex(struct timex *);
extern void hardpps(const struct timespec *, const struct timespec *);

int read_current_timer(unsigned long *timer_val);
void ntp_notify_cmos_timer(void);
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 2 3 4
# 57 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 3 4
extern int register_refined_jiffies(long clock_tick_rate);
# 76 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 3 4
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long volatile __attribute__((section(".data"))) jiffies;




static inline __attribute__((no_instrument_function)) u64 get_jiffies_64(void)
{
 return (u64)jiffies;
}
# 182 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 3 4
extern unsigned long preset_lpj;
# 295 "/lib/modules/3.11.0-15-generic/build/include/linux/jiffies.h" 3 4
extern unsigned int jiffies_to_msecs(const unsigned long j);
extern unsigned int jiffies_to_usecs(const unsigned long j);
extern unsigned long msecs_to_jiffies(const unsigned int m);
extern unsigned long usecs_to_jiffies(const unsigned int u);
extern unsigned long timespec_to_jiffies(const struct timespec *value);
extern void jiffies_to_timespec(const unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies(const struct timeval *value);
extern void jiffies_to_timeval(const unsigned long jiffies,
          struct timeval *value);

extern clock_t jiffies_to_clock_t(unsigned long x);
static inline __attribute__((no_instrument_function)) clock_t jiffies_delta_to_clock_t(long delta)
{
 return jiffies_to_clock_t(({ typeof(0L) _max1 = (0L); typeof(delta) _max2 = (delta); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; }));
}

extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
extern u64 nsecs_to_jiffies64(u64 n);
extern unsigned long nsecs_to_jiffies(u64 n);
# 26 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 2 3 4
# 46 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
union ktime {
 s64 tv64;
# 57 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
};

typedef union ktime ktime_t;
# 74 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
static inline __attribute__((no_instrument_function)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))
  return (ktime_t){ .tv64 = ((s64)~((u64)1 << 63)) };

 return (ktime_t) { .tv64 = (s64)secs * 1000000000L + (s64)nsecs };
}
# 106 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
static inline __attribute__((no_instrument_function)) ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline __attribute__((no_instrument_function)) ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
# 281 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
static inline __attribute__((no_instrument_function)) int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}
# 296 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
static inline __attribute__((no_instrument_function)) int ktime_compare(const ktime_t cmp1, const ktime_t cmp2)
{
 if (cmp1.tv64 < cmp2.tv64)
  return -1;
 if (cmp1.tv64 > cmp2.tv64)
  return 1;
 return 0;
}

static inline __attribute__((no_instrument_function)) s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline __attribute__((no_instrument_function)) s64 ktime_to_ms(const ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000L + tv.tv_usec / 1000L;
}

static inline __attribute__((no_instrument_function)) s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(({ (ktime_t){ .tv64 = (later).tv64 - (earlier).tv64 }; }));
}

static inline __attribute__((no_instrument_function)) ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 + (usec * 1000L) }; });
}

static inline __attribute__((no_instrument_function)) ktime_t ktime_add_ms(const ktime_t kt, const u64 msec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 + (msec * 1000000L) }; });
}

static inline __attribute__((no_instrument_function)) ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ({ (ktime_t){ .tv64 = (kt).tv64 - (usec * 1000L) }; });
}

extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
# 347 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
static inline __attribute__((no_instrument_function)) bool ktime_to_timespec_cond(const ktime_t kt,
             struct timespec *ts)
{
 if (kt.tv64) {
  *ts = ns_to_timespec((kt).tv64);
  return true;
 } else {
  return false;
 }
}
# 368 "/lib/modules/3.11.0-15-generic/build/include/linux/ktime.h" 3 4
extern void ktime_get_ts(struct timespec *ts);




static inline __attribute__((no_instrument_function)) ktime_t ns_to_ktime(u64 ns)
{
 static const ktime_t ktime_zero = { .tv64 = 0 };

 return ({ (ktime_t){ .tv64 = (ktime_zero).tv64 + (ns) }; });
}

static inline __attribute__((no_instrument_function)) ktime_t ms_to_ktime(u64 ms)
{
 static const ktime_t ktime_zero = { .tv64 = 0 };

 return ktime_add_ms(ktime_zero, ms);
}
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/debugobjects.h" 1 3 4






enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
# 27 "/lib/modules/3.11.0-15-generic/build/include/linux/debugobjects.h" 3 4
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 unsigned int astate;
 void *object;
 struct debug_obj_descr *descr;
};
# 52 "/lib/modules/3.11.0-15-generic/build/include/linux/debugobjects.h" 3 4
struct debug_obj_descr {
 const char *name;
 void *(*debug_hint) (void *addr);
 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
 int (*fixup_assert_init)(void *addr, enum debug_obj_state state);
};
# 84 "/lib/modules/3.11.0-15-generic/build/include/linux/debugobjects.h" 3 4
static inline __attribute__((no_instrument_function)) void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((no_instrument_function)) void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((no_instrument_function)) void
debug_object_activate (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((no_instrument_function)) void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((no_instrument_function)) void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((no_instrument_function)) void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((no_instrument_function)) void
debug_object_assert_init(void *addr, struct debug_obj_descr *descr) { }

static inline __attribute__((no_instrument_function)) void debug_objects_early_init(void) { }
static inline __attribute__((no_instrument_function)) void debug_objects_mem_init(void) { }





static inline __attribute__((no_instrument_function)) void
debug_check_no_obj_freed(const void *address, unsigned long size) { }
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 2 3 4


struct tvec_base;

struct timer_list {




 struct list_head entry;
 unsigned long expires;
 struct tvec_base *base;

 void (*function)(unsigned long);
 unsigned long data;

 int slack;


 int start_pid;
 void *start_site;
 char start_comm[16];




};

extern struct tvec_base boot_tvec_bases;
# 94 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 3 4
void init_timer_key(struct timer_list *timer, unsigned int flags,
      const char *name, struct lock_class_key *key);







static inline __attribute__((no_instrument_function)) void destroy_timer_on_stack(struct timer_list *timer) { }
static inline __attribute__((no_instrument_function)) void init_timer_on_stack_key(struct timer_list *timer,
        unsigned int flags, const char *name,
        struct lock_class_key *key)
{
 init_timer_key(timer, flags, name, key);
}
# 169 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 3 4
static inline __attribute__((no_instrument_function)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pending(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pinned(struct timer_list *timer, unsigned long expires);

extern void set_timer_slack(struct timer_list *time, int slack_hz);
# 195 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 3 4
extern unsigned long get_next_timer_interrupt(unsigned long now);






extern int timer_stats_active;



extern void init_timer_stats(void);

extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

extern void __timer_stats_timer_set_start_info(struct timer_list *timer,
            void *addr);

static inline __attribute__((no_instrument_function)) void timer_stats_timer_set_start_info(struct timer_list *timer)
{
 if (__builtin_expect(!!(!timer_stats_active), 1))
  return;
 __timer_stats_timer_set_start_info(timer, __builtin_return_address(0));
}

static inline __attribute__((no_instrument_function)) void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
 timer->start_site = ((void *)0);
}
# 240 "/lib/modules/3.11.0-15-generic/build/include/linux/timer.h" 3 4
extern void add_timer(struct timer_list *timer);

extern int try_to_del_timer_sync(struct timer_list *timer);


  extern int del_timer_sync(struct timer_list *timer);






extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);

unsigned long __round_jiffies_up(unsigned long j, int cpu);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu);
unsigned long round_jiffies_up(unsigned long j);
unsigned long round_jiffies_up_relative(unsigned long j);
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 2 3 4







struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);
void delayed_work_timer_fn(unsigned long __data);







enum {
 WORK_STRUCT_PENDING_BIT = 0,
 WORK_STRUCT_DELAYED_BIT = 1,
 WORK_STRUCT_PWQ_BIT = 2,
 WORK_STRUCT_LINKED_BIT = 3,




 WORK_STRUCT_COLOR_SHIFT = 4,


 WORK_STRUCT_COLOR_BITS = 4,

 WORK_STRUCT_PENDING = 1 << WORK_STRUCT_PENDING_BIT,
 WORK_STRUCT_DELAYED = 1 << WORK_STRUCT_DELAYED_BIT,
 WORK_STRUCT_PWQ = 1 << WORK_STRUCT_PWQ_BIT,
 WORK_STRUCT_LINKED = 1 << WORK_STRUCT_LINKED_BIT,



 WORK_STRUCT_STATIC = 0,






 WORK_NR_COLORS = (1 << WORK_STRUCT_COLOR_BITS) - 1,
 WORK_NO_COLOR = WORK_NR_COLORS,


 WORK_CPU_UNBOUND = 256,
 WORK_CPU_END = 256 + 1,






 WORK_STRUCT_FLAG_BITS = WORK_STRUCT_COLOR_SHIFT +
      WORK_STRUCT_COLOR_BITS,


 WORK_OFFQ_FLAG_BASE = WORK_STRUCT_COLOR_SHIFT,

 WORK_OFFQ_CANCELING = (1 << WORK_OFFQ_FLAG_BASE),






 WORK_OFFQ_FLAG_BITS = 1,
 WORK_OFFQ_POOL_SHIFT = WORK_OFFQ_FLAG_BASE + WORK_OFFQ_FLAG_BITS,
 WORK_OFFQ_LEFT = 64 - WORK_OFFQ_POOL_SHIFT,
 WORK_OFFQ_POOL_BITS = WORK_OFFQ_LEFT <= 31 ? WORK_OFFQ_LEFT : 31,
 WORK_OFFQ_POOL_NONE = (1LU << WORK_OFFQ_POOL_BITS) - 1,


 WORK_STRUCT_FLAG_MASK = (1UL << WORK_STRUCT_FLAG_BITS) - 1,
 WORK_STRUCT_WQ_DATA_MASK = ~WORK_STRUCT_FLAG_MASK,
 WORK_STRUCT_NO_POOL = (unsigned long)WORK_OFFQ_POOL_NONE << WORK_OFFQ_POOL_SHIFT,


 WORK_BUSY_PENDING = 1 << 0,
 WORK_BUSY_RUNNING = 1 << 1,


 WORKER_DESC_LEN = 24,
};

struct work_struct {
 atomic_long_t data;
 struct list_head entry;
 work_func_t func;



};





struct delayed_work {
 struct work_struct work;
 struct timer_list timer;


 struct workqueue_struct *wq;
 int cpu;
};
# 130 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
struct workqueue_attrs {
 int nice;
 cpumask_var_t cpumask;
 bool no_numa;
};

static inline __attribute__((no_instrument_function)) struct delayed_work *to_delayed_work(struct work_struct *work)
{
 return ({ const typeof( ((struct delayed_work *)0)->work ) *__mptr = (work); (struct delayed_work *)( (char *)__mptr - __builtin_offsetof(struct delayed_work,work) );});
}

struct execute_work {
 struct work_struct work;
};
# 199 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) void __init_work(struct work_struct *work, int onstack) { }
static inline __attribute__((no_instrument_function)) void destroy_work_on_stack(struct work_struct *work) { }
static inline __attribute__((no_instrument_function)) unsigned int work_static(struct work_struct *work) { return 0; }
# 297 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
enum {
 WQ_NON_REENTRANT = 1 << 0,
 WQ_UNBOUND = 1 << 1,
 WQ_FREEZABLE = 1 << 2,
 WQ_MEM_RECLAIM = 1 << 3,
 WQ_HIGHPRI = 1 << 4,
 WQ_CPU_INTENSIVE = 1 << 5,
 WQ_SYSFS = 1 << 6,
# 331 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
 WQ_POWER_EFFICIENT = 1 << 7,

 __WQ_DRAINING = 1 << 16,
 __WQ_ORDERED = 1 << 17,

 WQ_MAX_ACTIVE = 512,
 WQ_MAX_UNBOUND_PER_CPU = 4,
 WQ_DFL_ACTIVE = WQ_MAX_ACTIVE / 2,
};
# 370 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
extern struct workqueue_struct *system_wq;
extern struct workqueue_struct *system_long_wq;
extern struct workqueue_struct *system_unbound_wq;
extern struct workqueue_struct *system_freezable_wq;
extern struct workqueue_struct *system_power_efficient_wq;
extern struct workqueue_struct *system_freezable_power_efficient_wq;

static inline __attribute__((no_instrument_function)) struct workqueue_struct * __system_nrt_wq(void)
{
 return system_wq;
}

static inline __attribute__((no_instrument_function)) struct workqueue_struct * __system_nrt_freezable_wq(void)
{
 return system_freezable_wq;
}





extern struct workqueue_struct *
__alloc_workqueue_key(const char *fmt, unsigned int flags, int max_active,
 struct lock_class_key *key, const char *lock_name, ...) __attribute__((format(printf, 1, 6)));
# 455 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
extern void destroy_workqueue(struct workqueue_struct *wq);

struct workqueue_attrs *alloc_workqueue_attrs(gfp_t gfp_mask);
void free_workqueue_attrs(struct workqueue_attrs *attrs);
int apply_workqueue_attrs(struct workqueue_struct *wq,
     const struct workqueue_attrs *attrs);

extern bool queue_work_on(int cpu, struct workqueue_struct *wq,
   struct work_struct *work);
extern bool queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern bool mod_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *dwork, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void drain_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_on_each_cpu(work_func_t func);

int execute_in_process_context(work_func_t fn, struct execute_work *);

extern bool flush_work(struct work_struct *work);
extern bool cancel_work_sync(struct work_struct *work);

extern bool flush_delayed_work(struct delayed_work *dwork);
extern bool cancel_delayed_work(struct delayed_work *dwork);
extern bool cancel_delayed_work_sync(struct delayed_work *dwork);

extern void workqueue_set_max_active(struct workqueue_struct *wq,
         int max_active);
extern bool current_is_workqueue_rescuer(void);
extern bool workqueue_congested(int cpu, struct workqueue_struct *wq);
extern unsigned int work_busy(struct work_struct *work);
extern __attribute__((format(printf, 1, 2))) void set_worker_desc(const char *fmt, ...);
extern void print_worker_info(const char *log_lvl, struct task_struct *task);
# 502 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool queue_work(struct workqueue_struct *wq,
         struct work_struct *work)
{
 return queue_work_on(WORK_CPU_UNBOUND, wq, work);
}
# 516 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool queue_delayed_work(struct workqueue_struct *wq,
          struct delayed_work *dwork,
          unsigned long delay)
{
 return queue_delayed_work_on(WORK_CPU_UNBOUND, wq, dwork, delay);
}
# 531 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool mod_delayed_work(struct workqueue_struct *wq,
        struct delayed_work *dwork,
        unsigned long delay)
{
 return mod_delayed_work_on(WORK_CPU_UNBOUND, wq, dwork, delay);
}
# 545 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool schedule_work_on(int cpu, struct work_struct *work)
{
 return queue_work_on(cpu, system_wq, work);
}
# 561 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool schedule_work(struct work_struct *work)
{
 return queue_work(system_wq, work);
}
# 575 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool schedule_delayed_work_on(int cpu, struct delayed_work *dwork,
         unsigned long delay)
{
 return queue_delayed_work_on(cpu, system_wq, dwork, delay);
}
# 589 "/lib/modules/3.11.0-15-generic/build/include/linux/workqueue.h" 3 4
static inline __attribute__((no_instrument_function)) bool schedule_delayed_work(struct delayed_work *dwork,
      unsigned long delay)
{
 return queue_delayed_work(system_wq, dwork, delay);
}




static inline __attribute__((no_instrument_function)) bool keventd_up(void)
{
 return system_wq != ((void *)0);
}






static inline __attribute__((no_instrument_function)) bool __cancel_delayed_work(struct delayed_work *work)
{
 bool ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(WORK_STRUCT_PENDING_BIT, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}


static inline __attribute__((no_instrument_function)) bool flush_work_sync(struct work_struct *work)
{
 return flush_work(work);
}


static inline __attribute__((no_instrument_function)) bool flush_delayed_work_sync(struct delayed_work *dwork)
{
 return flush_delayed_work(dwork);
}







long work_on_cpu(int cpu, long (*fn)(void *), void *arg);



extern void freeze_workqueues_begin(void);
extern bool freeze_workqueues_busy(void);
extern void thaw_workqueues(void);



int workqueue_sysfs_register(struct workqueue_struct *wq);
# 26 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/completion.h" 1 3 4
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/completion.h" 3 4
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 73 "/lib/modules/3.11.0-15-generic/build/include/linux/completion.h" 3 4
static inline __attribute__((no_instrument_function)) void init_completion(struct completion *x)
{
 x->done = 0;
 do { static struct lock_class_key __key; __init_waitqueue_head((&x->wait), "&x->wait", &__key); } while (0);
}

extern void wait_for_completion(struct completion *);
extern void wait_for_completion_io(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_io_timeout(struct completion *x,
          unsigned long timeout);
extern long wait_for_completion_interruptible_timeout(
 struct completion *x, unsigned long timeout);
extern long wait_for_completion_killable_timeout(
 struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 2 3 4




extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);

struct device;

extern void pm_vt_switch_required(struct device *dev, bool required);
extern void pm_vt_switch_unregister(struct device *dev);
# 54 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
struct device;


extern const char power_group_name[];




typedef struct pm_message {
 int event;
} pm_message_t;
# 276 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
struct dev_pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
 int (*suspend_late)(struct device *dev);
 int (*resume_early)(struct device *dev);
 int (*freeze_late)(struct device *dev);
 int (*thaw_early)(struct device *dev);
 int (*poweroff_late)(struct device *dev);
 int (*restore_early)(struct device *dev);
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
 int (*runtime_suspend)(struct device *dev);
 int (*runtime_resume)(struct device *dev);
 int (*runtime_idle)(struct device *dev);
};
# 470 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
enum rpm_status {
 RPM_ACTIVE = 0,
 RPM_RESUMING,
 RPM_SUSPENDED,
 RPM_SUSPENDING,
};
# 492 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
enum rpm_request {
 RPM_REQ_NONE = 0,
 RPM_REQ_IDLE,
 RPM_REQ_SUSPEND,
 RPM_REQ_AUTOSUSPEND,
 RPM_REQ_RESUME,
};

struct wakeup_source;

struct pm_domain_data {
 struct list_head list_node;
 struct device *dev;
};

struct pm_subsys_data {
 spinlock_t lock;
 unsigned int refcount;

 struct list_head clock_list;




};

struct dev_pm_info {
 pm_message_t power_state;
 unsigned int can_wakeup:1;
 unsigned int async_suspend:1;
 bool is_prepared:1;
 bool is_suspended:1;
 bool ignore_children:1;
 bool early_init:1;
 spinlock_t lock;

 struct list_head entry;
 struct completion completion;
 struct wakeup_source *wakeup;
 bool wakeup_path:1;
 bool syscore:1;




 struct timer_list suspend_timer;
 unsigned long timer_expires;
 struct work_struct work;
 wait_queue_head_t wait_queue;
 atomic_t usage_count;
 atomic_t child_count;
 unsigned int disable_depth:3;
 unsigned int idle_notification:1;
 unsigned int request_pending:1;
 unsigned int deferred_resume:1;
 unsigned int run_wake:1;
 unsigned int runtime_auto:1;
 unsigned int no_callbacks:1;
 unsigned int irq_safe:1;
 unsigned int use_autosuspend:1;
 unsigned int timer_autosuspends:1;
 unsigned int memalloc_noio:1;
 enum rpm_request request;
 enum rpm_status runtime_status;
 int runtime_error;
 int autosuspend_delay;
 unsigned long last_busy;
 unsigned long active_jiffies;
 unsigned long suspended_jiffies;
 unsigned long accounting_timestamp;

 struct pm_subsys_data *subsys_data;
 struct dev_pm_qos *qos;
};

extern void update_pm_runtime_accounting(struct device *dev);
extern int dev_pm_get_subsys_data(struct device *dev);
extern int dev_pm_put_subsys_data(struct device *dev);






struct dev_pm_domain {
 struct dev_pm_ops ops;
};
# 635 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
extern void device_pm_lock(void);
extern void dpm_resume_start(pm_message_t state);
extern void dpm_resume_end(pm_message_t state);
extern void dpm_resume(pm_message_t state);
extern void dpm_complete(pm_message_t state);

extern void device_pm_unlock(void);
extern int dpm_suspend_end(pm_message_t state);
extern int dpm_suspend_start(pm_message_t state);
extern int dpm_suspend(pm_message_t state);
extern int dpm_prepare(pm_message_t state);

extern void __suspend_report_result(const char *function, void *fn, int ret);






extern int device_pm_wait_for_dev(struct device *sub, struct device *dev);
extern void dpm_for_each_dev(void *data, void (*fn)(struct device *, void *));

extern int pm_generic_prepare(struct device *dev);
extern int pm_generic_suspend_late(struct device *dev);
extern int pm_generic_suspend_noirq(struct device *dev);
extern int pm_generic_suspend(struct device *dev);
extern int pm_generic_resume_early(struct device *dev);
extern int pm_generic_resume_noirq(struct device *dev);
extern int pm_generic_resume(struct device *dev);
extern int pm_generic_freeze_noirq(struct device *dev);
extern int pm_generic_freeze_late(struct device *dev);
extern int pm_generic_freeze(struct device *dev);
extern int pm_generic_thaw_noirq(struct device *dev);
extern int pm_generic_thaw_early(struct device *dev);
extern int pm_generic_thaw(struct device *dev);
extern int pm_generic_restore_noirq(struct device *dev);
extern int pm_generic_restore_early(struct device *dev);
extern int pm_generic_restore(struct device *dev);
extern int pm_generic_poweroff_noirq(struct device *dev);
extern int pm_generic_poweroff_late(struct device *dev);
extern int pm_generic_poweroff(struct device *dev);
extern void pm_generic_complete(struct device *dev);
# 710 "/lib/modules/3.11.0-15-generic/build/include/linux/pm.h" 3 4
enum dpm_order {
 DPM_ORDER_NONE,
 DPM_ORDER_DEV_AFTER_PARENT,
 DPM_ORDER_PARENT_BEFORE_DEV,
 DPM_ORDER_DEV_LAST,
};
# 26 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/ratelimit.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/ratelimit.h" 3 4
struct ratelimit_state {
 raw_spinlock_t lock;

 int interval;
 int burst;
 int printed;
 int missed;
 unsigned long begin;
};
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/ratelimit.h" 3 4
static inline __attribute__((no_instrument_function)) void ratelimit_state_init(struct ratelimit_state *rs,
     int interval, int burst)
{
 do { *(&rs->lock) = (raw_spinlock_t) { .raw_lock = { { 0 } }, }; } while (0);
 rs->interval = interval;
 rs->burst = burst;
 rs->printed = 0;
 rs->missed = 0;
 rs->begin = 0;
}

extern struct ratelimit_state printk_ratelimit_state;

extern int ___ratelimit(struct ratelimit_state *rs, const char *func);
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/device.h" 1 3 4



struct dev_archdata {

 struct dma_map_ops *dma_ops;


 void *iommu;

};

struct pdev_archdata {
};
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4

struct device;
struct device_private;
struct device_driver;
struct driver_private;
struct module;
struct class;
struct subsys_private;
struct bus_type;
struct device_node;
struct iommu_ops;
struct iommu_group;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, const char *buf, size_t count);
};
# 56 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern int bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);
# 102 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct bus_type {
 const char *name;
 const char *dev_name;
 struct device *dev_root;
 struct bus_attribute *bus_attrs;
 struct device_attribute *dev_attrs;
 struct driver_attribute *drv_attrs;

 int (*match)(struct device *dev, struct device_driver *drv);
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 int (*probe)(struct device *dev);
 int (*remove)(struct device *dev);
 void (*shutdown)(struct device *dev);

 int (*online)(struct device *dev);
 int (*offline)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 const struct dev_pm_ops *pm;

 struct iommu_ops *iommu_ops;

 struct subsys_private *p;
 struct lock_class_key lock_key;
};

extern int bus_register(struct bus_type *bus);

extern void bus_unregister(struct bus_type *bus);

extern int bus_rescan_devices(struct bus_type *bus);


struct subsys_dev_iter {
 struct klist_iter ki;
 const struct device_type *type;
};
void subsys_dev_iter_init(struct subsys_dev_iter *iter,
    struct bus_type *subsys,
    struct device *start,
    const struct device_type *type);
struct device *subsys_dev_iter_next(struct subsys_dev_iter *iter);
void subsys_dev_iter_exit(struct subsys_dev_iter *iter);

int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
           struct device *start,
           const char *name);
struct device *subsys_find_device_by_id(struct bus_type *bus, unsigned int id,
     struct device *hint);
int bus_for_each_drv(struct bus_type *bus, struct device_driver *start,
       void *data, int (*fn)(struct device_driver *, void *));
void bus_sort_breadthfirst(struct bus_type *bus,
      int (*compare)(const struct device *a,
       const struct device *b));






struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
# 190 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);
# 225 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct device_driver {
 const char *name;
 struct bus_type *bus;

 struct module *owner;
 const char *mod_name;

 bool suppress_bind_attrs;

 const struct of_device_id *of_match_table;
 const struct acpi_device_id *acpi_match_table;

 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 const struct attribute_group **groups;

 const struct dev_pm_ops *pm;

 struct driver_private *p;
};


extern int driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *driver_find(const char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);
extern void wait_for_device_probe(void);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, const char *buf,
    size_t count);
};
# 275 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern int driver_create_file(struct device_driver *driver,
     const struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          const struct driver_attribute *attr);

extern int driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));
# 302 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct subsys_interface {
 const char *name;
 struct bus_type *subsys;
 struct list_head node;
 int (*add_dev)(struct device *dev, struct subsys_interface *sif);
 int (*remove_dev)(struct device *dev, struct subsys_interface *sif);
};

int subsys_interface_register(struct subsys_interface *sif);
void subsys_interface_unregister(struct subsys_interface *sif);

int subsys_system_register(struct bus_type *subsys,
      const struct attribute_group **groups);
int subsys_virtual_register(struct bus_type *subsys,
       const struct attribute_group **groups);
# 348 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct class {
 const char *name;
 struct module *owner;

 struct class_attribute *class_attrs;
 struct device_attribute *dev_attrs;
 const struct attribute_group **dev_groups;
 struct bin_attribute *dev_bin_attrs;
 struct kobject *dev_kobj;

 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, umode_t *mode);

 void (*class_release)(struct class *class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 const struct kobj_ns_type_operations *ns_type;
 const void *(*namespace)(struct device *dev);

 const struct dev_pm_ops *pm;

 struct subsys_private *p;
};

struct class_dev_iter {
 struct klist_iter ki;
 const struct device_type *type;
};

extern struct kobject *sysfs_dev_block_kobj;
extern struct kobject *sysfs_dev_char_kobj;
extern int __class_register(struct class *class,
      struct lock_class_key *key);
extern void class_unregister(struct class *class);
# 394 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct class_compat;
struct class_compat *class_compat_register(const char *name);
void class_compat_unregister(struct class_compat *cls);
int class_compat_create_link(struct class_compat *cls, struct device *dev,
        struct device *device_link);
void class_compat_remove_link(struct class_compat *cls, struct device *dev,
         struct device *device_link);

extern void class_dev_iter_init(struct class_dev_iter *iter,
    struct class *class,
    struct device *start,
    const struct device_type *type);
extern struct device *class_dev_iter_next(struct class_dev_iter *iter);
extern void class_dev_iter_exit(struct class_dev_iter *iter);

extern int class_for_each_device(struct class *class, struct device *start,
     void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class,
     struct device *start, const void *data,
     int (*match)(struct device *, const void *));

struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *class, struct class_attribute *attr,
   char *buf);
 ssize_t (*store)(struct class *class, struct class_attribute *attr,
   const char *buf, size_t count);
 const void *(*namespace)(struct class *class,
     const struct class_attribute *attr);
};
# 433 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern int class_create_file(struct class *class,
       const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
         const struct class_attribute *attr);


struct class_attribute_string {
 struct class_attribute attr;
 char *str;
};
# 451 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern ssize_t show_class_attr_string(struct class *class, struct class_attribute *attr,
                        char *buf);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class * __class_create(struct module *owner,
        const char *name,
        struct lock_class_key *key);
extern void class_destroy(struct class *cls);
# 487 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct device_type {
 const char *name;
 const struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, umode_t *mode,
    kuid_t *uid, kgid_t *gid);
 void (*release)(struct device *dev);

 const struct dev_pm_ops *pm;
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};

struct dev_ext_attribute {
 struct device_attribute attr;
 void *var;
};

ssize_t device_show_ulong(struct device *dev, struct device_attribute *attr,
     char *buf);
ssize_t device_store_ulong(struct device *dev, struct device_attribute *attr,
      const char *buf, size_t count);
ssize_t device_show_int(struct device *dev, struct device_attribute *attr,
   char *buf);
ssize_t device_store_int(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
ssize_t device_show_bool(struct device *dev, struct device_attribute *attr,
   char *buf);
ssize_t device_store_bool(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
# 544 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern int device_create_file(struct device *device,
         const struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          const struct device_attribute *attr);
extern int device_create_bin_file(struct device *dev,
     const struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       const struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);







extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);

extern void devres_for_each_res(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data,
    void (*fn)(struct device *, void *, void *),
    void *data);
extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
   dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
      dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);
extern int devres_release(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);


extern void * devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);

void *devm_ioremap_resource(struct device *dev, struct resource *res);
void *devm_request_and_ioremap(struct device *dev,
   struct resource *res);


int devm_add_action(struct device *dev, void (*action)(void *), void *data);
void devm_remove_action(struct device *dev, void (*action)(void *), void *data);

struct device_dma_parameters {




 unsigned int max_segment_size;
 unsigned long segment_boundary_mask;
};

struct acpi_dev_node {

 void *handle;

};
# 689 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
struct device {
 struct device *parent;

 struct device_private *p;

 struct kobject kobj;
 const char *init_name;
 const struct device_type *type;

 struct mutex mutex;



 struct bus_type *bus;
 struct device_driver *driver;

 void *platform_data;

 struct dev_pm_info power;
 struct dev_pm_domain *pm_domain;






 int numa_node;

 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct device_dma_parameters *dma_parms;

 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;






 struct dev_archdata archdata;

 struct device_node *of_node;
 struct acpi_dev_node acpi_node;

 dev_t devt;
 u32 id;

 spinlock_t devres_lock;
 struct list_head devres_head;

 struct klist_node knode_class;
 struct class *class;
 const struct attribute_group **groups;

 void (*release)(struct device *dev);
 struct iommu_group *iommu_group;

 bool offline_disabled:1;
 bool offline:1;
};

static inline __attribute__((no_instrument_function)) struct device *kobj_to_dev(struct kobject *kobj)
{
 return ({ const typeof( ((struct device *)0)->kobj ) *__mptr = (kobj); (struct device *)( (char *)__mptr - __builtin_offsetof(struct device,kobj) );});
}
# 771 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/pm_wakeup.h" 1 3 4
# 46 "/lib/modules/3.11.0-15-generic/build/include/linux/pm_wakeup.h" 3 4
struct wakeup_source {
 const char *name;
 struct list_head entry;
 spinlock_t lock;
 struct timer_list timer;
 unsigned long timer_expires;
 ktime_t total_time;
 ktime_t max_time;
 ktime_t last_time;
 ktime_t start_prevent_time;
 ktime_t prevent_sleep_time;
 unsigned long event_count;
 unsigned long active_count;
 unsigned long relax_count;
 unsigned long expire_count;
 unsigned long wakeup_count;
 bool active:1;
 bool autosleep_enabled:1;
};







static inline __attribute__((no_instrument_function)) bool device_can_wakeup(struct device *dev)
{
 return dev->power.can_wakeup;
}

static inline __attribute__((no_instrument_function)) bool device_may_wakeup(struct device *dev)
{
 return dev->power.can_wakeup && !!dev->power.wakeup;
}


extern void wakeup_source_prepare(struct wakeup_source *ws, const char *name);
extern struct wakeup_source *wakeup_source_create(const char *name);
extern void wakeup_source_drop(struct wakeup_source *ws);
extern void wakeup_source_destroy(struct wakeup_source *ws);
extern void wakeup_source_add(struct wakeup_source *ws);
extern void wakeup_source_remove(struct wakeup_source *ws);
extern struct wakeup_source *wakeup_source_register(const char *name);
extern void wakeup_source_unregister(struct wakeup_source *ws);
extern int device_wakeup_enable(struct device *dev);
extern int device_wakeup_disable(struct device *dev);
extern void device_set_wakeup_capable(struct device *dev, bool capable);
extern int device_init_wakeup(struct device *dev, bool val);
extern int device_set_wakeup_enable(struct device *dev, bool enable);
extern void __pm_stay_awake(struct wakeup_source *ws);
extern void pm_stay_awake(struct device *dev);
extern void __pm_relax(struct wakeup_source *ws);
extern void pm_relax(struct device *dev);
extern void __pm_wakeup_event(struct wakeup_source *ws, unsigned int msec);
extern void pm_wakeup_event(struct device *dev, unsigned int msec);
# 182 "/lib/modules/3.11.0-15-generic/build/include/linux/pm_wakeup.h" 3 4
static inline __attribute__((no_instrument_function)) void wakeup_source_init(struct wakeup_source *ws,
          const char *name)
{
 wakeup_source_prepare(ws, name);
 wakeup_source_add(ws);
}

static inline __attribute__((no_instrument_function)) void wakeup_source_trash(struct wakeup_source *ws)
{
 wakeup_source_remove(ws);
 wakeup_source_drop(ws);
}
# 772 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 2 3 4

static inline __attribute__((no_instrument_function)) const char *dev_name(const struct device *dev)
{

 if (dev->init_name)
  return dev->init_name;

 return kobject_name(&dev->kobj);
}

extern __attribute__((format(printf, 2, 3)))
int dev_set_name(struct device *dev, const char *name, ...);


static inline __attribute__((no_instrument_function)) int dev_to_node(struct device *dev)
{
 return dev->numa_node;
}
static inline __attribute__((no_instrument_function)) void set_dev_node(struct device *dev, int node)
{
 dev->numa_node = node;
}
# 804 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
static inline __attribute__((no_instrument_function)) struct pm_subsys_data *dev_to_psd(struct device *dev)
{
 return dev ? dev->power.subsys_data : ((void *)0);
}

static inline __attribute__((no_instrument_function)) unsigned int dev_get_uevent_suppress(const struct device *dev)
{
 return dev->kobj.uevent_suppress;
}

static inline __attribute__((no_instrument_function)) void dev_set_uevent_suppress(struct device *dev, int val)
{
 dev->kobj.uevent_suppress = val;
}

static inline __attribute__((no_instrument_function)) int device_is_registered(struct device *dev)
{
 return dev->kobj.state_in_sysfs;
}

static inline __attribute__((no_instrument_function)) void device_enable_async_suspend(struct device *dev)
{
 if (!dev->power.is_prepared)
  dev->power.async_suspend = true;
}

static inline __attribute__((no_instrument_function)) void device_disable_async_suspend(struct device *dev)
{
 if (!dev->power.is_prepared)
  dev->power.async_suspend = false;
}

static inline __attribute__((no_instrument_function)) bool device_async_suspend_enabled(struct device *dev)
{
 return !!dev->power.async_suspend;
}

static inline __attribute__((no_instrument_function)) void pm_suspend_ignore_children(struct device *dev, bool enable)
{
 dev->power.ignore_children = enable;
}

static inline __attribute__((no_instrument_function)) void dev_pm_syscore_device(struct device *dev, bool val)
{

 dev->power.syscore = val;

}

static inline __attribute__((no_instrument_function)) void device_lock(struct device *dev)
{
 mutex_lock(&dev->mutex);
}

static inline __attribute__((no_instrument_function)) int device_trylock(struct device *dev)
{
 return mutex_trylock(&dev->mutex);
}

static inline __attribute__((no_instrument_function)) void device_unlock(struct device *dev)
{
 mutex_unlock(&dev->mutex);
}

void driver_init(void);




extern int device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, const char *new_name);
extern int device_move(struct device *dev, struct device *new_parent,
         enum dpm_order dpm_order);
extern const char *device_get_devnode(struct device *dev,
          umode_t *mode, kuid_t *uid, kgid_t *gid,
          const char **tmp);
extern void *dev_get_drvdata(const struct device *dev);
extern int dev_set_drvdata(struct device *dev, void *data);

static inline __attribute__((no_instrument_function)) bool device_supports_offline(struct device *dev)
{
 return dev->bus && dev->bus->offline && dev->bus->online;
}

extern void lock_device_hotplug(void);
extern void unlock_device_hotplug(void);
extern int device_offline(struct device *dev);
extern int device_online(struct device *dev);



extern struct device *__root_device_register(const char *name,
          struct module *owner);
# 913 "/lib/modules/3.11.0-15-generic/build/include/linux/device.h" 3 4
extern void root_device_unregister(struct device *root);

static inline __attribute__((no_instrument_function)) void *dev_get_platdata(const struct device *dev)
{
 return dev->platform_data;
}





extern int device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int device_attach(struct device *dev);
extern int driver_attach(struct device_driver *drv);
extern int device_reprobe(struct device *dev);




extern struct device *device_create_vargs(struct class *cls,
       struct device *parent,
       dev_t devt,
       void *drvdata,
       const char *fmt,
       va_list vargs);
extern __attribute__((format(printf, 5, 6)))
struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, void *drvdata,
        const char *fmt, ...);
extern __attribute__((format(printf, 6, 7)))
struct device *device_create_with_groups(struct class *cls,
        struct device *parent, dev_t devt, void *drvdata,
        const struct attribute_group **groups,
        const char *fmt, ...);
extern void device_destroy(struct class *cls, dev_t devt);







extern int (*platform_notify)(struct device *dev);

extern int (*platform_notify_remove)(struct device *dev);






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);


extern int devtmpfs_create_node(struct device *dev);
extern int devtmpfs_delete_node(struct device *dev);
extern int devtmpfs_mount(const char *mntdir);







extern void device_shutdown(void);


extern const char *dev_driver_string(const struct device *dev);




extern __attribute__((format(printf, 3, 0)))
int dev_vprintk_emit(int level, const struct device *dev,
       const char *fmt, va_list args);
extern __attribute__((format(printf, 3, 4)))
int dev_printk_emit(int level, const struct device *dev, const char *fmt, ...);

extern __attribute__((format(printf, 3, 4)))
int dev_printk(const char *level, const struct device *dev,
        const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_emerg(const struct device *dev, const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_alert(const struct device *dev, const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_crit(const struct device *dev, const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_err(const struct device *dev, const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_warn(const struct device *dev, const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_notice(const struct device *dev, const char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int _dev_info(const struct device *dev, const char *fmt, ...);
# 31 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4
# 39 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/uuid.h" 1 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/uuid.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/uuid.h" 1 3 4
# 27 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/uuid.h" 3 4
typedef struct {
 __u8 b[16];
} uuid_le;

typedef struct {
 __u8 b[16];
} uuid_be;
# 24 "/lib/modules/3.11.0-15-generic/build/include/linux/uuid.h" 2 3 4


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
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 2 3 4
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
# 101 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 146 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 302 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 352 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 376 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
struct bcma_device_id {
 __u16 manuf;
 __u16 id;
 __u8 rev;
 __u8 class;
} __attribute__((packed,aligned(2)));
# 392 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 485 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
struct platform_device_id {
 char name[20];
 kernel_ulong_t driver_data;
};
# 511 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 540 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
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
# 569 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
struct ipack_device_id {
 __u8 format;
 __u32 vendor;
 __u32 device;
};




struct mei_cl_device_id {
 char name[32];
 kernel_ulong_t driver_info;
};
# 597 "/lib/modules/3.11.0-15-generic/build/include/linux/mod_devicetable.h" 3 4
struct rio_device_id {
 __u16 did, vid;
 __u16 asm_did, asm_vid;
};
# 40 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 1 3 4
# 56 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/acenv.h" 1 3 4
# 148 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/acenv.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 1 3 4
# 58 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/ctype.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/ctype.h" 3 4
extern const unsigned char _ctype[];
# 38 "/lib/modules/3.11.0-15-generic/build/include/linux/ctype.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned char __tolower(unsigned char c)
{
 if ((((_ctype[(int)(unsigned char)(c)])&(0x01)) != 0))
  c -= 'A'-'a';
 return c;
}

static inline __attribute__((no_instrument_function)) unsigned char __toupper(unsigned char c)
{
 if ((((_ctype[(int)(unsigned char)(c)])&(0x02)) != 0))
  c -= 'a'-'A';
 return c;
}
# 59 "/lib/modules/3.11.0-15-generic/build/include/linux/ctype.h" 3 4
static inline __attribute__((no_instrument_function)) char _tolower(const char c)
{
 return c | 0x20;
}


static inline __attribute__((no_instrument_function)) int isodigit(const char c)
{
 return c >= '0' && c <= '7';
}
# 59 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sched.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4


struct sched_param {
 int sched_priority;
};

# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/capability.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/capability.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/capability.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/capability.h" 3 4
struct task_struct;
# 40 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/capability.h" 3 4
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
# 69 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/capability.h" 3 4
struct vfs_cap_data {
 __le32 magic_etc;
 struct {
  __le32 permitted;
  __le32 inheritable;
 } data[2];
};
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/capability.h" 2 3 4





extern int file_caps_enabled;

typedef struct kernel_cap_struct {
 __u32 cap[2];
} kernel_cap_t;


struct cpu_vfs_cap_data {
 __u32 magic_etc;
 kernel_cap_t permitted;
 kernel_cap_t inheritable;
};





struct file;
struct inode;
struct dentry;
struct user_namespace;

struct user_namespace *current_user_ns(void);

extern const kernel_cap_t __cap_empty_set;
extern const kernel_cap_t __cap_init_eff_set;
# 114 "/lib/modules/3.11.0-15-generic/build/include/linux/capability.h" 3 4
static inline __attribute__((no_instrument_function)) kernel_cap_t cap_combine(const kernel_cap_t a,
           const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] | b.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_intersect(const kernel_cap_t a,
      const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] & b.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_drop(const kernel_cap_t a,
        const kernel_cap_t drop)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] &~ drop.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_invert(const kernel_cap_t c)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = ~ c.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((no_instrument_function)) int cap_isclear(const kernel_cap_t a)
{
 unsigned __capi;
 for (__capi = 0; __capi < 2; ++__capi) {
  if (a.cap[__capi] != 0)
   return 0;
 }
 return 1;
}
# 162 "/lib/modules/3.11.0-15-generic/build/include/linux/capability.h" 3 4
static inline __attribute__((no_instrument_function)) int cap_issubset(const kernel_cap_t a, const kernel_cap_t set)
{
 kernel_cap_t dest;
 dest = cap_drop(a, set);
 return cap_isclear(dest);
}



static inline __attribute__((no_instrument_function)) int cap_is_fs_cap(int cap)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((9) & 31)), ((1 << ((32) & 31))) } });
 return !!((1 << ((cap) & 31)) & __cap_fs_set.cap[((cap) >> 5)]);
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_drop_fs_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((9) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_raise_fs_set(const kernel_cap_t a,
         const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((9) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_fs_set));
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_drop_nfsd_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline __attribute__((no_instrument_function)) kernel_cap_t cap_raise_nfsd_set(const kernel_cap_t a,
           const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_nfsd_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_nfsd_set));
}

extern bool has_capability(struct task_struct *t, int cap);
extern bool has_ns_capability(struct task_struct *t,
         struct user_namespace *ns, int cap);
extern bool has_capability_noaudit(struct task_struct *t, int cap);
extern bool has_ns_capability_noaudit(struct task_struct *t,
          struct user_namespace *ns, int cap);
extern bool capable(int cap);
extern bool ns_capable(struct user_namespace *ns, int cap);
extern bool nsown_capable(int cap);
extern bool inode_capable(const struct inode *inode, int cap);
extern bool file_ns_capable(const struct file *file, struct user_namespace *ns, int cap);


extern int get_vfs_caps_from_disk(const struct dentry *dentry, struct cpu_vfs_cap_data *cpu_caps);
# 14 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rbtree.h" 1 3 4
# 35 "/lib/modules/3.11.0-15-generic/build/include/linux/rbtree.h" 3 4
struct rb_node {
 unsigned long __rb_parent_color;
 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));


struct rb_root {
 struct rb_node *rb_node;
};
# 61 "/lib/modules/3.11.0-15-generic/build/include/linux/rbtree.h" 3 4
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);



extern struct rb_node *rb_next(const struct rb_node *);
extern struct rb_node *rb_prev(const struct rb_node *);
extern struct rb_node *rb_first(const struct rb_root *);
extern struct rb_node *rb_last(const struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline __attribute__((no_instrument_function)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->__rb_parent_color = (unsigned long)parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 20 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 1 3 4
# 96 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/numa.h" 1 3 4
# 97 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 2 3 4

typedef struct { unsigned long bits[((((1 << 6)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline __attribute__((no_instrument_function)) void __node_set(int node, volatile nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline __attribute__((no_instrument_function)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline __attribute__((no_instrument_function)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((no_instrument_function)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline __attribute__((no_instrument_function)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline __attribute__((no_instrument_function)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline __attribute__((no_instrument_function)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 6)); int __min2 = (find_first_bit(srcp->bits, (1 << 6))); __min1 < __min2 ? __min1: __min2; });
}


static inline __attribute__((no_instrument_function)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 6)); int __min2 = (find_next_bit(srcp->bits, (1 << 6), n+1)); __min1 < __min2 ? __min1: __min2; });
}

static inline __attribute__((no_instrument_function)) void init_nodemask_of_node(nodemask_t *mask, int node)
{
 __nodes_clear(&(*mask), (1 << 6));
 __node_set((node), &(*mask));
}
# 266 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 3 4
static inline __attribute__((no_instrument_function)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 6)); int __min2 = (find_first_zero_bit(maskp->bits, (1 << 6))); __min1 < __min2 ? __min1: __min2; })
                                                  ;
}
# 300 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 3 4
static inline __attribute__((no_instrument_function)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline __attribute__((no_instrument_function)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
  const nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline __attribute__((no_instrument_function)) void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 374 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 3 4
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,


 N_MEMORY,



 N_CPU,
 NR_NODE_STATES
};






extern nodemask_t node_states[NR_NODE_STATES];


static inline __attribute__((no_instrument_function)) int node_state(int node, enum node_states state)
{
 return (__builtin_constant_p(((node))) ? constant_test_bit(((node)), ((node_states[state]).bits)) : variable_test_bit(((node)), ((node_states[state]).bits)));
}

static inline __attribute__((no_instrument_function)) void node_set_state(int node, enum node_states state)
{
 __node_set(node, &node_states[state]);
}

static inline __attribute__((no_instrument_function)) void node_clear_state(int node, enum node_states state)
{
 __node_clear(node, &node_states[state]);
}

static inline __attribute__((no_instrument_function)) int num_node_state(enum node_states state)
{
 return __nodes_weight(&(node_states[state]), (1 << 6));
}







extern int nr_node_ids;
extern int nr_online_nodes;

static inline __attribute__((no_instrument_function)) void node_set_online(int nid)
{
 node_set_state(nid, N_ONLINE);
 nr_online_nodes = num_node_state(N_ONLINE);
}

static inline __attribute__((no_instrument_function)) void node_set_offline(int nid)
{
 node_clear_state(nid, N_ONLINE);
 nr_online_nodes = num_node_state(N_ONLINE);
}
# 475 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 3 4
extern int node_random(const nodemask_t *maskp);
# 509 "/lib/modules/3.11.0-15-generic/build/include/linux/nodemask.h" 3 4
struct nodemask_scratch {
 nodemask_t mask1;
 nodemask_t mask2;
};
# 24 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/auxvec.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/auxvec.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/auxvec.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/auxvec.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/auxvec.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 2 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rwsem.h" 1 3 4
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/rwsem.h" 3 4
struct rw_semaphore;





struct rw_semaphore {
 long count;
 raw_spinlock_t wait_lock;
 struct list_head wait_list;



};

extern struct rw_semaphore *rwsem_down_read_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_down_write_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_wake(struct rw_semaphore *);
extern struct rw_semaphore *rwsem_downgrade_wake(struct rw_semaphore *sem);


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/rwsem.h" 1 3 4
# 63 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/rwsem.h" 3 4
static inline __attribute__((no_instrument_function)) void __down_read(struct rw_semaphore *sem)
{
 asm volatile("# beginning down_read\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "incq" " " "(%1)\n\t"

       "  jns        1f\n"
       "  call call_rwsem_down_read_failed\n"
       "1:\n\t"
       "# ending down_read\n\t"
       : "+m" (sem->count)
       : "a" (sem)
       : "memory", "cc");
}




static inline __attribute__((no_instrument_function)) int __down_read_trylock(struct rw_semaphore *sem)
{
 long result, tmp;
 asm volatile("# beginning __down_read_trylock\n\t"
       "  mov          %0,%1\n\t"
       "1:\n\t"
       "  mov          %1,%2\n\t"
       "  add          %3,%2\n\t"
       "  jle	     2f\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  cmpxchg  %2,%0\n\t"
       "  jnz	     1b\n\t"
       "2:\n\t"
       "# ending __down_read_trylock\n\t"
       : "+m" (sem->count), "=&a" (result), "=&r" (tmp)
       : "i" (0x00000001L)
       : "memory", "cc");
 return result >= 0 ? 1 : 0;
}




static inline __attribute__((no_instrument_function)) void __down_write_nested(struct rw_semaphore *sem, int subclass)
{
 long tmp;
 asm volatile("# beginning down_write\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  test " " " "%k1" " " "," " " "%k1" " " "\n\t"

       "  jz        1f\n"
       "  call call_rwsem_down_write_failed\n"
       "1:\n"
       "# ending down_write"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
}

static inline __attribute__((no_instrument_function)) void __down_write(struct rw_semaphore *sem)
{
 __down_write_nested(sem, 0);
}




static inline __attribute__((no_instrument_function)) int __down_write_trylock(struct rw_semaphore *sem)
{
 long result, tmp;
 asm volatile("# beginning __down_write_trylock\n\t"
       "  mov          %0,%1\n\t"
       "1:\n\t"
       "  test " " " "%k1" " " "," " " "%k1" " " "\n\t"

       "  jnz          2f\n\t"
       "  mov          %1,%2\n\t"
       "  add          %3,%2\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  cmpxchg  %2,%0\n\t"
       "  jnz	     1b\n\t"
       "2:\n\t"
       "  sete         %b1\n\t"
       "  movzbl       %b1, %k1\n\t"
       "# ending __down_write_trylock\n\t"
       : "+m" (sem->count), "=&a" (result), "=&r" (tmp)
       : "er" (((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
 return result;
}




static inline __attribute__((no_instrument_function)) void __up_read(struct rw_semaphore *sem)
{
 long tmp;
 asm volatile("# beginning __up_read\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  jns        1f\n\t"
       "  call call_rwsem_wake\n"
       "1:\n"
       "# ending __up_read\n"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (-0x00000001L)
       : "memory", "cc");
}




static inline __attribute__((no_instrument_function)) void __up_write(struct rw_semaphore *sem)
{
 long tmp;
 asm volatile("# beginning __up_write\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  jns        1f\n\t"
       "  call call_rwsem_wake\n"
       "1:\n\t"
       "# ending __up_write\n"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (-((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
}




static inline __attribute__((no_instrument_function)) void __downgrade_write(struct rw_semaphore *sem)
{
 asm volatile("# beginning __downgrade_write\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "addq" " " "%2,(%1)\n\t"




       "  jns       1f\n\t"
       "  call call_rwsem_downgrade_wake\n"
       "1:\n\t"
       "# ending __downgrade_write\n"
       : "+m" (sem->count)
       : "a" (sem), "er" (-(-0xffffffffL -1))
       : "memory", "cc");
}




static inline __attribute__((no_instrument_function)) void rwsem_atomic_add(long delta, struct rw_semaphore *sem)
{
 asm volatile(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "addq" " " "%1,%0"
       : "+m" (sem->count)
       : "er" (delta));
}




static inline __attribute__((no_instrument_function)) long rwsem_atomic_update(long delta, struct rw_semaphore *sem)
{
 return delta + ({ __typeof__ (*(((&sem->count)))) __ret = (((delta))); switch (sizeof(*(((&sem->count))))) { case 1: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "b %b0, %1\n" : "+q" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; case 2: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "w %w0, %1\n" : "+r" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; case 4: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "l %0, %1\n" : "+r" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; case 8: asm volatile (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "q %q0, %1\n" : "+r" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; default: __xadd_wrong_size(); } __ret; });
}
# 41 "/lib/modules/3.11.0-15-generic/build/include/linux/rwsem.h" 2 3 4


static inline __attribute__((no_instrument_function)) int rwsem_is_locked(struct rw_semaphore *sem)
{
 return sem->count != 0;
}
# 67 "/lib/modules/3.11.0-15-generic/build/include/linux/rwsem.h" 3 4
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 80 "/lib/modules/3.11.0-15-generic/build/include/linux/rwsem.h" 3 4
extern void down_read(struct rw_semaphore *sem);




extern int down_read_trylock(struct rw_semaphore *sem);




extern void down_write(struct rw_semaphore *sem);




extern int down_write_trylock(struct rw_semaphore *sem);




extern void up_read(struct rw_semaphore *sem);




extern void up_write(struct rw_semaphore *sem);




extern void downgrade_write(struct rw_semaphore *sem);
# 11 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/page-debug-flags.h" 1 3 4
# 14 "/lib/modules/3.11.0-15-generic/build/include/linux/page-debug-flags.h" 3 4
enum page_debug_flags {
 PAGE_DEBUG_FLAG_POISON,
 PAGE_DEBUG_FLAG_GUARD,
};
# 14 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/uprobes.h" 1 3 4
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/uprobes.h" 3 4
struct vm_area_struct;
struct mm_struct;
struct inode;


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/uprobes.h" 1 3 4
# 26 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/uprobes.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 1 3 4
# 33 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 1 3 4
# 53 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
extern void rcutorture_record_test_transition(void);
extern void rcutorture_record_progress(unsigned long vernum);
extern void do_trace_rcu_torture_read(char *rcutorturename,
          struct callback_head *rhp,
          unsigned long secs,
          unsigned long c_old,
          unsigned long c);
# 152 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
extern void call_rcu_bh(struct callback_head *head,
   void (*func)(struct callback_head *head));
# 174 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
extern void call_rcu_sched(struct callback_head *head,
      void (*func)(struct callback_head *rcu));

extern void synchronize_sched(void);
# 196 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) void __rcu_read_lock(void)
{
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void __rcu_read_unlock(void)
{
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((no_instrument_function)) void synchronize_rcu(void)
{
 synchronize_sched();
}

static inline __attribute__((no_instrument_function)) int rcu_preempt_depth(void)
{
 return 0;
}




extern void rcu_init(void);
extern void rcu_sched_qs(int cpu);
extern void rcu_bh_qs(int cpu);
extern void rcu_check_callbacks(int cpu, int user);
struct notifier_block;
extern void rcu_idle_enter(void);
extern void rcu_idle_exit(void);
extern void rcu_irq_enter(void);
extern void rcu_irq_exit(void);


extern void rcu_user_enter(void);
extern void rcu_user_exit(void);
extern void rcu_user_enter_after_irq(void);
extern void rcu_user_exit_after_irq(void);
# 273 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
typedef void call_rcu_func_t(struct callback_head *head,
        void (*func)(struct callback_head *head));
void wait_rcu_gp(call_rcu_func_t crf);


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rcutree.h" 1 3 4
# 33 "/lib/modules/3.11.0-15-generic/build/include/linux/rcutree.h" 3 4
extern void rcu_note_context_switch(int cpu);
extern int rcu_needs_cpu(int cpu, unsigned long *delta_jiffies);
extern void rcu_cpu_stall_reset(void);






static inline __attribute__((no_instrument_function)) void rcu_virt_note_context_switch(int cpu)
{
 rcu_note_context_switch(cpu);
}

extern void synchronize_rcu_bh(void);
extern void synchronize_sched_expedited(void);
extern void synchronize_rcu_expedited(void);

void kfree_call_rcu(struct callback_head *head, void (*func)(struct callback_head *rcu));
# 69 "/lib/modules/3.11.0-15-generic/build/include/linux/rcutree.h" 3 4
static inline __attribute__((no_instrument_function)) void synchronize_rcu_bh_expedited(void)
{
 synchronize_sched_expedited();
}

extern void rcu_barrier(void);
extern void rcu_barrier_bh(void);
extern void rcu_barrier_sched(void);

extern unsigned long rcutorture_testseq;
extern unsigned long rcutorture_vernum;
extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
extern long rcu_batches_completed_sched(void);

extern void rcu_force_quiescent_state(void);
extern void rcu_bh_force_quiescent_state(void);
extern void rcu_sched_force_quiescent_state(void);

extern void exit_rcu(void);

extern void rcu_scheduler_starting(void);
extern int rcu_scheduler_active __attribute__((__section__(".data..read_mostly")));
# 279 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 2 3 4
# 295 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) void init_rcu_head_on_stack(struct callback_head *head)
{
}

static inline __attribute__((no_instrument_function)) void destroy_rcu_head_on_stack(struct callback_head *head)
{
}



extern int rcu_is_cpu_idle(void);





static inline __attribute__((no_instrument_function)) bool rcu_lockdep_current_cpu_online(void)
{
 return 1;
}
# 429 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) int rcu_read_lock_held(void)
{
 return 1;
}

static inline __attribute__((no_instrument_function)) int rcu_read_lock_bh_held(void)
{
 return 1;
}







static inline __attribute__((no_instrument_function)) int rcu_read_lock_sched_held(void)
{
 return 1;
}
# 773 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) void rcu_read_lock(void)
{
 __rcu_read_lock();
 (void)0;
 do { } while (0);
 do { } while (0)
                                                  ;
}
# 797 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) void rcu_read_unlock(void)
{
 do { } while (0)
                                                    ;
 do { } while (0);
 (void)0;
 __rcu_read_unlock();
}
# 823 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) void rcu_read_lock_bh(void)
{
 local_bh_disable();
 (void)0;
 do { } while (0);
 do { } while (0)
                                                     ;
}






static inline __attribute__((no_instrument_function)) void rcu_read_unlock_bh(void)
{
 do { } while (0)
                                                       ;
 do { } while (0);
 (void)0;
 local_bh_enable();
}
# 859 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
static inline __attribute__((no_instrument_function)) void rcu_read_lock_sched(void)
{
 __asm__ __volatile__("": : :"memory");
 (void)0;
 do { } while (0);
 do { } while (0)
                                                        ;
}


static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) void rcu_read_lock_sched_notrace(void)
{
 __asm__ __volatile__("": : :"memory");
 (void)0;
}






static inline __attribute__((no_instrument_function)) void rcu_read_unlock_sched(void)
{
 do { } while (0)
                                                          ;
 do { } while (0);
 (void)0;
 __asm__ __volatile__("": : :"memory");
}


static inline __attribute__((no_instrument_function)) __attribute__((no_instrument_function)) void rcu_read_unlock_sched_notrace(void)
{
 (void)0;
 __asm__ __volatile__("": : :"memory");
}
# 1012 "/lib/modules/3.11.0-15-generic/build/include/linux/rcupdate.h" 3 4
extern bool rcu_is_nocb_cpu(int cpu);
# 34 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 2 3 4


struct srcu_struct_array {
 unsigned long c[2];
 unsigned long seq[2];
};

struct rcu_batch {
 struct callback_head *head, **tail;
};



struct srcu_struct {
 unsigned completed;
 struct srcu_struct_array *per_cpu_ref;
 spinlock_t queue_lock;
 bool running;

 struct rcu_batch batch_queue;

 struct rcu_batch batch_check0;

 struct rcu_batch batch_check1;
 struct rcu_batch batch_done;
 struct delayed_work work;



};
# 80 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 3 4
int init_srcu_struct(struct srcu_struct *sp);




void process_srcu(struct work_struct *work);
# 130 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 3 4
void call_srcu(struct srcu_struct *sp, struct callback_head *head,
  void (*func)(struct callback_head *head));

void cleanup_srcu_struct(struct srcu_struct *sp);
int __srcu_read_lock(struct srcu_struct *sp) ;
void __srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
void synchronize_srcu_expedited(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
void srcu_barrier(struct srcu_struct *sp);
# 167 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 3 4
static inline __attribute__((no_instrument_function)) int srcu_read_lock_held(struct srcu_struct *sp)
{
 return 1;
}
# 218 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 3 4
static inline __attribute__((no_instrument_function)) int srcu_read_lock(struct srcu_struct *sp)
{
 int retval = __srcu_read_lock(sp);

 do { } while (0);
 return retval;
}
# 233 "/lib/modules/3.11.0-15-generic/build/include/linux/srcu.h" 3 4
static inline __attribute__((no_instrument_function)) void srcu_read_unlock(struct srcu_struct *sp, int idx)

{
 do { } while (0);
 __srcu_read_unlock(sp, idx);
}
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 2 3 4
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 3 4
typedef int (*notifier_fn_t)(struct notifier_block *nb,
   unsigned long action, void *data);

struct notifier_block {
 notifier_fn_t notifier_call;
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
# 92 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 3 4
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
# 118 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 3 4
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int blocking_notifier_chain_cond_register(
  struct blocking_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
  unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
  unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
  unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
  unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
# 168 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 3 4
static inline __attribute__((no_instrument_function)) int notifier_from_errno(int err)
{
 if (err)
  return 0x8000 | (0x0001 - err);

 return 0x0001;
}


static inline __attribute__((no_instrument_function)) int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
# 212 "/lib/modules/3.11.0-15-generic/build/include/linux/notifier.h" 3 4
extern struct blocking_notifier_head reboot_notifier_list;
# 27 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/uprobes.h" 2 3 4

typedef u8 uprobe_opcode_t;







struct arch_uprobe {
 u16 fixups;
 u8 insn[16];

 unsigned long rip_rela_target_address;

};

struct arch_uprobe_task {

 unsigned long saved_scratch_register;

 unsigned int saved_trap_nr;
 unsigned int saved_tf;
};

extern int arch_uprobe_analyze_insn(struct arch_uprobe *aup, struct mm_struct *mm, unsigned long addr);
extern int arch_uprobe_pre_xol(struct arch_uprobe *aup, struct pt_regs *regs);
extern int arch_uprobe_post_xol(struct arch_uprobe *aup, struct pt_regs *regs);
extern bool arch_uprobe_xol_was_trapped(struct task_struct *tsk);
extern int arch_uprobe_exception_notify(struct notifier_block *self, unsigned long val, void *data);
extern void arch_uprobe_abort_xol(struct arch_uprobe *aup, struct pt_regs *regs);
extern unsigned long arch_uretprobe_hijack_return_addr(unsigned long trampoline_vaddr, struct pt_regs *regs);
# 36 "/lib/modules/3.11.0-15-generic/build/include/linux/uprobes.h" 2 3 4







enum uprobe_filter_ctx {
 UPROBE_FILTER_REGISTER,
 UPROBE_FILTER_UNREGISTER,
 UPROBE_FILTER_MMAP,
};

struct uprobe_consumer {
 int (*handler)(struct uprobe_consumer *self, struct pt_regs *regs);
 int (*ret_handler)(struct uprobe_consumer *self,
    unsigned long func,
    struct pt_regs *regs);
 bool (*filter)(struct uprobe_consumer *self,
    enum uprobe_filter_ctx ctx,
    struct mm_struct *mm);

 struct uprobe_consumer *next;
};


enum uprobe_task_state {
 UTASK_RUNNING,
 UTASK_SSTEP,
 UTASK_SSTEP_ACK,
 UTASK_SSTEP_TRAPPED,
};




struct uprobe_task {
 enum uprobe_task_state state;
 struct arch_uprobe_task autask;

 struct return_instance *return_instances;
 unsigned int depth;
 struct uprobe *active_uprobe;

 unsigned long xol_vaddr;
 unsigned long vaddr;
};






struct xol_area {
 wait_queue_head_t wq;
 atomic_t slot_count;
 unsigned long *bitmap;
 struct page *page;






 unsigned long vaddr;
};

struct uprobes_state {
 struct xol_area *xol_area;
};

extern int __attribute__((weak)) set_swbp(struct arch_uprobe *aup, struct mm_struct *mm, unsigned long vaddr);
extern int __attribute__((weak)) set_orig_insn(struct arch_uprobe *aup, struct mm_struct *mm, unsigned long vaddr);
extern bool __attribute__((weak)) is_swbp_insn(uprobe_opcode_t *insn);
extern bool __attribute__((weak)) is_trap_insn(uprobe_opcode_t *insn);
extern int uprobe_register(struct inode *inode, loff_t offset, struct uprobe_consumer *uc);
extern int uprobe_apply(struct inode *inode, loff_t offset, struct uprobe_consumer *uc, bool);
extern void uprobe_unregister(struct inode *inode, loff_t offset, struct uprobe_consumer *uc);
extern int uprobe_mmap(struct vm_area_struct *vma);
extern void uprobe_munmap(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void uprobe_start_dup_mmap(void);
extern void uprobe_end_dup_mmap(void);
extern void uprobe_dup_mmap(struct mm_struct *oldmm, struct mm_struct *newmm);
extern void uprobe_free_utask(struct task_struct *t);
extern void uprobe_copy_process(struct task_struct *t);
extern unsigned long __attribute__((weak)) uprobe_get_swbp_addr(struct pt_regs *regs);
extern int uprobe_post_sstep_notifier(struct pt_regs *regs);
extern int uprobe_pre_sstep_notifier(struct pt_regs *regs);
extern void uprobe_notify_resume(struct pt_regs *regs);
extern bool uprobe_deny_signal(void);
extern bool __attribute__((weak)) arch_uprobe_skip_sstep(struct arch_uprobe *aup, struct pt_regs *regs);
extern void uprobe_clear_state(struct mm_struct *mm);
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/page-flags-layout.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/generated/bounds.h" 1 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/page-flags-layout.h" 2 3 4
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmu.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmu.h" 3 4
typedef struct {
 void *ldt;
 int size;



 unsigned short ia32_compat;


 struct mutex lock;
 void *vdso;
} mm_context_t;


void leave_mm(int cpu);
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 2 3 4






struct address_space;
# 41 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
struct page {

 unsigned long flags;

 struct address_space *mapping;







 struct {
  union {
   unsigned long index;
   void *freelist;
   bool pfmemalloc;
# 66 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
  };

  union {



   unsigned long counters;
# 82 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
   struct {

    union {
# 101 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
     atomic_t _mapcount;

     struct {
      unsigned inuse:16;
      unsigned objects:15;
      unsigned frozen:1;
     };
     int units;
    };
    atomic_t _count;
   };
  };
 };


 union {
  struct list_head lru;


  struct {
   struct page *next;

   int pages;
   int pobjects;




  };

  struct list_head list;
  struct slab *slab_page;
 };


 union {
  unsigned long private;







  spinlock_t ptl;

  struct kmem_cache *slab_cache;
  struct page *first_page;
 };
# 180 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
}





 __attribute__((aligned(2 * sizeof(unsigned long))))

;

struct page_frag {
 struct page *page;

 __u32 offset;
 __u32 size;




};

typedef unsigned long vm_flags_t;






struct vm_region {
 struct rb_node vm_rb;
 vm_flags_t vm_flags;
 unsigned long vm_start;
 unsigned long vm_end;
 unsigned long vm_top;
 unsigned long vm_pgoff;
 struct file *vm_file;

 int vm_usage;
 bool vm_icache_flushed : 1;

};







struct vm_area_struct {


 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next, *vm_prev;

 struct rb_node vm_rb;







 unsigned long rb_subtree_gap;



 struct mm_struct *vm_mm;
 pgprot_t vm_page_prot;
 unsigned long vm_flags;






 union {
  struct {
   struct rb_node rb;
   unsigned long rb_subtree_last;
  } linear;
  struct list_head nonlinear;
 } shared;







 struct list_head anon_vma_chain;

 struct anon_vma *anon_vma;


 const struct vm_operations_struct *vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;





 struct mempolicy *vm_policy;

};

struct core_thread {
 struct task_struct *task;
 struct core_thread *next;
};

struct core_state {
 atomic_t nr_threads;
 struct core_thread dumper;
 struct completion startup;
};

enum {
 MM_FILEPAGES,
 MM_ANONPAGES,
 MM_SWAPENTS,
 NR_MM_COUNTERS
};




struct task_rss_stat {
 int events;
 int count[NR_MM_COUNTERS];
};


struct mm_rss_stat {
 atomic_long_t count[NR_MM_COUNTERS];
};

struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;

 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);

 unsigned long mmap_base;
 unsigned long mmap_legacy_base;
 unsigned long task_size;
 unsigned long highest_vm_end;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;

 spinlock_t page_table_lock;
 struct rw_semaphore mmap_sem;

 struct list_head mmlist;





 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm;
 unsigned long locked_vm;
 unsigned long pinned_vm;
 unsigned long shared_vm;
 unsigned long exec_vm;
 unsigned long stack_vm;
 unsigned long def_flags;
 unsigned long nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(0 + 19 + 1))];





 struct mm_rss_stat rss_stat;

 struct linux_binfmt *binfmt;

 cpumask_var_t cpu_vm_mask_var;


 mm_context_t context;

 unsigned long flags;

 struct core_state *core_state;

 spinlock_t ioctx_lock;
 struct hlist_head ioctx_list;
# 400 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
 struct task_struct *owner;



 struct file *exe_file;

 struct mmu_notifier_mm *mmu_notifier_mm;


 pgtable_t pmd_huge_pte;
# 420 "/lib/modules/3.11.0-15-generic/build/include/linux/mm_types.h" 3 4
 unsigned long numa_next_scan;


 unsigned long numa_next_reset;


 unsigned long numa_scan_offset;


 int numa_scan_seq;





 int first_nid;

 struct uprobes_state uprobes_state;
};





static inline __attribute__((no_instrument_function)) void mm_init_cpumask(struct mm_struct *mm)
{



}


static inline __attribute__((no_instrument_function)) cpumask_t *mm_cpumask(struct mm_struct *mm)
{
 return mm->cpu_vm_mask_var;
}
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cputime.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/cputime.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/cputime.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/cputime_nsecs.h" 1 3 4
# 21 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/cputime_nsecs.h" 3 4
typedef u64 cputime_t;
typedef u64 cputime64_t;
# 71 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/cputime_nsecs.h" 3 4
static inline __attribute__((no_instrument_function)) cputime_t timespec_to_cputime(const struct timespec *val)
{
 u64 ret = val->tv_sec * 1000000000L + val->tv_nsec;
 return ( cputime_t) ret;
}
static inline __attribute__((no_instrument_function)) void cputime_to_timespec(const cputime_t ct, struct timespec *val)
{
 u32 rem;

 val->tv_sec = div_u64_rem(( u64)ct, 1000000000L, &rem);;
 val->tv_nsec = rem;
}




static inline __attribute__((no_instrument_function)) cputime_t timeval_to_cputime(const struct timeval *val)
{
 u64 ret = val->tv_sec * 1000000000L + val->tv_usec * 1000L;
 return ( cputime_t) ret;
}
static inline __attribute__((no_instrument_function)) void cputime_to_timeval(const cputime_t ct, struct timeval *val)
{
 u32 rem;

 val->tv_sec = div_u64_rem(( u64)ct, 1000000000L, &rem);;
 val->tv_usec = rem / 1000L;
}
# 13 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/cputime.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/cputime.h" 2 3 4
# 29 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/smp.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/smp.h" 3 4
extern void cpu_idle(void);

typedef void (*smp_call_func_t)(void *info);
struct call_single_data {
 struct list_head list;
 smp_call_func_t func;
 void *info;
 u16 flags;
};


extern unsigned int total_cpus;

int smp_call_function_single(int cpuid, smp_call_func_t func, void *info,
        int wait);







# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 1 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec_def.h" 1 3 4
# 21 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec_def.h" 3 4
struct mpf_intel {
 char signature[4];
 unsigned int physptr;
 unsigned char length;
 unsigned char specification;
 unsigned char checksum;
 unsigned char feature1;
 unsigned char feature2;
 unsigned char feature3;
 unsigned char feature4;
 unsigned char feature5;
};



struct mpc_table {
 char signature[4];
 unsigned short length;
 char spec;
 char checksum;
 char oem[8];
 char productid[12];
 unsigned int oemptr;
 unsigned short oemsize;
 unsigned short oemcount;
 unsigned int lapic;
 unsigned int reserved;
};
# 67 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec_def.h" 3 4
struct mpc_cpu {
 unsigned char type;
 unsigned char apicid;
 unsigned char apicver;
 unsigned char cpuflag;
 unsigned int cpufeature;
 unsigned int featureflag;
 unsigned int reserved[2];
};

struct mpc_bus {
 unsigned char type;
 unsigned char busid;
 unsigned char bustype[6];
};
# 105 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec_def.h" 3 4
struct mpc_ioapic {
 unsigned char type;
 unsigned char apicid;
 unsigned char apicver;
 unsigned char flags;
 unsigned int apicaddr;
};

struct mpc_intsrc {
 unsigned char type;
 unsigned char irqtype;
 unsigned short irqflag;
 unsigned char srcbus;
 unsigned char srcbusirq;
 unsigned char dstapic;
 unsigned char dstirq;
};

enum mp_irq_source_types {
 mp_INT = 0,
 mp_NMI = 1,
 mp_SMI = 2,
 mp_ExtINT = 3
};







struct mpc_lintsrc {
 unsigned char type;
 unsigned char irqtype;
 unsigned short irqflag;
 unsigned char srcbusid;
 unsigned char srcbusirq;
 unsigned char destapic;
 unsigned char destapiclint;
};



struct mpc_oemtable {
 char signature[4];
 unsigned short length;
 char rev;
 char checksum;
 char mpc[8];
};
# 168 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec_def.h" 3 4
enum mp_bustype {
 MP_BUS_ISA = 1,
 MP_BUS_EISA,
 MP_BUS_PCI,
};
# 7 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/screen_info.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/screen_info.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/screen_info.h" 3 4
struct screen_info {
 __u8 orig_x;
 __u8 orig_y;
 __u16 ext_mem_k;
 __u16 orig_video_page;
 __u8 orig_video_mode;
 __u8 orig_video_cols;
 __u8 flags;
 __u8 unused2;
 __u16 orig_video_ega_bx;
 __u16 unused3;
 __u8 orig_video_lines;
 __u8 orig_video_isVGA;
 __u16 orig_video_points;


 __u16 lfb_width;
 __u16 lfb_height;
 __u16 lfb_depth;
 __u32 lfb_base;
 __u32 lfb_size;
 __u16 cl_magic, cl_offset;
 __u16 lfb_linelength;
 __u8 red_size;
 __u8 red_pos;
 __u8 green_size;
 __u8 green_pos;
 __u8 blue_size;
 __u8 blue_pos;
 __u8 rsvd_size;
 __u8 rsvd_pos;
 __u16 vesapm_seg;
 __u16 vesapm_off;
 __u16 pages;
 __u16 vesa_attributes;
 __u32 capabilities;
 __u8 _reserved[6];
} __attribute__((packed));
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/screen_info.h" 2 3 4

extern struct screen_info screen_info;
# 6 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/apm_bios.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/apm_bios.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/apm_bios.h" 1 3 4
# 21 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/apm_bios.h" 3 4
typedef unsigned short apm_event_t;
typedef unsigned short apm_eventinfo_t;

struct apm_bios_info {
 __u16 version;
 __u16 cseg;
 __u32 offset;
 __u16 cseg_16;
 __u16 dseg;
 __u16 flags;
 __u16 cseg_len;
 __u16 cseg_16_len;
 __u16 dseg_len;
};
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/apm_bios.h" 2 3 4
# 35 "/lib/modules/3.11.0-15-generic/build/include/linux/apm_bios.h" 3 4
struct apm_info {
 struct apm_bios_info bios;
 unsigned short connection_version;
 int get_power_status_broken;
 int get_power_status_swabinminutes;
 int allow_ints;
 int forbid_idle;
 int realmode_power_off;
 int disabled;
};
# 94 "/lib/modules/3.11.0-15-generic/build/include/linux/apm_bios.h" 3 4
extern struct apm_info apm_info;
# 7 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/edd.h" 1 3 4
# 33 "/lib/modules/3.11.0-15-generic/build/include/linux/edd.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/edd.h" 1 3 4
# 71 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/edd.h" 3 4
struct edd_device_params {
 __u16 length;
 __u16 info_flags;
 __u32 num_default_cylinders;
 __u32 num_default_heads;
 __u32 sectors_per_track;
 __u64 number_of_sectors;
 __u16 bytes_per_sector;
 __u32 dpte_ptr;
 __u16 key;
 __u8 device_path_info_length;
 __u8 reserved2;
 __u16 reserved3;
 __u8 host_bus_type[4];
 __u8 interface_type[8];
 union {
  struct {
   __u16 base_address;
   __u16 reserved1;
   __u32 reserved2;
  } __attribute__ ((packed)) isa;
  struct {
   __u8 bus;
   __u8 slot;
   __u8 function;
   __u8 channel;
   __u32 reserved;
  } __attribute__ ((packed)) pci;

  struct {
   __u64 reserved;
  } __attribute__ ((packed)) ibnd;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) xprs;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) htpt;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) unknown;
 } interface_path;
 union {
  struct {
   __u8 device;
   __u8 reserved1;
   __u16 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) ata;
  struct {
   __u8 device;
   __u8 lun;
   __u8 reserved1;
   __u8 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) atapi;
  struct {
   __u16 id;
   __u64 lun;
   __u16 reserved1;
   __u32 reserved2;
  } __attribute__ ((packed)) scsi;
  struct {
   __u64 serial_number;
   __u64 reserved;
  } __attribute__ ((packed)) usb;
  struct {
   __u64 eui;
   __u64 reserved;
  } __attribute__ ((packed)) i1394;
  struct {
   __u64 wwid;
   __u64 lun;
  } __attribute__ ((packed)) fibre;
  struct {
   __u64 identity_tag;
   __u64 reserved;
  } __attribute__ ((packed)) i2o;
  struct {
   __u32 array_number;
   __u32 reserved1;
   __u64 reserved2;
  } __attribute__ ((packed)) raid;
  struct {
   __u8 device;
   __u8 reserved1;
   __u16 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) sata;
  struct {
   __u64 reserved1;
   __u64 reserved2;
  } __attribute__ ((packed)) unknown;
 } device_path;
 __u8 reserved4;
 __u8 checksum;
} __attribute__ ((packed));

struct edd_info {
 __u8 device;
 __u8 version;
 __u16 interface_support;
 __u16 legacy_max_cylinder;
 __u8 legacy_max_head;
 __u8 legacy_sectors_per_track;
 struct edd_device_params params;
} __attribute__ ((packed));

struct edd {
 unsigned int mbr_signature[16];
 struct edd_info edd_info[6];
 unsigned char mbr_signature_nr;
 unsigned char edd_info_nr;
};
# 34 "/lib/modules/3.11.0-15-generic/build/include/linux/edd.h" 2 3 4


extern struct edd edd;
# 8 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/e820.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/e820.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/e820.h" 1 3 4
# 52 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/e820.h" 3 4
struct e820entry {
 __u64 addr;
 __u64 size;
 __u32 type;
} __attribute__((packed));

struct e820map {
 __u32 nr_map;
 struct e820entry map[(128 + 3 * (1 << 6))];
};
# 11 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/e820.h" 2 3 4


extern struct e820map e820;
extern struct e820map e820_saved;

extern unsigned long pci_mem_start;
extern int e820_any_mapped(u64 start, u64 end, unsigned type);
extern int e820_all_mapped(u64 start, u64 end, unsigned type);
extern void e820_add_region(u64 start, u64 size, int type);
extern void e820_print_map(char *who);
extern int
sanitize_e820_map(struct e820entry *biosmap, int max_nr_map, u32 *pnr_map);
extern u64 e820_update_range(u64 start, u64 size, unsigned old_type,
          unsigned new_type);
extern u64 e820_remove_range(u64 start, u64 size, unsigned old_type,
        int checktype);
extern void update_e820(void);
extern void e820_setup_gap(void);
extern int e820_search_gap(unsigned long *gapstart, unsigned long *gapsize,
   unsigned long start_addr, unsigned long long end_addr);
struct setup_data;
extern void parse_e820_ext(u64 phys_addr, u32 data_len);



extern void e820_mark_nosave_regions(unsigned long limit_pfn);







extern void early_memtest(unsigned long start, unsigned long end);






extern unsigned long e820_end_of_ram_pfn(void);
extern unsigned long e820_end_of_low_ram_pfn(void);
extern u64 early_reserve_e820(u64 sizet, u64 align);

void memblock_x86_fill(void);
void memblock_find_dma_reserve(void);

extern void finish_e820_parsing(void);
extern void e820_reserve_resources(void);
extern void e820_reserve_resources_late(void);
extern void setup_memory_map(void);
extern char *default_machine_specific_memory_setup(void);





static inline __attribute__((no_instrument_function)) bool is_ISA_range(u64 s, u64 e)
{
 return s >= 0xa0000 && e <= 0x100000;
}
# 9 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ist.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ist.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/ist.h" 1 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/ist.h" 3 4
struct ist_info {
 __u32 signature;
 __u32 command;
 __u32 event;
 __u32 perf_level;
};
# 19 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ist.h" 2 3 4


extern struct ist_info ist_info;
# 10 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/video/edid.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/video/edid.h" 1 3 4



struct edid_info {
 unsigned char dummy[128];
};
# 5 "/lib/modules/3.11.0-15-generic/build/include/video/edid.h" 2 3 4


extern struct edid_info edid_info;
# 11 "/usr/include/x86_64-linux-gnu/asm/bootparam.h" 2 3 4







struct setup_data {
 __u64 next;
 __u32 type;
 __u32 len;
 __u8 data[0];
};

struct setup_header {
 __u8 setup_sects;
 __u16 root_flags;
 __u32 syssize;
 __u16 ram_size;



 __u16 vid_mode;
 __u16 root_dev;
 __u16 boot_flag;
 __u16 jump;
 __u32 header;
 __u16 version;
 __u32 realmode_swtch;
 __u16 start_sys;
 __u16 kernel_version;
 __u8 type_of_loader;
 __u8 loadflags;




 __u16 setup_move_size;
 __u32 code32_start;
 __u32 ramdisk_image;
 __u32 ramdisk_size;
 __u32 bootsect_kludge;
 __u16 heap_end_ptr;
 __u8 ext_loader_ver;
 __u8 ext_loader_type;
 __u32 cmd_line_ptr;
 __u32 initrd_addr_max;
 __u32 kernel_alignment;
 __u8 relocatable_kernel;
 __u8 _pad2[3];
 __u32 cmdline_size;
 __u32 hardware_subarch;
 __u64 hardware_subarch_data;
 __u32 payload_offset;
 __u32 payload_length;
 __u64 setup_data;
} __attribute__((packed));

struct sys_desc_table {
 __u16 length;
 __u8 table[14];
};


struct olpc_ofw_header {
 __u32 ofw_magic;
 __u32 ofw_version;
 __u32 cif_handler;
 __u32 irq_desc_table;
} __attribute__((packed));

struct efi_info {
 __u32 efi_loader_signature;
 __u32 efi_systab;
 __u32 efi_memdesc_size;
 __u32 efi_memdesc_version;
 __u32 efi_memmap;
 __u32 efi_memmap_size;
 __u32 efi_systab_hi;
 __u32 efi_memmap_hi;
};


struct boot_params {
 struct screen_info screen_info;
 struct apm_bios_info apm_bios_info;
 __u8 _pad2[4];
 __u64 tboot_addr;
 struct ist_info ist_info;
 __u8 _pad3[16];
 __u8 hd0_info[16];
 __u8 hd1_info[16];
 struct sys_desc_table sys_desc_table;
 struct olpc_ofw_header olpc_ofw_header;
 __u8 _pad4[128];
 struct edid_info edid_info;
 struct efi_info efi_info;
 __u32 alt_mem_k;
 __u32 scratch;
 __u8 e820_entries;
 __u8 eddbuf_entries;
 __u8 edd_mbr_sig_buf_entries;
 __u8 _pad6[6];
 struct setup_header hdr;
 __u8 _pad7[0x290-0x1f1-sizeof(struct setup_header)];
 __u32 edd_mbr_sig_buffer[16];
 struct e820entry e820_map[128];
 __u8 _pad8[48];
 struct edd_info eddbuf[6];
 __u8 _pad9[276];
} __attribute__((packed));

enum {
 X86_SUBARCH_PC = 0,
 X86_SUBARCH_LGUEST,
 X86_SUBARCH_XEN,
 X86_SUBARCH_MRST,
 X86_SUBARCH_CE4100,
 X86_NR_SUBARCHS,
};
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 2 3 4

struct mpc_bus;
struct mpc_cpu;
struct mpc_table;
struct cpuinfo_x86;
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_init_mpparse {
 void (*mpc_record)(unsigned int mode);
 void (*setup_ioapic_ids)(void);
 int (*mpc_apic_id)(struct mpc_cpu *m);
 void (*smp_read_mpc_oem)(struct mpc_table *mpc);
 void (*mpc_oem_pci_bus)(struct mpc_bus *m);
 void (*mpc_oem_bus_info)(struct mpc_bus *m, char *name);
 void (*find_smp_config)(void);
 void (*get_smp_config)(unsigned int early);
};
# 42 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_init_resources {
 void (*probe_roms)(void);
 void (*reserve_resources)(void);
 char *(*memory_setup)(void);
};
# 55 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_init_irqs {
 void (*pre_vector_init)(void);
 void (*intr_init)(void);
 void (*trap_init)(void);
};






struct x86_init_oem {
 void (*arch_setup)(void);
 void (*banner)(void);
};
# 78 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_init_paging {
 void (*pagetable_init)(void);
};
# 90 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_init_timers {
 void (*setup_percpu_clockev)(void);
 void (*tsc_pre_init)(void);
 void (*timer_init)(void);
 void (*wallclock_init)(void);
};





struct x86_init_iommu {
 int (*iommu_init)(void);
};
# 112 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_init_pci {
 int (*arch_init)(void);
 int (*init)(void);
 void (*init_irq)(void);
 void (*fixup_irqs)(void);
};





struct x86_init_ops {
 struct x86_init_resources resources;
 struct x86_init_mpparse mpparse;
 struct x86_init_irqs irqs;
 struct x86_init_oem oem;
 struct x86_init_paging paging;
 struct x86_init_timers timers;
 struct x86_init_iommu iommu;
 struct x86_init_pci pci;
};






struct x86_cpuinit_ops {
 void (*setup_percpu_clockev)(void);
 void (*early_percpu_clock_init)(void);
 void (*fixup_cpu_id)(struct cpuinfo_x86 *c, int node);
};

struct timespec;
# 159 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/x86_init.h" 3 4
struct x86_platform_ops {
 unsigned long (*calibrate_tsc)(void);
 void (*get_wallclock)(struct timespec *ts);
 int (*set_wallclock)(const struct timespec *ts);
 void (*iommu_shutdown)(void);
 bool (*is_untracked_pat_range)(u64 start, u64 end);
 void (*nmi_init)(void);
 unsigned char (*get_nmi_reason)(void);
 int (*i8042_detect)(void);
 void (*save_sched_clock_state)(void);
 void (*restore_sched_clock_state)(void);
 void (*apic_post_init)(void);
};

struct pci_dev;
struct msi_msg;

struct x86_msi_ops {
 int (*setup_msi_irqs)(struct pci_dev *dev, int nvec, int type);
 void (*compose_msi_msg)(struct pci_dev *dev, unsigned int irq,
    unsigned int dest, struct msi_msg *msg,
          u8 hpet_id);
 void (*teardown_msi_irq)(unsigned int irq);
 void (*teardown_msi_irqs)(struct pci_dev *dev);
 void (*restore_msi_irqs)(struct pci_dev *dev, int irq);
 int (*setup_hpet_msi)(unsigned int irq, unsigned int id);
};

struct IO_APIC_route_entry;
struct io_apic_irq_attr;
struct irq_data;
struct cpumask;

struct x86_io_apic_ops {
 void (*init) (void);
 unsigned int (*read) (unsigned int apic, unsigned int reg);
 void (*write) (unsigned int apic, unsigned int reg, unsigned int value);
 void (*modify) (unsigned int apic, unsigned int reg, unsigned int value);
 void (*disable)(void);
 void (*print_entries)(unsigned int apic, unsigned int nr_entries);
 int (*set_affinity)(struct irq_data *data,
     const struct cpumask *mask,
     bool force);
 int (*setup_entry)(int irq, struct IO_APIC_route_entry *entry,
           unsigned int destination, int vector,
           struct io_apic_irq_attr *attr);
 void (*eoi_ioapic_pin)(int apic, int pin, int vector);
};

extern struct x86_init_ops x86_init;
extern struct x86_cpuinit_ops x86_cpuinit;
extern struct x86_platform_ops x86_platform;
extern struct x86_msi_ops x86_msi;
extern struct x86_io_apic_ops x86_io_apic_ops;
extern void x86_init_noop(void);
extern void x86_init_uint_noop(unsigned int unused);
# 8 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apicdef.h" 1 3 4
# 178 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apicdef.h" 3 4
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

        const
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

        const
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

        const
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed));
# 434 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apicdef.h" 3 4
enum ioapic_irq_destination_types {
 dest_Fixed = 0,
 dest_LowestPrio = 1,
 dest_SMI = 2,
 dest__reserved_1 = 3,
 dest_NMI = 4,
 dest_INIT = 5,
 dest__reserved_2 = 6,
 dest_ExtINT = 7
};
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 2 3 4

extern int apic_version[];
extern int pic_mode;
# 47 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 3 4
extern unsigned long mp_bus_not_pci[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

extern unsigned int boot_cpu_physical_apicid;
extern unsigned int max_physical_apicid;
extern int mpc_default_type;
extern unsigned long mp_lapic_addr;


extern int smp_found_config;




static inline __attribute__((no_instrument_function)) void get_smp_config(void)
{
 x86_init.mpparse.get_smp_config(0);
}

static inline __attribute__((no_instrument_function)) void early_get_smp_config(void)
{
 x86_init.mpparse.get_smp_config(1);
}

static inline __attribute__((no_instrument_function)) void find_smp_config(void)
{
 x86_init.mpparse.find_smp_config();
}


extern void early_reserve_e820_mpc_new(void);
extern int enable_update_mptable;
extern int default_mpc_apic_id(struct mpc_cpu *m);
extern void default_smp_read_mpc_oem(struct mpc_table *mpc);

extern void default_mpc_oem_bus_info(struct mpc_bus *m, char *str);



extern void default_find_smp_config(void);
extern void default_get_smp_config(unsigned int early);
# 97 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 3 4
void generic_processor_info(int apicid, int version);

extern void mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void mp_override_legacy_irq(u8 bus_irq, u8 polarity, u8 trigger,
       u32 gsi);
extern void mp_config_acpi_legacy_irqs(void);
struct device;
extern int mp_register_gsi(struct device *dev, u32 gsi, int edge_level,
     int active_high_low);




struct physid_mask {
 unsigned long mask[(((32768) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
};

typedef struct physid_mask physid_mask_t;
# 149 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mpspec.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long physids_coerce(physid_mask_t *map)
{
 return map->mask[0];
}

static inline __attribute__((no_instrument_function)) void physids_promote(unsigned long physids, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 32768);
 map->mask[0] = physids;
}

static inline __attribute__((no_instrument_function)) void physid_set_mask_of_physid(int physid, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 32768);
 set_bit(physid, (*map).mask);
}




extern physid_mask_t phys_cpu_present_map;

extern int generic_mps_oem_check(struct mpc_table *, char *, char *);

extern int default_acpi_madt_oem_check(char *, char *);
# 13 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 1 3 4
# 19 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 1 3 4
# 26 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/pdc_intel.h" 1 3 4
# 27 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/numa.h" 1 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 1 3 4
# 51 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 3 4
extern __attribute__((section(".data..percpu" ""))) __typeof__(int) x86_cpu_to_node_map; extern __typeof__(int) *x86_cpu_to_node_map_early_ptr; extern __typeof__(int) x86_cpu_to_node_map_early_map[];
# 65 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 3 4
static inline __attribute__((no_instrument_function)) int early_cpu_to_node(int cpu)
{
 return *((x86_cpu_to_node_map_early_ptr) ? &(x86_cpu_to_node_map_early_ptr)[cpu] : &(*({ do { const void *__vpp_verify = (typeof((&(x86_cpu_to_node_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(x86_cpu_to_node_map))) *)(&(x86_cpu_to_node_map)))); (typeof((typeof(*(&(x86_cpu_to_node_map))) *)(&(x86_cpu_to_node_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); })));
}




extern cpumask_var_t node_to_cpumask_map[(1 << 6)];





static inline __attribute__((no_instrument_function)) const struct cpumask *cpumask_of_node(int node)
{
 return node_to_cpumask_map[node];
}


extern void setup_node_to_cpumask_map(void);
# 95 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 3 4
extern int __node_distance(int, int);
# 118 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/topology.h" 1 3 4
# 119 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 2 3 4

extern const struct cpumask *cpu_coregroup_mask(int cpu);
# 132 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 3 4
static inline __attribute__((no_instrument_function)) void arch_fix_phys_package_id(int num, u32 slot)
{
}

struct pci_bus;
void x86_pci_root_bus_resources(int bus, struct list_head *resources);
# 146 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/topology.h" 3 4
extern int get_mp_bus_to_node(int busnum);
extern void set_mp_bus_to_node(int busnum, int node);
# 7 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/numa.h" 2 3 4
# 21 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/numa.h" 3 4
extern int numa_off;
# 31 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/numa.h" 3 4
extern s16 __apicid_to_node[32768];
extern nodemask_t numa_nodes_parsed __attribute__ ((__section__(".init.data")));

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_add_memblk(int nodeid, u64 start, u64 end);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) numa_set_distance(int from, int to, int distance);

static inline __attribute__((no_instrument_function)) void set_apicid_to_node(int apicid, s16 node)
{
 __apicid_to_node[apicid] = node;
}

extern int numa_cpu_node(int cpu);
# 60 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/numa.h" 3 4
extern void numa_set_node(int cpu, int node);
extern void numa_clear_node(int cpu);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) init_cpu_to_node(void);
extern void numa_add_cpu(int cpu);
extern void numa_remove_cpu(int cpu);
# 29 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/realmode.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 1 3 4
# 53 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned char readb(const volatile void *addr) { unsigned char ret; asm volatile("mov" "b" " %1,%0":"=q" (ret) :"m" (*(volatile unsigned char *)addr) :"memory"); return ret; }
static inline __attribute__((no_instrument_function)) unsigned short readw(const volatile void *addr) { unsigned short ret; asm volatile("mov" "w" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned short *)addr) :"memory"); return ret; }
static inline __attribute__((no_instrument_function)) unsigned int readl(const volatile void *addr) { unsigned int ret; asm volatile("mov" "l" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned int *)addr) :"memory"); return ret; }

static inline __attribute__((no_instrument_function)) unsigned char __readb(const volatile void *addr) { unsigned char ret; asm volatile("mov" "b" " %1,%0":"=q" (ret) :"m" (*(volatile unsigned char *)addr) ); return ret; }
static inline __attribute__((no_instrument_function)) unsigned short __readw(const volatile void *addr) { unsigned short ret; asm volatile("mov" "w" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned short *)addr) ); return ret; }
static inline __attribute__((no_instrument_function)) unsigned int __readl(const volatile void *addr) { unsigned int ret; asm volatile("mov" "l" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned int *)addr) ); return ret; }

static inline __attribute__((no_instrument_function)) void writeb(unsigned char val, volatile void *addr) { asm volatile("mov" "b" " %0,%1": :"q" (val), "m" (*(volatile unsigned char *)addr) :"memory"); }
static inline __attribute__((no_instrument_function)) void writew(unsigned short val, volatile void *addr) { asm volatile("mov" "w" " %0,%1": :"r" (val), "m" (*(volatile unsigned short *)addr) :"memory"); }
static inline __attribute__((no_instrument_function)) void writel(unsigned int val, volatile void *addr) { asm volatile("mov" "l" " %0,%1": :"r" (val), "m" (*(volatile unsigned int *)addr) :"memory"); }

static inline __attribute__((no_instrument_function)) void __writeb(unsigned char val, volatile void *addr) { asm volatile("mov" "b" " %0,%1": :"q" (val), "m" (*(volatile unsigned char *)addr) ); }
static inline __attribute__((no_instrument_function)) void __writew(unsigned short val, volatile void *addr) { asm volatile("mov" "w" " %0,%1": :"r" (val), "m" (*(volatile unsigned short *)addr) ); }
static inline __attribute__((no_instrument_function)) void __writel(unsigned int val, volatile void *addr) { asm volatile("mov" "l" " %0,%1": :"r" (val), "m" (*(volatile unsigned int *)addr) ); }
# 84 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long readq(const volatile void *addr) { unsigned long ret; asm volatile("mov" "q" " %1,%0":"=r" (ret) :"m" (*(volatile unsigned long *)addr) :"memory"); return ret; }
static inline __attribute__((no_instrument_function)) void writeq(unsigned long val, volatile void *addr) { asm volatile("mov" "q" " %0,%1": :"r" (val), "m" (*(volatile unsigned long *)addr) :"memory"); }
# 111 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) phys_addr_t virt_to_phys(volatile void *address)
{
 return __phys_addr_nodebug((unsigned long)(address));
}
# 129 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) void *phys_to_virt(phys_addr_t address)
{
 return ((void *)((unsigned long)(address)+((unsigned long)(0xffff880000000000UL))));
}
# 144 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int isa_virt_to_bus(volatile void *address)
{
 return (unsigned int)virt_to_phys(address);
}
# 174 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
extern void *ioremap_nocache(resource_size_t offset, unsigned long size);
extern void *ioremap_cache(resource_size_t offset, unsigned long size);
extern void *ioremap_prot(resource_size_t offset, unsigned long size,
    unsigned long prot_val);




static inline __attribute__((no_instrument_function)) void *ioremap(resource_size_t offset, unsigned long size)
{
 return ioremap_nocache(offset, size);
}

extern void iounmap(volatile void *addr);

extern void set_iounmap_nonlazy(void);



# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/iomap.h" 1 3 4
# 28 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/iomap.h" 3 4
extern unsigned int ioread8(void *);
extern unsigned int ioread16(void *);
extern unsigned int ioread16be(void *);
extern unsigned int ioread32(void *);
extern unsigned int ioread32be(void *);

extern void iowrite8(u8, void *);
extern void iowrite16(u16, void *);
extern void iowrite16be(u16, void *);
extern void iowrite32(u32, void *);
extern void iowrite32be(u32, void *);
# 51 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/iomap.h" 3 4
extern void ioread8_rep(void *port, void *buf, unsigned long count);
extern void ioread16_rep(void *port, void *buf, unsigned long count);
extern void ioread32_rep(void *port, void *buf, unsigned long count);

extern void iowrite8_rep(void *port, const void *buf, unsigned long count);
extern void iowrite16_rep(void *port, const void *buf, unsigned long count);
extern void iowrite32_rep(void *port, const void *buf, unsigned long count);



extern void *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void *);
# 71 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/iomap.h" 3 4
struct pci_dev;
extern void pci_iounmap(struct pci_dev *dev, void *);






# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/pci_iomap.h" 1 3 4
# 14 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/pci_iomap.h" 3 4
struct pci_dev;


extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);
# 80 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/iomap.h" 2 3 4
# 194 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/vmalloc.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/vmalloc.h" 3 4
struct vm_area_struct;
# 29 "/lib/modules/3.11.0-15-generic/build/include/linux/vmalloc.h" 3 4
struct vm_struct {
 struct vm_struct *next;
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 phys_addr_t phys_addr;
 const void *caller;
};

struct vmap_area {
 unsigned long va_start;
 unsigned long va_end;
 unsigned long flags;
 struct rb_node rb_node;
 struct list_head list;
 struct list_head purge_list;
 struct vm_struct *vm;
 struct callback_head callback_head;
};




extern void vm_unmap_ram(const void *mem, unsigned int count);
extern void *vm_map_ram(struct page **pages, unsigned int count,
    int node, pgprot_t prot);
extern void vm_unmap_aliases(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) vmalloc_init(void);






extern void *vmalloc(unsigned long size);
extern void *vzalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vzalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_node_range(unsigned long size, unsigned long align,
   unsigned long start, unsigned long end, gfp_t gfp_mask,
   pgprot_t prot, int node, const void *caller);
extern void vfree(const void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap(const void *addr);

extern int remap_vmalloc_range_partial(struct vm_area_struct *vma,
           unsigned long uaddr, void *kaddr,
           unsigned long size);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);
void vmalloc_sync_all(void);





static inline __attribute__((no_instrument_function)) size_t get_vm_area_size(const struct vm_struct *area)
{

 return area->size - ((1UL) << 12);
}

extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *get_vm_area_caller(unsigned long size,
     unsigned long flags, const void *caller);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *__get_vm_area_caller(unsigned long size,
     unsigned long flags,
     unsigned long start, unsigned long end,
     const void *caller);
extern struct vm_struct *remove_vm_area(const void *addr);
extern struct vm_struct *find_vm_area(const void *addr);

extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);

extern int map_kernel_range_noflush(unsigned long start, unsigned long size,
        pgprot_t prot, struct page **pages);
extern void unmap_kernel_range_noflush(unsigned long addr, unsigned long size);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);
# 140 "/lib/modules/3.11.0-15-generic/build/include/linux/vmalloc.h" 3 4
extern struct vm_struct *alloc_vm_area(size_t size, pte_t **ptes);
extern void free_vm_area(struct vm_struct *area);


extern long vread(char *buf, char *addr, unsigned long count);
extern long vwrite(char *buf, char *addr, unsigned long count);




extern struct list_head vmap_area_list;
extern __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) void vm_area_add_early(struct vm_struct *vm);
extern __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) void vm_area_register_early(struct vm_struct *vm, size_t align);



struct vm_struct **pcpu_get_vm_areas(const unsigned long *offsets,
         const size_t *sizes, int nr_vms,
         size_t align);

void pcpu_free_vm_areas(struct vm_struct **vms, int nr_vms);
# 177 "/lib/modules/3.11.0-15-generic/build/include/linux/vmalloc.h" 3 4
struct vmalloc_info {
 unsigned long used;
 unsigned long largest_chunk;
};



extern void get_vmalloc_info(struct vmalloc_info *vmi);
# 196 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 2 3 4






static inline __attribute__((no_instrument_function)) void
memset_io(volatile void *addr, unsigned char val, size_t count)
{
 memset((void *)addr, val, count);
}

static inline __attribute__((no_instrument_function)) void
memcpy_fromio(void *dst, const volatile void *src, size_t count)
{
 memcpy(dst, (const void *)src, count);
}

static inline __attribute__((no_instrument_function)) void
memcpy_toio(volatile void *dst, const void *src, size_t count)
{
 memcpy((void *)dst, src, count);
}
# 238 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) void flush_write_buffers(void)
{



}



extern void native_io_delay(void);

extern int io_delay_type;
extern void io_delay_init(void);
# 308 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
static inline __attribute__((no_instrument_function)) void outb(unsigned char value, int port) { asm volatile("out" "b" " %" "b" "0, %w1" : : "a"(value), "Nd"(port)); } static inline __attribute__((no_instrument_function)) unsigned char inb(int port) { unsigned char value; asm volatile("in" "b" " %w1, %" "b" "0" : "=a"(value) : "Nd"(port)); return value; } static inline __attribute__((no_instrument_function)) void outb_p(unsigned char value, int port) { outb(value, port); slow_down_io(); } static inline __attribute__((no_instrument_function)) unsigned char inb_p(int port) { unsigned char value = inb(port); slow_down_io(); return value; } static inline __attribute__((no_instrument_function)) void outsb(int port, const void *addr, unsigned long count) { asm volatile("rep; outs" "b" : "+S"(addr), "+c"(count) : "d"(port)); } static inline __attribute__((no_instrument_function)) void insb(int port, void *addr, unsigned long count) { asm volatile("rep; ins" "b" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline __attribute__((no_instrument_function)) void outw(unsigned short value, int port) { asm volatile("out" "w" " %" "w" "0, %w1" : : "a"(value), "Nd"(port)); } static inline __attribute__((no_instrument_function)) unsigned short inw(int port) { unsigned short value; asm volatile("in" "w" " %w1, %" "w" "0" : "=a"(value) : "Nd"(port)); return value; } static inline __attribute__((no_instrument_function)) void outw_p(unsigned short value, int port) { outw(value, port); slow_down_io(); } static inline __attribute__((no_instrument_function)) unsigned short inw_p(int port) { unsigned short value = inw(port); slow_down_io(); return value; } static inline __attribute__((no_instrument_function)) void outsw(int port, const void *addr, unsigned long count) { asm volatile("rep; outs" "w" : "+S"(addr), "+c"(count) : "d"(port)); } static inline __attribute__((no_instrument_function)) void insw(int port, void *addr, unsigned long count) { asm volatile("rep; ins" "w" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline __attribute__((no_instrument_function)) void outl(unsigned int value, int port) { asm volatile("out" "l" " %" "" "0, %w1" : : "a"(value), "Nd"(port)); } static inline __attribute__((no_instrument_function)) unsigned int inl(int port) { unsigned int value; asm volatile("in" "l" " %w1, %" "" "0" : "=a"(value) : "Nd"(port)); return value; } static inline __attribute__((no_instrument_function)) void outl_p(unsigned int value, int port) { outl(value, port); slow_down_io(); } static inline __attribute__((no_instrument_function)) unsigned int inl_p(int port) { unsigned int value = inl(port); slow_down_io(); return value; } static inline __attribute__((no_instrument_function)) void outsl(int port, const void *addr, unsigned long count) { asm volatile("rep; outs" "l" : "+S"(addr), "+c"(count) : "d"(port)); } static inline __attribute__((no_instrument_function)) void insl(int port, void *addr, unsigned long count) { asm volatile("rep; ins" "l" : "+D"(addr), "+c"(count) : "d"(port)); }

extern void *xlate_dev_mem_ptr(unsigned long phys);
extern void unxlate_dev_mem_ptr(unsigned long phys, void *addr);

extern int ioremap_change_attr(unsigned long vaddr, unsigned long size,
    unsigned long prot_val);
extern void *ioremap_wc(resource_size_t offset, unsigned long size);






extern void early_ioremap_init(void);
extern void early_ioremap_reset(void);
extern void *early_ioremap(resource_size_t phys_addr,
       unsigned long size);
extern void *early_memremap(resource_size_t phys_addr,
        unsigned long size);
extern void early_iounmap(void *addr, unsigned long size);
extern void fixup_early_ioremap(void);
extern bool is_early_ioremap_ptep(pte_t *ptep);


# 1 "/lib/modules/3.11.0-15-generic/build/include/xen/xen.h" 1 3 4



enum xen_domain_type {
 XEN_NATIVE,
 XEN_PV_DOMAIN,
 XEN_HVM_DOMAIN,
};


extern enum xen_domain_type xen_domain_type;
# 23 "/lib/modules/3.11.0-15-generic/build/include/xen/xen.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface.h" 1 3 4
# 53 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface.h" 3 4
typedef unsigned long xen_pfn_t;

typedef unsigned long xen_ulong_t;


typedef unsigned char * __guest_handle_uchar;
typedef unsigned int * __guest_handle_uint;
typedef char * __guest_handle_char;
typedef int * __guest_handle_int;
typedef void * __guest_handle_void;
typedef uint64_t * __guest_handle_uint64_t;
typedef uint32_t * __guest_handle_uint32_t;
typedef xen_pfn_t * __guest_handle_xen_pfn_t;
typedef xen_ulong_t * __guest_handle_xen_ulong_t;
# 109 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface.h" 3 4
struct trap_info {
    uint8_t vector;
    uint8_t flags;
    uint16_t cs;
    unsigned long address;
};
typedef struct trap_info * __guest_handle_trap_info;

struct arch_shared_info {
    unsigned long max_pfn;

    unsigned long pfn_to_mfn_frame_list_list;
    unsigned long nmi_reason;
};





# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface_64.h" 1 3 4
# 81 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface_64.h" 3 4
struct iret_context {

    uint64_t rax, r11, rcx, flags, rip, cs, rflags, rsp, ss;

};
# 98 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface_64.h" 3 4
struct cpu_user_regs {
    uint64_t r15;
    uint64_t r14;
    uint64_t r13;
    uint64_t r12;
    union { uint64_t rbp, ebp; uint32_t _ebp; };
    union { uint64_t rbx, ebx; uint32_t _ebx; };
    uint64_t r11;
    uint64_t r10;
    uint64_t r9;
    uint64_t r8;
    union { uint64_t rax, eax; uint32_t _eax; };
    union { uint64_t rcx, ecx; uint32_t _ecx; };
    union { uint64_t rdx, edx; uint32_t _edx; };
    union { uint64_t rsi, esi; uint32_t _esi; };
    union { uint64_t rdi, edi; uint32_t _edi; };
    uint32_t error_code;
    uint32_t entry_vector;
    union { uint64_t rip, eip; uint32_t _eip; };
    uint16_t cs, _pad0[1];
    uint8_t saved_upcall_mask;
    uint8_t _pad1[3];
    union { uint64_t rflags, eflags; uint32_t _eflags; };
    union { uint64_t rsp, esp; uint32_t _esp; };
    uint16_t ss, _pad2[3];
    uint16_t es, _pad3[3];
    uint16_t ds, _pad4[3];
    uint16_t fs, _pad5[3];
    uint16_t gs, _pad6[3];
};
typedef struct cpu_user_regs * __guest_handle_cpu_user_regs;






struct arch_vcpu_info {
    unsigned long cr2;
    unsigned long pad;
};

typedef unsigned long xen_callback_t;
# 129 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pvclock-abi.h" 1 3 4
# 25 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pvclock-abi.h" 3 4
struct pvclock_vcpu_time_info {
 u32 version;
 u32 pad0;
 u64 tsc_timestamp;
 u64 system_time;
 u32 tsc_to_system_mul;
 s8 tsc_shift;
 u8 flags;
 u8 pad[2];
} __attribute__((__packed__));

struct pvclock_wall_clock {
 u32 version;
 u32 sec;
 u32 nsec;
} __attribute__((__packed__));
# 132 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/interface.h" 2 3 4






struct vcpu_guest_context {

    struct { char x[512]; } fpu_ctxt;



    unsigned long flags;
    struct cpu_user_regs user_regs;
    struct trap_info trap_ctxt[256];
    unsigned long ldt_base, ldt_ents;
    unsigned long gdt_frames[16], gdt_ents;
    unsigned long kernel_ss, kernel_sp;

    unsigned long ctrlreg[8];
    unsigned long debugreg[8];






    unsigned long event_callback_eip;
    unsigned long failsafe_callback_eip;
    unsigned long syscall_callback_eip;

    unsigned long vm_assist;


    uint64_t fs_base;
    uint64_t gs_base_kernel;
    uint64_t gs_base_user;

};
typedef struct vcpu_guest_context * __guest_handle_vcpu_guest_context;
# 13 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 2 3 4
# 188 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
struct mmuext_op {
 unsigned int cmd;
 union {

  xen_pfn_t mfn;

  unsigned long linear_addr;
 } arg1;
 union {

  unsigned int nr_ents;

  void *vcpumask;
 } arg2;
};
typedef struct mmuext_op * __guest_handle_mmuext_op;
# 236 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
typedef uint16_t domid_t;
# 267 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
struct mmu_update {
    uint64_t ptr;
    uint64_t val;
};
typedef struct mmu_update * __guest_handle_mmu_update;





struct multicall_entry {
    unsigned long op;
    long result;
    unsigned long args[6];
};
typedef struct multicall_entry * __guest_handle_multicall_entry;







struct vcpu_time_info {
# 301 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
 uint32_t version;
 uint32_t pad0;
 uint64_t tsc_timestamp;
 uint64_t system_time;






 uint32_t tsc_to_system_mul;
 int8_t tsc_shift;
 int8_t pad1[3];
};

struct vcpu_info {
# 342 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
 uint8_t evtchn_upcall_pending;
 uint8_t evtchn_upcall_mask;
 xen_ulong_t evtchn_pending_sel;
 struct arch_vcpu_info arch;
 struct pvclock_vcpu_time_info time;
};





struct shared_info {
 struct vcpu_info vcpu_info[32];
# 387 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
 xen_ulong_t evtchn_pending[sizeof(xen_ulong_t) * 8];
 xen_ulong_t evtchn_mask[sizeof(xen_ulong_t) * 8];





 struct pvclock_wall_clock wc;

 struct arch_shared_info arch;

};
# 426 "/lib/modules/3.11.0-15-generic/build/include/xen/interface/xen.h" 3 4
struct start_info {

 char magic[32];
 unsigned long nr_pages;
 unsigned long shared_info;
 uint32_t flags;
 xen_pfn_t store_mfn;
 uint32_t store_evtchn;
 union {
  struct {
   xen_pfn_t mfn;
   uint32_t evtchn;
  } domU;
  struct {
   uint32_t info_off;
   uint32_t info_size;
  } dom0;
 } console;

 unsigned long pt_base;
 unsigned long nr_pt_frames;
 unsigned long mfn_list;
 unsigned long mod_start;
 unsigned long mod_len;
 int8_t cmd_line[1024];
};

struct dom0_vga_console_info {
 uint8_t video_type;




 union {
  struct {

   uint16_t font_height;

   uint16_t cursor_x, cursor_y;

   uint16_t rows, columns;
  } text_mode_3;

  struct {

   uint16_t width, height;

   uint16_t bytes_per_line;

   uint16_t bits_per_pixel;

   uint32_t lfb_base;
   uint32_t lfb_size;

   uint8_t red_pos, red_size;
   uint8_t green_pos, green_size;
   uint8_t blue_pos, blue_size;
   uint8_t rsvd_pos, rsvd_size;


   uint32_t gbl_caps;

   uint16_t mode_attrs;
  } vesa_lfb;
 } u;
};






typedef uint64_t cpumap_t;

typedef uint8_t xen_domain_handle_t[16];







struct tmem_op {
 uint32_t cmd;
 int32_t pool_id;
 union {
  struct {
   uint64_t uuid[2];
   uint32_t flags;
  } new;
  struct {
   uint64_t oid[3];
   uint32_t index;
   uint32_t tmem_offset;
   uint32_t pfn_offset;
   uint32_t len;
   __guest_handle_void gmfn;
  } gen;
 } u;
};

typedef u64 * __guest_handle_u64;
# 24 "/lib/modules/3.11.0-15-generic/build/include/xen/xen.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/hypervisor.h" 1 3 4
# 36 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/xen/hypervisor.h" 3 4
extern struct shared_info *HYPERVISOR_shared_info;
extern struct start_info *xen_start_info;



static inline __attribute__((no_instrument_function)) uint32_t xen_cpuid_base(void)
{
 uint32_t base, eax, ebx, ecx, edx;
 char signature[13];

 for (base = 0x40000000; base < 0x40010000; base += 0x100) {
  cpuid(base, &eax, &ebx, &ecx, &edx);
  *(uint32_t *)(signature + 0) = ebx;
  *(uint32_t *)(signature + 4) = ecx;
  *(uint32_t *)(signature + 8) = edx;
  signature[12] = 0;

  if (!strcmp("XenVMMXenVMM", signature) && ((eax - base) >= 2))
   return base;
 }

 return 0;
}


extern bool xen_hvm_need_lapic(void);

static inline __attribute__((no_instrument_function)) bool xen_x2apic_para_available(void)
{
 return xen_hvm_need_lapic();
}
# 25 "/lib/modules/3.11.0-15-generic/build/include/xen/xen.h" 2 3 4
# 336 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 2 3 4
struct bio_vec;

extern bool xen_biovec_phys_mergeable(const struct bio_vec *vec1,
          const struct bio_vec *vec2);
# 349 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io.h" 3 4
extern int arch_phys_wc_add(unsigned long base,
      unsigned long size);
extern void arch_phys_wc_del(int handle);
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/realmode.h" 2 3 4


struct real_mode_header {
 u32 text_start;
 u32 ro_end;

 u32 trampoline_start;
 u32 trampoline_status;
 u32 trampoline_header;

 u32 trampoline_pgd;



 u32 wakeup_start;
 u32 wakeup_header;


 u32 machine_real_restart_asm;

 u32 machine_real_restart_seg;

};


struct trampoline_header {






 u64 start;
 u64 efer;
 u32 cr4;

};

extern struct real_mode_header *real_mode_header;
extern unsigned char real_mode_blob_end[];

extern unsigned long init_rsp;
extern unsigned long initial_code;
extern unsigned long initial_gs;

extern unsigned char real_mode_blob[];
extern unsigned char real_mode_relocs[];





extern unsigned char secondary_startup_64[];


void reserve_real_mode(void);
void setup_real_mode(void);
# 33 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 2 3 4
# 54 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 3 4
int __acpi_acquire_global_lock(unsigned int *lock);
int __acpi_release_global_lock(unsigned int *lock);
# 80 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 3 4
extern int acpi_lapic;
extern int acpi_ioapic;
extern int acpi_noirq;
extern int acpi_strict;
extern int acpi_disabled;
extern int acpi_pci_disabled;
extern int acpi_skip_timer_override;
extern int acpi_use_timer_override;
extern int acpi_fix_pin2_polarity;

extern u8 acpi_sci_flags;
extern int acpi_sci_override_gsi;
void acpi_pic_sci_set_trigger(unsigned int, u16);

extern int (*__acpi_register_gsi)(struct device *dev, u32 gsi,
      int trigger, int polarity);

static inline __attribute__((no_instrument_function)) void disable_acpi(void)
{
 acpi_disabled = 1;
 acpi_pci_disabled = 1;
 acpi_noirq = 1;
}

extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);

static inline __attribute__((no_instrument_function)) void acpi_noirq_set(void) { acpi_noirq = 1; }
static inline __attribute__((no_instrument_function)) void acpi_disable_pci(void)
{
 acpi_pci_disabled = 1;
 acpi_noirq_set();
}


extern int (*acpi_suspend_lowlevel)(void);







static inline __attribute__((no_instrument_function)) unsigned int acpi_processor_cstate_check(unsigned int max_cstate)
{






 if (boot_cpu_data.x86 == 0x0F &&
     boot_cpu_data.x86_vendor == 2 &&
     boot_cpu_data.x86_model <= 0x05 &&
     boot_cpu_data.x86_mask < 0x0A)
  return 1;
 else if (amd_e400_c1e_detected)
  return 1;
 else
  return max_cstate;
}

static inline __attribute__((no_instrument_function)) bool arch_has_acpi_pdc(void)
{
 struct cpuinfo_x86 *c = &(*({ do { const void *__vpp_verify = (typeof((&(cpu_info))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_info))) *)(&(cpu_info)))); (typeof((typeof(*(&(cpu_info))) *)(&(cpu_info)))) (__ptr + (((__per_cpu_offset[0])))); }); }));
 return (c->x86_vendor == 0 ||
  c->x86_vendor == 5);
}

static inline __attribute__((no_instrument_function)) void arch_acpi_set_pdc_bits(u32 *buf)
{
 struct cpuinfo_x86 *c = &(*({ do { const void *__vpp_verify = (typeof((&(cpu_info))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_info))) *)(&(cpu_info)))); (typeof((typeof(*(&(cpu_info))) *)(&(cpu_info)))) (__ptr + (((__per_cpu_offset[0])))); }); }));

 buf[2] |= ((0x0010) | (0x0008) | (0x0002) | (0x0100) | (0x0200));

 if ((__builtin_constant_p((4*32+ 7)) && ( ((((4*32+ 7))>>5)==0 && (1UL<<(((4*32+ 7))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+ 7))>>5)==1 && (1UL<<(((4*32+ 7))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+ 7))>>5)==2 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==3 && (1UL<<(((4*32+ 7))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+ 7))>>5)==4 && (1UL<<(((4*32+ 7))&31) & (0))) || ((((4*32+ 7))>>5)==5 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==6 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==7 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==8 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==9 && (1UL<<(((4*32+ 7))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+ 7))) ? constant_test_bit(((4*32+ 7)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((4*32+ 7)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] |= ((0x0008) | (0x0002) | (0x0020) | (0x0800) | (0x0001));

 if ((__builtin_constant_p((0*32+22)) && ( ((((0*32+22))>>5)==0 && (1UL<<(((0*32+22))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+22))>>5)==1 && (1UL<<(((0*32+22))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+22))>>5)==2 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==3 && (1UL<<(((0*32+22))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+22))>>5)==4 && (1UL<<(((0*32+22))&31) & (0))) || ((((0*32+22))>>5)==5 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==6 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==7 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==8 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==9 && (1UL<<(((0*32+22))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+22))) ? constant_test_bit(((0*32+22)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((0*32+22)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] |= (0x0004);




 if (!(__builtin_constant_p((4*32+ 3)) && ( ((((4*32+ 3))>>5)==0 && (1UL<<(((4*32+ 3))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+ 3))>>5)==1 && (1UL<<(((4*32+ 3))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+ 3))>>5)==2 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==3 && (1UL<<(((4*32+ 3))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+ 3))>>5)==4 && (1UL<<(((4*32+ 3))&31) & (0))) || ((((4*32+ 3))>>5)==5 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==6 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==7 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==8 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==9 && (1UL<<(((4*32+ 3))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+ 3))) ? constant_test_bit(((4*32+ 3)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((4*32+ 3)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] &= ~((0x0200));
}
# 180 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/acpi.h" 3 4
extern int acpi_numa;
extern int x86_acpi_numa_init(void);
# 20 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pvclock.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 1 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
typedef u64 cycle_t;
struct clocksource;
struct module;


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/clocksource.h" 1 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/clocksource.h" 3 4
struct arch_clocksource_data {
 int vclock_mode;
};
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 2 3 4
# 44 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
struct cyclecounter {
 cycle_t (*read)(const struct cyclecounter *cc);
 cycle_t mask;
 u32 mult;
 u32 shift;
};
# 67 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
struct timecounter {
 const struct cyclecounter *cc;
 cycle_t cycle_last;
 u64 nsec;
};
# 81 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
static inline __attribute__((no_instrument_function)) u64 cyclecounter_cyc2ns(const struct cyclecounter *cc,
          cycle_t cycles)
{
 u64 ret = (u64)cycles;
 ret = (ret * cc->mult) >> cc->shift;
 return ret;
}
# 99 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
extern void timecounter_init(struct timecounter *tc,
        const struct cyclecounter *cc,
        u64 start_tstamp);
# 111 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
extern u64 timecounter_read(struct timecounter *tc);
# 127 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
extern u64 timecounter_cyc2time(struct timecounter *tc,
    cycle_t cycle_tstamp);
# 168 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
struct clocksource {




 cycle_t (*read)(struct clocksource *cs);
 cycle_t cycle_last;
 cycle_t mask;
 u32 mult;
 u32 shift;
 u64 max_idle_ns;
 u32 maxadj;

 struct arch_clocksource_data archdata;


 const char *name;
 struct list_head list;
 int rating;
 int (*enable)(struct clocksource *cs);
 void (*disable)(struct clocksource *cs);
 unsigned long flags;
 void (*suspend)(struct clocksource *cs);
 void (*resume)(struct clocksource *cs);




 struct list_head wd_list;
 cycle_t cs_last;
 cycle_t wd_last;

 struct module *owner;
} __attribute__((__aligned__((1 << (6)))));
# 226 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
static inline __attribute__((no_instrument_function)) u32 clocksource_khz2mult(u32 khz, u32 shift_constant)
{







 u64 tmp = ((u64)1000000) << shift_constant;

 tmp += khz/2;
 ({ uint32_t __base = (khz); uint32_t __rem; __rem = ((uint64_t)(tmp)) % __base; (tmp) = ((uint64_t)(tmp)) / __base; __rem; });

 return (u32)tmp;
}
# 252 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
static inline __attribute__((no_instrument_function)) u32 clocksource_hz2mult(u32 hz, u32 shift_constant)
{







 u64 tmp = ((u64)1000000000) << shift_constant;

 tmp += hz/2;
 ({ uint32_t __base = (hz); uint32_t __rem; __rem = ((uint64_t)(tmp)) % __base; (tmp) = ((uint64_t)(tmp)) / __base; __rem; });

 return (u32)tmp;
}
# 279 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
static inline __attribute__((no_instrument_function)) s64 clocksource_cyc2ns(cycle_t cycles, u32 mult, u32 shift)
{
 return ((u64) cycles * mult) >> shift;
}


extern int clocksource_register(struct clocksource*);
extern int clocksource_unregister(struct clocksource*);
extern void clocksource_touch_watchdog(void);
extern struct clocksource* clocksource_get_next(void);
extern void clocksource_change_rating(struct clocksource *cs, int rating);
extern void clocksource_suspend(void);
extern void clocksource_resume(void);
extern struct clocksource * __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) __attribute__((weak)) clocksource_default_clock(void);
extern void clocksource_mark_unstable(struct clocksource *cs);

extern void
clocks_calc_mult_shift(u32 *mult, u32 *shift, u32 from, u32 to, u32 minsec);





extern int
__clocksource_register_scale(struct clocksource *cs, u32 scale, u32 freq);
extern void
__clocksource_updatefreq_scale(struct clocksource *cs, u32 scale, u32 freq);

static inline __attribute__((no_instrument_function)) int clocksource_register_hz(struct clocksource *cs, u32 hz)
{
 return __clocksource_register_scale(cs, 1, hz);
}

static inline __attribute__((no_instrument_function)) int clocksource_register_khz(struct clocksource *cs, u32 khz)
{
 return __clocksource_register_scale(cs, 1000, khz);
}

static inline __attribute__((no_instrument_function)) void __clocksource_updatefreq_hz(struct clocksource *cs, u32 hz)
{
 __clocksource_updatefreq_scale(cs, 1, hz);
}

static inline __attribute__((no_instrument_function)) void __clocksource_updatefreq_khz(struct clocksource *cs, u32 khz)
{
 __clocksource_updatefreq_scale(cs, 1000, khz);
}


extern int timekeeping_notify(struct clocksource *clock);

extern cycle_t clocksource_mmio_readl_up(struct clocksource *);
extern cycle_t clocksource_mmio_readl_down(struct clocksource *);
extern cycle_t clocksource_mmio_readw_up(struct clocksource *);
extern cycle_t clocksource_mmio_readw_down(struct clocksource *);

extern int clocksource_mmio_init(void *, const char *,
 unsigned long, int, unsigned, cycle_t (*)(struct clocksource *));

extern int clocksource_i8253_init(void);

struct device_node;
typedef void(*clocksource_of_init_fn)(struct device_node *);
# 351 "/lib/modules/3.11.0-15-generic/build/include/linux/clocksource.h" 3 4
static inline __attribute__((no_instrument_function)) void clocksource_of_init(void) {}
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pvclock.h" 2 3 4



cycle_t pvclock_clocksource_read(struct pvclock_vcpu_time_info *src);
u8 pvclock_read_flags(struct pvclock_vcpu_time_info *src);
void pvclock_set_flags(u8 flags);
unsigned long pvclock_tsc_khz(struct pvclock_vcpu_time_info *src);
void pvclock_read_wallclock(struct pvclock_wall_clock *wall,
       struct pvclock_vcpu_time_info *vcpu,
       struct timespec *ts);
void pvclock_resume(void);





static inline __attribute__((no_instrument_function)) u64 pvclock_scale_delta(u64 delta, u32 mul_frac, int shift)
{
 u64 product;



 ulong tmp;


 if (shift < 0)
  delta >>= -shift;
 else
  delta <<= shift;
# 47 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/pvclock.h" 3 4
 __asm__ (
  "mulq %[mul_frac] ; shrd $32, %[hi], %[lo]"
  : [lo]"=a"(product),
    [hi]"=d"(tmp)
  : "0"(delta),
    [mul_frac]"rm"((u64)mul_frac));




 return product;
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline))
u64 pvclock_get_nsec_offset(const struct pvclock_vcpu_time_info *src)
{
 u64 delta = __native_read_tsc() - src->tsc_timestamp;
 return pvclock_scale_delta(delta, src->tsc_to_system_mul,
       src->tsc_shift);
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline))
unsigned __pvclock_read_cycles(const struct pvclock_vcpu_time_info *src,
          cycle_t *cycles, u8 *flags)
{
 unsigned version;
 cycle_t ret, offset;
 u8 ret_flags;

 version = src->version;






 rdtsc_barrier();
 offset = pvclock_get_nsec_offset(src);
 ret = src->system_time + offset;
 ret_flags = src->flags;
 rdtsc_barrier();

 *cycles = ret;
 *flags = ret_flags;
 return version;
}

struct pvclock_vsyscall_time_info {
 struct pvclock_vcpu_time_info pvti;
 u32 migrate_count;
} __attribute__((__aligned__((1 << (6)))));




int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pvclock_init_vsyscall(struct pvclock_vsyscall_time_info *i,
     int size);
struct pvclock_vcpu_time_info *pvclock_get_vsyscall_time_info(int cpu);
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 2 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vsyscall.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/vsyscall.h" 1 3 4



enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
 __NR_vgetcpu,
};
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vsyscall.h" 2 3 4





extern int vgetcpu_mode;
extern struct timezone sys_tz;

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vvar.h" 1 3 4
# 46 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vvar.h" 3 4
static volatile unsigned long const * const vvaraddr_jiffies = (void *)((-10*1024*1024 - 4096) + (0));
static int const * const vvaraddr_vgetcpu_mode = (void *)((-10*1024*1024 - 4096) + (16));
static struct vsyscall_gtod_data const * const vvaraddr_vsyscall_gtod_data = (void *)((-10*1024*1024 - 4096) + (128));
# 15 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/vsyscall.h" 2 3 4

extern void map_vsyscall(void);





extern bool emulate_vsyscall(struct pt_regs *regs, unsigned long address);





static inline __attribute__((no_instrument_function)) unsigned int __getcpu(void)
{
 unsigned int p;

 if ((*vvaraddr_vgetcpu_mode) == 1) {

  native_read_tscp(&p);
 } else {

  asm("lsl %1,%0" : "=r" (p) : "r" ((15 * 8 + 3)));
 }

 return p;
}
# 28 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 2 3 4
# 74 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 3 4
enum fixed_addresses {




 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE
       + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VVAR_PAGE,
 VSYSCALL_HPET,

 PVCLOCK_FIXMAP_BEGIN,
 PVCLOCK_FIXMAP_END = PVCLOCK_FIXMAP_BEGIN+(((256 -1)/(((1UL) << 12)/sizeof(struct pvclock_vsyscall_time_info)))+1)-1,


 FIX_DBGP_BASE,
 FIX_EARLYCON_MEM_BASE,




 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 - 1,







 FIX_RO_IDT,
# 116 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 3 4
 FIX_PARAVIRT_BOOTMAP,

 FIX_TEXT_POKE1,
 FIX_TEXT_POKE0,



 __end_of_permanent_fixed_addresses,
# 135 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 3 4
 FIX_BTMAP_END =
  (__end_of_permanent_fixed_addresses ^
   (__end_of_permanent_fixed_addresses + (64 * 4) - 1)) &
  -512
  ? __end_of_permanent_fixed_addresses + (64 * 4) -
    (__end_of_permanent_fixed_addresses & ((64 * 4) - 1))
  : __end_of_permanent_fixed_addresses,
 FIX_BTMAP_BEGIN = FIX_BTMAP_END + (64 * 4) - 1,




 FIX_TBOOT_BASE,

 __end_of_fixed_addresses
};


extern void reserve_top_address(unsigned long reserve);






extern int fixmaps_set;

extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;

void __native_set_fixmap(enum fixed_addresses idx, pte_t pte);
void native_set_fixmap(enum fixed_addresses idx,
         phys_addr_t phys, pgprot_t flags);
# 193 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 3 4
extern void __this_fixmap_does_not_exist(void);






static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) unsigned long fix_to_virt(const unsigned int idx)
{
# 211 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h" 3 4
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

 return (((-2UL << 20)-((1UL) << 12)) - ((idx) << 12));
}

static inline __attribute__((no_instrument_function)) unsigned long virt_to_fix(const unsigned long vaddr)
{
 do { if (__builtin_expect(!!(vaddr >= ((-2UL << 20)-((1UL) << 12)) || vaddr < (((-2UL << 20)-((1UL) << 12)) - (__end_of_permanent_fixed_addresses << 12))), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/fixmap.h"), "i" (219), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 return ((((-2UL << 20)-((1UL) << 12)) - ((vaddr)&(~(((1UL) << 12)-1)))) >> 12);
}


static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) unsigned long
__set_fixmap_offset(enum fixed_addresses idx, phys_addr_t phys, pgprot_t flags)
{
 __set_fixmap(idx, phys, flags);
 return fix_to_virt(idx) + (phys & (((1UL) << 12) - 1));
}
# 13 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/idle.h" 1 3 4






struct notifier_block;
void idle_notifier_register(struct notifier_block *n);
void idle_notifier_unregister(struct notifier_block *n);


void enter_idle(void);
void exit_idle(void);






void amd_e400_remove_cpu(int cpu);
# 16 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 2 3 4
# 41 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
static inline __attribute__((no_instrument_function)) void generic_apic_probe(void)
{
}




extern unsigned int apic_verbosity;
extern int local_apic_timer_c2_ok;

extern int disable_apic;
extern unsigned int lapic_timer_frequency;


extern void __inquire_remote_apic(int apicid);






static inline __attribute__((no_instrument_function)) void default_inquire_remote_apic(int apicid)
{
 if (apic_verbosity >= 2)
  __inquire_remote_apic(apicid);
}
# 76 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
static inline __attribute__((no_instrument_function)) bool apic_from_smp_config(void)
{
 return smp_found_config && !disable_apic;
}
# 89 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
extern int is_vsmp_box(void);






extern void xapic_wait_icr_idle(void);
extern u32 safe_xapic_wait_icr_idle(void);
extern void xapic_icr_write(u32, u32);
extern int setup_profiling_timer(unsigned int);

static inline __attribute__((no_instrument_function)) void native_apic_mem_write(u32 reg, u32 v)
{
 volatile u32 *addr = (volatile u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg);

 asm volatile ("661:\n\t" "movl %0, %1" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+19)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "xchgl %0, %1" "\n" "664""1" ":\n\t" ".popsection" : "=r" (v), "=m" (*addr) : "i" (0), "0" (v), "m" (*addr))

                                           ;
}

static inline __attribute__((no_instrument_function)) u32 native_apic_mem_read(u32 reg)
{
 return *((volatile u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg));
}

extern void native_apic_wait_icr_idle(void);
extern u32 native_safe_apic_wait_icr_idle(void);
extern void native_apic_icr_write(u32 low, u32 id);
extern u64 native_apic_icr_read(void);

extern int x2apic_mode;







static inline __attribute__((no_instrument_function)) void x2apic_wrmsr_fence(void)
{
 asm volatile("mfence" : : : "memory");
}

static inline __attribute__((no_instrument_function)) void native_apic_msr_write(u32 reg, u32 v)
{
 if (reg == 0xE0 || reg == 0x20 || reg == 0xD0 ||
     reg == 0x30)
  return;

 do { paravirt_write_msr(0x800 + (reg >> 4), v, 0); } while (0);
}

static inline __attribute__((no_instrument_function)) void native_apic_msr_eoi_write(u32 reg, u32 v)
{
 do { paravirt_write_msr(0x800 + (0xB0 >> 4), 0x0, 0); } while (0);
}

static inline __attribute__((no_instrument_function)) u32 native_apic_msr_read(u32 reg)
{
 u64 msr;

 if (reg == 0xE0)
  return -1;

 do { int _err; msr = paravirt_read_msr(0x800 + (reg >> 4), &_err); } while (0);
 return (u32)msr;
}

static inline __attribute__((no_instrument_function)) void native_x2apic_wait_icr_idle(void)
{

 return;
}

static inline __attribute__((no_instrument_function)) u32 native_safe_x2apic_wait_icr_idle(void)
{

 return 0;
}

static inline __attribute__((no_instrument_function)) void native_x2apic_icr_write(u32 low, u32 id)
{
 do { paravirt_write_msr(0x800 + (0x300 >> 4), (u32)((u64)(((__u64) id) << 32 | low)), ((u64)(((__u64) id) << 32 | low))>>32); } while (0);
}

static inline __attribute__((no_instrument_function)) u64 native_x2apic_icr_read(void)
{
 unsigned long val;

 do { int _err; val = paravirt_read_msr(0x800 + (0x300 >> 4), &_err); } while (0);
 return val;
}

extern int x2apic_phys;
extern int x2apic_preenabled;
extern void check_x2apic(void);
extern void enable_x2apic(void);
extern void x2apic_icr_write(u32 low, u32 id);
static inline __attribute__((no_instrument_function)) int x2apic_enabled(void)
{
 u64 msr;

 if (!(__builtin_constant_p((4*32+21)) && ( ((((4*32+21))>>5)==0 && (1UL<<(((4*32+21))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+21))>>5)==1 && (1UL<<(((4*32+21))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+21))>>5)==2 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==3 && (1UL<<(((4*32+21))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+21))>>5)==4 && (1UL<<(((4*32+21))&31) & (0))) || ((((4*32+21))>>5)==5 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==6 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==7 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==8 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==9 && (1UL<<(((4*32+21))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+21))) ? constant_test_bit(((4*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((4*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return 0;

 do { int _err; msr = paravirt_read_msr(0x0000001b, &_err); } while (0);
 if (msr & (1UL << 10))
  return 1;
 return 0;
}


static inline __attribute__((no_instrument_function)) void x2apic_force_phys(void)
{
 x2apic_phys = 1;
}
# 229 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
extern void enable_IR_x2apic(void);

extern int get_physical_broadcast(void);

extern int lapic_get_maxlvt(void);
extern void clear_local_APIC(void);
extern void connect_bsp_APIC(void);
extern void disconnect_bsp_APIC(int virt_wire_setup);
extern void disable_local_APIC(void);
extern void lapic_shutdown(void);
extern int verify_local_APIC(void);
extern void sync_Arb_IDs(void);
extern void init_bsp_APIC(void);
extern void setup_local_APIC(void);
extern void end_local_APIC_setup(void);
extern void bsp_end_local_APIC_setup(void);
extern void init_apic_mappings(void);
void register_lapic_address(unsigned long address);
extern void setup_boot_APIC_clock(void);
extern void setup_secondary_APIC_clock(void);
extern int APIC_init_uniprocessor(void);
extern int apic_force_enable(unsigned long addr);





extern int apic_is_clustered_box(void);







extern int setup_APIC_eilvt(u8 lvt_off, u8 vector, u8 msg_type, u8 mask);
# 291 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
struct apic {
 char *name;

 int (*probe)(void);
 int (*acpi_madt_oem_check)(char *oem_id, char *oem_table_id);
 int (*apic_id_valid)(int apicid);
 int (*apic_id_registered)(void);

 u32 irq_delivery_mode;
 u32 irq_dest_mode;

 const struct cpumask *(*target_cpus)(void);

 int disable_esr;

 int dest_logical;
 unsigned long (*check_apicid_used)(physid_mask_t *map, int apicid);
 unsigned long (*check_apicid_present)(int apicid);

 void (*vector_allocation_domain)(int cpu, struct cpumask *retmask,
      const struct cpumask *mask);
 void (*init_apic_ldr)(void);

 void (*ioapic_phys_id_map)(physid_mask_t *phys_map, physid_mask_t *retmap);

 void (*setup_apic_routing)(void);
 int (*multi_timer_check)(int apic, int irq);
 int (*cpu_present_to_apicid)(int mps_cpu);
 void (*apicid_to_cpu_present)(int phys_apicid, physid_mask_t *retmap);
 void (*setup_portio_remap)(void);
 int (*check_phys_apicid_present)(int phys_apicid);
 void (*enable_apic_mode)(void);
 int (*phys_pkg_id)(int cpuid_apic, int index_msb);






 int (*mps_oem_check)(struct mpc_table *mpc, char *oem, char *productid);

 unsigned int (*get_apic_id)(unsigned long x);
 unsigned long (*set_apic_id)(unsigned int id);
 unsigned long apic_id_mask;

 int (*cpu_mask_to_apicid_and)(const struct cpumask *cpumask,
          const struct cpumask *andmask,
          unsigned int *apicid);


 void (*send_IPI_mask)(const struct cpumask *mask, int vector);
 void (*send_IPI_mask_allbutself)(const struct cpumask *mask,
      int vector);
 void (*send_IPI_allbutself)(int vector);
 void (*send_IPI_all)(int vector);
 void (*send_IPI_self)(int vector);


 int (*wakeup_secondary_cpu)(int apicid, unsigned long start_eip);

 int trampoline_phys_low;
 int trampoline_phys_high;

 void (*wait_for_init_deassert)(atomic_t *deassert);
 void (*smp_callin_clear_local_apic)(void);
 void (*inquire_remote_apic)(int apicid);


 u32 (*read)(u32 reg);
 void (*write)(u32 reg, u32 v);







 void (*eoi_write)(u32 reg, u32 v);
 u64 (*icr_read)(void);
 void (*icr_write)(u32 low, u32 high);
 void (*wait_icr_idle)(void);
 u32 (*safe_wait_icr_idle)(void);
# 395 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
};






extern struct apic *apic;
# 422 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
extern struct apic *__apicdrivers[], *__apicdrivers_end[];





extern atomic_t init_deasserted;
extern int wakeup_secondary_cpu_via_nmi(int apicid, unsigned long start_eip);




static inline __attribute__((no_instrument_function)) u32 apic_read(u32 reg)
{
 return apic->read(reg);
}

static inline __attribute__((no_instrument_function)) void apic_write(u32 reg, u32 val)
{
 apic->write(reg, val);
}

static inline __attribute__((no_instrument_function)) void apic_eoi(void)
{
 apic->eoi_write(0xB0, 0x0);
}

static inline __attribute__((no_instrument_function)) u64 apic_icr_read(void)
{
 return apic->icr_read();
}

static inline __attribute__((no_instrument_function)) void apic_icr_write(u32 low, u32 high)
{
 apic->icr_write(low, high);
}

static inline __attribute__((no_instrument_function)) void apic_wait_icr_idle(void)
{
 apic->wait_icr_idle();
}

static inline __attribute__((no_instrument_function)) u32 safe_apic_wait_icr_idle(void)
{
 return apic->safe_wait_icr_idle();
}

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) apic_set_eoi_write(void (*eoi_write)(u32 reg, u32 v));
# 484 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
static inline __attribute__((no_instrument_function)) void ack_APIC_irq(void)
{




 apic_eoi();
}

static inline __attribute__((no_instrument_function)) unsigned default_get_apic_id(unsigned long x)
{
 unsigned int ver = ((apic_read(0x30)) & 0xFFu);

 if (((ver) >= 0x14) || (__builtin_constant_p((3*32+26)) && ( ((((3*32+26))>>5)==0 && (1UL<<(((3*32+26))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((3*32+26))>>5)==1 && (1UL<<(((3*32+26))&31) & ((1<<((1*32+29) & 31))|0))) || ((((3*32+26))>>5)==2 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==3 && (1UL<<(((3*32+26))&31) & ((1<<((3*32+20) & 31))))) || ((((3*32+26))>>5)==4 && (1UL<<(((3*32+26))&31) & (0))) || ((((3*32+26))>>5)==5 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==6 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==7 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==8 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==9 && (1UL<<(((3*32+26))&31) & 0)) ) ? 1 : (__builtin_constant_p(((3*32+26))) ? constant_test_bit(((3*32+26)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((3*32+26)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return (x >> 24) & 0xFF;
 else
  return (x >> 24) & 0x0F;
}
# 510 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
extern int default_acpi_madt_oem_check(char *, char *);

extern void apic_send_IPI_self(int vector);

extern __attribute__((section(".data..percpu" ""))) __typeof__(int) x2apic_extra_bits;

extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);


static inline __attribute__((no_instrument_function)) void default_wait_for_init_deassert(atomic_t *deassert)
{
 while (!atomic_read(deassert))
  cpu_relax();
 return;
}

extern void generic_bigsmp_probe(void);




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 1 3 4
# 533 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 2 3 4



static inline __attribute__((no_instrument_function)) const struct cpumask *default_target_cpus(void)
{

 return cpu_online_mask;



}

static inline __attribute__((no_instrument_function)) const struct cpumask *online_target_cpus(void)
{
 return cpu_online_mask;
}

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];


static inline __attribute__((no_instrument_function)) unsigned int read_apic_id(void)
{
 unsigned int reg;

 reg = apic_read(0x20);

 return apic->get_apic_id(reg);
}

static inline __attribute__((no_instrument_function)) int default_apic_id_valid(int apicid)
{
 return (apicid < 255);
}

extern void default_setup_apic_routing(void);

extern struct apic apic_noop;
# 599 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
static inline __attribute__((no_instrument_function)) int
flat_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
       const struct cpumask *andmask,
       unsigned int *apicid)
{
 unsigned long cpu_mask = ((cpumask)->bits)[0] &
     ((andmask)->bits)[0] &
     ((cpu_online_mask)->bits)[0] &
     0xFFu;

 if (__builtin_expect(!!(cpu_mask), 1)) {
  *apicid = (unsigned int)cpu_mask;
  return 0;
 } else {
  return -22;
 }
}

extern int
default_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
          const struct cpumask *andmask,
          unsigned int *apicid);

static inline __attribute__((no_instrument_function)) void
flat_vector_allocation_domain(int cpu, struct cpumask *retmask,
         const struct cpumask *mask)
{
# 634 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
 cpumask_clear(retmask);
 ((retmask)->bits)[0] = 0xFFu;
}

static inline __attribute__((no_instrument_function)) void
default_vector_allocation_domain(int cpu, struct cpumask *retmask,
     const struct cpumask *mask)
{
 cpumask_copy(retmask, (get_cpu_mask(cpu)));
}

static inline __attribute__((no_instrument_function)) unsigned long default_check_apicid_used(physid_mask_t *map, int apicid)
{
 return (__builtin_constant_p((apicid)) ? constant_test_bit((apicid), ((*map).mask)) : variable_test_bit((apicid), ((*map).mask)));
}

static inline __attribute__((no_instrument_function)) unsigned long default_check_apicid_present(int bit)
{
 return (__builtin_constant_p((bit)) ? constant_test_bit((bit), ((phys_cpu_present_map).mask)) : variable_test_bit((bit), ((phys_cpu_present_map).mask)));
}

static inline __attribute__((no_instrument_function)) void default_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
{
 *retmap = *phys_map;
}

static inline __attribute__((no_instrument_function)) int __default_cpu_present_to_apicid(int mps_cpu)
{
 if (mps_cpu < nr_cpu_ids && (__builtin_constant_p((cpumask_check((mps_cpu)))) ? constant_test_bit((cpumask_check((mps_cpu))), ((((cpu_present_mask))->bits))) : variable_test_bit((cpumask_check((mps_cpu))), ((((cpu_present_mask))->bits)))))
  return (int)(*({ do { const void *__vpp_verify = (typeof((&(x86_bios_cpu_apicid))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(x86_bios_cpu_apicid))) *)(&(x86_bios_cpu_apicid)))); (typeof((typeof(*(&(x86_bios_cpu_apicid))) *)(&(x86_bios_cpu_apicid)))) (__ptr + (((__per_cpu_offset[mps_cpu])))); }); }));
 else
  return 0xFFFFu;
}

static inline __attribute__((no_instrument_function)) int
__default_check_phys_apicid_present(int phys_apicid)
{
 return (__builtin_constant_p((phys_apicid)) ? constant_test_bit((phys_apicid), ((phys_cpu_present_map).mask)) : variable_test_bit((phys_apicid), ((phys_cpu_present_map).mask)));
}
# 686 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/apic.h" 3 4
extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);



extern void irq_enter(void);
extern void irq_exit(void);

static inline __attribute__((no_instrument_function)) void entering_irq(void)
{
 irq_enter();
 exit_idle();
}

static inline __attribute__((no_instrument_function)) void entering_ack_irq(void)
{
 ack_APIC_irq();
 entering_irq();
}

static inline __attribute__((no_instrument_function)) void exiting_irq(void)
{
 irq_exit();
}

static inline __attribute__((no_instrument_function)) void exiting_ack_irq(void)
{
 irq_exit();

 ack_APIC_irq();
}
# 14 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io_apic.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/irq_vectors.h" 1 3 4
# 135 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/irq_vectors.h" 3 4
static inline __attribute__((no_instrument_function)) int invalid_vm86_irq(int irq)
{
 return irq < 3 || irq > 15;
}
# 8 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io_apic.h" 2 3 4
# 27 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io_apic.h" 3 4
union IO_APIC_reg_00 {
 u32 raw;
 struct {
  u32 __reserved_2 : 14,
   LTS : 1,
   delivery_type : 1,
   __reserved_1 : 8,
   ID : 8;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_01 {
 u32 raw;
 struct {
  u32 version : 8,
   __reserved_2 : 7,
   PRQ : 1,
   entries : 8,
   __reserved_1 : 8;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_02 {
 u32 raw;
 struct {
  u32 __reserved_2 : 24,
   arbitration : 4,
   __reserved_1 : 4;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_03 {
 u32 raw;
 struct {
  u32 boot_DT : 1,
   __reserved_1 : 31;
 } __attribute__ ((packed)) bits;
};

struct IO_APIC_route_entry {
 __u32 vector : 8,
  delivery_mode : 3,



  dest_mode : 1,
  delivery_status : 1,
  polarity : 1,
  irr : 1,
  trigger : 1,
  mask : 1,
  __reserved_2 : 15;

 __u32 __reserved_3 : 24,
  dest : 8;
} __attribute__ ((packed));

struct IR_IO_APIC_route_entry {
 __u64 vector : 8,
  zero : 3,
  index2 : 1,
  delivery_status : 1,
  polarity : 1,
  irr : 1,
  trigger : 1,
  mask : 1,
  reserved : 31,
  format : 1,
  index : 15;
} __attribute__ ((packed));
# 107 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io_apic.h" 3 4
extern int nr_ioapics;

extern int mpc_ioapic_id(int ioapic);
extern unsigned int mpc_ioapic_addr(int ioapic);
extern struct mp_ioapic_gsi *mp_ioapic_gsi_routing(int ioapic);




extern int mp_irq_entries;


extern struct mpc_intsrc mp_irqs[(256 * 4)];


extern int mpc_default_type;


extern int sis_apic_bug;


extern int skip_ioapic_setup;


extern int noioapicquirk;


extern int noioapicreroute;


extern int timer_through_8259;
# 146 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/io_apic.h" 3 4
struct io_apic_irq_attr;
struct irq_cfg;
extern int io_apic_set_pci_routing(struct device *dev, int irq,
   struct io_apic_irq_attr *irq_attr);
void setup_IO_APIC_irq_extra(u32 gsi);
extern void ioapic_insert_resources(void);

extern int native_setup_ioapic_entry(int, struct IO_APIC_route_entry *,
         unsigned int, int,
         struct io_apic_irq_attr *);
extern int native_setup_ioapic_entry(int, struct IO_APIC_route_entry *,
         unsigned int, int,
         struct io_apic_irq_attr *);
extern void eoi_ioapic_irq(unsigned int irq, struct irq_cfg *cfg);

extern void native_compose_msi_msg(struct pci_dev *pdev,
       unsigned int irq, unsigned int dest,
       struct msi_msg *msg, u8 hpet_id);
extern void native_eoi_ioapic_pin(int apic, int pin, int vector);
int io_apic_setup_irq_pin_once(unsigned int irq, int node, struct io_apic_irq_attr *attr);

extern int save_ioapic_entries(void);
extern void mask_ioapic_entries(void);
extern int restore_ioapic_entries(void);

extern int get_nr_irqs_gsi(void);

extern void setup_ioapic_ids_from_mpc(void);
extern void setup_ioapic_ids_from_mpc_nocheck(void);

struct mp_ioapic_gsi{
 u32 gsi_base;
 u32 gsi_end;
};
extern struct mp_ioapic_gsi mp_gsi_routing[];
extern u32 gsi_top;
int mp_find_ioapic(u32 gsi);
int mp_find_ioapic_pin(int ioapic, u32 gsi);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pre_init_apic_IRQ0(void);

extern void mp_save_irq(struct mpc_intsrc *m);

extern void disable_ioapic_support(void);

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) native_io_apic_init_mappings(void);
extern unsigned int native_io_apic_read(unsigned int apic, unsigned int reg);
extern void native_io_apic_write(unsigned int apic, unsigned int reg, unsigned int val);
extern void native_io_apic_modify(unsigned int apic, unsigned int reg, unsigned int val);
extern void native_disable_io_apic(void);
extern void native_io_apic_print_entries(unsigned int apic, unsigned int nr_entries);
extern void intel_ir_io_apic_print_entries(unsigned int apic, unsigned int nr_entries);
extern int native_ioapic_set_affinity(struct irq_data *,
          const struct cpumask *,
          bool);

static inline __attribute__((no_instrument_function)) unsigned int io_apic_read(unsigned int apic, unsigned int reg)
{
 return x86_io_apic_ops.read(apic, reg);
}

static inline __attribute__((no_instrument_function)) void io_apic_write(unsigned int apic, unsigned int reg, unsigned int value)
{
 x86_io_apic_ops.write(apic, reg, value);
}
static inline __attribute__((no_instrument_function)) void io_apic_modify(unsigned int apic, unsigned int reg, unsigned int value)
{
 x86_io_apic_ops.modify(apic, reg, value);
}

extern void io_apic_eoi(unsigned int apic, unsigned int vector);
# 16 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 2 3 4






extern int smp_num_siblings;
extern unsigned int num_processors;

static inline __attribute__((no_instrument_function)) bool cpu_has_ht_siblings(void)
{
 bool has_siblings = false;

 has_siblings = (__builtin_constant_p((0*32+28)) && ( ((((0*32+28))>>5)==0 && (1UL<<(((0*32+28))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+28))>>5)==1 && (1UL<<(((0*32+28))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+28))>>5)==2 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==3 && (1UL<<(((0*32+28))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+28))>>5)==4 && (1UL<<(((0*32+28))&31) & (0))) || ((((0*32+28))>>5)==5 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==6 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==7 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==8 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==9 && (1UL<<(((0*32+28))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+28))) ? constant_test_bit(((0*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((0*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))) && smp_num_siblings > 1;

 return has_siblings;
}

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(cpumask_var_t) cpu_sibling_map;
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(cpumask_var_t) cpu_core_map;

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(cpumask_var_t) cpu_llc_shared_map;
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) cpu_llc_id;
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(int) cpu_number;

static inline __attribute__((no_instrument_function)) struct cpumask *cpu_sibling_mask(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(cpu_sibling_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_sibling_map))) *)(&(cpu_sibling_map)))); (typeof((typeof(*(&(cpu_sibling_map))) *)(&(cpu_sibling_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

static inline __attribute__((no_instrument_function)) struct cpumask *cpu_core_mask(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(cpu_core_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_core_map))) *)(&(cpu_core_map)))); (typeof((typeof(*(&(cpu_core_map))) *)(&(cpu_core_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

static inline __attribute__((no_instrument_function)) struct cpumask *cpu_llc_shared_mask(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(cpu_llc_shared_map))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_llc_shared_map))) *)(&(cpu_llc_shared_map)))); (typeof((typeof(*(&(cpu_llc_shared_map))) *)(&(cpu_llc_shared_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) x86_cpu_to_apicid; extern __typeof__(u16) *x86_cpu_to_apicid_early_ptr; extern __typeof__(u16) x86_cpu_to_apicid_early_map[];
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];





extern unsigned long stack_start;

struct task_struct;

struct smp_ops {
 void (*smp_prepare_boot_cpu)(void);
 void (*smp_prepare_cpus)(unsigned max_cpus);
 void (*smp_cpus_done)(unsigned max_cpus);

 void (*stop_other_cpus)(int wait);
 void (*smp_send_reschedule)(int cpu);

 int (*cpu_up)(unsigned cpu, struct task_struct *tidle);
 int (*cpu_disable)(void);
 void (*cpu_die)(unsigned int cpu);
 void (*play_dead)(void);

 void (*send_call_func_ipi)(const struct cpumask *mask);
 void (*send_call_func_single_ipi)(int cpu);
};


extern void set_cpu_sibling_map(int cpu);





extern struct smp_ops smp_ops;

static inline __attribute__((no_instrument_function)) void smp_send_stop(void)
{
 smp_ops.stop_other_cpus(0);
}

static inline __attribute__((no_instrument_function)) void stop_other_cpus(void)
{
 smp_ops.stop_other_cpus(1);
}

static inline __attribute__((no_instrument_function)) void smp_prepare_boot_cpu(void)
{
 smp_ops.smp_prepare_boot_cpu();
}

static inline __attribute__((no_instrument_function)) void smp_prepare_cpus(unsigned int max_cpus)
{
 smp_ops.smp_prepare_cpus(max_cpus);
}

static inline __attribute__((no_instrument_function)) void smp_cpus_done(unsigned int max_cpus)
{
 smp_ops.smp_cpus_done(max_cpus);
}

static inline __attribute__((no_instrument_function)) int __cpu_up(unsigned int cpu, struct task_struct *tidle)
{
 return smp_ops.cpu_up(cpu, tidle);
}

static inline __attribute__((no_instrument_function)) int __cpu_disable(void)
{
 return smp_ops.cpu_disable();
}

static inline __attribute__((no_instrument_function)) void __cpu_die(unsigned int cpu)
{
 smp_ops.cpu_die(cpu);
}

static inline __attribute__((no_instrument_function)) void play_dead(void)
{
 smp_ops.play_dead();
}

static inline __attribute__((no_instrument_function)) void smp_send_reschedule(int cpu)
{
 smp_ops.smp_send_reschedule(cpu);
}

static inline __attribute__((no_instrument_function)) void arch_send_call_function_single_ipi(int cpu)
{
 smp_ops.send_call_func_single_ipi(cpu);
}

static inline __attribute__((no_instrument_function)) void arch_send_call_function_ipi_mask(const struct cpumask *mask)
{
 smp_ops.send_call_func_ipi(mask);
}

void cpu_disable_common(void);
void native_smp_prepare_boot_cpu(void);
void native_smp_prepare_cpus(unsigned int max_cpus);
void native_smp_cpus_done(unsigned int max_cpus);
int native_cpu_up(unsigned int cpunum, struct task_struct *tidle);
int native_cpu_disable(void);
void native_cpu_die(unsigned int cpu);
void native_play_dead(void);
void play_dead_common(void);
void wbinvd_on_cpu(int cpu);
int wbinvd_on_all_cpus(void);

void native_send_call_func_ipi(const struct cpumask *mask);
void native_send_call_func_single_ipi(int cpu);
void x86_idle_thread_init(unsigned int cpu, struct task_struct *idle);

void smp_store_boot_cpu_info(void);
void smp_store_cpu_info(int id);
# 182 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 3 4
extern unsigned disabled_cpus;
# 217 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/smp.h" 3 4
extern int hard_smp_processor_id(void);
# 38 "/lib/modules/3.11.0-15-generic/build/include/linux/smp.h" 2 3 4
# 47 "/lib/modules/3.11.0-15-generic/build/include/linux/smp.h" 3 4
extern void smp_send_stop(void);




extern void smp_send_reschedule(int cpu);





extern void smp_prepare_cpus(unsigned int max_cpus);




extern int __cpu_up(unsigned int cpunum, struct task_struct *tidle);




extern void smp_cpus_done(unsigned int max_cpus);




int smp_call_function(smp_call_func_t func, void *info, int wait);
void smp_call_function_many(const struct cpumask *mask,
       smp_call_func_t func, void *info, bool wait);

void __smp_call_function_single(int cpuid, struct call_single_data *data,
    int wait);

int smp_call_function_any(const struct cpumask *mask,
     smp_call_func_t func, void *info, int wait);

void kick_all_cpus_sync(void);





void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) call_function_init(void);
void generic_smp_call_function_single_interrupt(void);
# 100 "/lib/modules/3.11.0-15-generic/build/include/linux/smp.h" 3 4
int on_each_cpu(smp_call_func_t func, void *info, int wait);





void on_each_cpu_mask(const struct cpumask *mask, smp_call_func_t func,
  void *info, bool wait);






void on_each_cpu_cond(bool (*cond_func)(int cpu, void *info),
  smp_call_func_t func, void *info, bool wait,
  gfp_t gfp_flags);





void smp_prepare_boot_cpu(void);

extern unsigned int setup_max_cpus;
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) setup_nr_cpu_ids(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) smp_init(void);
# 226 "/lib/modules/3.11.0-15-generic/build/include/linux/smp.h" 3 4
extern void arch_disable_smp_support(void);

void smp_setup_processor_id(void);
# 31 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/sem.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sem.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/ipc.h" 1 3 4





# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/ipc.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/ipc.h" 3 4
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "/usr/include/x86_64-linux-gnu/asm/ipcbuf.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/ipcbuf.h" 1 3 4
# 19 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/ipcbuf.h" 3 4
struct ipc64_perm {
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;

 unsigned char __pad1[4 - sizeof(__kernel_mode_t)];
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 1 "/usr/include/x86_64-linux-gnu/asm/ipcbuf.h" 2 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/ipc.h" 2 3 4
# 57 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/ipc.h" 3 4
struct ipc_kludge {
 struct msgbuf *msgp;
 long msgtyp;
};
# 7 "/lib/modules/3.11.0-15-generic/build/include/linux/ipc.h" 2 3 4




struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 int id;
 key_t key;
 kuid_t uid;
 kgid_t gid;
 kuid_t cuid;
 kgid_t cgid;
 umode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sem.h" 2 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sem.h" 3 4
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "/usr/include/x86_64-linux-gnu/asm/sembuf.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/asm/sembuf.h" 3 4
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sem.h" 2 3 4


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/sem.h" 2 3 4

struct task_struct;


struct sem_array {
 struct kern_ipc_perm __attribute__((__aligned__((1 << (6)))))
    sem_perm;
 time_t sem_ctime;
 struct sem *sem_base;
 struct list_head pending_alter;

 struct list_head pending_const;

 struct list_head list_id;
 int sem_nsems;
 int complex_count;
};



struct sysv_sem {
 struct sem_undo_list *undo_list;
};

extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 32 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/signal.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/signal.h" 1 3 4
# 20 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/signal.h" 3 4
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;






# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/signal.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/signal.h" 3 4
struct siginfo;
# 93 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/signal.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/signal-defs.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/signal-defs.h" 3 4
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 94 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/signal.h" 2 3 4
# 127 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/signal.h" 3 4
typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;
# 32 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/signal.h" 2 3 4

extern void do_notify_resume(struct pt_regs *, void *, __u32);
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/siginfo.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/siginfo.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/siginfo.h" 1 3 4






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 48 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/siginfo.h" 3 4
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (4 * sizeof(int))) / sizeof(int))];


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
  } _kill;


  struct {
   __kernel_timer_t _tid;
   int _overrun;
   char _pad[sizeof( __kernel_uid32_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
   int _status;
   __kernel_clock_t _utime;
   __kernel_clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



   short _addr_lsb;
  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;


  struct {
   void *_call_addr;
   int _syscall;
   unsigned int _arch;
  } _sigsys;
 } _sifields;
} siginfo_t;
# 278 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/siginfo.h" 3 4
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;
# 5 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/siginfo.h" 2 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/siginfo.h" 3 4
struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline __attribute__((no_instrument_function)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, (4 * sizeof(int)) + sizeof(from->_sifields._sigchld));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 9 "/usr/include/x86_64-linux-gnu/asm/siginfo.h" 2 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/signal.h" 2 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 2 3 4

struct task_struct;


extern int print_fatal_signals;




struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 39 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
static inline __attribute__((no_instrument_function)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 64] |= 1UL << (sig % 64);
}

static inline __attribute__((no_instrument_function)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 64] &= ~(1UL << (sig % 64));
}

static inline __attribute__((no_instrument_function)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 64] >> (sig % 64));
}

static inline __attribute__((no_instrument_function)) int sigfindinword(unsigned long word)
{
 return ffz(~word);
}



static inline __attribute__((no_instrument_function)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 64)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 120 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
static inline __attribute__((no_instrument_function)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((no_instrument_function)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((no_instrument_function)) void sigandnsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 150 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
static inline __attribute__((no_instrument_function)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 64)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline __attribute__((no_instrument_function)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline __attribute__((no_instrument_function)) void sigfillset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline __attribute__((no_instrument_function)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline __attribute__((no_instrument_function)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline __attribute__((no_instrument_function)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline __attribute__((no_instrument_function)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline __attribute__((no_instrument_function)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline __attribute__((no_instrument_function)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline __attribute__((no_instrument_function)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

struct timespec;
struct pt_regs;

extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int do_send_sig_info(int sig, struct siginfo *info,
    struct task_struct *p, bool group);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern int do_sigtimedwait(const sigset_t *, siginfo_t *,
    const struct timespec *);
extern int sigprocmask(int, sigset_t *, sigset_t *);
extern void set_current_blocked(sigset_t *);
extern void __set_current_blocked(const sigset_t *);
extern int show_unhandled_signals;
extern int sigsuspend(sigset_t *);

struct sigaction {

 __sighandler_t sa_handler;
 unsigned long sa_flags;





 __sigrestore_t sa_restorer;

 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;



};
# 282 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
struct ksignal {
 struct k_sigaction ka;
 siginfo_t info;
 int sig;
};

extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
extern void signal_setup_done(int failed, struct ksignal *ksig, int stepping);
extern void signal_delivered(int sig, siginfo_t *info, struct k_sigaction *ka, struct pt_regs *regs, int stepping);
extern void exit_signals(struct task_struct *tsk);
# 305 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
extern struct kmem_cache *sighand_cachep;

int unhandled_signal(struct task_struct *tsk, int sig);
# 432 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
void signals_init(void);

int restore_altstack(const stack_t *);
int __save_altstack(stack_t *, unsigned long);
# 446 "/lib/modules/3.11.0-15-generic/build/include/linux/signal.h" 3 4
struct seq_file;
extern void render_sigset_t(struct seq_file *, const char *, sigset_t *);
# 33 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/pid.h" 1 3 4





enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/pid.h" 3 4
struct upid {

 int nr;
 struct pid_namespace *ns;
 struct hlist_node pid_chain;
};

struct pid
{
 atomic_t count;
 unsigned int level;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct callback_head rcu;
 struct upid numbers[1];
};

extern struct pid init_struct_pid;

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline __attribute__((no_instrument_function)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  atomic_inc(&pid->count);
 return pid;
}

extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);




extern void attach_pid(struct task_struct *task, enum pid_type);
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void change_pid(struct task_struct *task, enum pid_type,
   struct pid *pid);
extern void transfer_pid(struct task_struct *old, struct task_struct *new,
    enum pid_type);

struct pid_namespace;
extern struct pid_namespace init_pid_ns;
# 110 "/lib/modules/3.11.0-15-generic/build/include/linux/pid.h" 3 4
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);




extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);
int next_pidmap(struct pid_namespace *pid_ns, unsigned int last);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
extern void disable_pid_allocation(struct pid_namespace *ns);
# 134 "/lib/modules/3.11.0-15-generic/build/include/linux/pid.h" 3 4
static inline __attribute__((no_instrument_function)) struct pid_namespace *ns_of_pid(struct pid *pid)
{
 struct pid_namespace *ns = ((void *)0);
 if (pid)
  ns = pid->numbers[pid->level].ns;
 return ns;
}







static inline __attribute__((no_instrument_function)) bool is_child_reaper(struct pid *pid)
{
 return pid->numbers[pid->level].nr == 1;
}
# 164 "/lib/modules/3.11.0-15-generic/build/include/linux/pid.h" 3 4
static inline __attribute__((no_instrument_function)) pid_t pid_nr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[0].nr;
 return nr;
}

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);
pid_t pid_vnr(struct pid *pid);
# 36 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/pfn.h" 1 3 4
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu.h" 2 3 4
# 81 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu.h" 3 4
extern void *pcpu_base_addr;
extern const unsigned long *pcpu_unit_offsets;

struct pcpu_group_info {
 int nr_units;
 unsigned long base_offset;
 unsigned int *cpu_map;

};

struct pcpu_alloc_info {
 size_t static_size;
 size_t reserved_size;
 size_t dyn_size;
 size_t unit_size;
 size_t atom_size;
 size_t alloc_size;
 size_t __ai_size;
 int nr_groups;
 struct pcpu_group_info groups[];
};

enum pcpu_fc {
 PCPU_FC_AUTO,
 PCPU_FC_EMBED,
 PCPU_FC_PAGE,

 PCPU_FC_NR,
};
extern const char * const pcpu_fc_names[PCPU_FC_NR];

extern enum pcpu_fc pcpu_chosen_fc;

typedef void * (*pcpu_fc_alloc_fn_t)(unsigned int cpu, size_t size,
         size_t align);
typedef void (*pcpu_fc_free_fn_t)(void *ptr, size_t size);
typedef void (*pcpu_fc_populate_pte_fn_t)(unsigned long addr);
typedef int (pcpu_fc_cpu_distance_fn_t)(unsigned int from, unsigned int to);

extern struct pcpu_alloc_info * __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_alloc_alloc_info(int nr_groups,
            int nr_units);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_free_alloc_info(struct pcpu_alloc_info *ai);

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_setup_first_chunk(const struct pcpu_alloc_info *ai,
      void *base_addr);


extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_embed_first_chunk(size_t reserved_size, size_t dyn_size,
    size_t atom_size,
    pcpu_fc_cpu_distance_fn_t cpu_distance_fn,
    pcpu_fc_alloc_fn_t alloc_fn,
    pcpu_fc_free_fn_t free_fn);



extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) pcpu_page_first_chunk(size_t reserved_size,
    pcpu_fc_alloc_fn_t alloc_fn,
    pcpu_fc_free_fn_t free_fn,
    pcpu_fc_populate_pte_fn_t populate_pte_fn);
# 153 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu.h" 3 4
extern void *__alloc_reserved_percpu(size_t size, size_t align);
extern bool is_kernel_percpu_address(unsigned long addr);




extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) percpu_init_late(void);

extern void *__alloc_percpu(size_t size, size_t align);
extern void free_percpu(void *__pdata);
extern phys_addr_t per_cpu_ptr_to_phys(void *addr);
# 173 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu.h" 3 4
extern void __bad_size_call_parameter(void);
# 37 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/topology.h" 1 3 4
# 32 "/lib/modules/3.11.0-15-generic/build/include/linux/topology.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/pageblock-flags.h" 1 3 4
# 29 "/lib/modules/3.11.0-15-generic/build/include/linux/pageblock-flags.h" 3 4
enum pageblock_bits {
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,


 PB_migrate_skip,

 NR_PAGEBLOCK_BITS
};
# 63 "/lib/modules/3.11.0-15-generic/build/include/linux/pageblock-flags.h" 3 4
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 2 3 4
# 38 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
enum {
 MIGRATE_UNMOVABLE,
 MIGRATE_RECLAIMABLE,
 MIGRATE_MOVABLE,
 MIGRATE_PCPTYPES,
 MIGRATE_RESERVE = MIGRATE_PCPTYPES,
# 61 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 MIGRATE_ISOLATE,

 MIGRATE_TYPES
};
# 76 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
extern int page_group_by_mobility_disabled;

static inline __attribute__((no_instrument_function)) int get_pageblock_migratetype(struct page *page)
{
 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[MIGRATE_TYPES];
 unsigned long nr_free;
};

struct pglist_data;
# 97 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct zone_padding {
 char x[0];
} __attribute__((__aligned__(1 << (6))));





enum zone_stat_item {

 NR_FREE_PAGES,
 NR_LRU_BASE,
 NR_INACTIVE_ANON = NR_LRU_BASE,
 NR_ACTIVE_ANON,
 NR_INACTIVE_FILE,
 NR_ACTIVE_FILE,
 NR_UNEVICTABLE,
 NR_MLOCK,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_KERNEL_STACK,

 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_VMSCAN_IMMEDIATE,
 NR_WRITEBACK_TEMP,
 NR_ISOLATED_ANON,
 NR_ISOLATED_FILE,
 NR_SHMEM,
 NR_DIRTIED,
 NR_WRITTEN,

 NUMA_HIT,
 NUMA_MISS,
 NUMA_FOREIGN,
 NUMA_INTERLEAVE_HIT,
 NUMA_LOCAL,
 NUMA_OTHER,

 NR_ANON_TRANSPARENT_HUGEPAGES,
 NR_FREE_CMA_PAGES,
 NR_VM_ZONE_STAT_ITEMS };
# 161 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
enum lru_list {
 LRU_INACTIVE_ANON = 0,
 LRU_ACTIVE_ANON = 0 + 1,
 LRU_INACTIVE_FILE = 0 + 2,
 LRU_ACTIVE_FILE = 0 + 2 + 1,
 LRU_UNEVICTABLE,
 NR_LRU_LISTS
};





static inline __attribute__((no_instrument_function)) int is_file_lru(enum lru_list lru)
{
 return (lru == LRU_INACTIVE_FILE || lru == LRU_ACTIVE_FILE);
}

static inline __attribute__((no_instrument_function)) int is_active_lru(enum lru_list lru)
{
 return (lru == LRU_ACTIVE_ANON || lru == LRU_ACTIVE_FILE);
}

static inline __attribute__((no_instrument_function)) int is_unevictable_lru(enum lru_list lru)
{
 return (lru == LRU_UNEVICTABLE);
}

struct zone_reclaim_stat {
# 198 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 unsigned long recent_rotated[2];
 unsigned long recent_scanned[2];
};

struct lruvec {
 struct list_head lists[NR_LRU_LISTS];
 struct zone_reclaim_stat reclaim_stat;

 struct zone *zone;

};
# 225 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
typedef unsigned isolate_mode_t;

enum zone_watermarks {
 WMARK_MIN,
 WMARK_LOW,
 WMARK_HIGH,
 NR_WMARK
};





struct per_cpu_pages {
 int count;
 int high;
 int batch;


 struct list_head lists[MIGRATE_PCPTYPES];
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;

 s8 expire;


 s8 stat_threshold;
 s8 vm_stat_diff[NR_VM_ZONE_STAT_ITEMS];

};



enum zone_type {
# 280 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 ZONE_DMA,







 ZONE_DMA32,






 ZONE_NORMAL,
# 307 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};



struct zone {



 unsigned long watermark[NR_WMARK];






 unsigned long percpu_drift_mark;
# 334 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 unsigned long lowmem_reserve[4];





 unsigned long dirty_balance_reserve;


 int node;



 unsigned long min_unmapped_pages;
 unsigned long min_slab_pages;

 struct per_cpu_pageset *pageset;



 spinlock_t lock;
 int all_unreclaimable;


 bool compact_blockskip_flush;


 unsigned long compact_cached_free_pfn;
 unsigned long compact_cached_migrate_pfn;



 seqlock_t span_seqlock;

 struct free_area free_area[11];
# 384 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 unsigned int compact_considered;
 unsigned int compact_defer_shift;
 int compact_order_failed;


 struct zone_padding _pad1_;


 spinlock_t lru_lock;
 struct lruvec lruvec;

 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];





 unsigned int inactive_ratio;


 struct zone_padding _pad2_;
# 435 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 488 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 unsigned long spanned_pages;
 unsigned long present_pages;
 unsigned long managed_pages;




 const char *name;
} __attribute__((__aligned__(1 << (6))));

typedef enum {
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
 ZONE_CONGESTED,


 ZONE_TAIL_LRU_DIRTY,



 ZONE_WRITEBACK,


} zone_flags_t;

static inline __attribute__((no_instrument_function)) void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline __attribute__((no_instrument_function)) int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline __attribute__((no_instrument_function)) void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline __attribute__((no_instrument_function)) int zone_is_reclaim_congested(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_CONGESTED)) ? constant_test_bit((ZONE_CONGESTED), (&zone->flags)) : variable_test_bit((ZONE_CONGESTED), (&zone->flags)));
}

static inline __attribute__((no_instrument_function)) int zone_is_reclaim_dirty(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_TAIL_LRU_DIRTY)) ? constant_test_bit((ZONE_TAIL_LRU_DIRTY), (&zone->flags)) : variable_test_bit((ZONE_TAIL_LRU_DIRTY), (&zone->flags)));
}

static inline __attribute__((no_instrument_function)) int zone_is_reclaim_writeback(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_WRITEBACK)) ? constant_test_bit((ZONE_WRITEBACK), (&zone->flags)) : variable_test_bit((ZONE_WRITEBACK), (&zone->flags)));
}

static inline __attribute__((no_instrument_function)) int zone_is_reclaim_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_RECLAIM_LOCKED)) ? constant_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)));
}

static inline __attribute__((no_instrument_function)) int zone_is_oom_locked(const struct zone *zone)
{
 return (__builtin_constant_p((ZONE_OOM_LOCKED)) ? constant_test_bit((ZONE_OOM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED), (&zone->flags)));
}

static inline __attribute__((no_instrument_function)) unsigned long zone_end_pfn(const struct zone *zone)
{
 return zone->zone_start_pfn + zone->spanned_pages;
}

static inline __attribute__((no_instrument_function)) bool zone_spans_pfn(const struct zone *zone, unsigned long pfn)
{
 return zone->zone_start_pfn <= pfn && pfn < zone_end_pfn(zone);
}

static inline __attribute__((no_instrument_function)) bool zone_is_initialized(struct zone *zone)
{
 return !!zone->wait_table;
}

static inline __attribute__((no_instrument_function)) bool zone_is_empty(struct zone *zone)
{
 return zone->spanned_pages == 0;
}
# 654 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct zonelist_cache {
 unsigned short z_to_n[((1 << 6) * 4)];
 unsigned long fullzones[(((((1 << 6) * 4)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
 unsigned long last_full_zap;
};
# 668 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct zoneref {
 struct zone *zone;
 int zone_idx;
};
# 690 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 6) * 4) + 1];

 struct zonelist_cache zlcache;

};


struct node_active_region {
 unsigned long start_pfn;
 unsigned long end_pfn;
 int nid;
};




extern struct page *mem_map;
# 722 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[2];
 int nr_zones;
# 747 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 spinlock_t node_size_lock;

 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 nodemask_t reclaim_nodes;
 wait_queue_head_t kswapd_wait;
 wait_queue_head_t pfmemalloc_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
 enum zone_type classzone_idx;





 spinlock_t numabalancing_migrate_lock;


 unsigned long numabalancing_migrate_next_window;


 unsigned long numabalancing_migrate_nr_pages;

} pg_data_t;
# 787 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long pgdat_end_pfn(pg_data_t *pgdat)
{
 return pgdat->node_start_pfn + pgdat->node_spanned_pages;
}

static inline __attribute__((no_instrument_function)) bool pgdat_is_empty(pg_data_t *pgdat)
{
 return !pgdat->node_start_pfn && !pgdat->node_spanned_pages;
}

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/memory_hotplug.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/memory_hotplug.h" 2 3 4




struct page;
struct zone;
struct pglist_data;
struct mem_section;
struct memory_block;







enum {
 MEMORY_HOTPLUG_MIN_BOOTMEM_TYPE = 12,
 SECTION_INFO = MEMORY_HOTPLUG_MIN_BOOTMEM_TYPE,
 MIX_SECTION_INFO,
 NODE_INFO,
 MEMORY_HOTPLUG_MAX_BOOTMEM_TYPE = NODE_INFO,
};


enum {
 ONLINE_KEEP,
 ONLINE_KERNEL,
 ONLINE_MOVABLE,
};




static inline __attribute__((no_instrument_function))
void pgdat_resize_lock(struct pglist_data *pgdat, unsigned long *flags)
{
 do { do { ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); *flags = _raw_spin_lock_irqsave(spinlock_check(&pgdat->node_size_lock)); } while (0); } while (0);
}
static inline __attribute__((no_instrument_function))
void pgdat_resize_unlock(struct pglist_data *pgdat, unsigned long *flags)
{
 spin_unlock_irqrestore(&pgdat->node_size_lock, *flags);
}
static inline __attribute__((no_instrument_function))
void pgdat_resize_init(struct pglist_data *pgdat)
{
 do { spinlock_check(&pgdat->node_size_lock); do { *(&(&pgdat->node_size_lock)->rlock) = (raw_spinlock_t) { .raw_lock = { { 0 } }, }; } while (0); } while (0);
}







static inline __attribute__((no_instrument_function)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return read_seqbegin(&zone->span_seqlock);
}
static inline __attribute__((no_instrument_function)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return read_seqretry(&zone->span_seqlock, iv);
}
static inline __attribute__((no_instrument_function)) void zone_span_writelock(struct zone *zone)
{
 write_seqlock(&zone->span_seqlock);
}
static inline __attribute__((no_instrument_function)) void zone_span_writeunlock(struct zone *zone)
{
 write_sequnlock(&zone->span_seqlock);
}
static inline __attribute__((no_instrument_function)) void zone_seqlock_init(struct zone *zone)
{
 do { do { *(&(&zone->span_seqlock)->seqcount) = (seqcount_t) { 0 }; } while (0); do { spinlock_check(&(&zone->span_seqlock)->lock); do { *(&(&(&zone->span_seqlock)->lock)->rlock) = (raw_spinlock_t) { .raw_lock = { { 0 } }, }; } while (0); } while (0); } while (0);
}
extern int zone_grow_free_lists(struct zone *zone, unsigned long new_nr_pages);
extern int zone_grow_waitqueues(struct zone *zone, unsigned long nr_pages);
extern int add_one_highpage(struct page *page, int pfn, int bad_ppro);

extern int online_pages(unsigned long, unsigned long, int);
extern void __offline_isolated_pages(unsigned long, unsigned long);

typedef void (*online_page_callback_t)(struct page *page);

extern int set_online_page_callback(online_page_callback_t callback);
extern int restore_online_page_callback(online_page_callback_t callback);

extern void __online_page_set_limits(struct page *page);
extern void __online_page_increment_counters(struct page *page);
extern void __online_page_free(struct page *page);


extern bool is_pageblock_removable_nolock(struct page *page);
extern int arch_remove_memory(u64 start, u64 size);
extern int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages);



extern int __add_pages(int nid, struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages);


extern int memory_add_physaddr_to_nid(u64 start);
# 154 "/lib/modules/3.11.0-15-generic/build/include/linux/memory_hotplug.h" 3 4
extern pg_data_t *node_data[];
static inline __attribute__((no_instrument_function)) void arch_refresh_nodedata(int nid, pg_data_t *pgdat)
{
 node_data[nid] = pgdat;
}
# 178 "/lib/modules/3.11.0-15-generic/build/include/linux/memory_hotplug.h" 3 4
extern void register_page_bootmem_info_node(struct pglist_data *pgdat);





extern void put_page_bootmem(struct page *page);
extern void get_page_bootmem(unsigned long ingo, struct page *page,
        unsigned long type);







void lock_memory_hotplug(void);
void unlock_memory_hotplug(void);
# 235 "/lib/modules/3.11.0-15-generic/build/include/linux/memory_hotplug.h" 3 4
extern int is_mem_section_removable(unsigned long pfn, unsigned long nr_pages);
extern void try_offline_node(int nid);
extern int offline_pages(unsigned long start_pfn, unsigned long nr_pages);
extern void remove_memory(int nid, u64 start, u64 size);
# 257 "/lib/modules/3.11.0-15-generic/build/include/linux/memory_hotplug.h" 3 4
extern int walk_memory_range(unsigned long start_pfn, unsigned long end_pfn,
  void *arg, int (*func)(struct memory_block *, void *));
extern int mem_online_node(int nid);
extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int offline_pages(unsigned long start_pfn, unsigned long nr_pages);
extern bool is_memblock_offlined(struct memory_block *mem);
extern void remove_memory(int nid, u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);
# 798 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 2 3 4

extern struct mutex zonelists_mutex;
void build_all_zonelists(pg_data_t *pgdat, struct zone *zone);
void wakeup_kswapd(struct zone *zone, int order, enum zone_type classzone_idx);
bool zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
bool zone_watermark_ok_safe(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);

extern void lruvec_init(struct lruvec *lruvec);

static inline __attribute__((no_instrument_function)) struct zone *lruvec_zone(struct lruvec *lruvec)
{

 return lruvec->zone;



}


void memory_present(int nid, unsigned long start, unsigned long end);







static inline __attribute__((no_instrument_function)) int local_memory_node(int node_id) { return node_id; };
# 846 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
static inline __attribute__((no_instrument_function)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

extern int movable_zone;

static inline __attribute__((no_instrument_function)) int zone_movable_is_highmem(void)
{



 return 0;

}

static inline __attribute__((no_instrument_function)) int is_highmem_idx(enum zone_type idx)
{




 return 0;

}







static inline __attribute__((no_instrument_function)) int is_highmem(struct zone *zone)
{






 return 0;

}


struct ctl_table;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[4 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
extern char numa_zonelist_order[];
# 917 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmzone.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmzone_64.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmzone_64.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/mmdebug.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmzone_64.h" 2 3 4


extern struct pglist_data *node_data[];
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/mmzone.h" 2 3 4
# 918 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 2 3 4



extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 953 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
static inline __attribute__((no_instrument_function)) struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline __attribute__((no_instrument_function)) int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline __attribute__((no_instrument_function)) int zonelist_node_idx(struct zoneref *zoneref)
{


 return zoneref->zone->node;



}
# 986 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
# 1003 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
static inline __attribute__((no_instrument_function)) struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
# 1085 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
struct page;
struct page_cgroup;
struct mem_section {
# 1100 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
 unsigned long section_mem_map;


 unsigned long *pageblock_flags;





 struct page_cgroup *page_cgroup;
 unsigned long pad;





};
# 1129 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
extern struct mem_section *mem_section[((((1UL << (46 - 27))) + ((((1UL) << 12) / sizeof (struct mem_section))) - 1) / ((((1UL) << 12) / sizeof (struct mem_section))))];




static inline __attribute__((no_instrument_function)) struct mem_section *__nr_to_section(unsigned long nr)
{
 if (!mem_section[((nr) / (((1UL) << 12) / sizeof (struct mem_section)))])
  return ((void *)0);
 return &mem_section[((nr) / (((1UL) << 12) / sizeof (struct mem_section)))][nr & ((((1UL) << 12) / sizeof (struct mem_section)) - 1)];
}
extern int __section_nr(struct mem_section* ms);
extern unsigned long usemap_size(void);
# 1154 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
static inline __attribute__((no_instrument_function)) struct page *__section_mem_map_addr(struct mem_section *section)
{
 unsigned long map = section->section_mem_map;
 map &= (~((1UL<<2)-1));
 return (struct page *)map;
}

static inline __attribute__((no_instrument_function)) int present_section(struct mem_section *section)
{
 return (section && (section->section_mem_map & (1UL<<0)));
}

static inline __attribute__((no_instrument_function)) int present_section_nr(unsigned long nr)
{
 return present_section(__nr_to_section(nr));
}

static inline __attribute__((no_instrument_function)) int valid_section(struct mem_section *section)
{
 return (section && (section->section_mem_map & (1UL<<1)));
}

static inline __attribute__((no_instrument_function)) int valid_section_nr(unsigned long nr)
{
 return valid_section(__nr_to_section(nr));
}

static inline __attribute__((no_instrument_function)) struct mem_section *__pfn_to_section(unsigned long pfn)
{
 return __nr_to_section(((pfn) >> (27 - 12)));
}


static inline __attribute__((no_instrument_function)) int pfn_valid(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (46 - 27)))
  return 0;
 return valid_section(__nr_to_section(((pfn) >> (27 - 12))));
}


static inline __attribute__((no_instrument_function)) int pfn_present(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (46 - 27)))
  return 0;
 return present_section(__nr_to_section(((pfn) >> (27 - 12))));
}
# 1218 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
void sparse_init(void);






bool early_pfn_in_nid(unsigned long pfn, int nid);
# 1234 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 1268 "/lib/modules/3.11.0-15-generic/build/include/linux/mmzone.h" 3 4
static inline __attribute__((no_instrument_function)) int memmap_valid_within(unsigned long pfn,
     struct page *page, struct zone *zone)
{
 return 1;
}
# 33 "/lib/modules/3.11.0-15-generic/build/include/linux/topology.h" 2 3 4
# 49 "/lib/modules/3.11.0-15-generic/build/include/linux/topology.h" 3 4
int arch_update_cpu_topology(void);
# 179 "/lib/modules/3.11.0-15-generic/build/include/linux/topology.h" 3 4
extern __attribute__((section(".data..percpu" ""))) __typeof__(int) numa_node;



static inline __attribute__((no_instrument_function)) int numa_node_id(void)
{
 return ({ typeof((numa_node)) pscr_ret__; do { const void *__vpp_verify = (typeof(&((numa_node))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof((numa_node))) { case 1: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; });
}



static inline __attribute__((no_instrument_function)) int cpu_to_node(int cpu)
{
 return (*({ do { const void *__vpp_verify = (typeof((&(numa_node))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(numa_node))) *)(&(numa_node)))); (typeof((typeof(*(&(numa_node))) *)(&(numa_node)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}



static inline __attribute__((no_instrument_function)) void set_numa_node(int node)
{
 do { do { const void *__vpp_verify = (typeof(&((numa_node))))((void *)0); (void)__vpp_verify; } while (0); switch(sizeof((numa_node))) { case 1: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}



static inline __attribute__((no_instrument_function)) void set_cpu_numa_node(int cpu, int node)
{
 (*({ do { const void *__vpp_verify = (typeof((&(numa_node))))((void *)0); (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(numa_node))) *)(&(numa_node)))); (typeof((typeof(*(&(numa_node))) *)(&(numa_node)))) (__ptr + (((__per_cpu_offset[cpu])))); }); })) = node;
}
# 264 "/lib/modules/3.11.0-15-generic/build/include/linux/topology.h" 3 4
static inline __attribute__((no_instrument_function)) int numa_mem_id(void)
{
 return numa_node_id();
}



static inline __attribute__((no_instrument_function)) int cpu_to_mem(int cpu)
{
 return cpu_to_node(cpu);
}
# 38 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/proportions.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/proportions.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu_counter.h" 1 3 4
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu_counter.h" 3 4
struct percpu_counter {
 raw_spinlock_t lock;
 s64 count;

 struct list_head list;

 s32 *counters;
};

extern int percpu_counter_batch;

int __percpu_counter_init(struct percpu_counter *fbc, s64 amount,
     struct lock_class_key *key);
# 39 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu_counter.h" 3 4
void percpu_counter_destroy(struct percpu_counter *fbc);
void percpu_counter_set(struct percpu_counter *fbc, s64 amount);
void __percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch);
s64 __percpu_counter_sum(struct percpu_counter *fbc);
int percpu_counter_compare(struct percpu_counter *fbc, s64 rhs);

static inline __attribute__((no_instrument_function)) void percpu_counter_add(struct percpu_counter *fbc, s64 amount)
{
 __percpu_counter_add(fbc, amount, percpu_counter_batch);
}

static inline __attribute__((no_instrument_function)) s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
{
 s64 ret = __percpu_counter_sum(fbc);
 return ret < 0 ? 0 : ret;
}

static inline __attribute__((no_instrument_function)) s64 percpu_counter_sum(struct percpu_counter *fbc)
{
 return __percpu_counter_sum(fbc);
}

static inline __attribute__((no_instrument_function)) s64 percpu_counter_read(struct percpu_counter *fbc)
{
 return fbc->count;
}






static inline __attribute__((no_instrument_function)) s64 percpu_counter_read_positive(struct percpu_counter *fbc)
{
 s64 ret = fbc->count;

 __asm__ __volatile__("": : :"memory");
 if (ret >= 0)
  return ret;
 return 0;
}

static inline __attribute__((no_instrument_function)) int percpu_counter_initialized(struct percpu_counter *fbc)
{
 return (fbc->counters != ((void *)0));
}
# 162 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu_counter.h" 3 4
static inline __attribute__((no_instrument_function)) void percpu_counter_inc(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, 1);
}

static inline __attribute__((no_instrument_function)) void percpu_counter_dec(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, -1);
}

static inline __attribute__((no_instrument_function)) void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
{
 percpu_counter_add(fbc, -amount);
}
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/proportions.h" 2 3 4



struct prop_global {





 int shift;






 struct percpu_counter events;
};






struct prop_descriptor {
 int index;
 struct prop_global pg[2];
 struct mutex mutex;
};

int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);





struct prop_local_percpu {



 struct percpu_counter events;




 int shift;
 unsigned long period;
 raw_spinlock_t lock;
};

int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
  long *numerator, long *denominator);

static inline __attribute__((no_instrument_function))
void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); do { } while (0); } while (0);
 __prop_inc_percpu(pd, pl);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); do { } while (0); } else { do { } while (0); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
}
# 93 "/lib/modules/3.11.0-15-generic/build/include/linux/proportions.h" 3 4
void __prop_inc_percpu_max(struct prop_descriptor *pd,
      struct prop_local_percpu *pl, long frac);






struct prop_local_single {



 unsigned long events;





 unsigned long period;
 int shift;
 raw_spinlock_t lock;
};





int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
  long *numerator, long *denominator);

static inline __attribute__((no_instrument_function))
void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
{
 unsigned long flags;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = arch_local_irq_save(); } while (0); do { } while (0); } while (0);
 __prop_inc_single(pd, pl);
 do { if (({ ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(flags); })) { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); do { } while (0); } else { do { } while (0); do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_local_irq_restore(flags); } while (0); } } while (0);
}
# 39 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/seccomp.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/seccomp.h" 1 3 4
# 40 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/seccomp.h" 3 4
struct seccomp_data {
 int nr;
 __u32 arch;
 __u64 instruction_pointer;
 __u64 args[6];
};
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/seccomp.h" 2 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/seccomp.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/seccomp_64.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/unistd.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/unistd.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/uapi/asm/unistd.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/unistd.h" 2 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd_64.h" 1 3 4
# 16 "/usr/include/x86_64-linux-gnu/asm/unistd_64.h" 3 4

































































































































































































































































































































































































































































































































































































































































































# 24 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/unistd.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/generated/asm/unistd_64_x32.h" 1 3 4
# 25 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/unistd.h" 2 3 4
# 8 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/unistd.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/seccomp_64.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ia32_unistd.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ia32_unistd.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/generated/asm/unistd_32_ia32.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/ia32_unistd.h" 2 3 4
# 6 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/seccomp_64.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/arch/x86/include/asm/seccomp.h" 2 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/seccomp.h" 2 3 4

struct seccomp_filter;
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/seccomp.h" 3 4
struct seccomp {
 int mode;
 struct seccomp_filter *filter;
};

extern int __secure_computing(int);
static inline __attribute__((no_instrument_function)) int secure_computing(int this_syscall)
{
 if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 8)), 0))
  return __secure_computing(this_syscall);
 return 0;
}


static inline __attribute__((no_instrument_function)) void secure_computing_strict(int this_syscall)
{
 do { if (__builtin_expect(!!(secure_computing(this_syscall) != 0), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/include/linux/seccomp.h"), "i" (39), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
}

extern long prctl_get_seccomp(void);
extern long prctl_set_seccomp(unsigned long, char *);

static inline __attribute__((no_instrument_function)) int seccomp_mode(struct seccomp *s)
{
 return s->mode;
}
# 77 "/lib/modules/3.11.0-15-generic/build/include/linux/seccomp.h" 3 4
extern void put_seccomp_filter(struct task_struct *tsk);
extern void get_seccomp_filter(struct task_struct *tsk);
extern u32 seccomp_bpf_load(int off);
# 40 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 1 3 4
# 34 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void __list_add_rcu(struct list_head *new,
  struct list_head *prev, struct list_head *next)
{
 new->next = next;
 new->prev = prev;
 do { __asm__ __volatile__("": : :"memory"); (((*((struct list_head **)(&(prev)->next))))) = (typeof(*(new)) *)((new)); } while (0);
 next->prev = new;
}
# 63 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 84 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 114 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void list_del_rcu(struct list_head *entry)
{
 __list_del_entry(entry);
 entry->prev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
# 140 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_del_init_rcu(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  n->pprev = ((void *)0);
 }
}
# 156 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 do { __asm__ __volatile__("": : :"memory"); (((*((struct list_head **)(&(new->prev)->next))))) = (typeof(*(new)) *)((new)); } while (0);
 new->next->prev = new;
 old->prev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
# 183 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(list))
  return;



 INIT_LIST_HEAD(list);
# 205 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
 sync();
# 215 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
 last->next = at;
 do { __asm__ __volatile__("": : :"memory"); (((*((struct list_head **)(&(head)->next))))) = (typeof(*(first)) *)((first)); } while (0);
 first->prev = head;
 at->prev = last;
}
# 323 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
# 336 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 do { __asm__ __volatile__("": : :"memory"); ((*(struct hlist_node **)new->pprev)) = (typeof(*(new)) *)((new)); } while (0);
 if (next)
  new->next->pprev = &new->next;
 old->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
# 375 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;

 n->next = first;
 n->pprev = &h->first;
 do { __asm__ __volatile__("": : :"memory"); (((*((struct hlist_node **)(&(h)->first))))) = (typeof(*(n)) *)((n)); } while (0);
 if (first)
  first->pprev = &n->next;
}
# 405 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 do { __asm__ __volatile__("": : :"memory"); (((*((struct hlist_node **)((n)->pprev))))) = (typeof(*(n)) *)((n)); } while (0);
 next->pprev = &n->next;
}
# 432 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 do { __asm__ __volatile__("": : :"memory"); (((*((struct hlist_node **)(&(prev)->next))))) = (typeof(*(n)) *)((n)); } while (0);
 if (n->next)
  n->next->pprev = &n->next;
}
# 42 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rtmutex.h" 1 3 4
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/rtmutex.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/plist.h" 1 3 4
# 81 "/lib/modules/3.11.0-15-generic/build/include/linux/plist.h" 3 4
struct plist_head {
 struct list_head node_list;
};

struct plist_node {
 int prio;
 struct list_head prio_list;
 struct list_head node_list;
};
# 116 "/lib/modules/3.11.0-15-generic/build/include/linux/plist.h" 3 4
static inline __attribute__((no_instrument_function)) void
plist_head_init(struct plist_head *head)
{
 INIT_LIST_HEAD(&head->node_list);
}






static inline __attribute__((no_instrument_function)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 INIT_LIST_HEAD(&node->prio_list);
 INIT_LIST_HEAD(&node->node_list);
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 181 "/lib/modules/3.11.0-15-generic/build/include/linux/plist.h" 3 4
static inline __attribute__((no_instrument_function)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}





static inline __attribute__((no_instrument_function)) int plist_node_empty(const struct plist_node *node)
{
 return list_empty(&node->node_list);
}
# 237 "/lib/modules/3.11.0-15-generic/build/include/linux/plist.h" 3 4
static inline __attribute__((no_instrument_function)) struct plist_node *plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,node_list) );})
                                  ;
}







static inline __attribute__((no_instrument_function)) struct plist_node *plist_last(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->node_list ) *__mptr = (head->node_list.prev); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,node_list) );})
                                  ;
}
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/rtmutex.h" 2 3 4


extern int max_lock_depth;
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/rtmutex.h" 3 4
struct rt_mutex {
 raw_spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline __attribute__((no_instrument_function)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 82 "/lib/modules/3.11.0-15-generic/build/include/linux/rtmutex.h" 3 4
static inline __attribute__((no_instrument_function)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 43 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/resource.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/resource.h" 1 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};



struct rlimit64 {
 __u64 rlim_cur;
 __u64 rlim_max;
};
# 77 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/resource.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/resource.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/resource.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/resource.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/asm-generic/resource.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/resource.h" 2 3 4
# 78 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/resource.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/resource.h" 2 3 4


struct task_struct;

int getrusage(struct task_struct *p, int who, struct rusage *ru);
int do_prlimit(struct task_struct *tsk, unsigned int resource,
  struct rlimit *new_rlim, struct rlimit *old_rlim);
# 47 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 1 3 4
# 25 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/timerqueue.h" 1 3 4







struct timerqueue_node {
 struct rb_node node;
 ktime_t expires;
};

struct timerqueue_head {
 struct rb_root head;
 struct timerqueue_node *next;
};


extern void timerqueue_add(struct timerqueue_head *head,
    struct timerqueue_node *node);
extern void timerqueue_del(struct timerqueue_head *head,
    struct timerqueue_node *node);
extern struct timerqueue_node *timerqueue_iterate_next(
      struct timerqueue_node *node);
# 34 "/lib/modules/3.11.0-15-generic/build/include/linux/timerqueue.h" 3 4
static inline __attribute__((no_instrument_function))
struct timerqueue_node *timerqueue_getnext(struct timerqueue_head *head)
{
 return head->next;
}

static inline __attribute__((no_instrument_function)) void timerqueue_init(struct timerqueue_node *node)
{
 ((&node->node)->__rb_parent_color = (unsigned long)(&node->node));
}

static inline __attribute__((no_instrument_function)) void timerqueue_init_head(struct timerqueue_head *head)
{
 head->head = (struct rb_root) { ((void *)0), };
 head->next = ((void *)0);
}
# 26 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 2 3 4

struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS = 0x0,
 HRTIMER_MODE_REL = 0x1,
 HRTIMER_MODE_PINNED = 0x02,
 HRTIMER_MODE_ABS_PINNED = 0x02,
 HRTIMER_MODE_REL_PINNED = 0x03,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 108 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
struct hrtimer {
 struct timerqueue_node node;
 ktime_t _softexpires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;

 int start_pid;
 void *start_site;
 char start_comm[16];

};
# 128 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 145 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 int index;
 clockid_t clockid;
 struct timerqueue_head active;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t softirq_time;
 ktime_t offset;
};

enum hrtimer_base_type {
 HRTIMER_BASE_MONOTONIC,
 HRTIMER_BASE_REALTIME,
 HRTIMER_BASE_BOOTTIME,
 HRTIMER_BASE_TAI,
 HRTIMER_MAX_CLOCK_BASES,
};
# 180 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
struct hrtimer_cpu_base {
 raw_spinlock_t lock;
 unsigned int active_bases;
 unsigned int clock_was_set;

 ktime_t expires_next;
 int hres_active;
 int hang_detected;
 unsigned long nr_events;
 unsigned long nr_retries;
 unsigned long nr_hangs;
 ktime_t max_hang_time;

 struct hrtimer_clock_base clock_base[HRTIMER_MAX_CLOCK_BASES];
};

static inline __attribute__((no_instrument_function)) void hrtimer_set_expires(struct hrtimer *timer, ktime_t time)
{
 timer->node.expires = time;
 timer->_softexpires = time;
}

static inline __attribute__((no_instrument_function)) void hrtimer_set_expires_range(struct hrtimer *timer, ktime_t time, ktime_t delta)
{
 timer->_softexpires = time;
 timer->node.expires = ktime_add_safe(time, delta);
}

static inline __attribute__((no_instrument_function)) void hrtimer_set_expires_range_ns(struct hrtimer *timer, ktime_t time, unsigned long delta)
{
 timer->_softexpires = time;
 timer->node.expires = ktime_add_safe(time, ns_to_ktime(delta));
}

static inline __attribute__((no_instrument_function)) void hrtimer_set_expires_tv64(struct hrtimer *timer, s64 tv64)
{
 timer->node.expires.tv64 = tv64;
 timer->_softexpires.tv64 = tv64;
}

static inline __attribute__((no_instrument_function)) void hrtimer_add_expires(struct hrtimer *timer, ktime_t time)
{
 timer->node.expires = ktime_add_safe(timer->node.expires, time);
 timer->_softexpires = ktime_add_safe(timer->_softexpires, time);
}

static inline __attribute__((no_instrument_function)) void hrtimer_add_expires_ns(struct hrtimer *timer, u64 ns)
{
 timer->node.expires = ({ (ktime_t){ .tv64 = (timer->node.expires).tv64 + (ns) }; });
 timer->_softexpires = ({ (ktime_t){ .tv64 = (timer->_softexpires).tv64 + (ns) }; });
}

static inline __attribute__((no_instrument_function)) ktime_t hrtimer_get_expires(const struct hrtimer *timer)
{
 return timer->node.expires;
}

static inline __attribute__((no_instrument_function)) ktime_t hrtimer_get_softexpires(const struct hrtimer *timer)
{
 return timer->_softexpires;
}

static inline __attribute__((no_instrument_function)) s64 hrtimer_get_expires_tv64(const struct hrtimer *timer)
{
 return timer->node.expires.tv64;
}
static inline __attribute__((no_instrument_function)) s64 hrtimer_get_softexpires_tv64(const struct hrtimer *timer)
{
 return timer->_softexpires.tv64;
}

static inline __attribute__((no_instrument_function)) s64 hrtimer_get_expires_ns(const struct hrtimer *timer)
{
 return ((timer->node.expires).tv64);
}

static inline __attribute__((no_instrument_function)) ktime_t hrtimer_expires_remaining(const struct hrtimer *timer)
{
 return ({ (ktime_t){ .tv64 = (timer->node.expires).tv64 - (timer->base->get_time()).tv64 }; });
}


struct clock_event_device;

extern void hrtimer_interrupt(struct clock_event_device *dev);




static inline __attribute__((no_instrument_function)) ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->get_time();
}

static inline __attribute__((no_instrument_function)) int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return timer->base->cpu_base->hres_active;
}

extern void hrtimer_peek_ahead_timers(void);
# 292 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
extern void clock_was_set_delayed(void);
# 319 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
extern void clock_was_set(void);

extern void timerfd_clock_was_set(void);



extern void hrtimers_resume(void);

extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);
extern ktime_t ktime_get_boottime(void);
extern ktime_t ktime_get_monotonic_offset(void);
extern ktime_t ktime_get_clocktai(void);
extern ktime_t ktime_get_update_offsets(ktime_t *offs_real, ktime_t *offs_boot,
      ktime_t *offs_tai);

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct tick_device) tick_cpu_device;





extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);







static inline __attribute__((no_instrument_function)) void hrtimer_init_on_stack(struct hrtimer *timer,
      clockid_t which_clock,
      enum hrtimer_mode mode)
{
 hrtimer_init(timer, which_clock, mode);
}
static inline __attribute__((no_instrument_function)) void destroy_hrtimer_on_stack(struct hrtimer *timer) { }



extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
   unsigned long range_ns, const enum hrtimer_mode mode);
extern int
__hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
    unsigned long delta_ns,
    const enum hrtimer_mode mode, int wakeup);

extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline __attribute__((no_instrument_function)) int hrtimer_start_expires(struct hrtimer *timer,
      enum hrtimer_mode mode)
{
 unsigned long delta;
 ktime_t soft, hard;
 soft = hrtimer_get_softexpires(timer);
 hard = hrtimer_get_expires(timer);
 delta = ((({ (ktime_t){ .tv64 = (hard).tv64 - (soft).tv64 }; })).tv64);
 return hrtimer_start_range_ns(timer, soft, delta, mode);
}

static inline __attribute__((no_instrument_function)) int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start_expires(timer, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);






static inline __attribute__((no_instrument_function)) int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline __attribute__((no_instrument_function)) int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state & 0x01;
}





static inline __attribute__((no_instrument_function)) int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline __attribute__((no_instrument_function)) u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);

extern int schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
      const enum hrtimer_mode mode);
extern int schedule_hrtimeout_range_clock(ktime_t *expires,
  unsigned long delta, const enum hrtimer_mode mode, int clock);
extern int schedule_hrtimeout(ktime_t *expires, const enum hrtimer_mode mode);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) hrtimers_init(void);
# 462 "/lib/modules/3.11.0-15-generic/build/include/linux/hrtimer.h" 3 4
extern void sysrq_timer_list_show(void);
# 49 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/task_io_accounting.h" 1 3 4
# 11 "/lib/modules/3.11.0-15-generic/build/include/linux/task_io_accounting.h" 3 4
struct task_io_accounting {


 u64 rchar;

 u64 wchar;

 u64 syscr;

 u64 syscw;







 u64 read_bytes;





 u64 write_bytes;
# 43 "/lib/modules/3.11.0-15-generic/build/include/linux/task_io_accounting.h" 3 4
 u64 cancelled_write_bytes;

};
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/latencytop.h" 1 3 4
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/latencytop.h" 3 4
struct task_struct;






struct latency_record {
 unsigned long backtrace[12];
 unsigned int count;
 unsigned long time;
 unsigned long max;
};



extern int latencytop_enabled;
void __account_scheduler_latency(struct task_struct *task, int usecs, int inter);
static inline __attribute__((no_instrument_function)) void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
{
 if (__builtin_expect(!!(latencytop_enabled), 0))
  __account_scheduler_latency(task, usecs, inter);
}

void clear_all_latency_tracing(struct task_struct *p);
# 51 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 1 3 4
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/sysctl.h" 1 3 4
# 28 "/lib/modules/3.11.0-15-generic/build/include/linux/sysctl.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sysctl.h" 1 3 4
# 29 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/sysctl.h" 3 4
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};





enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10,
 CTL_ARLAN=254,
 CTL_S390DBF=5677,
 CTL_SUNRPC=7249,
 CTL_PM=9899,
 CTL_FRV=9898,
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
 KERN_NMI_WATCHDOG=75,
 KERN_PANIC_ON_NMI=76,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
 VM_MIN_SLAB=35,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
 NET_IRDA=412,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
 NET_CORE_WARNINGS=22,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
 NET_CIPSOV4_CACHE_ENABLE=118,
 NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
 NET_CIPSOV4_RBM_OPTFMT=120,
 NET_CIPSOV4_RBM_STRICTVALID=121,
 NET_TCP_AVAIL_CONG_CONTROL=122,
 NET_TCP_ALLOWED_CONG_CONTROL=123,
 NET_TCP_MAX_SSTHRESH=124,
 NET_TCP_FRTO_RESPONSE=125,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 NET_IPV4_CONF_ARP_NOTIFY=22,
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 NET_IPV6_PROXY_NDP=23,
 NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
 NET_X25_FORWARD=6
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
 NET_BRIDGE_NF_FILTER_PPPOE_TAGGED = 5,
};


enum {
 NET_IRDA_DISCOVERY=1,
 NET_IRDA_DEVNAME=2,
 NET_IRDA_DEBUG=3,
 NET_IRDA_FAST_POLL=4,
 NET_IRDA_DISCOVERY_SLOTS=5,
 NET_IRDA_DISCOVERY_TIMEOUT=6,
 NET_IRDA_SLOT_TIMEOUT=7,
 NET_IRDA_MAX_BAUD_RATE=8,
 NET_IRDA_MIN_TX_TURN_TIME=9,
 NET_IRDA_MAX_TX_DATA_SIZE=10,
 NET_IRDA_MAX_TX_WINDOW=11,
 NET_IRDA_MAX_NOREPLY_TIME=12,
 NET_IRDA_WARN_NOREPLY_TIME=13,
 NET_IRDA_LAP_KEEPALIVE_TIME=14,
};



enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
 FS_OCFS2=988,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};
# 29 "/lib/modules/3.11.0-15-generic/build/include/linux/sysctl.h" 2 3 4


struct ctl_table;
struct nsproxy;
struct ctl_table_root;
struct ctl_table_header;
struct ctl_dir;

typedef struct ctl_table ctl_table;

typedef int proc_handler (struct ctl_table *ctl, int write,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
          void *, size_t *, loff_t *);
extern int proc_do_large_bitmap(struct ctl_table *, int,
    void *, size_t *, loff_t *);
# 89 "/lib/modules/3.11.0-15-generic/build/include/linux/sysctl.h" 3 4
struct ctl_table_poll {
 atomic_t event;
 wait_queue_head_t wait;
};

static inline __attribute__((no_instrument_function)) void *proc_sys_poll_event(struct ctl_table_poll *poll)
{
 return (void *)(unsigned long)atomic_read(&poll->event);
}
# 107 "/lib/modules/3.11.0-15-generic/build/include/linux/sysctl.h" 3 4
struct ctl_table
{
 const char *procname;
 void *data;
 int maxlen;
 umode_t mode;
 struct ctl_table *child;
 proc_handler *proc_handler;
 struct ctl_table_poll *poll;
 void *extra1;
 void *extra2;
};

struct ctl_node {
 struct rb_node node;
 struct ctl_table_header *header;
};



struct ctl_table_header
{
 union {
  struct {
   struct ctl_table *ctl_table;
   int used;
   int count;
   int nreg;
  };
  struct callback_head rcu;
 };
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
 struct ctl_table_set *set;
 struct ctl_dir *parent;
 struct ctl_node *node;
};

struct ctl_dir {

 struct ctl_table_header header;
 struct rb_root root;
};

struct ctl_table_set {
 int (*is_seen)(struct ctl_table_set *);
 struct ctl_dir dir;
};

struct ctl_table_root {
 struct ctl_table_set default_set;
 struct ctl_table_set *(*lookup)(struct ctl_table_root *root,
        struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_header *head, struct ctl_table *table);
};


struct ctl_path {
 const char *procname;
};



void proc_sys_poll_notify(struct ctl_table_poll *poll);

extern void setup_sysctl_set(struct ctl_table_set *p,
 struct ctl_table_root *root,
 int (*is_seen)(struct ctl_table_set *));
extern void retire_sysctl_set(struct ctl_table_set *set);

void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_table(
 struct ctl_table_set *set,
 const char *path, struct ctl_table *table);
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_set *set,
 const struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl(const char *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
      struct ctl_table *table);

void unregister_sysctl_table(struct ctl_table_header * table);

extern int sysctl_init(void);
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 2 3 4







typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 75 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
struct seq_file;
struct user_struct;
struct signal_struct;
struct cred;

struct key_type;
struct key_owner;
struct keyring_list;
struct keyring_name;
# 99 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
typedef struct __key_reference_with_attributes *key_ref_t;

static inline __attribute__((no_instrument_function)) key_ref_t make_key_ref(const struct key *key,
         unsigned long possession)
{
 return (key_ref_t) ((unsigned long) key | possession);
}

static inline __attribute__((no_instrument_function)) struct key *key_ref_to_ptr(const key_ref_t key_ref)
{
 return (struct key *) ((unsigned long) key_ref & ~1UL);
}

static inline __attribute__((no_instrument_function)) unsigned long is_key_possessed(const key_ref_t key_ref)
{
 return (unsigned long) key_ref & 1UL;
}
# 125 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
struct key {
 atomic_t usage;
 key_serial_t serial;
 union {
  struct list_head graveyard_link;
  struct rb_node serial_node;
 };
 struct key_type *type;
 struct rw_semaphore sem;
 struct key_user *user;
 void *security;
 union {
  time_t expiry;
  time_t revoked_at;
 };
 time_t last_used_at;
 kuid_t uid;
 kgid_t gid;
 key_perm_t perm;
 unsigned short quotalen;
 unsigned short datalen;
# 156 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
 unsigned long flags;
# 171 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
 char *description;




 union {
  struct list_head link;
  unsigned long x[2];
  void *p[2];
  int reject_error;
 } type_data;





 union {
  unsigned long value;
  void *rcudata;
  void *data;
  struct keyring_list *subscriptions;
 } payload;
};

extern struct key *key_alloc(struct key_type *type,
        const char *desc,
        kuid_t uid, kgid_t gid,
        const struct cred *cred,
        key_perm_t perm,
        unsigned long flags);






extern void key_revoke(struct key *key);
extern void key_invalidate(struct key *key);
extern void key_put(struct key *key);

static inline __attribute__((no_instrument_function)) struct key *key_get(struct key *key)
{
 if (key)
  atomic_inc(&key->usage);
 return key;
}

static inline __attribute__((no_instrument_function)) void key_ref_put(key_ref_t key_ref)
{
 key_put(key_ref_to_ptr(key_ref));
}

extern struct key *request_key(struct key_type *type,
          const char *description,
          const char *callout_info);

extern struct key *request_key_with_auxdata(struct key_type *type,
         const char *description,
         const void *callout_info,
         size_t callout_len,
         void *aux);

extern struct key *request_key_async(struct key_type *type,
         const char *description,
         const void *callout_info,
         size_t callout_len);

extern struct key *request_key_async_with_auxdata(struct key_type *type,
        const char *description,
        const void *callout_info,
        size_t callout_len,
        void *aux);

extern int wait_for_key_construction(struct key *key, bool intr);

extern int key_validate(const struct key *key);

extern key_ref_t key_create_or_update(key_ref_t keyring,
          const char *type,
          const char *description,
          const void *payload,
          size_t plen,
          key_perm_t perm,
          unsigned long flags);

extern int key_update(key_ref_t key,
        const void *payload,
        size_t plen);

extern int key_link(struct key *keyring,
      struct key *key);

extern int key_unlink(struct key *keyring,
        struct key *key);

extern struct key *keyring_alloc(const char *description, kuid_t uid, kgid_t gid,
     const struct cred *cred,
     key_perm_t perm,
     unsigned long flags,
     struct key *dest);

extern int keyring_clear(struct key *keyring);

extern key_ref_t keyring_search(key_ref_t keyring,
    struct key_type *type,
    const char *description);

extern int keyring_add_key(struct key *keyring,
      struct key *key);

extern struct key *key_lookup(key_serial_t id);

static inline __attribute__((no_instrument_function)) key_serial_t key_serial(const struct key *key)
{
 return key ? key->serial : 0;
}

extern void key_set_timeout(struct key *, unsigned);
# 297 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
static inline __attribute__((no_instrument_function)) bool key_is_instantiated(const struct key *key)
{
 return (__builtin_constant_p((0)) ? constant_test_bit((0), (&key->flags)) : variable_test_bit((0), (&key->flags))) &&
  !(__builtin_constant_p((5)) ? constant_test_bit((5), (&key->flags)) : variable_test_bit((5), (&key->flags)));
}
# 313 "/lib/modules/3.11.0-15-generic/build/include/linux/key.h" 3 4
extern ctl_table key_sysctls[];




extern int install_thread_keyring_to_cred(struct cred *cred);
extern void key_fsuid_changed(struct task_struct *tsk);
extern void key_fsgid_changed(struct task_struct *tsk);
extern void key_init(void);
# 18 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/selinux.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/selinux.h" 3 4
struct selinux_audit_rule;
struct audit_context;
struct kern_ipc_perm;






bool selinux_is_enabled(void);
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 2 3 4



struct user_struct;
struct cred;
struct inode;







struct group_info {
 atomic_t usage;
 int ngroups;
 int nblocks;
 kgid_t small_block[32];
 kgid_t *blocks[0];
};
# 49 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
static inline __attribute__((no_instrument_function)) struct group_info *get_group_info(struct group_info *gi)
{
 atomic_inc(&gi->usage);
 return gi;
}
# 65 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
extern struct group_info *groups_alloc(int);
extern struct group_info init_groups;
extern void groups_free(struct group_info *);
extern int set_current_groups(struct group_info *);
extern int set_groups(struct cred *, struct group_info *);
extern int groups_search(const struct group_info *, kgid_t);





extern int in_group_p(kgid_t);
extern int in_egroup_p(kgid_t);
# 102 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
struct cred {
 atomic_t usage;







 kuid_t uid;
 kgid_t gid;
 kuid_t suid;
 kgid_t sgid;
 kuid_t euid;
 kgid_t egid;
 kuid_t fsuid;
 kgid_t fsgid;
 unsigned securebits;
 kernel_cap_t cap_inheritable;
 kernel_cap_t cap_permitted;
 kernel_cap_t cap_effective;
 kernel_cap_t cap_bset;

 unsigned char jit_keyring;

 struct key *session_keyring;
 struct key *process_keyring;
 struct key *thread_keyring;
 struct key *request_key_auth;


 void *security;

 struct user_struct *user;
 struct user_namespace *user_ns;
 struct group_info *group_info;
 struct callback_head rcu;
};

extern void __put_cred(struct cred *);
extern void exit_creds(struct task_struct *);
extern int copy_creds(struct task_struct *, unsigned long);
extern const struct cred *get_task_cred(struct task_struct *);
extern struct cred *cred_alloc_blank(void);
extern struct cred *prepare_creds(void);
extern struct cred *prepare_exec_creds(void);
extern int commit_creds(struct cred *);
extern void abort_creds(struct cred *);
extern const struct cred *override_creds(const struct cred *);
extern void revert_creds(const struct cred *);
extern struct cred *prepare_kernel_cred(struct task_struct *);
extern int change_create_files_as(struct cred *, struct inode *);
extern int set_security_override(struct cred *, u32);
extern int set_security_override_from_ctx(struct cred *, const char *);
extern int set_create_files_as(struct cred *, struct inode *);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) cred_init(void);
# 188 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
static inline __attribute__((no_instrument_function)) void validate_creds(const struct cred *cred)
{
}
static inline __attribute__((no_instrument_function)) void validate_creds_for_do_exit(struct task_struct *tsk)
{
}
static inline __attribute__((no_instrument_function)) void validate_process_creds(void)
{
}
# 206 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
static inline __attribute__((no_instrument_function)) struct cred *get_new_cred(struct cred *cred)
{
 atomic_inc(&cred->usage);
 return cred;
}
# 225 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
static inline __attribute__((no_instrument_function)) const struct cred *get_cred(const struct cred *cred)
{
 struct cred *nonconst_cred = (struct cred *) cred;
 validate_creds(cred);
 return get_new_cred(nonconst_cred);
}
# 243 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
static inline __attribute__((no_instrument_function)) void put_cred(const struct cred *_cred)
{
 struct cred *cred = (struct cred *) _cred;

 validate_creds(cred);
 if (atomic_dec_and_test(&(cred)->usage))
  __put_cred(cred);
}
# 343 "/lib/modules/3.11.0-15-generic/build/include/linux/cred.h" 3 4
extern struct user_namespace init_user_ns;
# 52 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/llist.h" 1 3 4
# 61 "/lib/modules/3.11.0-15-generic/build/include/linux/llist.h" 3 4
struct llist_head {
 struct llist_node *first;
};

struct llist_node {
 struct llist_node *next;
};
# 76 "/lib/modules/3.11.0-15-generic/build/include/linux/llist.h" 3 4
static inline __attribute__((no_instrument_function)) void init_llist_head(struct llist_head *list)
{
 list->first = ((void *)0);
}
# 135 "/lib/modules/3.11.0-15-generic/build/include/linux/llist.h" 3 4
static inline __attribute__((no_instrument_function)) bool llist_empty(const struct llist_head *head)
{
 return (*(volatile typeof(head->first) *)&(head->first)) == ((void *)0);
}

static inline __attribute__((no_instrument_function)) struct llist_node *llist_next(struct llist_node *node)
{
 return node->next;
}

extern bool llist_add_batch(struct llist_node *new_first,
       struct llist_node *new_last,
       struct llist_head *head);







static inline __attribute__((no_instrument_function)) bool llist_add(struct llist_node *new, struct llist_head *head)
{
 return llist_add_batch(new, new, head);
}
# 168 "/lib/modules/3.11.0-15-generic/build/include/linux/llist.h" 3 4
static inline __attribute__((no_instrument_function)) struct llist_node *llist_del_all(struct llist_head *head)
{
 return ({ __typeof__ (*((&head->first))) __ret = ((((void *)0))); switch (sizeof(*((&head->first)))) { case 1: asm volatile ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; case 2: asm volatile ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; case 4: asm volatile ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; case 8: asm volatile ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}

extern struct llist_node *llist_del_first(struct llist_head *head);
# 53 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
struct vm_area_struct;
# 157 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
static inline __attribute__((no_instrument_function)) int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ({ int __ret_warn_on = !!((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x08u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x08u))); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath_null("/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h", 159); __builtin_expect(!!(__ret_warn_on), 0); });

 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return MIGRATE_UNMOVABLE;


 return (((gfp_flags & (( gfp_t)0x08u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}
# 252 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
static inline __attribute__((no_instrument_function)) enum zone_type gfp_zone(gfp_t flags)
{
 enum zone_type z;
 int bit = ( int) (flags & ((( gfp_t)0x01u)|(( gfp_t)0x02u)|(( gfp_t)0x04u)|(( gfp_t)0x08u)));

 z = (( (ZONE_NORMAL << 0 * 2) | (ZONE_DMA << 0x01u * 2) | (ZONE_NORMAL << 0x02u * 2) | (ZONE_DMA32 << 0x04u * 2) | (ZONE_NORMAL << 0x08u * 2) | (ZONE_DMA << (0x08u | 0x01u) * 2) | (ZONE_MOVABLE << (0x08u | 0x02u) * 2) | (ZONE_DMA32 << (0x08u | 0x04u) * 2) ) >> (bit * 2)) &
      ((1 << 2) - 1);
 ((void)(sizeof(( long)((( 1 << (0x01u | 0x02u) | 1 << (0x01u | 0x04u) | 1 << (0x04u | 0x02u) | 1 << (0x01u | 0x04u | 0x02u) | 1 << (0x08u | 0x02u | 0x01u) | 1 << (0x08u | 0x04u | 0x01u) | 1 << (0x08u | 0x04u | 0x02u) | 1 << (0x08u | 0x04u | 0x01u | 0x02u) ) >> bit) & 1))));
 return z;
}
# 270 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
static inline __attribute__((no_instrument_function)) int gfp_zonelist(gfp_t flags)
{
 if ((1 || 0) && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
  return 1;

 return 0;
}
# 287 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
static inline __attribute__((no_instrument_function)) struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (node_data[nid])->node_zonelists + gfp_zonelist(flags);
}


static inline __attribute__((no_instrument_function)) void arch_free_page(struct page *page, int order) { }


static inline __attribute__((no_instrument_function)) void arch_alloc_page(struct page *page, int order) { }


struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
         struct zonelist *zonelist, nodemask_t *nodemask);

static inline __attribute__((no_instrument_function)) struct page *
__alloc_pages(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist)
{
 return __alloc_pages_nodemask(gfp_mask, order, zonelist, ((void *)0));
}

static inline __attribute__((no_instrument_function)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{

 if (nid < 0)
  nid = numa_node_id();

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}

static inline __attribute__((no_instrument_function)) struct page *alloc_pages_exact_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 ((void)(sizeof(( long)(nid < 0 || nid >= (1 << 6) || !node_state((nid), N_ONLINE)))));

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}


extern struct page *alloc_pages_current(gfp_t gfp_mask, unsigned order);

static inline __attribute__((no_instrument_function)) struct page *
alloc_pages(gfp_t gfp_mask, unsigned int order)
{
 return alloc_pages_current(gfp_mask, order);
}
extern struct page *alloc_pages_vma(gfp_t gfp_mask, int order,
   struct vm_area_struct *vma, unsigned long addr,
   int node);
# 351 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);

void *alloc_pages_exact(size_t size, gfp_t gfp_mask);
void free_pages_exact(void *virt, size_t size);

void *alloc_pages_exact_nid(int nid, size_t size, gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_cold_page(struct page *page, int cold);
extern void free_hot_cold_page_list(struct list_head *list, int cold);

extern void __free_memcg_kmem_pages(struct page *page, unsigned int order);
extern void free_memcg_kmem_pages(unsigned long addr, unsigned int order);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);
# 388 "/lib/modules/3.11.0-15-generic/build/include/linux/gfp.h" 3 4
extern gfp_t gfp_allowed_mask;


bool gfp_pfmemalloc_allowed(gfp_t gfp_mask);

extern void pm_restrict_gfp_mask(void);
extern void pm_restore_gfp_mask(void);


extern bool pm_suspended_storage(void);
# 55 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 2 3 4



struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio_list;
struct fs_struct;
struct perf_event_context;
struct blk_plug;
# 82 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern unsigned long avenrun[];
extern void get_avenrun(unsigned long *loads, unsigned long offset, int shift);
# 97 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern unsigned long total_forks;
extern int nr_threads;
extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) process_counts;
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_iowait(void);
extern unsigned long nr_iowait_cpu(int cpu);
extern unsigned long this_cpu_load(void);


extern void calc_global_load(unsigned long ticks);
extern void update_cpu_load_nohz(void);


struct task_migration_notifier {
 struct task_struct *task;
 int from_cpu;
 int to_cpu;
};
extern void register_task_migration_notifier(struct notifier_block *n);

extern unsigned long get_parent_ip(unsigned long addr);

extern void dump_cpu_task(int cpu);

struct seq_file;
struct cfs_rq;
struct task_group;

extern void proc_sched_show_task(struct task_struct *p, struct seq_file *m);
extern void proc_sched_set_task(struct task_struct *p);
extern void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq);
# 159 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern char ___assert_task_state[1 - 2*!!(
  sizeof("RSDTtZXxKWP")-1 != ( __builtin_constant_p(1024) ? ( (1024) < 1 ? ____ilog2_NaN() : (1024) & (1ULL << 63) ? 63 : (1024) & (1ULL << 62) ? 62 : (1024) & (1ULL << 61) ? 61 : (1024) & (1ULL << 60) ? 60 : (1024) & (1ULL << 59) ? 59 : (1024) & (1ULL << 58) ? 58 : (1024) & (1ULL << 57) ? 57 : (1024) & (1ULL << 56) ? 56 : (1024) & (1ULL << 55) ? 55 : (1024) & (1ULL << 54) ? 54 : (1024) & (1ULL << 53) ? 53 : (1024) & (1ULL << 52) ? 52 : (1024) & (1ULL << 51) ? 51 : (1024) & (1ULL << 50) ? 50 : (1024) & (1ULL << 49) ? 49 : (1024) & (1ULL << 48) ? 48 : (1024) & (1ULL << 47) ? 47 : (1024) & (1ULL << 46) ? 46 : (1024) & (1ULL << 45) ? 45 : (1024) & (1ULL << 44) ? 44 : (1024) & (1ULL << 43) ? 43 : (1024) & (1ULL << 42) ? 42 : (1024) & (1ULL << 41) ? 41 : (1024) & (1ULL << 40) ? 40 : (1024) & (1ULL << 39) ? 39 : (1024) & (1ULL << 38) ? 38 : (1024) & (1ULL << 37) ? 37 : (1024) & (1ULL << 36) ? 36 : (1024) & (1ULL << 35) ? 35 : (1024) & (1ULL << 34) ? 34 : (1024) & (1ULL << 33) ? 33 : (1024) & (1ULL << 32) ? 32 : (1024) & (1ULL << 31) ? 31 : (1024) & (1ULL << 30) ? 30 : (1024) & (1ULL << 29) ? 29 : (1024) & (1ULL << 28) ? 28 : (1024) & (1ULL << 27) ? 27 : (1024) & (1ULL << 26) ? 26 : (1024) & (1ULL << 25) ? 25 : (1024) & (1ULL << 24) ? 24 : (1024) & (1ULL << 23) ? 23 : (1024) & (1ULL << 22) ? 22 : (1024) & (1ULL << 21) ? 21 : (1024) & (1ULL << 20) ? 20 : (1024) & (1ULL << 19) ? 19 : (1024) & (1ULL << 18) ? 18 : (1024) & (1ULL << 17) ? 17 : (1024) & (1ULL << 16) ? 16 : (1024) & (1ULL << 15) ? 15 : (1024) & (1ULL << 14) ? 14 : (1024) & (1ULL << 13) ? 13 : (1024) & (1ULL << 12) ? 12 : (1024) & (1ULL << 11) ? 11 : (1024) & (1ULL << 10) ? 10 : (1024) & (1ULL << 9) ? 9 : (1024) & (1ULL << 8) ? 8 : (1024) & (1ULL << 7) ? 7 : (1024) & (1ULL << 6) ? 6 : (1024) & (1ULL << 5) ? 5 : (1024) & (1ULL << 4) ? 4 : (1024) & (1ULL << 3) ? 3 : (1024) & (1ULL << 2) ? 2 : (1024) & (1ULL << 1) ? 1 : (1024) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(1024) <= 4) ? __ilog2_u32(1024) : __ilog2_u64(1024) )+1)];
# 217 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern rwlock_t tasklist_lock;
extern spinlock_t mmlist_lock;

struct task_struct;





extern void sched_init(void);
extern void sched_init_smp(void);
extern void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

extern int runqueue_is_locked(int cpu);


extern void nohz_balance_enter_idle(int cpu);
extern void set_cpu_sd_state_idle(void);
extern int get_nohz_timer_target(void);
# 246 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern void show_state_filter(unsigned long state_filter);

static inline __attribute__((no_instrument_function)) void show_state(void)
{
 show_state_filter(0);
}

extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);

extern void sched_show_task(struct task_struct *p);


extern void touch_softlockup_watchdog(void);
extern void touch_softlockup_watchdog_sync(void);
extern void touch_all_softlockup_watchdogs(void);
extern int proc_dowatchdog_thresh(struct ctl_table *table, int write,
      void *buffer,
      size_t *lenp, loff_t *ppos);
extern unsigned int softlockup_panic;
void lockup_detector_init(void);
# 300 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern char __sched_text_start[], __sched_text_end[];


extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_killable(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);
extern void schedule_preempt_disabled(void);

struct nsproxy;
struct user_namespace;


extern void arch_pick_mmap_layout(struct mm_struct *mm);
extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);





extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
# 377 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
 wait_queue_head_t signalfd_wqh;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};

struct cpu_itimer {
 cputime_t expires;
 cputime_t incr;
 u32 error;
 u32 incr_error;
};
# 406 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
struct cputime {
 cputime_t utime;
 cputime_t stime;
};
# 425 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
struct task_cputime {
 cputime_t utime;
 cputime_t stime;
 unsigned long long sum_exec_runtime;
};
# 461 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
struct thread_group_cputimer {
 struct task_cputime cputime;
 int running;
 raw_spinlock_t lock;
};


struct autogroup;
# 477 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
struct signal_struct {
 atomic_t sigcnt;
 atomic_t live;
 int nr_threads;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 int notify_count;
 struct task_struct *group_exit_task;


 int group_stop_count;
 unsigned int flags;
# 513 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 unsigned int is_child_subreaper:1;
 unsigned int has_child_subreaper:1;


 int posix_timer_id;
 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct pid *leader_pid;
 ktime_t it_real_incr;






 struct cpu_itimer it[2];





 struct thread_group_cputimer cputimer;


 struct task_cputime cputime_expires;

 struct list_head cpu_timers[3];

 struct pid *tty_old_pgrp;


 int leader;

 struct tty_struct *tty;


 struct autogroup *autogroup;







 cputime_t utime, stime, cutime, cstime;
 cputime_t gtime;
 cputime_t cgtime;

 struct cputime prev_cputime;

 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
 unsigned long inblock, oublock, cinblock, coublock;
 unsigned long maxrss, cmaxrss;
 struct task_io_accounting ioac;







 unsigned long long sum_sched_runtime;
# 588 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 struct rlimit rlim[16];


 struct pacct_struct pacct;


 struct taskstats *stats;


 unsigned audit_tty;
 unsigned audit_tty_log_passwd;
 struct tty_audit_buf *tty_audit_buf;
# 611 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 struct rw_semaphore group_rwsem;


 oom_flags_t oom_flags;
 short oom_score_adj;
 short oom_score_adj_min;


 struct mutex cred_guard_mutex;


};
# 641 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int signal_group_exit(const struct signal_struct *sig)
{
 return (sig->flags & 0x00000004) ||
  (sig->group_exit_task != ((void *)0));
}




struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;

 atomic_t inotify_watches;
 atomic_t inotify_devs;


 atomic_t fanotify_listeners;


 atomic_long_t epoll_watches;



 unsigned long mq_bytes;

 unsigned long locked_shm;


 struct key *uid_keyring;
 struct key *session_keyring;



 struct hlist_node uidhash_node;
 kuid_t uid;


 atomic_long_t locked_vm;

};

extern int uids_sysfs_init(void);

extern struct user_struct *find_user(kuid_t);

extern struct user_struct root_user;



struct backing_dev_info;
struct reclaim_state;


struct sched_info {

 unsigned long pcount;
 unsigned long long run_delay;


 unsigned long long last_arrival,
      last_queued;
};



struct task_delay_info {
 spinlock_t lock;
 unsigned int flags;
# 728 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 struct timespec blkio_start, blkio_end;
 u64 blkio_delay;
 u64 swapin_delay;
 u32 blkio_count;

 u32 swapin_count;


 struct timespec freepages_start, freepages_end;
 u64 freepages_delay;
 u32 freepages_count;
};


static inline __attribute__((no_instrument_function)) int sched_info_on(void)
{

 return 1;






}

enum cpu_idle_type {
 CPU_IDLE,
 CPU_NOT_IDLE,
 CPU_NEWLY_IDLE,
 CPU_MAX_IDLE_TYPES
};
# 784 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern int __attribute__((weak)) arch_sd_sibiling_asym_packing(void);

struct sched_domain_attr {
 int relax_domain_level;
};





extern int sched_domain_level_max;

struct sched_group;

struct sched_domain {

 struct sched_domain *parent;
 struct sched_domain *child;
 struct sched_group *groups;
 unsigned long min_interval;
 unsigned long max_interval;
 unsigned int busy_factor;
 unsigned int imbalance_pct;
 unsigned int cache_nice_tries;
 unsigned int busy_idx;
 unsigned int idle_idx;
 unsigned int newidle_idx;
 unsigned int wake_idx;
 unsigned int forkexec_idx;
 unsigned int smt_gain;

 int nohz_idle;
 int flags;
 int level;


 unsigned long last_balance;
 unsigned int balance_interval;
 unsigned int nr_balance_failed;

 u64 last_update;



 unsigned int lb_count[CPU_MAX_IDLE_TYPES];
 unsigned int lb_failed[CPU_MAX_IDLE_TYPES];
 unsigned int lb_balanced[CPU_MAX_IDLE_TYPES];
 unsigned int lb_imbalance[CPU_MAX_IDLE_TYPES];
 unsigned int lb_gained[CPU_MAX_IDLE_TYPES];
 unsigned int lb_hot_gained[CPU_MAX_IDLE_TYPES];
 unsigned int lb_nobusyg[CPU_MAX_IDLE_TYPES];
 unsigned int lb_nobusyq[CPU_MAX_IDLE_TYPES];


 unsigned int alb_count;
 unsigned int alb_failed;
 unsigned int alb_pushed;


 unsigned int sbe_count;
 unsigned int sbe_balanced;
 unsigned int sbe_pushed;


 unsigned int sbf_count;
 unsigned int sbf_balanced;
 unsigned int sbf_pushed;


 unsigned int ttwu_wake_remote;
 unsigned int ttwu_move_affine;
 unsigned int ttwu_move_balance;


 char *name;

 union {
  void *private;
  struct callback_head rcu;
 };

 unsigned int span_weight;







 unsigned long span[0];
};

static inline __attribute__((no_instrument_function)) struct cpumask *sched_domain_span(struct sched_domain *sd)
{
 return ((struct cpumask *)(1 ? (sd->span) : (void *)sizeof(__check_is_bitmap(sd->span))));
}

extern void partition_sched_domains(int ndoms_new, cpumask_var_t doms_new[],
        struct sched_domain_attr *dattr_new);


cpumask_var_t *alloc_sched_domains(unsigned int ndoms);
void free_sched_domains(cpumask_var_t doms[], unsigned int ndoms);

bool cpus_share_cache(int this_cpu, int that_cpu);
# 908 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
struct io_context;





static inline __attribute__((no_instrument_function)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;

struct load_weight {
 unsigned long weight, inv_weight;
};

struct sched_avg {





 u32 runnable_avg_sum, runnable_avg_period;
 u64 last_runnable_update;
 s64 decay_count;
 unsigned long load_avg_contrib;
};


struct sched_statistics {
 u64 wait_start;
 u64 wait_max;
 u64 wait_count;
 u64 wait_sum;
 u64 iowait_count;
 u64 iowait_sum;

 u64 sleep_start;
 u64 sleep_max;
 s64 sum_sleep_runtime;

 u64 block_start;
 u64 block_max;
 u64 exec_max;
 u64 slice_max;

 u64 nr_migrations_cold;
 u64 nr_failed_migrations_affine;
 u64 nr_failed_migrations_running;
 u64 nr_failed_migrations_hot;
 u64 nr_forced_migrations;

 u64 nr_wakeups;
 u64 nr_wakeups_sync;
 u64 nr_wakeups_migrate;
 u64 nr_wakeups_local;
 u64 nr_wakeups_remote;
 u64 nr_wakeups_affine;
 u64 nr_wakeups_affine_attempts;
 u64 nr_wakeups_passive;
 u64 nr_wakeups_idle;
};


struct sched_entity {
 struct load_weight load;
 struct rb_node run_node;
 struct list_head group_node;
 unsigned int on_rq;

 u64 exec_start;
 u64 sum_exec_runtime;
 u64 vruntime;
 u64 prev_sum_exec_runtime;

 u64 nr_migrations;


 struct sched_statistics statistics;



 struct sched_entity *parent;

 struct cfs_rq *cfs_rq;

 struct cfs_rq *my_q;




 struct sched_avg avg;

};

struct sched_rt_entity {
 struct list_head run_list;
 unsigned long timeout;
 unsigned long watchdog_stamp;
 unsigned int time_slice;

 struct sched_rt_entity *back;

 struct sched_rt_entity *parent;

 struct rt_rq *rt_rq;

 struct rt_rq *my_q;

};


struct rcu_node;

enum perf_event_task_context {
 perf_invalid_context = -1,
 perf_hw_context = 0,
 perf_sw_context,
 perf_nr_task_contexts,
};

struct task_struct {
 volatile long state;
 void *stack;
 atomic_t usage;
 unsigned int flags;
 unsigned int ptrace;


 struct llist_node wake_entry;
 int on_cpu;

 int on_rq;

 int prio, static_prio, normal_prio;
 unsigned int rt_priority;
 const struct sched_class *sched_class;
 struct sched_entity se;
 struct sched_rt_entity rt;

 struct task_group *sched_task_group;




 struct hlist_head preempt_notifiers;
# 1066 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 unsigned char fpu_counter;

 unsigned int btrace_seq;


 unsigned int policy;
 int nr_cpus_allowed;
 cpumask_t cpus_allowed;
# 1088 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 struct sched_info sched_info;


 struct list_head tasks;

 struct plist_node pushable_tasks;


 struct mm_struct *mm, *active_mm;




 struct task_rss_stat rss_stat;


 int exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;
 unsigned int jobctl;


 unsigned int personality;

 unsigned did_exec:1;
 unsigned in_execve:1;

 unsigned in_iowait:1;


 unsigned no_new_privs:1;


 unsigned sched_reset_on_fork:1;
 unsigned sched_contributes_to_load:1;

 pid_t pid;
 pid_t tgid;



 unsigned long stack_canary;






 struct task_struct *real_parent;
 struct task_struct *parent;



 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;






 struct list_head ptraced;
 struct list_head ptrace_entry;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 cputime_t utime, stime, utimescaled, stimescaled;
 cputime_t gtime;

 struct cputime prev_cputime;


 seqlock_t vtime_seqlock;
 unsigned long long vtime_snap;
 enum {
  VTIME_SLEEPING = 0,
  VTIME_USER,
  VTIME_SYS,
 } vtime_snap_whence;

 unsigned long nvcsw, nivcsw;
 struct timespec start_time;
 struct timespec real_start_time;

 unsigned long min_flt, maj_flt;

 struct task_cputime cputime_expires;
 struct list_head cpu_timers[3];


 const struct cred *real_cred;

 const struct cred *cred;

 char comm[16];




 int link_count, total_link_count;


 struct sysv_sem sysvsem;



 unsigned long last_switch_count;


 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct nsproxy *nsproxy;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;
 struct callback_head *task_works;

 struct audit_context *audit_context;

 kuid_t loginuid;
 unsigned int sessionid;

 struct seccomp seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;


 spinlock_t alloc_lock;


 raw_spinlock_t pi_lock;



 struct plist_head pi_waiters;

 struct rt_mutex_waiter *pi_blocked_on;
# 1279 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 void *journal_info;


 struct bio_list *bio_list;



 struct blk_plug *plug;



 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;
 struct task_io_accounting ioac;

 u64 acct_rss_mem1;
 u64 acct_vm_mem1;
 cputime_t acct_timexpd;


 nodemask_t mems_allowed;
 seqcount_t mems_allowed_seq;
 int cpuset_mem_spread_rotor;
 int cpuset_slab_spread_rotor;



 struct css_set *cgroups;

 struct list_head cg_list;


 struct robust_list_head *robust_list;

 struct compat_robust_list_head *compat_robust_list;

 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;


 struct perf_event_context *perf_event_ctxp[perf_nr_task_contexts];
 struct mutex perf_event_mutex;
 struct list_head perf_event_list;


 struct mempolicy *mempolicy;
 short il_next;
 short pref_node_fork;


 int numa_scan_seq;
 int numa_migrate_seq;
 unsigned int numa_scan_period;
 u64 node_stamp;
 struct callback_head numa_work;


 struct callback_head rcu;




 struct pipe_inode_info *splice_pipe;

 struct page_frag task_frag;


 struct task_delay_info *delays;
# 1361 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
 int nr_dirtied;
 int nr_dirtied_pause;
 unsigned long dirty_paused_when;


 int latency_record_count;
 struct latency_record latency_record[32];





 unsigned long timer_slack_ns;
 unsigned long default_timer_slack_ns;



 int curr_ret_stack;

 struct ftrace_ret_stack *ret_stack;

 unsigned long long ftrace_timestamp;




 atomic_t trace_overrun;

 atomic_t tracing_graph_pause;



 unsigned long trace;

 unsigned long trace_recursion;


 struct memcg_batch_info {
  int do_batch;
  struct mem_cgroup *memcg;
  unsigned long nr_pages;
  unsigned long memsw_nr_pages;
 } memcg_batch;
 unsigned int memcg_kmem_skip_account;


 struct uprobe_task *utask;


 unsigned int sequential_io;
 unsigned int sequential_io_avg;

};





extern void task_numa_fault(int node, int pages, bool migrated);
extern void set_numabalancing_state(bool enabled);
# 1430 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) struct pid *task_pid(struct task_struct *task)
{
 return task->pids[PIDTYPE_PID].pid;
}

static inline __attribute__((no_instrument_function)) struct pid *task_tgid(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PID].pid;
}






static inline __attribute__((no_instrument_function)) struct pid *task_pgrp(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PGID].pid;
}

static inline __attribute__((no_instrument_function)) struct pid *task_session(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_SID].pid;
}

struct pid_namespace;
# 1470 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
pid_t __task_pid_nr_ns(struct task_struct *task, enum pid_type type,
   struct pid_namespace *ns);

static inline __attribute__((no_instrument_function)) pid_t task_pid_nr(struct task_struct *tsk)
{
 return tsk->pid;
}

static inline __attribute__((no_instrument_function)) pid_t task_pid_nr_ns(struct task_struct *tsk,
     struct pid_namespace *ns)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PID, ns);
}

static inline __attribute__((no_instrument_function)) pid_t task_pid_vnr(struct task_struct *tsk)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PID, ((void *)0));
}


static inline __attribute__((no_instrument_function)) pid_t task_tgid_nr(struct task_struct *tsk)
{
 return tsk->tgid;
}

pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((no_instrument_function)) pid_t task_tgid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_tgid(tsk));
}


static inline __attribute__((no_instrument_function)) pid_t task_pgrp_nr_ns(struct task_struct *tsk,
     struct pid_namespace *ns)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PGID, ns);
}

static inline __attribute__((no_instrument_function)) pid_t task_pgrp_vnr(struct task_struct *tsk)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PGID, ((void *)0));
}


static inline __attribute__((no_instrument_function)) pid_t task_session_nr_ns(struct task_struct *tsk,
     struct pid_namespace *ns)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_SID, ns);
}

static inline __attribute__((no_instrument_function)) pid_t task_session_vnr(struct task_struct *tsk)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_SID, ((void *)0));
}


static inline __attribute__((no_instrument_function)) pid_t task_pgrp_nr(struct task_struct *tsk)
{
 return task_pgrp_nr_ns(tsk, &init_pid_ns);
}
# 1542 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}
# 1555 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int is_global_init(struct task_struct *tsk)
{
 return tsk->pid == 1;
}

extern struct pid *cad_pid;

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline __attribute__((no_instrument_function)) void put_task_struct(struct task_struct *t)
{
 if (atomic_dec_and_test(&t->usage))
  __put_task_struct(t);
}


extern void task_cputime(struct task_struct *t,
    cputime_t *utime, cputime_t *stime);
extern void task_cputime_scaled(struct task_struct *t,
    cputime_t *utimescaled, cputime_t *stimescaled);
extern cputime_t task_gtime(struct task_struct *t);
# 1604 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern void task_cputime_adjusted(struct task_struct *p, cputime_t *ut, cputime_t *st);
extern void thread_group_cputime_adjusted(struct task_struct *p, cputime_t *ut, cputime_t *st);
# 1667 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) gfp_t memalloc_noio_flags(gfp_t flags)
{
 if (__builtin_expect(!!(get_current()->flags & 0x00080000), 0))
  flags &= ~(( gfp_t)0x40u);
 return flags;
}

static inline __attribute__((no_instrument_function)) unsigned int memalloc_noio_save(void)
{
 unsigned int flags = get_current()->flags & 0x00080000;
 get_current()->flags |= 0x00080000;
 return flags;
}

static inline __attribute__((no_instrument_function)) void memalloc_noio_restore(unsigned int flags)
{
 get_current()->flags = (get_current()->flags & ~0x00080000) | flags;
}
# 1710 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern bool task_set_jobctl_pending(struct task_struct *task,
        unsigned int mask);
extern void task_clear_jobctl_trapping(struct task_struct *task);
extern void task_clear_jobctl_pending(struct task_struct *task,
          unsigned int mask);
# 1736 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) void rcu_copy_process(struct task_struct *p)
{
}



static inline __attribute__((no_instrument_function)) void tsk_restore_flags(struct task_struct *task,
    unsigned long orig_flags, unsigned long flags)
{
 task->flags &= ~flags;
 task->flags |= orig_flags & flags;
}


extern void do_set_cpus_allowed(struct task_struct *p,
          const struct cpumask *new_mask);

extern int set_cpus_allowed_ptr(struct task_struct *p,
    const struct cpumask *new_mask);
# 1770 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
void calc_load_enter_idle(void);
void calc_load_exit_idle(void);






static inline __attribute__((no_instrument_function)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 return set_cpus_allowed_ptr(p, &new_mask);
}
# 1792 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern unsigned long long __attribute__((no_instrument_function)) sched_clock(void);



extern u64 cpu_clock(int cpu);
extern u64 local_clock(void);
extern u64 sched_clock_cpu(int cpu);


extern void sched_clock_init(void);
# 1822 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern int sched_clock_stable;

extern void sched_clock_tick(void);
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);
# 1838 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) void enable_sched_clock_irqtime(void) {}
static inline __attribute__((no_instrument_function)) void disable_sched_clock_irqtime(void) {}


extern unsigned long long
task_sched_runtime(struct task_struct *task);



extern void sched_exec(void);




extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);


extern void idle_task_exit(void);





extern void wake_up_nohz_cpu(int cpu);
# 1871 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) bool sched_can_stop_tick(void) { return false; }



extern void sched_autogroup_create_attach(struct task_struct *p);
extern void sched_autogroup_detach(struct task_struct *p);
extern void sched_autogroup_fork(struct signal_struct *sig);
extern void sched_autogroup_exit(struct signal_struct *sig);

extern void proc_sched_autogroup_show_task(struct task_struct *p, struct seq_file *m);
extern int proc_sched_autogroup_set_nice(struct task_struct *p, int nice);
# 1890 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern bool yield_to(struct task_struct *p, bool preempt);
extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int,
         const struct sched_param *);
extern int sched_setscheduler_nocheck(struct task_struct *, int,
          const struct sched_param *);
extern struct task_struct *idle_task(int cpu);






static inline __attribute__((no_instrument_function)) bool is_idle_task(const struct task_struct *p)
{
 return p->pid == 0;
}
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




extern struct exec_domain default_exec_domain;

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(((1UL) << 12) << 1)/sizeof(long)];
};


static inline __attribute__((no_instrument_function)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((((1UL) << 12) << 1)-sizeof(void*)));
}


extern union thread_union init_thread_union;
extern struct task_struct init_task;

extern struct mm_struct init_mm;

extern struct pid_namespace init_pid_ns;
# 1955 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
  struct pid_namespace *ns);


extern struct user_struct * alloc_uid(kuid_t);
static inline __attribute__((no_instrument_function)) struct user_struct *get_uid(struct user_struct *u)
{
 atomic_inc(&u->__count);
 return u;
}
extern void free_uid(struct user_struct *);



extern void xtime_update(unsigned long ticks);

extern int wake_up_state(struct task_struct *tsk, unsigned int state);
extern int wake_up_process(struct task_struct *tsk);
extern void wake_up_new_task(struct task_struct *tsk);

 extern void kick_process(struct task_struct *tsk);



extern void sched_fork(struct task_struct *p);
extern void sched_dead(struct task_struct *p);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void __flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline __attribute__((no_instrument_function)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); flags = _raw_spin_lock_irqsave(spinlock_check(&tsk->sighand->siglock)); } while (0); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 spin_unlock_irqrestore(&tsk->sighand->siglock, flags);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_cred(int, struct siginfo *, struct pid *,
    const struct cred *, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern bool do_notify_parent(struct task_struct *, int);
extern void __wake_up_parent(struct task_struct *p, struct task_struct *parent);
extern void force_sig(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern int zap_other_threads(struct task_struct *p);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(struct sigqueue *, struct task_struct *, int group);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);

static inline __attribute__((no_instrument_function)) void restore_saved_sigmask(void)
{
 if (test_and_clear_restore_sigmask())
  __set_current_blocked(&get_current()->saved_sigmask);
}

static inline __attribute__((no_instrument_function)) sigset_t *sigmask_to_save(void)
{
 sigset_t *res = &get_current()->blocked;
 if (__builtin_expect(!!(test_restore_sigmask()), 0))
  res = &get_current()->saved_sigmask;
 return res;
}

static inline __attribute__((no_instrument_function)) int kill_cad_pid(int sig, int priv)
{
 return kill_pid(cad_pid, sig, priv);
}
# 2053 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int on_sig_stack(unsigned long sp)
{




 return sp > get_current()->sas_ss_sp &&
  sp - get_current()->sas_ss_sp <= get_current()->sas_ss_size;

}

static inline __attribute__((no_instrument_function)) int sas_ss_flags(unsigned long sp)
{
 return (get_current()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}

static inline __attribute__((no_instrument_function)) unsigned long sigsp(unsigned long sp, struct ksignal *ksig)
{
 if (__builtin_expect(!!((ksig->ka.sa.sa_flags & 0x08000000u)), 0) && ! sas_ss_flags(sp))



  return get_current()->sas_ss_sp + get_current()->sas_ss_size;

 return sp;
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline __attribute__((no_instrument_function)) void mmdrop(struct mm_struct * mm)
{
 if (__builtin_expect(!!(atomic_dec_and_test(&mm->mm_count)), 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);





extern struct mm_struct *mm_access(struct task_struct *task, unsigned int mode);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern struct mm_struct *dup_mm(struct task_struct *tsk);

extern int copy_thread(unsigned long, unsigned long, unsigned long,
   struct task_struct *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_sighand(struct sighand_struct *);

extern void exit_itimers(struct signal_struct *);
extern void flush_itimer_signals(void);

extern void do_group_exit(int);

extern int allow_signal(int);
extern int disallow_signal(int);

extern int do_execve(const char *,
       const char * const *,
       const char * const *);
extern long do_fork(unsigned long, unsigned long, unsigned long, int *, int *);
struct task_struct *fork_idle(int);
extern pid_t kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern char *get_task_comm(char *to, struct task_struct *tsk);


void scheduler_ipi(void);
extern unsigned long wait_task_inactive(struct task_struct *, long match_state);
# 2153 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern bool current_is_single_threaded(void);
# 2165 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int get_nr_threads(struct task_struct *tsk)
{
 return tsk->signal->nr_threads;
}

static inline __attribute__((no_instrument_function)) bool thread_group_leader(struct task_struct *p)
{
 return p->exit_signal >= 0;
}







static inline __attribute__((no_instrument_function)) int has_group_leader_pid(struct task_struct *p)
{
 return p->pid == p->tgid;
}

static inline __attribute__((no_instrument_function))
int same_thread_group(struct task_struct *p1, struct task_struct *p2)
{
 return p1->tgid == p2->tgid;
}

static inline __attribute__((no_instrument_function)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({typeof (*p->thread_group.next) *__ptr = (typeof (*p->thread_group.next) *)p->thread_group.next; ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = ((typeof(p->thread_group.next))({ typeof(*(__ptr)) *_________p1 = (typeof(*(__ptr))* )(*(volatile typeof((__ptr)) *)&((__ptr))); do { } while (0); ; do { } while (0); ((typeof(*(__ptr)) *)(_________p1)); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );}); })
                                          ;
}

static inline __attribute__((no_instrument_function)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 2216 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) void task_lock(struct task_struct *p)
{
 spin_lock(&p->alloc_lock);
}

static inline __attribute__((no_instrument_function)) void task_unlock(struct task_struct *p)
{
 spin_unlock(&p->alloc_lock);
}

extern struct sighand_struct *__lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline __attribute__((no_instrument_function)) struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
             unsigned long *flags)
{
 struct sighand_struct *ret;

 ret = __lock_task_sighand(tsk, flags);
 (void)(ret);
 return ret;
}

static inline __attribute__((no_instrument_function)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 spin_unlock_irqrestore(&tsk->sighand->siglock, *flags);
}


static inline __attribute__((no_instrument_function)) void threadgroup_change_begin(struct task_struct *tsk)
{
 down_read(&tsk->signal->group_rwsem);
}
static inline __attribute__((no_instrument_function)) void threadgroup_change_end(struct task_struct *tsk)
{
 up_read(&tsk->signal->group_rwsem);
}
# 2271 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) void threadgroup_lock(struct task_struct *tsk)
{
 down_write(&tsk->signal->group_rwsem);
}







static inline __attribute__((no_instrument_function)) void threadgroup_unlock(struct task_struct *tsk)
{
 up_write(&tsk->signal->group_rwsem);
}
# 2298 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *((struct thread_info *)(p)->stack) = *((struct thread_info *)(org)->stack);
 ((struct thread_info *)(p)->stack)->task = p;
}

static inline __attribute__((no_instrument_function)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(((struct thread_info *)(p)->stack) + 1);
}



static inline __attribute__((no_instrument_function)) int object_is_on_stack(void *obj)
{
 void *stack = ((get_current())->stack);

 return (obj >= stack) && (obj < (stack + (((1UL) << 12) << 1)));
}

extern void thread_info_cache_init(void);
# 2336 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((no_instrument_function)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((no_instrument_function)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((no_instrument_function)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((no_instrument_function)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((no_instrument_function)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline __attribute__((no_instrument_function)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline __attribute__((no_instrument_function)) int test_tsk_need_resched(struct task_struct *tsk)
{
 return __builtin_expect(!!(test_tsk_thread_flag(tsk,3)), 0);
}

static inline __attribute__((no_instrument_function)) int restart_syscall(void)
{
 set_tsk_thread_flag(get_current(), 2);
 return -513;
}

static inline __attribute__((no_instrument_function)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline __attribute__((no_instrument_function)) int __fatal_signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(sigismember(&p->pending.signal, 9)), 0);
}

static inline __attribute__((no_instrument_function)) int fatal_signal_pending(struct task_struct *p)
{
 return signal_pending(p) && __fatal_signal_pending(p);
}

static inline __attribute__((no_instrument_function)) int signal_pending_state(long state, struct task_struct *p)
{
 if (!(state & (1 | 128)))
  return 0;
 if (!signal_pending(p))
  return 0;

 return (state & 1) || __fatal_signal_pending(p);
}

static inline __attribute__((no_instrument_function)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 2419 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern int _cond_resched(void);






extern int __cond_resched_lock(spinlock_t *lock);
# 2439 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern int __cond_resched_softirq(void);






static inline __attribute__((no_instrument_function)) void cond_resched_rcu(void)
{

 rcu_read_unlock();
 ({ __might_sleep("/lib/modules/3.11.0-15-generic/build/include/linux/sched.h", 2450, 0); _cond_resched(); });
 rcu_read_lock();

}






static inline __attribute__((no_instrument_function)) int spin_needbreak(spinlock_t *lock)
{



 return 0;

}
# 2476 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) int tsk_is_polling(struct task_struct *p)
{
 return ((struct thread_info *)(p)->stack)->status & 0x0004;
}
static inline __attribute__((no_instrument_function)) void __current_set_polling(void)
{
 current_thread_info()->status |= 0x0004;
}

static inline __attribute__((no_instrument_function)) bool current_set_polling_and_test(void)
{
 __current_set_polling();





 asm volatile("mfence":::"memory");

 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}

static inline __attribute__((no_instrument_function)) void __current_clr_polling(void)
{
 current_thread_info()->status &= ~0x0004;
}

static inline __attribute__((no_instrument_function)) bool current_clr_polling_and_test(void)
{
 __current_clr_polling();





 asm volatile("mfence":::"memory");

 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
# 2577 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
void thread_group_cputime(struct task_struct *tsk, struct task_cputime *times);
void thread_group_cputimer(struct task_struct *tsk, struct task_cputime *times);

static inline __attribute__((no_instrument_function)) void thread_group_cputime_init(struct signal_struct *sig)
{
 do { *(&sig->cputimer.lock) = (raw_spinlock_t) { .raw_lock = { { 0 } }, }; } while (0);
}







extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up_state(struct task_struct *t, unsigned int state);

static inline __attribute__((no_instrument_function)) void signal_wake_up(struct task_struct *t, bool resume)
{
 signal_wake_up_state(t, resume ? 128 : 0);
}
static inline __attribute__((no_instrument_function)) void ptrace_signal_wake_up(struct task_struct *t, bool resume)
{
 signal_wake_up_state(t, resume ? 8 : 0);
}






static inline __attribute__((no_instrument_function)) unsigned int task_cpu(const struct task_struct *p)
{
 return ((struct thread_info *)(p)->stack)->cpu;
}

extern void set_task_cpu(struct task_struct *p, unsigned int cpu);
# 2630 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern long sched_setaffinity(pid_t pid, const struct cpumask *new_mask);
extern long sched_getaffinity(pid_t pid, struct cpumask *mask);


extern struct task_group root_task_group;


extern int task_can_switch_user(struct user_struct *up,
     struct task_struct *tsk);


static inline __attribute__((no_instrument_function)) void add_rchar(struct task_struct *tsk, ssize_t amt)
{
 tsk->ioac.rchar += amt;
}

static inline __attribute__((no_instrument_function)) void add_wchar(struct task_struct *tsk, ssize_t amt)
{
 tsk->ioac.wchar += amt;
}

static inline __attribute__((no_instrument_function)) void inc_syscr(struct task_struct *tsk)
{
 tsk->ioac.syscr++;
}

static inline __attribute__((no_instrument_function)) void inc_syscw(struct task_struct *tsk)
{
 tsk->ioac.syscw++;
}
# 2683 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
extern void mm_update_next_owner(struct mm_struct *mm);
extern void mm_init_owner(struct mm_struct *mm, struct task_struct *p);
# 2695 "/lib/modules/3.11.0-15-generic/build/include/linux/sched.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned long task_rlimit(const struct task_struct *tsk,
  unsigned int limit)
{
 return (*(volatile typeof(tsk->signal->rlim[limit].rlim_cur) *)&(tsk->signal->rlim[limit].rlim_cur));
}

static inline __attribute__((no_instrument_function)) unsigned long task_rlimit_max(const struct task_struct *tsk,
  unsigned int limit)
{
 return (*(volatile typeof(tsk->signal->rlim[limit].rlim_max) *)&(tsk->signal->rlim[limit].rlim_max));
}

static inline __attribute__((no_instrument_function)) unsigned long rlimit(unsigned int limit)
{
 return task_rlimit(get_current(), limit);
}

static inline __attribute__((no_instrument_function)) unsigned long rlimit_max(unsigned int limit)
{
 return task_rlimit_max(get_current(), limit);
}
# 60 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 1 3 4
# 98 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
struct mem_cgroup;



void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(void *));
struct kmem_cache *
kmem_cache_create_memcg(struct mem_cgroup *, const char *, size_t, size_t,
   unsigned long, void (*)(void *), struct kmem_cache *);
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
# 130 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
void * __krealloc(const void *, size_t, gfp_t);
void * krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
void kzfree(const void *);
size_t ksize(const void *);
# 236 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
extern struct kmem_cache *kmalloc_caches[(12 + 1) + 1];

extern struct kmem_cache *kmalloc_dma_caches[(12 + 1) + 1];
# 249 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int kmalloc_index(size_t size)
{
 if (!size)
  return 0;

 if (size <= (1 << 3))
  return 3;

 if ((1 << 3) <= 32 && size > 64 && size <= 96)
  return 1;
 if ((1 << 3) <= 64 && size > 128 && size <= 192)
  return 2;
 if (size <= 8) return 3;
 if (size <= 16) return 4;
 if (size <= 32) return 5;
 if (size <= 64) return 6;
 if (size <= 128) return 7;
 if (size <= 256) return 8;
 if (size <= 512) return 9;
 if (size <= 1024) return 10;
 if (size <= 2 * 1024) return 11;
 if (size <= 4 * 1024) return 12;
 if (size <= 8 * 1024) return 13;
 if (size <= 16 * 1024) return 14;
 if (size <= 32 * 1024) return 15;
 if (size <= 64 * 1024) return 16;
 if (size <= 128 * 1024) return 17;
 if (size <= 256 * 1024) return 18;
 if (size <= 512 * 1024) return 19;
 if (size <= 1024 * 1024) return 20;
 if (size <= 2 * 1024 * 1024) return 21;
 if (size <= 4 * 1024 * 1024) return 22;
 if (size <= 8 * 1024 * 1024) return 23;
 if (size <= 16 * 1024 * 1024) return 24;
 if (size <= 32 * 1024 * 1024) return 25;
 if (size <= 64 * 1024 * 1024) return 26;
 do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/include/linux/slab.h"), "i" (285), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0);


 return -1;
}







# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kmemleak.h" 1 3 4
# 61 "/lib/modules/3.11.0-15-generic/build/include/linux/kmemleak.h" 3 4
static inline __attribute__((no_instrument_function)) void kmemleak_init(void)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_alloc(const void *ptr, size_t size, int min_count,
      gfp_t gfp)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_alloc_recursive(const void *ptr, size_t size,
         int min_count, unsigned long flags,
         gfp_t gfp)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_alloc_percpu(const void *ptr, size_t size)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_free(const void *ptr)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_free_part(const void *ptr, size_t size)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_free_recursive(const void *ptr, unsigned long flags)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_free_percpu(const void *ptr)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_not_leak(const void *ptr)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_ignore(const void *ptr)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_scan_area(const void *ptr, size_t size, gfp_t gfp)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_erase(void **ptr)
{
}
static inline __attribute__((no_instrument_function)) void kmemleak_no_scan(const void *ptr)
{
}
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 2 3 4

enum stat_item {
 ALLOC_FASTPATH,
 ALLOC_SLOWPATH,
 FREE_FASTPATH,
 FREE_SLOWPATH,
 FREE_FROZEN,
 FREE_ADD_PARTIAL,
 FREE_REMOVE_PARTIAL,
 ALLOC_FROM_PARTIAL,
 ALLOC_SLAB,
 ALLOC_REFILL,
 ALLOC_NODE_MISMATCH,
 FREE_SLAB,
 CPUSLAB_FLUSH,
 DEACTIVATE_FULL,
 DEACTIVATE_EMPTY,
 DEACTIVATE_TO_HEAD,
 DEACTIVATE_TO_TAIL,
 DEACTIVATE_REMOTE_FREES,
 DEACTIVATE_BYPASS,
 ORDER_FALLBACK,
 CMPXCHG_DOUBLE_CPU_FAIL,
 CMPXCHG_DOUBLE_FAIL,
 CPU_PARTIAL_ALLOC,
 CPU_PARTIAL_FREE,
 CPU_PARTIAL_NODE,
 CPU_PARTIAL_DRAIN,
 NR_SLUB_STAT_ITEMS };

struct kmem_cache_cpu {
 void **freelist;
 unsigned long tid;
 struct page *page;
 struct page *partial;



};






struct kmem_cache_order_objects {
 unsigned long x;
};




struct kmem_cache {
 struct kmem_cache_cpu *cpu_slab;

 unsigned long flags;
 unsigned long min_partial;
 int size;
 int object_size;
 int offset;
 int cpu_partial;
 struct kmem_cache_order_objects oo;


 struct kmem_cache_order_objects max;
 struct kmem_cache_order_objects min;
 gfp_t allocflags;
 int refcount;
 void (*ctor)(void *);
 int inuse;
 int align;
 int reserved;
 const char *name;
 struct list_head list;

 struct kobject kobj;
# 102 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 3 4
 int remote_node_defrag_ratio;

 struct kmem_cache_node *node[(1 << 6)];
};

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void *
kmalloc_order(size_t size, gfp_t flags, unsigned int order)
{
 void *ret;

 flags |= ((( gfp_t)0x4000u) | (( gfp_t)0x100000u));
 ret = (void *) __get_free_pages(flags, order);
 kmemleak_alloc(ret, size, 1, flags);
 return ret;
}






extern bool verify_mem_not_deleted(const void *x);
# 135 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 3 4
extern void *
kmem_cache_alloc_trace(struct kmem_cache *s, gfp_t gfpflags, size_t size);
extern void *kmalloc_order_trace(size_t size, gfp_t flags, unsigned int order);
# 152 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void *kmalloc_large(size_t size, gfp_t flags)
{
 unsigned int order = ( __builtin_constant_p(size) ? ( ((size) == 0UL) ? 64 - 12 : (((size) < (1UL << 12)) ? 0 : ( __builtin_constant_p((size) - 1) ? ( ((size) - 1) < 1 ? ____ilog2_NaN() : ((size) - 1) & (1ULL << 63) ? 63 : ((size) - 1) & (1ULL << 62) ? 62 : ((size) - 1) & (1ULL << 61) ? 61 : ((size) - 1) & (1ULL << 60) ? 60 : ((size) - 1) & (1ULL << 59) ? 59 : ((size) - 1) & (1ULL << 58) ? 58 : ((size) - 1) & (1ULL << 57) ? 57 : ((size) - 1) & (1ULL << 56) ? 56 : ((size) - 1) & (1ULL << 55) ? 55 : ((size) - 1) & (1ULL << 54) ? 54 : ((size) - 1) & (1ULL << 53) ? 53 : ((size) - 1) & (1ULL << 52) ? 52 : ((size) - 1) & (1ULL << 51) ? 51 : ((size) - 1) & (1ULL << 50) ? 50 : ((size) - 1) & (1ULL << 49) ? 49 : ((size) - 1) & (1ULL << 48) ? 48 : ((size) - 1) & (1ULL << 47) ? 47 : ((size) - 1) & (1ULL << 46) ? 46 : ((size) - 1) & (1ULL << 45) ? 45 : ((size) - 1) & (1ULL << 44) ? 44 : ((size) - 1) & (1ULL << 43) ? 43 : ((size) - 1) & (1ULL << 42) ? 42 : ((size) - 1) & (1ULL << 41) ? 41 : ((size) - 1) & (1ULL << 40) ? 40 : ((size) - 1) & (1ULL << 39) ? 39 : ((size) - 1) & (1ULL << 38) ? 38 : ((size) - 1) & (1ULL << 37) ? 37 : ((size) - 1) & (1ULL << 36) ? 36 : ((size) - 1) & (1ULL << 35) ? 35 : ((size) - 1) & (1ULL << 34) ? 34 : ((size) - 1) & (1ULL << 33) ? 33 : ((size) - 1) & (1ULL << 32) ? 32 : ((size) - 1) & (1ULL << 31) ? 31 : ((size) - 1) & (1ULL << 30) ? 30 : ((size) - 1) & (1ULL << 29) ? 29 : ((size) - 1) & (1ULL << 28) ? 28 : ((size) - 1) & (1ULL << 27) ? 27 : ((size) - 1) & (1ULL << 26) ? 26 : ((size) - 1) & (1ULL << 25) ? 25 : ((size) - 1) & (1ULL << 24) ? 24 : ((size) - 1) & (1ULL << 23) ? 23 : ((size) - 1) & (1ULL << 22) ? 22 : ((size) - 1) & (1ULL << 21) ? 21 : ((size) - 1) & (1ULL << 20) ? 20 : ((size) - 1) & (1ULL << 19) ? 19 : ((size) - 1) & (1ULL << 18) ? 18 : ((size) - 1) & (1ULL << 17) ? 17 : ((size) - 1) & (1ULL << 16) ? 16 : ((size) - 1) & (1ULL << 15) ? 15 : ((size) - 1) & (1ULL << 14) ? 14 : ((size) - 1) & (1ULL << 13) ? 13 : ((size) - 1) & (1ULL << 12) ? 12 : ((size) - 1) & (1ULL << 11) ? 11 : ((size) - 1) & (1ULL << 10) ? 10 : ((size) - 1) & (1ULL << 9) ? 9 : ((size) - 1) & (1ULL << 8) ? 8 : ((size) - 1) & (1ULL << 7) ? 7 : ((size) - 1) & (1ULL << 6) ? 6 : ((size) - 1) & (1ULL << 5) ? 5 : ((size) - 1) & (1ULL << 4) ? 4 : ((size) - 1) & (1ULL << 3) ? 3 : ((size) - 1) & (1ULL << 2) ? 2 : ((size) - 1) & (1ULL << 1) ? 1 : ((size) - 1) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof((size) - 1) <= 4) ? __ilog2_u32((size) - 1) : __ilog2_u64((size) - 1) ) - 12 + 1) ) : __get_order(size) );
 return kmalloc_order_trace(size, flags, order);
}

static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 if (__builtin_constant_p(size)) {
  if (size > (1UL << (12 + 1)))
   return kmalloc_large(size, flags);

  if (!(flags & (( gfp_t)0x01u))) {
   int index = kmalloc_index(size);

   if (!index)
    return ((void *)16);

   return kmem_cache_alloc_trace(kmalloc_caches[index],
     flags, size);
  }
 }
 return __kmalloc(size, flags);
}


void *__kmalloc_node(size_t size, gfp_t flags, int node);
void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);


extern void *kmem_cache_alloc_node_trace(struct kmem_cache *s,
        gfp_t gfpflags,
        int node, size_t size);
# 195 "/lib/modules/3.11.0-15-generic/build/include/linux/slub_def.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 if (__builtin_constant_p(size) &&
  size <= (1UL << (12 + 1)) && !(flags & (( gfp_t)0x01u))) {
  int index = kmalloc_index(size);

  if (!index)
   return ((void *)16);

  return kmem_cache_alloc_node_trace(kmalloc_caches[index],
          flags, node, size);
 }
 return __kmalloc_node(size, flags, node);
}
# 298 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 2 3 4
# 309 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) int kmalloc_size(int n)
{

 if (n > 2)
  return 1 << n;

 if (n == 1 && (1 << 3) <= 32)
  return 96;

 if (n == 2 && (1 << 3) <= 64)
  return 192;

 return 0;
}
# 354 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
struct memcg_cache_params {
 bool is_root_cache;
 union {
  struct kmem_cache *memcg_caches[0];
  struct {
   struct mem_cgroup *memcg;
   struct list_head list;
   struct kmem_cache *root_cache;
   bool dead;
   atomic_t nr_pages;
   struct work_struct destroy;
  };
 };
};

int memcg_update_all_caches(int num_memcgs);

struct seq_file;
int cache_show(struct kmem_cache *s, struct seq_file *m);
void print_slabinfo_header(struct seq_file *m);
# 428 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags);







static inline __attribute__((no_instrument_function)) void *kmalloc_array(size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > (~(size_t)0) / size)
  return ((void *)0);
 return __kmalloc(n * size, flags);
}







static inline __attribute__((no_instrument_function)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 return kmalloc_array(n, size, flags | (( gfp_t)0x8000u));
}
# 495 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
extern void *__kmalloc_track_caller(size_t, gfp_t, unsigned long);
# 515 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
extern void *__kmalloc_node_track_caller(size_t, gfp_t, int, unsigned long);
# 534 "/lib/modules/3.11.0-15-generic/build/include/linux/slab.h" 3 4
static inline __attribute__((no_instrument_function)) void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline __attribute__((no_instrument_function)) void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline __attribute__((no_instrument_function)) void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}




static inline __attribute__((no_instrument_function)) unsigned int kmem_cache_size(struct kmem_cache *s)
{
 return s->object_size;
}

void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) kmem_cache_init_late(void);
# 64 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 2 3 4
# 109 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/acgcc.h" 1 3 4
# 110 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 1 3 4
# 126 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef unsigned char BOOLEAN;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned long long UINT64;
typedef long long INT64;
# 154 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef unsigned int UINT32;
typedef int INT32;



typedef s64 acpi_native_int;

typedef u64 acpi_size;
typedef u64 acpi_io_address;
typedef u64 acpi_physical_address;
# 371 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u32 acpi_status;
typedef u32 acpi_name;
typedef char *acpi_string;
typedef void *acpi_handle;
# 393 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u8 acpi_owner_id;
# 425 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u64 acpi_integer;
# 565 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u32 acpi_object_type;
# 634 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u32 acpi_event_type;
# 663 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u32 acpi_event_status;
# 729 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u8 acpi_adr_space_type;
# 816 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef acpi_status(*acpi_sleep_function) (u8 sleep_state);

struct acpi_sleep_functions {
 acpi_sleep_function legacy_function;
 acpi_sleep_function extended_function;
};
# 831 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
union acpi_object {
 acpi_object_type type;
 struct {
  acpi_object_type type;
  u64 value;
 } integer;

 struct {
  acpi_object_type type;
  u32 length;
  char *pointer;
 } string;

 struct {
  acpi_object_type type;
  u32 length;
  u8 *pointer;
 } buffer;

 struct {
  acpi_object_type type;
  u32 count;
  union acpi_object *elements;
 } package;

 struct {
  acpi_object_type type;
  acpi_object_type actual_type;
  acpi_handle handle;
 } reference;

 struct {
  acpi_object_type type;
  u32 proc_id;
  acpi_io_address pblk_address;
  u32 pblk_length;
 } processor;

 struct {
  acpi_object_type type;
  u32 system_level;
  u32 resource_order;
 } power_resource;
};




struct acpi_object_list {
 u32 count;
 union acpi_object *pointer;
};
# 891 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
struct acpi_buffer {
 acpi_size length;
 void *pointer;
};
# 910 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
struct acpi_predefined_names {
 char *name;
 u8 type;
 char *val;
};
# 927 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
struct acpi_system_info {
 u32 acpi_ca_version;
 u32 flags;
 u32 timer_resolution;
 u32 reserved1;
 u32 reserved2;
 u32 debug_level;
 u32 debug_layer;
};
# 946 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
typedef u32
 ( * acpi_osd_handler) (void *context);

typedef void
 ( * acpi_osd_exec_callback) (void *context);




typedef
void (*acpi_gbl_event_handler) (u32 event_type,
          acpi_handle device,
          u32 event_number, void *context);




typedef
u32(*acpi_event_handler) (void *context);

typedef
u32 (*acpi_gpe_handler) (acpi_handle gpe_device, u32 gpe_number, void *context);

typedef
void (*acpi_notify_handler) (acpi_handle device, u32 value, void *context);

typedef
void (*acpi_object_handler) (acpi_handle object, void *data);

typedef acpi_status(*acpi_init_handler) (acpi_handle object, u32 function);



typedef
acpi_status(*acpi_exception_handler) (acpi_status aml_status,
          acpi_name name,
          u16 opcode,
          u32 aml_offset, void *context);



typedef
acpi_status(*acpi_table_handler) (u32 event, void *table, void *context);







typedef
acpi_status(*acpi_adr_space_handler) (u32 function,
          acpi_physical_address address,
          u32 bit_width,
          u64 *value,
          void *handler_context,
          void *region_context);





struct acpi_connection_info {
 u8 *connection;
 u16 length;
 u8 access_length;
};

typedef
acpi_status(*acpi_adr_space_setup) (acpi_handle region_handle,
        u32 function,
        void *handler_context,
        void **region_context);




typedef
acpi_status(*acpi_walk_callback) (acpi_handle object,
      u32 nesting_level,
      void *context, void **return_value);

typedef
u32 (*acpi_interface_handler) (acpi_string interface_name, u32 supported);
# 1050 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
struct acpi_pnp_device_id {
 u32 length;
 char *string;
};

struct acpi_pnp_device_id_list {
 u32 count;
 u32 list_size;
 struct acpi_pnp_device_id ids[1];
};





struct acpi_device_info {
 u32 info_size;
 u32 name;
 acpi_object_type type;
 u8 param_count;
 u8 valid;
 u8 flags;
 u8 highest_dstates[4];
 u8 lowest_dstates[5];
 u32 current_status;
 u64 address;
 struct acpi_pnp_device_id hardware_id;
 struct acpi_pnp_device_id unique_id;
 struct acpi_pnp_device_id subsystem_id;
 struct acpi_pnp_device_id_list compatible_id_list;
};
# 1108 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
struct acpi_pci_id {
 u16 segment;
 u16 bus;
 u16 device;
 u16 function;
};

struct acpi_mem_space_context {
 u32 length;
 acpi_physical_address address;
 acpi_physical_address mapped_physical_address;
 u8 *mapped_logical_address;
 acpi_size mapped_length;
};




struct acpi_memory_list {
 char *list_name;
 void *list_head;
 u16 object_size;
 u16 max_depth;
 u16 current_depth;
# 1145 "/lib/modules/3.11.0-15-generic/build/include/acpi/actypes.h" 3 4
};
# 113 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/aclinux.h" 2 3 4



static inline __attribute__((no_instrument_function)) u64 acpi_os_get_thread_id(void)
{
 return (u64)(unsigned long)get_current();
}







static inline __attribute__((no_instrument_function)) void *acpi_os_allocate(acpi_size size)
{
 return kmalloc(size, ({ unsigned long _flags; do { ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _flags = arch_local_save_flags(); } while (0); ({ ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(_flags); }); }) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static inline __attribute__((no_instrument_function)) void *acpi_os_allocate_zeroed(acpi_size size)
{
 return kzalloc(size, ({ unsigned long _flags; do { ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _flags = arch_local_save_flags(); } while (0); ({ ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(_flags); }); }) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static inline __attribute__((no_instrument_function)) void *acpi_os_acquire_object(struct kmem_cache * cache)
{
 return kmem_cache_zalloc(cache,
  ({ unsigned long _flags; do { ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); _flags = arch_local_save_flags(); } while (0); ({ ({ unsigned long __dummy; typeof(_flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); arch_irqs_disabled_flags(_flags); }); }) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}
# 149 "/lib/modules/3.11.0-15-generic/build/include/acpi/platform/acenv.h" 2 3 4
# 57 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acnames.h" 1 3 4
# 58 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4

# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acexcep.h" 1 3 4
# 74 "/lib/modules/3.11.0-15-generic/build/include/acpi/acexcep.h" 3 4
struct acpi_exception_info {
 char *name;




};
# 60 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 1 3 4
# 79 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
#pragma pack(1)
# 100 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
struct acpi_table_header {
 char signature[4];
 u32 length;
 u8 revision;
 u8 checksum;
 char oem_id[6];
 char oem_table_id[8];
 u32 oem_revision;
 char asl_compiler_id[4];
 u32 asl_compiler_revision;
};
# 122 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
struct acpi_generic_address {
 u8 space_id;
 u8 bit_width;
 u8 bit_offset;
 u8 access_width;
 u64 address;
};
# 137 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
struct acpi_table_rsdp {
 char signature[8];
 u8 checksum;
 char oem_id[6];
 u8 revision;
 u32 rsdt_physical_address;
 u32 length;
 u64 xsdt_physical_address;
 u8 extended_checksum;
 u8 reserved[3];
};
# 158 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
struct acpi_table_rsdt {
 struct acpi_table_header header;
 u32 table_offset_entry[1];
};

struct acpi_table_xsdt {
 struct acpi_table_header header;
 u64 table_offset_entry[1];
};







struct acpi_table_facs {
 char signature[4];
 u32 length;
 u32 hardware_signature;
 u32 firmware_waking_vector;
 u32 global_lock;
 u32 flags;
 u64 xfirmware_waking_vector;
 u8 version;
 u8 reserved[3];
 u32 ospm_flags;
 u8 reserved1[24];
};
# 211 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
struct acpi_table_fadt {
 struct acpi_table_header header;
 u32 facs;
 u32 dsdt;
 u8 model;
 u8 preferred_profile;
 u16 sci_interrupt;
 u32 smi_command;
 u8 acpi_enable;
 u8 acpi_disable;
 u8 s4_bios_request;
 u8 pstate_control;
 u32 pm1a_event_block;
 u32 pm1b_event_block;
 u32 pm1a_control_block;
 u32 pm1b_control_block;
 u32 pm2_control_block;
 u32 pm_timer_block;
 u32 gpe0_block;
 u32 gpe1_block;
 u8 pm1_event_length;
 u8 pm1_control_length;
 u8 pm2_control_length;
 u8 pm_timer_length;
 u8 gpe0_block_length;
 u8 gpe1_block_length;
 u8 gpe1_base;
 u8 cst_control;
 u16 c2_latency;
 u16 c3_latency;
 u16 flush_size;
 u16 flush_stride;
 u8 duty_offset;
 u8 duty_width;
 u8 day_alarm;
 u8 month_alarm;
 u8 century;
 u16 boot_flags;
 u8 reserved;
 u32 flags;
 struct acpi_generic_address reset_register;
 u8 reset_value;
 u8 reserved4[3];
 u64 Xfacs;
 u64 Xdsdt;
 struct acpi_generic_address xpm1a_event_block;
 struct acpi_generic_address xpm1b_event_block;
 struct acpi_generic_address xpm1a_control_block;
 struct acpi_generic_address xpm1b_control_block;
 struct acpi_generic_address xpm2_control_block;
 struct acpi_generic_address xpm_timer_block;
 struct acpi_generic_address xgpe0_block;
 struct acpi_generic_address xgpe1_block;
 struct acpi_generic_address sleep_control;
 struct acpi_generic_address sleep_status;
};
# 306 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
enum acpi_preferred_pm_profiles {
 PM_UNSPECIFIED = 0,
 PM_DESKTOP = 1,
 PM_MOBILE = 2,
 PM_WORKSTATION = 3,
 PM_ENTERPRISE_SERVER = 4,
 PM_SOHO_SERVER = 5,
 PM_APPLIANCE_PC = 6,
 PM_PERFORMANCE_SERVER = 7,
 PM_TABLET = 8
};
# 327 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
#pragma pack()




union acpi_name_union {
 u32 integer;
 char ascii[4];
};



struct acpi_table_desc {
 acpi_physical_address address;
 struct acpi_table_header *pointer;
 u32 length;
 union acpi_name_union signature;
 acpi_owner_id owner_id;
 u8 flags;
};
# 360 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 1 3 4
# 79 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
#pragma pack(1)
# 101 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_subtable_header {
 u8 type;
 u8 length;
};



struct acpi_whea_header {
 u8 action;
 u8 instruction;
 u8 flags;
 u8 reserved;
 struct acpi_generic_address register_region;
 u64 value;
 u64 mask;
};
# 125 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_bert {
 struct acpi_table_header header;
 u32 region_length;
 u64 address;
};



struct acpi_bert_region {
 u32 block_status;
 u32 raw_data_offset;
 u32 raw_data_length;
 u32 data_length;
 u32 error_severity;
};
# 151 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
enum acpi_bert_error_severity {
 ACPI_BERT_ERROR_CORRECTABLE = 0,
 ACPI_BERT_ERROR_FATAL = 1,
 ACPI_BERT_ERROR_CORRECTED = 2,
 ACPI_BERT_ERROR_NONE = 3,
 ACPI_BERT_ERROR_RESERVED = 4
};
# 171 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_cpep {
 struct acpi_table_header header;
 u64 reserved;
};



struct acpi_cpep_polling {
 struct acpi_subtable_header header;
 u8 id;
 u8 eid;
 u32 interval;
};
# 192 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_ecdt {
 struct acpi_table_header header;
 struct acpi_generic_address control;
 struct acpi_generic_address data;
 u32 uid;
 u8 gpe;
 u8 id[1];
};
# 208 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_einj {
 struct acpi_table_header header;
 u32 header_length;
 u8 flags;
 u8 reserved[3];
 u32 entries;
};



struct acpi_einj_entry {
 struct acpi_whea_header whea_header;
};







enum acpi_einj_actions {
 ACPI_EINJ_BEGIN_OPERATION = 0,
 ACPI_EINJ_GET_TRIGGER_TABLE = 1,
 ACPI_EINJ_SET_ERROR_TYPE = 2,
 ACPI_EINJ_GET_ERROR_TYPE = 3,
 ACPI_EINJ_END_OPERATION = 4,
 ACPI_EINJ_EXECUTE_OPERATION = 5,
 ACPI_EINJ_CHECK_BUSY_STATUS = 6,
 ACPI_EINJ_GET_COMMAND_STATUS = 7,
 ACPI_EINJ_SET_ERROR_TYPE_WITH_ADDRESS = 8,
 ACPI_EINJ_ACTION_RESERVED = 9,
 ACPI_EINJ_TRIGGER_ERROR = 0xFF
};



enum acpi_einj_instructions {
 ACPI_EINJ_READ_REGISTER = 0,
 ACPI_EINJ_READ_REGISTER_VALUE = 1,
 ACPI_EINJ_WRITE_REGISTER = 2,
 ACPI_EINJ_WRITE_REGISTER_VALUE = 3,
 ACPI_EINJ_NOOP = 4,
 ACPI_EINJ_FLUSH_CACHELINE = 5,
 ACPI_EINJ_INSTRUCTION_RESERVED = 6
};

struct acpi_einj_error_type_with_addr {
 u32 error_type;
 u32 vendor_struct_offset;
 u32 flags;
 u32 apic_id;
 u64 address;
 u64 range;
 u32 pcie_id;
};

struct acpi_einj_vendor {
 u32 length;
 u32 pcie_id;
 u16 vendor_id;
 u16 device_id;
 u8 revision_id;
 u8 reserved[3];
};



struct acpi_einj_trigger {
 u32 header_size;
 u32 revision;
 u32 table_size;
 u32 entry_count;
};



enum acpi_einj_command_status {
 ACPI_EINJ_SUCCESS = 0,
 ACPI_EINJ_FAILURE = 1,
 ACPI_EINJ_INVALID_ACCESS = 2,
 ACPI_EINJ_STATUS_RESERVED = 3
};
# 314 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_erst {
 struct acpi_table_header header;
 u32 header_length;
 u32 reserved;
 u32 entries;
};



struct acpi_erst_entry {
 struct acpi_whea_header whea_header;
};







enum acpi_erst_actions {
 ACPI_ERST_BEGIN_WRITE = 0,
 ACPI_ERST_BEGIN_READ = 1,
 ACPI_ERST_BEGIN_CLEAR = 2,
 ACPI_ERST_END = 3,
 ACPI_ERST_SET_RECORD_OFFSET = 4,
 ACPI_ERST_EXECUTE_OPERATION = 5,
 ACPI_ERST_CHECK_BUSY_STATUS = 6,
 ACPI_ERST_GET_COMMAND_STATUS = 7,
 ACPI_ERST_GET_RECORD_ID = 8,
 ACPI_ERST_SET_RECORD_ID = 9,
 ACPI_ERST_GET_RECORD_COUNT = 10,
 ACPI_ERST_BEGIN_DUMMY_WRIITE = 11,
 ACPI_ERST_NOT_USED = 12,
 ACPI_ERST_GET_ERROR_RANGE = 13,
 ACPI_ERST_GET_ERROR_LENGTH = 14,
 ACPI_ERST_GET_ERROR_ATTRIBUTES = 15,
 ACPI_ERST_ACTION_RESERVED = 16
};



enum acpi_erst_instructions {
 ACPI_ERST_READ_REGISTER = 0,
 ACPI_ERST_READ_REGISTER_VALUE = 1,
 ACPI_ERST_WRITE_REGISTER = 2,
 ACPI_ERST_WRITE_REGISTER_VALUE = 3,
 ACPI_ERST_NOOP = 4,
 ACPI_ERST_LOAD_VAR1 = 5,
 ACPI_ERST_LOAD_VAR2 = 6,
 ACPI_ERST_STORE_VAR1 = 7,
 ACPI_ERST_ADD = 8,
 ACPI_ERST_SUBTRACT = 9,
 ACPI_ERST_ADD_VALUE = 10,
 ACPI_ERST_SUBTRACT_VALUE = 11,
 ACPI_ERST_STALL = 12,
 ACPI_ERST_STALL_WHILE_TRUE = 13,
 ACPI_ERST_SKIP_NEXT_IF_TRUE = 14,
 ACPI_ERST_GOTO = 15,
 ACPI_ERST_SET_SRC_ADDRESS_BASE = 16,
 ACPI_ERST_SET_DST_ADDRESS_BASE = 17,
 ACPI_ERST_MOVE_DATA = 18,
 ACPI_ERST_INSTRUCTION_RESERVED = 19
};



enum acpi_erst_command_status {
 ACPI_ERST_SUCESS = 0,
 ACPI_ERST_NO_SPACE = 1,
 ACPI_ERST_NOT_AVAILABLE = 2,
 ACPI_ERST_FAILURE = 3,
 ACPI_ERST_RECORD_EMPTY = 4,
 ACPI_ERST_NOT_FOUND = 5,
 ACPI_ERST_STATUS_RESERVED = 6
};



struct acpi_erst_info {
 u16 signature;
 u8 data[48];
};
# 404 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_hest {
 struct acpi_table_header header;
 u32 error_source_count;
};



struct acpi_hest_header {
 u16 type;
 u16 source_id;
};



enum acpi_hest_types {
 ACPI_HEST_TYPE_IA32_CHECK = 0,
 ACPI_HEST_TYPE_IA32_CORRECTED_CHECK = 1,
 ACPI_HEST_TYPE_IA32_NMI = 2,
 ACPI_HEST_TYPE_NOT_USED3 = 3,
 ACPI_HEST_TYPE_NOT_USED4 = 4,
 ACPI_HEST_TYPE_NOT_USED5 = 5,
 ACPI_HEST_TYPE_AER_ROOT_PORT = 6,
 ACPI_HEST_TYPE_AER_ENDPOINT = 7,
 ACPI_HEST_TYPE_AER_BRIDGE = 8,
 ACPI_HEST_TYPE_GENERIC_ERROR = 9,
 ACPI_HEST_TYPE_RESERVED = 10
};
# 440 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_hest_ia_error_bank {
 u8 bank_number;
 u8 clear_status_on_init;
 u8 status_format;
 u8 reserved;
 u32 control_register;
 u64 control_data;
 u32 status_register;
 u32 address_register;
 u32 misc_register;
};



struct acpi_hest_aer_common {
 u16 reserved1;
 u8 flags;
 u8 enabled;
 u32 records_to_preallocate;
 u32 max_sections_per_record;
 u32 bus;
 u16 device;
 u16 function;
 u16 device_control;
 u16 reserved2;
 u32 uncorrectable_mask;
 u32 uncorrectable_severity;
 u32 correctable_mask;
 u32 advanced_capabilities;
};
# 478 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_hest_notify {
 u8 type;
 u8 length;
 u16 config_write_enable;
 u32 poll_interval;
 u32 vector;
 u32 polling_threshold_value;
 u32 polling_threshold_window;
 u32 error_threshold_value;
 u32 error_threshold_window;
};



enum acpi_hest_notify_types {
 ACPI_HEST_NOTIFY_POLLED = 0,
 ACPI_HEST_NOTIFY_EXTERNAL = 1,
 ACPI_HEST_NOTIFY_LOCAL = 2,
 ACPI_HEST_NOTIFY_SCI = 3,
 ACPI_HEST_NOTIFY_NMI = 4,
 ACPI_HEST_NOTIFY_CMCI = 5,
 ACPI_HEST_NOTIFY_MCE = 6,
 ACPI_HEST_NOTIFY_RESERVED = 7
};
# 518 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_hest_ia_machine_check {
 struct acpi_hest_header header;
 u16 reserved1;
 u8 flags;
 u8 enabled;
 u32 records_to_preallocate;
 u32 max_sections_per_record;
 u64 global_capability_data;
 u64 global_control_data;
 u8 num_hardware_banks;
 u8 reserved3[7];
};



struct acpi_hest_ia_corrected {
 struct acpi_hest_header header;
 u16 reserved1;
 u8 flags;
 u8 enabled;
 u32 records_to_preallocate;
 u32 max_sections_per_record;
 struct acpi_hest_notify notify;
 u8 num_hardware_banks;
 u8 reserved2[3];
};



struct acpi_hest_ia_nmi {
 struct acpi_hest_header header;
 u32 reserved;
 u32 records_to_preallocate;
 u32 max_sections_per_record;
 u32 max_raw_data_length;
};





struct acpi_hest_aer_root {
 struct acpi_hest_header header;
 struct acpi_hest_aer_common aer;
 u32 root_error_command;
};



struct acpi_hest_aer {
 struct acpi_hest_header header;
 struct acpi_hest_aer_common aer;
};



struct acpi_hest_aer_bridge {
 struct acpi_hest_header header;
 struct acpi_hest_aer_common aer;
 u32 uncorrectable_mask2;
 u32 uncorrectable_severity2;
 u32 advanced_capabilities2;
};



struct acpi_hest_generic {
 struct acpi_hest_header header;
 u16 related_source_id;
 u8 reserved;
 u8 enabled;
 u32 records_to_preallocate;
 u32 max_sections_per_record;
 u32 max_raw_data_length;
 struct acpi_generic_address error_status_address;
 struct acpi_hest_notify notify;
 u32 error_block_length;
};



struct acpi_hest_generic_status {
 u32 block_status;
 u32 raw_data_offset;
 u32 raw_data_length;
 u32 data_length;
 u32 error_severity;
};
# 617 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_hest_generic_data {
 u8 section_type[16];
 u32 error_severity;
 u16 revision;
 u8 validation_bits;
 u8 flags;
 u32 error_data_length;
 u8 fru_id[16];
 u8 fru_text[20];
};
# 635 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_madt {
 struct acpi_table_header header;
 u32 address;
 u32 flags;
};
# 652 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
enum acpi_madt_type {
 ACPI_MADT_TYPE_LOCAL_APIC = 0,
 ACPI_MADT_TYPE_IO_APIC = 1,
 ACPI_MADT_TYPE_INTERRUPT_OVERRIDE = 2,
 ACPI_MADT_TYPE_NMI_SOURCE = 3,
 ACPI_MADT_TYPE_LOCAL_APIC_NMI = 4,
 ACPI_MADT_TYPE_LOCAL_APIC_OVERRIDE = 5,
 ACPI_MADT_TYPE_IO_SAPIC = 6,
 ACPI_MADT_TYPE_LOCAL_SAPIC = 7,
 ACPI_MADT_TYPE_INTERRUPT_SOURCE = 8,
 ACPI_MADT_TYPE_LOCAL_X2APIC = 9,
 ACPI_MADT_TYPE_LOCAL_X2APIC_NMI = 10,
 ACPI_MADT_TYPE_GENERIC_INTERRUPT = 11,
 ACPI_MADT_TYPE_GENERIC_DISTRIBUTOR = 12,
 ACPI_MADT_TYPE_RESERVED = 13
};







struct acpi_madt_local_apic {
 struct acpi_subtable_header header;
 u8 processor_id;
 u8 id;
 u32 lapic_flags;
};



struct acpi_madt_io_apic {
 struct acpi_subtable_header header;
 u8 id;
 u8 reserved;
 u32 address;
 u32 global_irq_base;
};



struct acpi_madt_interrupt_override {
 struct acpi_subtable_header header;
 u8 bus;
 u8 source_irq;
 u32 global_irq;
 u16 inti_flags;
};



struct acpi_madt_nmi_source {
 struct acpi_subtable_header header;
 u16 inti_flags;
 u32 global_irq;
};



struct acpi_madt_local_apic_nmi {
 struct acpi_subtable_header header;
 u8 processor_id;
 u16 inti_flags;
 u8 lint;
};



struct acpi_madt_local_apic_override {
 struct acpi_subtable_header header;
 u16 reserved;
 u64 address;
};



struct acpi_madt_io_sapic {
 struct acpi_subtable_header header;
 u8 id;
 u8 reserved;
 u32 global_irq_base;
 u64 address;
};



struct acpi_madt_local_sapic {
 struct acpi_subtable_header header;
 u8 processor_id;
 u8 id;
 u8 eid;
 u8 reserved[3];
 u32 lapic_flags;
 u32 uid;
 char uid_string[1];
};



struct acpi_madt_interrupt_source {
 struct acpi_subtable_header header;
 u16 inti_flags;
 u8 type;
 u8 id;
 u8 eid;
 u8 io_sapic_vector;
 u32 global_irq;
 u32 flags;
};







struct acpi_madt_local_x2apic {
 struct acpi_subtable_header header;
 u16 reserved;
 u32 local_apic_id;
 u32 lapic_flags;
 u32 uid;
};



struct acpi_madt_local_x2apic_nmi {
 struct acpi_subtable_header header;
 u16 inti_flags;
 u32 uid;
 u8 lint;
 u8 reserved[3];
};



struct acpi_madt_generic_interrupt {
 struct acpi_subtable_header header;
 u16 reserved;
 u32 gic_id;
 u32 uid;
 u32 flags;
 u32 parking_version;
 u32 performance_interrupt;
 u64 parked_address;
 u64 base_address;
};



struct acpi_madt_generic_distributor {
 struct acpi_subtable_header header;
 u16 reserved;
 u32 gic_id;
 u64 base_address;
 u32 global_irq_base;
 u32 reserved2;
};
# 844 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_msct {
 struct acpi_table_header header;
 u32 proximity_offset;
 u32 max_proximity_domains;
 u32 max_clock_domains;
 u64 max_address;
};



struct acpi_msct_proximity {
 u8 revision;
 u8 length;
 u32 range_start;
 u32 range_end;
 u32 processor_capacity;
 u64 memory_capacity;
};
# 870 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_sbst {
 struct acpi_table_header header;
 u32 warning_level;
 u32 low_level;
 u32 critical_level;
};
# 884 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_slit {
 struct acpi_table_header header;
 u64 locality_count;
 u8 entry[1];
};
# 897 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_table_srat {
 struct acpi_table_header header;
 u32 table_revision;
 u64 reserved;
};



enum acpi_srat_type {
 ACPI_SRAT_TYPE_CPU_AFFINITY = 0,
 ACPI_SRAT_TYPE_MEMORY_AFFINITY = 1,
 ACPI_SRAT_TYPE_X2APIC_CPU_AFFINITY = 2,
 ACPI_SRAT_TYPE_RESERVED = 3
};







struct acpi_srat_cpu_affinity {
 struct acpi_subtable_header header;
 u8 proximity_domain_lo;
 u8 apic_id;
 u32 flags;
 u8 local_sapic_eid;
 u8 proximity_domain_hi[3];
 u32 reserved;
};







struct acpi_srat_mem_affinity {
 struct acpi_subtable_header header;
 u32 proximity_domain;
 u16 reserved;
 u64 base_address;
 u64 length;
       u32 reserved1;
 u32 flags;
       u64 reserved2;
};
# 953 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl1.h" 3 4
struct acpi_srat_x2apic_cpu_affinity {
 struct acpi_subtable_header header;
 u16 reserved;
 u32 proximity_domain;
 u32 apic_id;
 u32 flags;
 u32 clock_domain;
 u32 reserved2;
};







#pragma pack()
# 361 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 1 3 4
# 100 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
#pragma pack(1)
# 123 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_asf {
 struct acpi_table_header header;
};



struct acpi_asf_header {
 u8 type;
 u8 reserved;
 u16 length;
};



enum acpi_asf_type {
 ACPI_ASF_TYPE_INFO = 0,
 ACPI_ASF_TYPE_ALERT = 1,
 ACPI_ASF_TYPE_CONTROL = 2,
 ACPI_ASF_TYPE_BOOT = 3,
 ACPI_ASF_TYPE_ADDRESS = 4,
 ACPI_ASF_TYPE_RESERVED = 5
};







struct acpi_asf_info {
 struct acpi_asf_header header;
 u8 min_reset_value;
 u8 min_poll_interval;
 u16 system_id;
 u32 mfg_id;
 u8 flags;
 u8 reserved2[3];
};







struct acpi_asf_alert {
 struct acpi_asf_header header;
 u8 assert_mask;
 u8 deassert_mask;
 u8 alerts;
 u8 data_length;
};

struct acpi_asf_alert_data {
 u8 address;
 u8 command;
 u8 mask;
 u8 value;
 u8 sensor_type;
 u8 type;
 u8 offset;
 u8 source_type;
 u8 severity;
 u8 sensor_number;
 u8 entity;
 u8 instance;
};



struct acpi_asf_remote {
 struct acpi_asf_header header;
 u8 controls;
 u8 data_length;
 u16 reserved2;
};

struct acpi_asf_control_data {
 u8 function;
 u8 address;
 u8 command;
 u8 value;
};



struct acpi_asf_rmcp {
 struct acpi_asf_header header;
 u8 capabilities[7];
 u8 completion_code;
 u32 enterprise_id;
 u8 command;
 u16 parameter;
 u16 boot_options;
 u16 oem_parameters;
};



struct acpi_asf_address {
 struct acpi_asf_header header;
 u8 eprom_address;
 u8 devices;
};
# 237 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_boot {
 struct acpi_table_header header;
 u8 cmos_index;
 u8 reserved[3];
};
# 252 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_csrt {
 struct acpi_table_header header;
};



struct acpi_csrt_group {
 u32 length;
 u32 vendor_id;
 u32 subvendor_id;
 u16 device_id;
 u16 subdevice_id;
 u16 revision;
 u16 reserved;
 u32 shared_info_length;


};



struct acpi_csrt_shared_info {
 u16 major_version;
 u16 minor_version;
 u32 mmio_base_low;
 u32 mmio_base_high;
 u32 gsi_interrupt;
 u8 interrupt_polarity;
 u8 interrupt_mode;
 u8 num_channels;
 u8 dma_address_width;
 u16 base_request_line;
 u16 num_handshake_signals;
 u32 max_block_size;


};



struct acpi_csrt_descriptor {
 u32 length;
 u16 type;
 u16 subtype;
 u32 uid;


};
# 324 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_dbg2 {
 struct acpi_table_header header;
 u32 info_offset;
 u32 info_count;
};



struct acpi_dbg2_device {
 u8 revision;
 u16 length;
 u8 register_count;
 u16 namepath_length;
 u16 namepath_offset;
 u16 oem_data_length;
 u16 oem_data_offset;
 u16 port_type;
 u16 port_subtype;
 u16 reserved;
 u16 base_address_offset;
 u16 address_size_offset;







};
# 380 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_dbgp {
 struct acpi_table_header header;
 u8 type;
 u8 reserved[3];
 struct acpi_generic_address debug_port;
};
# 397 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_dmar {
 struct acpi_table_header header;
 u8 width;
 u8 flags;
 u8 reserved[10];
};







struct acpi_dmar_header {
 u16 type;
 u16 length;
};



enum acpi_dmar_type {
 ACPI_DMAR_TYPE_HARDWARE_UNIT = 0,
 ACPI_DMAR_TYPE_RESERVED_MEMORY = 1,
 ACPI_DMAR_TYPE_ATSR = 2,
 ACPI_DMAR_HARDWARE_AFFINITY = 3,
 ACPI_DMAR_TYPE_RESERVED = 4
};



struct acpi_dmar_device_scope {
 u8 entry_type;
 u8 length;
 u16 reserved;
 u8 enumeration_id;
 u8 bus;
};



enum acpi_dmar_scope_type {
 ACPI_DMAR_SCOPE_TYPE_NOT_USED = 0,
 ACPI_DMAR_SCOPE_TYPE_ENDPOINT = 1,
 ACPI_DMAR_SCOPE_TYPE_BRIDGE = 2,
 ACPI_DMAR_SCOPE_TYPE_IOAPIC = 3,
 ACPI_DMAR_SCOPE_TYPE_HPET = 4,
 ACPI_DMAR_SCOPE_TYPE_RESERVED = 5
};

struct acpi_dmar_pci_path {
 u8 dev;
 u8 fn;
};







struct acpi_dmar_hardware_unit {
 struct acpi_dmar_header header;
 u8 flags;
 u8 reserved;
 u16 segment;
 u64 address;
};







struct acpi_dmar_reserved_memory {
 struct acpi_dmar_header header;
 u16 reserved;
 u16 segment;
 u64 base_address;
 u64 end_address;
};







struct acpi_dmar_atsr {
 struct acpi_dmar_header header;
 u8 flags;
 u8 reserved;
 u16 segment;
};







struct acpi_dmar_rhsa {
 struct acpi_dmar_header header;
 u32 reserved;
 u64 base_address;
 u32 proximity_domain;
};
# 515 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_hpet {
 struct acpi_table_header header;
 u32 id;
 struct acpi_generic_address address;
 u8 sequence;
 u16 minimum_tick;
 u8 flags;
};







enum acpi_hpet_page_protect {
 ACPI_HPET_NO_PAGE_PROTECT = 0,
 ACPI_HPET_PAGE_PROTECT4 = 1,
 ACPI_HPET_PAGE_PROTECT64 = 2
};
# 549 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_ibft {
 struct acpi_table_header header;
 u8 reserved[12];
};



struct acpi_ibft_header {
 u8 type;
 u8 version;
 u16 length;
 u8 index;
 u8 flags;
};



enum acpi_ibft_type {
 ACPI_IBFT_TYPE_NOT_USED = 0,
 ACPI_IBFT_TYPE_CONTROL = 1,
 ACPI_IBFT_TYPE_INITIATOR = 2,
 ACPI_IBFT_TYPE_NIC = 3,
 ACPI_IBFT_TYPE_TARGET = 4,
 ACPI_IBFT_TYPE_EXTENSIONS = 5,
 ACPI_IBFT_TYPE_RESERVED = 6
};



struct acpi_ibft_control {
 struct acpi_ibft_header header;
 u16 extensions;
 u16 initiator_offset;
 u16 nic0_offset;
 u16 target0_offset;
 u16 nic1_offset;
 u16 target1_offset;
};

struct acpi_ibft_initiator {
 struct acpi_ibft_header header;
 u8 sns_server[16];
 u8 slp_server[16];
 u8 primary_server[16];
 u8 secondary_server[16];
 u16 name_length;
 u16 name_offset;
};

struct acpi_ibft_nic {
 struct acpi_ibft_header header;
 u8 ip_address[16];
 u8 subnet_mask_prefix;
 u8 origin;
 u8 gateway[16];
 u8 primary_dns[16];
 u8 secondary_dns[16];
 u8 dhcp[16];
 u16 vlan;
 u8 mac_address[6];
 u16 pci_address;
 u16 name_length;
 u16 name_offset;
};

struct acpi_ibft_target {
 struct acpi_ibft_header header;
 u8 target_ip_address[16];
 u16 target_ip_socket;
 u8 target_boot_lun[8];
 u8 chap_type;
 u8 nic_association;
 u16 target_name_length;
 u16 target_name_offset;
 u16 chap_name_length;
 u16 chap_name_offset;
 u16 chap_secret_length;
 u16 chap_secret_offset;
 u16 reverse_chap_name_length;
 u16 reverse_chap_name_offset;
 u16 reverse_chap_secret_length;
 u16 reverse_chap_secret_offset;
};
# 643 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_ivrs {
 struct acpi_table_header header;
 u32 info;
 u64 reserved;
};
# 657 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_ivrs_header {
 u8 type;
 u8 flags;
 u16 length;
 u16 device_id;
};



enum acpi_ivrs_type {
 ACPI_IVRS_TYPE_HARDWARE = 0x10,
 ACPI_IVRS_TYPE_MEMORY1 = 0x20,
 ACPI_IVRS_TYPE_MEMORY2 = 0x21,
 ACPI_IVRS_TYPE_MEMORY3 = 0x22
};
# 694 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_ivrs_hardware {
 struct acpi_ivrs_header header;
 u16 capability_offset;
 u64 base_address;
 u16 pci_segment_group;
 u16 info;
 u32 reserved;
};
# 714 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_ivrs_de_header {
 u8 type;
 u16 id;
 u8 data_setting;
};







enum acpi_ivrs_device_entry_type {


 ACPI_IVRS_TYPE_PAD4 = 0,
 ACPI_IVRS_TYPE_ALL = 1,
 ACPI_IVRS_TYPE_SELECT = 2,
 ACPI_IVRS_TYPE_START = 3,
 ACPI_IVRS_TYPE_END = 4,



 ACPI_IVRS_TYPE_PAD8 = 64,
 ACPI_IVRS_TYPE_NOT_USED = 65,
 ACPI_IVRS_TYPE_ALIAS_SELECT = 66,
 ACPI_IVRS_TYPE_ALIAS_START = 67,
 ACPI_IVRS_TYPE_EXT_SELECT = 70,
 ACPI_IVRS_TYPE_EXT_START = 71,
 ACPI_IVRS_TYPE_SPECIAL = 72
};
# 757 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_ivrs_device4 {
 struct acpi_ivrs_de_header header;
};



struct acpi_ivrs_device8a {
 struct acpi_ivrs_de_header header;
 u8 reserved1;
 u16 used_id;
 u8 reserved2;
};



struct acpi_ivrs_device8b {
 struct acpi_ivrs_de_header header;
 u32 extended_data;
};







struct acpi_ivrs_device8c {
 struct acpi_ivrs_de_header header;
 u8 handle;
 u16 used_id;
 u8 variety;
};
# 797 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_ivrs_memory {
 struct acpi_ivrs_header header;
 u16 aux_data;
 u64 reserved;
 u64 start_address;
 u64 memory_length;
};
# 814 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_mcfg {
 struct acpi_table_header header;
 u8 reserved[8];
};



struct acpi_mcfg_allocation {
 u64 address;
 u16 pci_segment;
 u8 start_bus_number;
 u8 end_bus_number;
 u32 reserved;
};
# 839 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_mchi {
 struct acpi_table_header header;
 u8 interface_type;
 u8 protocol;
 u64 protocol_data;
 u8 interrupt_type;
 u8 gpe;
 u8 pci_device_flag;
 u32 global_interrupt;
 struct acpi_generic_address control_register;
 u8 pci_segment;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
};
# 866 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_mtmr {
 struct acpi_table_header header;
};



struct acpi_mtmr_entry {
 struct acpi_generic_address physical_address;
 u32 frequency;
 u32 irq;
};
# 890 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_slic {
 struct acpi_table_header header;
};



struct acpi_slic_header {
 u32 type;
 u32 length;
};



enum acpi_slic_type {
 ACPI_SLIC_TYPE_PUBLIC_KEY = 0,
 ACPI_SLIC_TYPE_WINDOWS_MARKER = 1,
 ACPI_SLIC_TYPE_RESERVED = 2
};







struct acpi_slic_key {
 struct acpi_slic_header header;
 u8 key_type;
 u8 version;
 u16 reserved;
 u32 algorithm;
 char magic[4];
 u32 bit_length;
 u32 exponent;
 u8 modulus[128];
};



struct acpi_slic_marker {
 struct acpi_slic_header header;
 u32 version;
 char oem_id[6];
 char oem_table_id[8];
 char windows_flag[8];
 u32 slic_version;
 u8 reserved[16];
 u8 signature[128];
};
# 950 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_spcr {
 struct acpi_table_header header;
 u8 interface_type;
 u8 reserved[3];
 struct acpi_generic_address serial_port;
 u8 interrupt_type;
 u8 pc_interrupt;
 u32 interrupt;
 u8 baud_rate;
 u8 parity;
 u8 stop_bits;
 u8 flow_control;
 u8 terminal_type;
 u8 reserved1;
 u16 pci_device_id;
 u16 pci_vendor_id;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
 u32 pci_flags;
 u8 pci_segment;
 u32 reserved2;
};
# 989 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_spmi {
 struct acpi_table_header header;
 u8 interface_type;
 u8 reserved;
 u16 spec_revision;
 u8 interrupt_type;
 u8 gpe_number;
 u8 reserved1;
 u8 pci_device_flag;
 u32 interrupt;
 struct acpi_generic_address ipmi_register;
 u8 pci_segment;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
 u8 reserved2;
};



enum acpi_spmi_interface_types {
 ACPI_SPMI_NOT_USED = 0,
 ACPI_SPMI_KEYBOARD = 1,
 ACPI_SPMI_SMI = 2,
 ACPI_SPMI_BLOCK_TRANSFER = 3,
 ACPI_SPMI_SMBUS = 4,
 ACPI_SPMI_RESERVED = 5
};
# 1028 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_tcpa {
 struct acpi_table_header header;
 u16 reserved;
 u32 max_log_length;
 u64 log_address;
};
# 1045 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_uefi {
 struct acpi_table_header header;
 u8 identifier[16];
 u16 data_offset;
};
# 1062 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_vrtc {
 struct acpi_table_header header;
};



struct acpi_vrtc_entry {
 struct acpi_generic_address physical_address;
 u32 irq;
};
# 1082 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_waet {
 struct acpi_table_header header;
 u32 flags;
};
# 1102 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_wdat {
 struct acpi_table_header header;
 u32 header_length;
 u16 pci_segment;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
 u8 reserved[3];
 u32 timer_period;
 u32 max_count;
 u32 min_count;
 u8 flags;
 u8 reserved2[3];
 u32 entries;
};
# 1125 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_wdat_entry {
 u8 action;
 u8 instruction;
 u16 reserved;
 struct acpi_generic_address register_region;
 u32 value;
 u32 mask;
};



enum acpi_wdat_actions {
 ACPI_WDAT_RESET = 1,
 ACPI_WDAT_GET_CURRENT_COUNTDOWN = 4,
 ACPI_WDAT_GET_COUNTDOWN = 5,
 ACPI_WDAT_SET_COUNTDOWN = 6,
 ACPI_WDAT_GET_RUNNING_STATE = 8,
 ACPI_WDAT_SET_RUNNING_STATE = 9,
 ACPI_WDAT_GET_STOPPED_STATE = 10,
 ACPI_WDAT_SET_STOPPED_STATE = 11,
 ACPI_WDAT_GET_REBOOT = 16,
 ACPI_WDAT_SET_REBOOT = 17,
 ACPI_WDAT_GET_SHUTDOWN = 18,
 ACPI_WDAT_SET_SHUTDOWN = 19,
 ACPI_WDAT_GET_STATUS = 32,
 ACPI_WDAT_SET_STATUS = 33,
 ACPI_WDAT_ACTION_RESERVED = 34
};



enum acpi_wdat_instructions {
 ACPI_WDAT_READ_VALUE = 0,
 ACPI_WDAT_READ_COUNTDOWN = 1,
 ACPI_WDAT_WRITE_VALUE = 2,
 ACPI_WDAT_WRITE_COUNTDOWN = 3,
 ACPI_WDAT_INSTRUCTION_RESERVED = 4,
 ACPI_WDAT_PRESERVE_REGISTER = 0x80
};
# 1175 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_wddt {
 struct acpi_table_header header;
 u16 spec_version;
 u16 table_version;
 u16 pci_vendor_id;
 struct acpi_generic_address address;
 u16 max_count;
 u16 min_count;
 u16 period;
 u16 status;
 u16 capability;
};
# 1213 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl2.h" 3 4
struct acpi_table_wdrt {
 struct acpi_table_header header;
 struct acpi_generic_address control_register;
 struct acpi_generic_address count_register;
 u16 pci_device_id;
 u16 pci_vendor_id;
 u8 pci_bus;
 u8 pci_device;
 u8 pci_function;
 u8 pci_segment;
 u16 max_count;
 u8 units;
};



#pragma pack()
# 362 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 1 3 4
# 86 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
#pragma pack(1)
# 107 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_bgrt {
 struct acpi_table_header header;
 u16 version;
 u8 status;
 u8 image_type;
 u64 image_address;
 u32 image_offset_x;
 u32 image_offset_y;
};







struct acpi_table_drtm {
 struct acpi_table_header header;
 u64 entry_base_address;
 u64 entry_length;
 u32 entry_address32;
 u64 entry_address64;
 u64 exit_address;
 u64 log_area_address;
 u32 log_area_length;
 u64 arch_dependent_address;
 u32 flags;
};



struct acpi_drtm_vtl_list {
 u32 validated_table_list_count;
};



struct acpi_drtm_resource_list {
 u32 resource_list_count;
};



struct acpi_drtm_id_list {
 u32 id_list_count;
};
# 161 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_fpdt {
 struct acpi_table_header header;
};



struct acpi_fpdt_header {
 u16 type;
 u8 length;
 u8 revision;
};



enum acpi_fpdt_type {
 ACPI_FPDT_TYPE_BOOT = 0,
 ACPI_FPDT_TYPE_S3PERF = 1
};







struct acpi_fpdt_boot {
 struct acpi_fpdt_header header;
 u8 reserved[4];
 u64 reset_end;
 u64 load_start;
 u64 startup_start;
 u64 exit_services_entry;
 u64 exit_services_exit;
};



struct acpi_fpdt_s3pt_ptr {
 struct acpi_fpdt_header header;
 u8 reserved[4];
 u64 address;
};





struct acpi_table_s3pt {
 u8 signature[4];
 u32 length;
};




struct acpi_s3pt_header {
 u16 type;
 u8 length;
 u8 revision;
};



enum acpi_s3pt_type {
 ACPI_S3PT_TYPE_RESUME = 0,
 ACPI_S3PT_TYPE_SUSPEND = 1
};

struct acpi_s3pt_resume {
 struct acpi_s3pt_header header;
 u32 resume_count;
 u64 full_resume;
 u64 average_resume;
};

struct acpi_s3pt_suspend {
 struct acpi_s3pt_header header;
 u64 suspend_start;
 u64 suspend_end;
};
# 249 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_gtdt {
 struct acpi_table_header header;
 u64 address;
 u32 flags;
 u32 secure_pl1_interrupt;
 u32 secure_pl1_flags;
 u32 non_secure_pl1_interrupt;
 u32 non_secure_pl1_flags;
 u32 virtual_timer_interrupt;
 u32 virtual_timer_flags;
 u32 non_secure_pl2_interrupt;
 u32 non_secure_pl2_flags;
};
# 287 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_mpst {
 struct acpi_table_header header;
  u8 channel_id; u8 reserved1[3]; u16 power_node_count; u16 reserved2;
};



struct acpi_mpst_channel {
 u8 channel_id; u8 reserved1[3]; u16 power_node_count; u16 reserved2;
};



struct acpi_mpst_power_node {
 u8 flags;
 u8 reserved1;
 u16 node_id;
 u32 length;
 u64 range_address;
 u64 range_length;
 u32 num_power_states;
 u32 num_physical_components;
};
# 319 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_mpst_power_state {
 u8 power_state;
 u8 info_index;
};



struct acpi_mpst_component {
 u16 component_id;
};



struct acpi_mpst_data_hdr {
 u16 characteristics_count;
 u16 reserved;
};

struct acpi_mpst_power_data {
 u8 structure_id;
 u8 flags;
 u16 reserved1;
 u32 average_power;
 u32 power_saving;
 u64 exit_latency;
 u64 reserved2;
};
# 355 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_mpst_shared {
 u32 signature;
 u16 pcc_command;
 u16 pcc_status;
 u32 command_register;
 u32 status_register;
 u32 power_state_id;
 u32 power_node_id;
 u64 energy_consumed;
 u64 average_power;
};
# 374 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_pcct {
 struct acpi_table_header header;
 u32 flags;
 u32 latency;
 u32 reserved;
};
# 391 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_pcct_subspace {
 struct acpi_subtable_header header;
 u8 reserved[6];
 u64 base_address;
 u64 length;
 struct acpi_generic_address doorbell_register;
 u64 preserve_mask;
 u64 write_mask;
};







struct acpi_pcct_shared_memory {
 u32 signature;
 u16 command;
 u16 status;
};
# 420 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_pmtt {
 struct acpi_table_header header;
 u32 reserved;
};



struct acpi_pmtt_header {
 u8 type;
 u8 reserved1;
 u16 length;
 u16 flags;
 u16 reserved2;
};
# 454 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_pmtt_socket {
 struct acpi_pmtt_header header;
 u16 socket_id;
 u16 reserved;
};



struct acpi_pmtt_controller {
 struct acpi_pmtt_header header;
 u32 read_latency;
 u32 write_latency;
 u32 read_bandwidth;
 u32 write_bandwidth;
 u16 access_width;
 u16 alignment;
 u16 reserved;
 u16 domain_count;
};



struct acpi_pmtt_domain {
 u32 proximity_domain;
};



struct acpi_pmtt_physical_component {
 struct acpi_pmtt_header header;
 u16 component_id;
 u16 reserved;
 u32 memory_size;
 u32 bios_handle;
};
# 497 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_rasf {
 struct acpi_table_header header;
 u8 channel_id[12];
};



struct acpi_rasf_shared_memory {
 u32 signature;
 u16 command;
 u16 status;
 u16 version;
 u8 capabilities[16];
 u8 set_capabilities[16];
 u16 num_parameter_blocks;
 u32 set_capabilities_status;
};



struct acpi_rasf_parameter_block {
 u16 type;
 u16 version;
 u16 length;
};



struct acpi_rasf_patrol_scrub_parameter {
 struct acpi_rasf_parameter_block header;
 u16 patrol_scrub_command;
 u64 requested_address_range[2];
 u64 actual_address_range[2];
 u16 flags;
 u8 requested_speed;
};
# 544 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
enum acpi_rasf_commands {
 ACPI_RASF_EXECUTE_RASF_COMMAND = 1
};



enum acpi_rasf_capabiliities {
 ACPI_HW_PATROL_SCRUB_SUPPORTED = 0,
 ACPI_SW_PATROL_SCRUB_EXPOSED = 1
};



enum acpi_rasf_patrol_scrub_commands {
 ACPI_RASF_GET_PATROL_PARAMETERS = 1,
 ACPI_RASF_START_PATROL_SCRUBBER = 2,
 ACPI_RASF_STOP_PATROL_SCRUBBER = 3
};







enum acpi_rasf_status {
 ACPI_RASF_SUCCESS = 0,
 ACPI_RASF_NOT_VALID = 1,
 ACPI_RASF_NOT_SUPPORTED = 2,
 ACPI_RASF_BUSY = 3,
 ACPI_RASF_FAILED = 4,
 ACPI_RASF_ABORTED = 5,
 ACPI_RASF_INVALID_DATA = 6
};
# 595 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl3.h" 3 4
struct acpi_table_tpm2 {
 struct acpi_table_header header;
 u32 flags;
 u64 control_address;
 u32 start_method;
};



struct acpi_tpm2_control {
 u32 reserved;
 u32 error;
 u32 cancel;
 u32 start;
 u64 interrupt_control;
 u32 command_size;
 u64 command_address;
 u32 response_size;
 u64 response_address;
};



#pragma pack()
# 363 "/lib/modules/3.11.0-15-generic/build/include/acpi/actbl.h" 2 3 4
# 61 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acoutput.h" 1 3 4
# 62 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 1 3 4
# 50 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
typedef u16 acpi_rs_length;
typedef u32 acpi_rsdesc_size;
# 155 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
#pragma pack(1)




struct acpi_uuid {
 u8 data[16];
};

struct acpi_vendor_uuid {
 u8 subtype;
 u8 data[16];
};




struct acpi_resource_irq {
 u8 descriptor_length;
 u8 triggering;
 u8 polarity;
 u8 sharable;
 u8 wake_capable;
 u8 interrupt_count;
 u8 interrupts[1];
};

struct acpi_resource_dma {
 u8 type;
 u8 bus_master;
 u8 transfer;
 u8 channel_count;
 u8 channels[1];
};

struct acpi_resource_start_dependent {
 u8 descriptor_length;
 u8 compatibility_priority;
 u8 performance_robustness;
};






struct acpi_resource_io {
 u8 io_decode;
 u8 alignment;
 u8 address_length;
 u16 minimum;
 u16 maximum;
};

struct acpi_resource_fixed_io {
 u16 address;
 u8 address_length;
};

struct acpi_resource_fixed_dma {
 u16 request_lines;
 u16 channels;
 u8 width;
};
# 229 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
struct acpi_resource_vendor {
 u16 byte_length;
 u8 byte_data[1];
};



struct acpi_resource_vendor_typed {
 u16 byte_length;
 u8 uuid_subtype;
 u8 uuid[16];
 u8 byte_data[1];
};

struct acpi_resource_end_tag {
 u8 checksum;
};

struct acpi_resource_memory24 {
 u8 write_protect;
 u16 minimum;
 u16 maximum;
 u16 alignment;
 u16 address_length;
};

struct acpi_resource_memory32 {
 u8 write_protect;
 u32 minimum;
 u32 maximum;
 u32 alignment;
 u32 address_length;
};

struct acpi_resource_fixed_memory32 {
 u8 write_protect;
 u32 address;
 u32 address_length;
};

struct acpi_memory_attribute {
 u8 write_protect;
 u8 caching;
 u8 range_type;
 u8 translation;
};

struct acpi_io_attribute {
 u8 range_type;
 u8 translation;
 u8 translation_type;
 u8 reserved1;
};

union acpi_resource_attribute {
 struct acpi_memory_attribute mem;
 struct acpi_io_attribute io;



 u8 type_specific;
};

struct acpi_resource_source {
 u8 index;
 u16 string_length;
 char *string_ptr;
};
# 308 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
struct acpi_resource_address {
u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info;};

struct acpi_resource_address16 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u16 granularity;
 u16 minimum;
 u16 maximum;
 u16 translation_offset;
 u16 address_length;
 struct acpi_resource_source resource_source;
};

struct acpi_resource_address32 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u32 granularity;
 u32 minimum;
 u32 maximum;
 u32 translation_offset;
 u32 address_length;
 struct acpi_resource_source resource_source;
};

struct acpi_resource_address64 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u64 granularity;
 u64 minimum;
 u64 maximum;
 u64 translation_offset;
 u64 address_length;
 struct acpi_resource_source resource_source;
};

struct acpi_resource_extended_address64 {
 u8 resource_type; u8 producer_consumer; u8 decode; u8 min_address_fixed; u8 max_address_fixed; union acpi_resource_attribute info; u8 revision_ID;
 u64 granularity;
 u64 minimum;
 u64 maximum;
 u64 translation_offset;
 u64 address_length;
 u64 type_specific;
};

struct acpi_resource_extended_irq {
 u8 producer_consumer;
 u8 triggering;
 u8 polarity;
 u8 sharable;
 u8 wake_capable;
 u8 interrupt_count;
 struct acpi_resource_source resource_source;
 u32 interrupts[1];
};

struct acpi_resource_generic_register {
 u8 space_id;
 u8 bit_width;
 u8 bit_offset;
 u8 access_size;
 u64 address;
};

struct acpi_resource_gpio {
 u8 revision_id;
 u8 connection_type;
 u8 producer_consumer;
 u8 pin_config;
 u8 sharable;
 u8 wake_capable;
 u8 io_restriction;
 u8 triggering;
 u8 polarity;
 u16 drive_strength;
 u16 debounce_timeout;
 u16 pin_table_length;
 u16 vendor_length;
 struct acpi_resource_source resource_source;
 u16 *pin_table;
 u8 *vendor_data;
};
# 418 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
struct acpi_resource_common_serialbus {
u8 revision_id; u8 type; u8 producer_consumer; u8 slave_mode; u8 type_revision_id; u16 type_data_length; u16 vendor_length; struct acpi_resource_source resource_source; u8 *vendor_data;};
# 432 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
struct acpi_resource_i2c_serialbus {
 u8 revision_id; u8 type; u8 producer_consumer; u8 slave_mode; u8 type_revision_id; u16 type_data_length; u16 vendor_length; struct acpi_resource_source resource_source; u8 *vendor_data; u8 access_mode;
 u16 slave_address;
 u32 connection_speed;
};






struct acpi_resource_spi_serialbus {
 u8 revision_id; u8 type; u8 producer_consumer; u8 slave_mode; u8 type_revision_id; u16 type_data_length; u16 vendor_length; struct acpi_resource_source resource_source; u8 *vendor_data; u8 wire_mode;
 u8 device_polarity;
 u8 data_bit_length;
 u8 clock_phase;
 u8 clock_polarity;
 u16 device_selection;
 u32 connection_speed;
};
# 473 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
struct acpi_resource_uart_serialbus {
 u8 revision_id; u8 type; u8 producer_consumer; u8 slave_mode; u8 type_revision_id; u16 type_data_length; u16 vendor_length; struct acpi_resource_source resource_source; u8 *vendor_data; u8 endian;
 u8 data_bits;
 u8 stop_bits;
 u8 flow_control;
 u8 parity;
 u8 lines_enabled;
 u16 rx_fifo_size;
 u16 tx_fifo_size;
 u32 default_baud_rate;
};
# 554 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
union acpi_resource_data {
 struct acpi_resource_irq irq;
 struct acpi_resource_dma dma;
 struct acpi_resource_start_dependent start_dpf;
 struct acpi_resource_io io;
 struct acpi_resource_fixed_io fixed_io;
 struct acpi_resource_fixed_dma fixed_dma;
 struct acpi_resource_vendor vendor;
 struct acpi_resource_vendor_typed vendor_typed;
 struct acpi_resource_end_tag end_tag;
 struct acpi_resource_memory24 memory24;
 struct acpi_resource_memory32 memory32;
 struct acpi_resource_fixed_memory32 fixed_memory32;
 struct acpi_resource_address16 address16;
 struct acpi_resource_address32 address32;
 struct acpi_resource_address64 address64;
 struct acpi_resource_extended_address64 ext_address64;
 struct acpi_resource_extended_irq extended_irq;
 struct acpi_resource_generic_register generic_reg;
 struct acpi_resource_gpio gpio;
 struct acpi_resource_i2c_serialbus i2c_serial_bus;
 struct acpi_resource_spi_serialbus spi_serial_bus;
 struct acpi_resource_uart_serialbus uart_serial_bus;
 struct acpi_resource_common_serialbus common_serial_bus;



 struct acpi_resource_address address;
};



struct acpi_resource {
 u32 type;
 u32 length;
 union acpi_resource_data data;
};



#pragma pack()
# 605 "/lib/modules/3.11.0-15-generic/build/include/acpi/acrestyp.h" 3 4
struct acpi_pci_routing_table {
 u32 length;
 u32 pin;
 u64 address;
 u32 source_index;
 char source[4];
};
# 63 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 1 3 4
# 54 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 3 4
typedef enum {
 OSL_GLOBAL_LOCK_HANDLER,
 OSL_NOTIFY_HANDLER,
 OSL_GPE_HANDLER,
 OSL_DEBUGGER_THREAD,
 OSL_EC_POLL_HANDLER,
 OSL_EC_BURST_HANDLER
} acpi_execute_type;
# 71 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 3 4
struct acpi_signal_fatal_info {
 u32 type;
 u32 code;
 u32 argument;
};




acpi_status __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_os_initialize(void);

acpi_status acpi_os_terminate(void);




acpi_physical_address acpi_os_get_root_pointer(void);

acpi_status
acpi_os_predefined_override(const struct acpi_predefined_names *init_val,
       acpi_string * new_val);

acpi_status
acpi_os_table_override(struct acpi_table_header *existing_table,
         struct acpi_table_header **new_table);

acpi_status
acpi_os_physical_table_override(struct acpi_table_header *existing_table,
    acpi_physical_address * new_address,
    u32 *new_table_length);
# 109 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 3 4
void acpi_os_delete_lock(spinlock_t * handle);

unsigned long acpi_os_acquire_lock(spinlock_t * handle);

void acpi_os_release_lock(spinlock_t * handle, unsigned long flags);




acpi_status
acpi_os_create_semaphore(u32 max_units,
    u32 initial_units, void * * out_handle);

acpi_status acpi_os_delete_semaphore(void * handle);

acpi_status
acpi_os_wait_semaphore(void * handle, u32 units, u16 timeout);

acpi_status acpi_os_signal_semaphore(void * handle, u32 units);
# 147 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 3 4
void *acpi_os_allocate(acpi_size size);

void acpi_os_free(void *memory);

void *acpi_os_map_memory(acpi_physical_address where,
    acpi_size length);

void acpi_os_unmap_memory(void * logical_address, acpi_size size);
void early_acpi_os_unmap_memory(void * virt, acpi_size size);
# 166 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 3 4
acpi_status
acpi_os_create_cache(char *cache_name,
       u16 object_size,
       u16 max_depth, struct kmem_cache ** return_cache);

acpi_status acpi_os_delete_cache(struct kmem_cache * cache);

acpi_status acpi_os_purge_cache(struct kmem_cache * cache);

void *acpi_os_acquire_object(struct kmem_cache * cache);

acpi_status acpi_os_release_object(struct kmem_cache * cache, void *object);




acpi_status
acpi_os_install_interrupt_handler(u32 interrupt_number,
      acpi_osd_handler service_routine,
      void *context);

acpi_status
acpi_os_remove_interrupt_handler(u32 interrupt_number,
     acpi_osd_handler service_routine);

void acpi_os_gpe_count(u32 gpe_number);
void acpi_os_fixed_event_count(u32 fixed_event_number);




u64 acpi_os_get_thread_id(void);

acpi_status
acpi_os_execute(acpi_execute_type type,
  acpi_osd_exec_callback function, void *context);

acpi_status
acpi_os_hotplug_execute(acpi_osd_exec_callback function, void *context);

void acpi_os_wait_events_complete(void);

void acpi_os_sleep(u64 milliseconds);

void acpi_os_stall(u32 microseconds);




acpi_status acpi_os_read_port(acpi_io_address address, u32 * value, u32 width);

acpi_status acpi_os_write_port(acpi_io_address address, u32 value, u32 width);




acpi_status
acpi_os_read_memory(acpi_physical_address address, u64 *value, u32 width);

acpi_status
acpi_os_write_memory(acpi_physical_address address, u64 value, u32 width);






acpi_status
acpi_os_read_pci_configuration(struct acpi_pci_id *pci_id,
          u32 reg, u64 *value, u32 width);

acpi_status
acpi_os_write_pci_configuration(struct acpi_pci_id *pci_id,
    u32 reg, u64 value, u32 width);




u64 acpi_os_get_timer(void);

acpi_status acpi_os_signal(u32 function, void *info);




void acpi_os_printf(const char *format, ...);

void acpi_os_vprintf(const char *format, va_list args);

void acpi_os_redirect_output(void *destination);
# 267 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpiosxf.h" 3 4
void *acpi_os_open_directory(char *pathname,
        char *wildcard_spec, char requested_file_type);






char *acpi_os_get_next_filename(void *dir_handle);

void acpi_os_close_directory(void *dir_handle);
# 64 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 1 3 4
# 51 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acconfig.h" 1 3 4
# 52 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acbuffer.h" 1 3 4
# 66 "/lib/modules/3.11.0-15-generic/build/include/acpi/acbuffer.h" 3 4
struct acpi_fde_info {
 u32 floppy0;
 u32 floppy1;
 u32 floppy2;
 u32 floppy3;
 u32 tape;
};





struct acpi_grt_info {
 u16 year;
 u8 month;
 u8 day;
 u8 hour;
 u8 minute;
 u8 second;
 u8 valid;
 u16 milliseconds;
 u16 timezone;
 u8 daylight;
 u8 reserved[3];
};



struct acpi_gtm_info {
 u32 pio_speed0;
 u32 dma_speed0;
 u32 pio_speed1;
 u32 dma_speed1;
 u32 flags;
};
# 111 "/lib/modules/3.11.0-15-generic/build/include/acpi/acbuffer.h" 3 4
struct acpi_pld_info {
 u8 revision;
 u8 ignore_color;
 u32 color;
 u16 width;
 u16 height;
 u8 user_visible;
 u8 dock;
 u8 lid;
 u8 panel;
 u8 vertical_position;
 u8 horizontal_position;
 u8 shape;
 u8 group_orientation;
 u8 group_token;
 u8 group_position;
 u8 bay;
 u8 ejectable;
 u8 ospm_eject_required;
 u8 cabinet_number;
 u8 card_cage_number;
 u8 reference;
 u8 rotation;
 u8 order;
 u8 reserved;
 u16 vertical_offset;
 u16 horizontal_offset;
};
# 55 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 2 3 4

extern u8 acpi_gbl_permanent_mmap;




extern u32 acpi_current_gpe_count;
extern struct acpi_table_fadt acpi_gbl_FADT;
extern u8 acpi_gbl_system_awake_and_running;
extern u8 acpi_gbl_reduced_hardware;
extern u8 acpi_gbl_osi_data;



extern u32 acpi_dbg_level;
extern u32 acpi_dbg_layer;



extern u8 acpi_gbl_enable_interpreter_slack;
extern u8 acpi_gbl_all_methods_serialized;
extern u8 acpi_gbl_create_osi_method;
extern u8 acpi_gbl_use_default_register_widths;
extern acpi_name acpi_gbl_trace_method_name;
extern u32 acpi_gbl_trace_flags;
extern bool acpi_gbl_enable_aml_debug_object;
extern u8 acpi_gbl_copy_dsdt_locally;
extern u8 acpi_gbl_truncate_io_addresses;
extern u8 acpi_gbl_disable_auto_repair;
extern u8 acpi_gbl_disable_ssdt_table_load;
# 113 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 3 4
extern u32 acpi_rsdt_forced;



acpi_status
acpi_initialize_tables(struct acpi_table_desc *initial_storage,
         u32 initial_table_count, u8 allow_resize);

acpi_status __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_initialize_subsystem(void);

acpi_status acpi_enable_subsystem(u32 flags);

acpi_status acpi_initialize_objects(u32 flags);

acpi_status acpi_terminate(void);




acpi_status acpi_enable(void);
acpi_status acpi_disable(void);
# 142 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 3 4
const char *acpi_format_exception(acpi_status exception);

acpi_status acpi_purge_cached_objects(void);

acpi_status acpi_install_interface(acpi_string interface_name);

acpi_status acpi_remove_interface(acpi_string interface_name);

u32
acpi_check_address_range(acpi_adr_space_type space_id,
    acpi_physical_address address,
    acpi_size length, u8 warn);

acpi_status
acpi_decode_pld_buffer(u8 *in_buffer,
         acpi_size length, struct acpi_pld_info **return_buffer);




void *acpi_allocate(u32 size);

void *acpi_callocate(u32 size);

void acpi_free(void *address);




acpi_status acpi_load_table(struct acpi_table_header *table);

acpi_status acpi_unload_parent_table(acpi_handle object);

acpi_status acpi_load_tables(void);




acpi_status acpi_reallocate_root_table(void);

acpi_status acpi_find_root_pointer(acpi_size *rsdp_address);

acpi_status acpi_unload_table_id(acpi_owner_id id);

acpi_status
acpi_get_table_header(acpi_string signature,
        u32 instance, struct acpi_table_header *out_table_header);

acpi_status
acpi_get_table_with_size(acpi_string signature,
        u32 instance, struct acpi_table_header **out_table,
        acpi_size *tbl_size);
acpi_status
acpi_get_table(acpi_string signature,
        u32 instance, struct acpi_table_header **out_table);

acpi_status
acpi_get_table_by_index(u32 table_index, struct acpi_table_header **out_table);

acpi_status
acpi_install_table_handler(acpi_table_handler handler, void *context);

acpi_status acpi_remove_table_handler(acpi_table_handler handler);




acpi_status
acpi_walk_namespace(acpi_object_type type,
      acpi_handle start_object,
      u32 max_depth,
      acpi_walk_callback pre_order_visit,
      acpi_walk_callback post_order_visit,
      void *context, void **return_value);

acpi_status
acpi_get_devices(const char *HID,
   acpi_walk_callback user_function,
   void *context, void **return_value);

acpi_status
acpi_get_name(acpi_handle object,
       u32 name_type, struct acpi_buffer *ret_path_ptr);

acpi_status
acpi_get_handle(acpi_handle parent,
  acpi_string pathname, acpi_handle * ret_handle);

acpi_status
acpi_attach_data(acpi_handle object, acpi_object_handler handler, void *data);

acpi_status acpi_detach_data(acpi_handle object, acpi_object_handler handler);

acpi_status
acpi_get_data(acpi_handle object, acpi_object_handler handler, void **data);

acpi_status
acpi_debug_trace(char *name, u32 debug_level, u32 debug_layer, u32 flags);




acpi_status
acpi_evaluate_object(acpi_handle object,
       acpi_string pathname,
       struct acpi_object_list *parameter_objects,
       struct acpi_buffer *return_object_buffer);

acpi_status
acpi_evaluate_object_typed(acpi_handle object,
      acpi_string pathname,
      struct acpi_object_list *external_params,
      struct acpi_buffer *return_buffer,
      acpi_object_type return_type);

acpi_status
acpi_get_object_info(acpi_handle object,
       struct acpi_device_info **return_buffer);

acpi_status acpi_install_method(u8 *buffer);

acpi_status
acpi_get_next_object(acpi_object_type type,
       acpi_handle parent,
       acpi_handle child, acpi_handle * out_handle);

acpi_status acpi_get_type(acpi_handle object, acpi_object_type * out_type);

acpi_status acpi_get_id(acpi_handle object, acpi_owner_id * out_type);

acpi_status acpi_get_parent(acpi_handle object, acpi_handle * out_handle);




acpi_status
acpi_install_initialization_handler(acpi_init_handler handler, u32 function);

acpi_status acpi_install_global_event_handler (acpi_gbl_event_handler handler, void *context);



acpi_status acpi_install_fixed_event_handler(u32 acpi_event, acpi_event_handler handler, void *context);






acpi_status acpi_remove_fixed_event_handler(u32 acpi_event, acpi_event_handler handler);



acpi_status acpi_install_gpe_handler(acpi_handle gpe_device, u32 gpe_number, u32 type, acpi_gpe_handler address, void *context);







acpi_status acpi_remove_gpe_handler(acpi_handle gpe_device, u32 gpe_number, acpi_gpe_handler address);




acpi_status acpi_install_notify_handler(acpi_handle device, u32 handler_type,
     acpi_notify_handler handler,
     void *context);

acpi_status
acpi_remove_notify_handler(acpi_handle device,
      u32 handler_type, acpi_notify_handler handler);

acpi_status
acpi_install_address_space_handler(acpi_handle device,
       acpi_adr_space_type space_id,
       acpi_adr_space_handler handler,
       acpi_adr_space_setup setup, void *context);

acpi_status
acpi_remove_address_space_handler(acpi_handle device,
      acpi_adr_space_type space_id,
      acpi_adr_space_handler handler);





acpi_status acpi_install_interface_handler(acpi_interface_handler handler);




acpi_status acpi_acquire_global_lock(u16 timeout, u32 *handle);


acpi_status acpi_release_global_lock(u32 handle);





acpi_status
acpi_acquire_mutex(acpi_handle handle, acpi_string pathname, u16 timeout);

acpi_status acpi_release_mutex(acpi_handle handle, acpi_string pathname);




acpi_status acpi_enable_event(u32 event, u32 flags);


acpi_status acpi_disable_event(u32 event, u32 flags);


acpi_status acpi_clear_event(u32 event);

acpi_status acpi_get_event_status(u32 event, acpi_event_status *event_status);






acpi_status acpi_update_all_gpes(void);

acpi_status acpi_enable_gpe(acpi_handle gpe_device, u32 gpe_number);



acpi_status acpi_disable_gpe(acpi_handle gpe_device, u32 gpe_number);



acpi_status acpi_clear_gpe(acpi_handle gpe_device, u32 gpe_number);



acpi_status acpi_set_gpe(acpi_handle gpe_device, u32 gpe_number, u8 action);



acpi_status acpi_finish_gpe(acpi_handle gpe_device, u32 gpe_number);



acpi_status acpi_setup_gpe_for_wake(acpi_handle parent_device, acpi_handle gpe_device, u32 gpe_number);




acpi_status acpi_set_gpe_wake_mask(acpi_handle gpe_device, u32 gpe_number, u8 action);



acpi_status acpi_get_gpe_status(acpi_handle gpe_device, u32 gpe_number, acpi_event_status *event_status);





acpi_status acpi_disable_all_gpes(void);

acpi_status acpi_enable_all_runtime_gpes(void);

acpi_status acpi_get_gpe_device(u32 gpe_index, acpi_handle * gpe_device);



acpi_status acpi_install_gpe_block(acpi_handle gpe_device, struct acpi_generic_address *gpe_block_address, u32 register_count, u32 interrupt_number);






acpi_status acpi_remove_gpe_block(acpi_handle gpe_device);





typedef
acpi_status(*acpi_walk_resource_callback) (struct acpi_resource * resource,
        void *context);

acpi_status
acpi_get_vendor_resource(acpi_handle device,
    char *name,
    struct acpi_vendor_uuid *uuid,
    struct acpi_buffer *ret_buffer);

acpi_status
acpi_get_current_resources(acpi_handle device, struct acpi_buffer *ret_buffer);






acpi_status
acpi_get_event_resources(acpi_handle device_handle,
    struct acpi_buffer *ret_buffer);

acpi_status
acpi_walk_resource_buffer(struct acpi_buffer *buffer,
     acpi_walk_resource_callback user_function,
     void *context);

acpi_status
acpi_walk_resources(acpi_handle device,
      char *name,
      acpi_walk_resource_callback user_function, void *context);

acpi_status
acpi_set_current_resources(acpi_handle device, struct acpi_buffer *in_buffer);

acpi_status
acpi_get_irq_routing_table(acpi_handle device, struct acpi_buffer *ret_buffer);

acpi_status
acpi_resource_to_address64(struct acpi_resource *resource,
      struct acpi_resource_address64 *out);

acpi_status
acpi_buffer_to_resource(u8 *aml_buffer,
   u16 aml_buffer_length,
   struct acpi_resource **resource_ptr);




acpi_status acpi_reset(void);

acpi_status acpi_read(u64 *value, struct acpi_generic_address *reg);

acpi_status acpi_write(u64 value, struct acpi_generic_address *reg);

acpi_status acpi_read_bit_register(u32 register_id, u32 *return_value);



acpi_status acpi_write_bit_register(u32 register_id, u32 value);






acpi_status
acpi_get_sleep_type_data(u8 sleep_state, u8 * slp_typ_a, u8 * slp_typ_b);

acpi_status acpi_enter_sleep_state_prep(u8 sleep_state);

acpi_status acpi_enter_sleep_state(u8 sleep_state);

acpi_status acpi_enter_sleep_state_s4bios(void);

acpi_status acpi_leave_sleep_state_prep(u8 sleep_state);

acpi_status acpi_leave_sleep_state(u8 sleep_state);

acpi_status acpi_set_firmware_waking_vector(u32 physical_address);




acpi_status acpi_set_firmware_waking_vector64(u64 physical_address);
# 533 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpixf.h" 3 4
void
acpi_error(const char *module_name,
    u32 line_number, const char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1)));

void
acpi_exception(const char *module_name,
        u32 line_number,
        acpi_status status, const char *format, ...) __attribute__ ((__format__ (__printf__, 4, 4 +1)));

void
acpi_warning(const char *module_name,
      u32 line_number, const char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1)));

void
acpi_info(const char *module_name,
   u32 line_number, const char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1)));

void
acpi_bios_error(const char *module_name,
  u32 line_number, const char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1)));

void
acpi_bios_warning(const char *module_name,
    u32 line_number, const char *format, ...) __attribute__ ((__format__ (__printf__, 3, 3 +1)));
# 65 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi.h" 2 3 4
# 42 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 1 3 4
# 35 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 3 4
struct acpi_handle_list {
 u32 count;
 acpi_handle handles[10];
};


acpi_status
acpi_extract_package(union acpi_object *package,
       struct acpi_buffer *format, struct acpi_buffer *buffer);
acpi_status
acpi_evaluate_integer(acpi_handle handle,
        acpi_string pathname,
        struct acpi_object_list *arguments, unsigned long long *data);
acpi_status
acpi_evaluate_reference(acpi_handle handle,
   acpi_string pathname,
   struct acpi_object_list *arguments,
   struct acpi_handle_list *list);
acpi_status
acpi_evaluate_hotplug_ost(acpi_handle handle, u32 source_event,
   u32 status_code, struct acpi_buffer *status_buf);

acpi_status
acpi_get_physical_device_location(acpi_handle handle, struct acpi_pld_info **pld);


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/proc_fs.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/kdev_t.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/kdev_t.h" 1 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/kdev_t.h" 2 3 4
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/kdev_t.h" 3 4
static inline __attribute__((no_instrument_function)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline __attribute__((no_instrument_function)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline __attribute__((no_instrument_function)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline __attribute__((no_instrument_function)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((no_instrument_function)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline __attribute__((no_instrument_function)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline __attribute__((no_instrument_function)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((no_instrument_function)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline __attribute__((no_instrument_function)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline __attribute__((no_instrument_function)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline __attribute__((no_instrument_function)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline __attribute__((no_instrument_function)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline __attribute__((no_instrument_function)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist_bl.h" 1 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/list_bl.h" 1 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/bit_spinlock.h" 1 3 4
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/bit_spinlock.h" 3 4
static inline __attribute__((no_instrument_function)) void bit_spin_lock(int bitnum, unsigned long *addr)
{







 __asm__ __volatile__("": : :"memory");

 while (__builtin_expect(!!(test_and_set_bit_lock(bitnum, addr)), 0)) {
  __asm__ __volatile__("": : :"memory");
  do {
   cpu_relax();
  } while ((__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr))));
  __asm__ __volatile__("": : :"memory");
 }

 (void)0;
}




static inline __attribute__((no_instrument_function)) int bit_spin_trylock(int bitnum, unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");

 if (__builtin_expect(!!(test_and_set_bit_lock(bitnum, addr)), 0)) {
  __asm__ __volatile__("": : :"memory");
  return 0;
 }

 (void)0;
 return 1;
}




static inline __attribute__((no_instrument_function)) void bit_spin_unlock(int bitnum, unsigned long *addr)
{




 clear_bit_unlock(bitnum, addr);

 __asm__ __volatile__("": : :"memory");
 (void)0;
}






static inline __attribute__((no_instrument_function)) void __bit_spin_unlock(int bitnum, unsigned long *addr)
{




 __clear_bit_unlock(bitnum, addr);

 __asm__ __volatile__("": : :"memory");
 (void)0;
}




static inline __attribute__((no_instrument_function)) int bit_spin_is_locked(int bitnum, unsigned long *addr)
{

 return (__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr)));





}
# 6 "/lib/modules/3.11.0-15-generic/build/include/linux/list_bl.h" 2 3 4
# 33 "/lib/modules/3.11.0-15-generic/build/include/linux/list_bl.h" 3 4
struct hlist_bl_head {
 struct hlist_bl_node *first;
};

struct hlist_bl_node {
 struct hlist_bl_node *next, **pprev;
};



static inline __attribute__((no_instrument_function)) void INIT_HLIST_BL_NODE(struct hlist_bl_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}



static inline __attribute__((no_instrument_function)) int hlist_bl_unhashed(const struct hlist_bl_node *h)
{
 return !h->pprev;
}

static inline __attribute__((no_instrument_function)) struct hlist_bl_node *hlist_bl_first(struct hlist_bl_head *h)
{
 return (struct hlist_bl_node *)
  ((unsigned long)h->first & ~1UL);
}

static inline __attribute__((no_instrument_function)) void hlist_bl_set_first(struct hlist_bl_head *h,
     struct hlist_bl_node *n)
{
 ;

                        ;
 h->first = (struct hlist_bl_node *)((unsigned long)n | 1UL);
}

static inline __attribute__((no_instrument_function)) int hlist_bl_empty(const struct hlist_bl_head *h)
{
 return !((unsigned long)h->first & ~1UL);
}

static inline __attribute__((no_instrument_function)) void hlist_bl_add_head(struct hlist_bl_node *n,
     struct hlist_bl_head *h)
{
 struct hlist_bl_node *first = hlist_bl_first(h);

 n->next = first;
 if (first)
  first->pprev = &n->next;
 n->pprev = &h->first;
 hlist_bl_set_first(h, n);
}

static inline __attribute__((no_instrument_function)) void __hlist_bl_del(struct hlist_bl_node *n)
{
 struct hlist_bl_node *next = n->next;
 struct hlist_bl_node **pprev = n->pprev;

 ;


 *pprev = (struct hlist_bl_node *)
   ((unsigned long)next |
    ((unsigned long)*pprev & 1UL));
 if (next)
  next->pprev = pprev;
}

static inline __attribute__((no_instrument_function)) void hlist_bl_del(struct hlist_bl_node *n)
{
 __hlist_bl_del(n);
 n->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}

static inline __attribute__((no_instrument_function)) void hlist_bl_del_init(struct hlist_bl_node *n)
{
 if (!hlist_bl_unhashed(n)) {
  __hlist_bl_del(n);
  INIT_HLIST_BL_NODE(n);
 }
}

static inline __attribute__((no_instrument_function)) void hlist_bl_lock(struct hlist_bl_head *b)
{
 bit_spin_lock(0, (unsigned long *)b);
}

static inline __attribute__((no_instrument_function)) void hlist_bl_unlock(struct hlist_bl_head *b)
{
 __bit_spin_unlock(0, (unsigned long *)b);
}

static inline __attribute__((no_instrument_function)) bool hlist_bl_is_locked(struct hlist_bl_head *b)
{
 return bit_spin_is_locked(0, (unsigned long *)b);
}
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist_bl.h" 2 3 4


static inline __attribute__((no_instrument_function)) void hlist_bl_set_first_rcu(struct hlist_bl_head *h,
     struct hlist_bl_node *n)
{
 ;

                        ;
 do { __asm__ __volatile__("": : :"memory"); ((h->first)) = (typeof(*((struct hlist_bl_node *)((unsigned long)n | 1UL))) *)(((struct hlist_bl_node *)((unsigned long)n | 1UL))); } while (0)
                                                                ;
}

static inline __attribute__((no_instrument_function)) struct hlist_bl_node *hlist_bl_first_rcu(struct hlist_bl_head *h)
{
 return (struct hlist_bl_node *)
  ((unsigned long)({ typeof(*(h->first)) *_________p1 = (typeof(*(h->first))* )(*(volatile typeof((h->first)) *)&((h->first))); do { } while (0); ; do { } while (0); ((typeof(*(h->first)) *)(_________p1)); }) & ~1UL);
}
# 46 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist_bl.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_bl_del_init_rcu(struct hlist_bl_node *n)
{
 if (!hlist_bl_unhashed(n)) {
  __hlist_bl_del(n);
  n->pprev = ((void *)0);
 }
}
# 73 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist_bl.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_bl_del_rcu(struct hlist_bl_node *n)
{
 __hlist_bl_del(n);
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
# 98 "/lib/modules/3.11.0-15-generic/build/include/linux/rculist_bl.h" 3 4
static inline __attribute__((no_instrument_function)) void hlist_bl_add_head_rcu(struct hlist_bl_node *n,
     struct hlist_bl_head *h)
{
 struct hlist_bl_node *first;


 first = hlist_bl_first(h);

 n->next = first;
 if (first)
  first->pprev = &n->next;
 n->pprev = &h->first;


 hlist_bl_set_first_rcu(h, n);
}
# 8 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 2 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/lockref.h" 1 3 4
# 19 "/lib/modules/3.11.0-15-generic/build/include/linux/lockref.h" 3 4
struct lockref {
 spinlock_t lock;
 unsigned int count;
};
# 31 "/lib/modules/3.11.0-15-generic/build/include/linux/lockref.h" 3 4
static inline __attribute__((no_instrument_function)) void lockref_get(struct lockref *lockref)
{
 spin_lock(&lockref->lock);
 lockref->count++;
 spin_unlock(&lockref->lock);
}






static inline __attribute__((no_instrument_function)) int lockref_get_not_zero(struct lockref *lockref)
{
 int retval = 0;

 spin_lock(&lockref->lock);
 if (lockref->count) {
  lockref->count++;
  retval = 1;
 }
 spin_unlock(&lockref->lock);
 return retval;
}






static inline __attribute__((no_instrument_function)) int lockref_put_or_lock(struct lockref *lockref)
{
 spin_lock(&lockref->lock);
 if (lockref->count <= 1)
  return 0;
 lockref->count--;
 spin_unlock(&lockref->lock);
 return 1;
}
# 13 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 2 3 4

struct nameidata;
struct path;
struct vfsmount;
# 43 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
struct qstr {
 union {
  struct {
   u32 hash; u32 len;;
  };
  u64 hash_len;
 };
 const unsigned char *name;
};





struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
extern struct dentry_stat_t dentry_stat;






static inline __attribute__((no_instrument_function)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline __attribute__((no_instrument_function)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


extern unsigned int full_name_hash(const unsigned char *, unsigned int);
# 106 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
struct dentry {

 unsigned int d_flags;
 seqcount_t d_seq;
 struct hlist_bl_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;
 struct inode *d_inode;

 unsigned char d_iname[32];


 struct lockref d_lockref;
 const struct dentry_operations *d_op;
 struct super_block *d_sb;
 unsigned long d_time;
 void *d_fsdata;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct callback_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct hlist_node d_alias;
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, unsigned int);
 int (*d_weak_revalidate)(struct dentry *, unsigned int);
 int (*d_hash)(const struct dentry *, struct qstr *);
 int (*d_compare)(const struct dentry *, const struct dentry *,
   unsigned int, const char *, const struct qstr *);
 int (*d_delete)(const struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_prune)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
 struct vfsmount *(*d_automount)(struct path *);
 int (*d_manage)(struct dentry *, bool);
} __attribute__((__aligned__((1 << (6)))));
# 213 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
extern seqlock_t rename_lock;

static inline __attribute__((no_instrument_function)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void __d_drop(struct dentry *dentry);
extern void d_drop(struct dentry *dentry);
extern void d_delete(struct dentry *);
extern void d_set_d_op(struct dentry *dentry, const struct dentry_operations *op);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_alloc_pseudo(struct super_block *, const struct qstr *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern struct dentry * d_add_ci(struct dentry *, struct inode *, struct qstr *);
extern struct dentry *d_find_any_alias(struct inode *inode);
extern struct dentry * d_obtain_alias(struct inode *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_make_root(struct inode *);


extern void d_genocide(struct dentry *);

extern void d_tmpfile(struct dentry *, struct inode *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 271 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
static inline __attribute__((no_instrument_function)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 285 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
static inline __attribute__((no_instrument_function)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}

extern void dentry_update_name_case(struct dentry *, struct qstr *);


extern void d_move(struct dentry *, struct dentry *);
extern struct dentry *d_ancestor(struct dentry *, struct dentry *);


extern struct dentry *d_lookup(const struct dentry *, const struct qstr *);
extern struct dentry *d_hash_and_lookup(struct dentry *, struct qstr *);
extern struct dentry *__d_lookup(const struct dentry *, const struct qstr *);
extern struct dentry *__d_lookup_rcu(const struct dentry *parent,
    const struct qstr *name, unsigned *seq);
# 316 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
static inline __attribute__((no_instrument_function)) int __d_rcu_to_refcount(struct dentry *dentry, unsigned seq)
{
 int ret = 0;

 do { if (__builtin_expect(!!(!arch_spin_is_locked(&(&(&dentry->d_lockref.lock)->rlock)->raw_lock)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h"), "i" (320), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 if (!read_seqcount_retry(&dentry->d_seq, seq)) {
  ret = 1;
  dentry->d_lockref.count++;
 }

 return ret;
}

static inline __attribute__((no_instrument_function)) unsigned d_count(const struct dentry *dentry)
{
 return dentry->d_lockref.count;
}


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, const char *, ...);
extern char *simple_dname(struct dentry *, char *, int);

extern char *__d_path(const struct path *, const struct path *, char *, int);
extern char *d_absolute_path(const struct path *, char *, int);
extern char *d_path(const struct path *, char *, int);
extern char *dentry_path_raw(struct dentry *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
# 359 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
static inline __attribute__((no_instrument_function)) struct dentry *dget_dlock(struct dentry *dentry)
{
 if (dentry)
  dentry->d_lockref.count++;
 return dentry;
}

static inline __attribute__((no_instrument_function)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry)
  lockref_get(&dentry->d_lockref);
 return dentry;
}

extern struct dentry *dget_parent(struct dentry *dentry);
# 382 "/lib/modules/3.11.0-15-generic/build/include/linux/dcache.h" 3 4
static inline __attribute__((no_instrument_function)) int d_unhashed(struct dentry *dentry)
{
 return hlist_bl_unhashed(&dentry->d_hash);
}

static inline __attribute__((no_instrument_function)) int d_unlinked(struct dentry *dentry)
{
 return d_unhashed(dentry) && !((dentry) == (dentry)->d_parent);
}

static inline __attribute__((no_instrument_function)) int cant_mount(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0100);
}

static inline __attribute__((no_instrument_function)) void dont_mount(struct dentry *dentry)
{
 spin_lock(&dentry->d_lockref.lock);
 dentry->d_flags |= 0x0100;
 spin_unlock(&dentry->d_lockref.lock);
}

extern void dput(struct dentry *);

static inline __attribute__((no_instrument_function)) bool d_managed(struct dentry *dentry)
{
 return dentry->d_flags & (0x10000|0x20000|0x40000);
}

static inline __attribute__((no_instrument_function)) bool d_mountpoint(struct dentry *dentry)
{
 return dentry->d_flags & 0x10000;
}

extern int sysctl_vfs_cache_pressure;
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/path.h" 1 3 4



struct dentry;
struct vfsmount;

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};

extern void path_get(const struct path *);
extern void path_put(const struct path *);

static inline __attribute__((no_instrument_function)) int path_equal(const struct path *path1, const struct path *path2)
{
 return path1->mnt == path2->mnt && path1->dentry == path2->dentry;
}
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 1 3 4
# 54 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) int radix_tree_is_indirect_ptr(void *ptr)
{
 return (int)((unsigned long)ptr & 1);
}






struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 150 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) void *radix_tree_deref_slot(void **pslot)
{
 return ({ typeof(*(*pslot)) *_________p1 = (typeof(*(*pslot))* )(*(volatile typeof((*pslot)) *)&((*pslot))); do { } while (0); ; do { } while (0); ((typeof(*(*pslot)) *)(_________p1)); });
}
# 165 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) void *radix_tree_deref_slot_protected(void **pslot,
       spinlock_t *treelock)
{
 return ({ do { } while (0); ; ((typeof(*(*pslot)) *)((*pslot))); });
}
# 178 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) int radix_tree_deref_retry(void *arg)
{
 return __builtin_expect(!!((unsigned long)arg & 1), 0);
}






static inline __attribute__((no_instrument_function)) int radix_tree_exceptional_entry(void *arg)
{

 return (unsigned long)arg & 2;
}






static inline __attribute__((no_instrument_function)) int radix_tree_exception(void *arg)
{
 return __builtin_expect(!!((unsigned long)arg & (1 | 2)), 0)
                                                           ;
}
# 213 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) void radix_tree_replace_slot(void **pslot, void *item)
{
 do { if (__builtin_expect(!!(radix_tree_is_indirect_ptr(item)), 0)) do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h"), "i" (215), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0); } while(0);
 do { __asm__ __volatile__("": : :"memory"); ((*pslot)) = (typeof(*(item)) *)((item)); } while (0);
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned int radix_tree_gang_lookup_slot(struct radix_tree_root *root,
   void ***results, unsigned long *indices,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
unsigned long radix_tree_prev_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag_slot(struct radix_tree_root *root, void ***results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
unsigned long radix_tree_range_tag_if_tagged(struct radix_tree_root *root,
  unsigned long *first_indexp, unsigned long last_index,
  unsigned long nr_to_tag,
  unsigned int fromtag, unsigned int totag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);
unsigned long radix_tree_locate_item(struct radix_tree_root *root, void *item);

static inline __attribute__((no_instrument_function)) void radix_tree_preload_end(void)
{
 __asm__ __volatile__("": : :"memory");
}
# 275 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
struct radix_tree_iter {
 unsigned long index;
 unsigned long next_index;
 unsigned long tags;
};
# 292 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void **
radix_tree_iter_init(struct radix_tree_iter *iter, unsigned long start)
{
# 303 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
 iter->index = 0;
 iter->next_index = start;
 return ((void *)0);
}
# 321 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
void **radix_tree_next_chunk(struct radix_tree_root *root,
        struct radix_tree_iter *iter, unsigned flags);







static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) unsigned
radix_tree_chunk_size(struct radix_tree_iter *iter)
{
 return iter->next_index - iter->index;
}
# 347 "/lib/modules/3.11.0-15-generic/build/include/linux/radix-tree.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((always_inline)) void **
radix_tree_next_slot(void **slot, struct radix_tree_iter *iter, unsigned flags)
{
 if (flags & 0x0100) {
  iter->tags >>= 1;
  if (__builtin_expect(!!(iter->tags & 1ul), 1)) {
   iter->index++;
   return slot + 1;
  }
  if (!(flags & 0x0200) && __builtin_expect(!!(iter->tags), 1)) {
   unsigned offset = __ffs(iter->tags);

   iter->tags >>= offset;
   iter->index += offset + 1;
   return slot + offset + 1;
  }
 } else {
  unsigned size = radix_tree_chunk_size(iter) - 1;

  while (size--) {
   slot++;
   iter->index++;
   if (__builtin_expect(!!(*slot), 1))
    return slot;
   if (flags & 0x0200) {

    iter->next_index = 0;
    break;
   }
  }
 }
 return ((void *)0);
}
# 15 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4






# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/semaphore.h" 1 3 4
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/semaphore.h" 3 4
struct semaphore {
 raw_spinlock_t lock;
 unsigned int count;
 struct list_head wait_list;
};
# 32 "/lib/modules/3.11.0-15-generic/build/include/linux/semaphore.h" 3 4
static inline __attribute__((no_instrument_function)) void sema_init(struct semaphore *sem, int val)
{
 static struct lock_class_key __key;
 *sem = (struct semaphore) { .lock = (raw_spinlock_t) { .raw_lock = { { 0 } }, }, .count = val, .wait_list = { &((*sem).wait_list), &((*sem).wait_list) }, };
 do { (void)("semaphore->lock"); (void)(&__key); } while (0);
}

extern void down(struct semaphore *sem);
extern int down_interruptible(struct semaphore *sem);
extern int down_killable(struct semaphore *sem);
extern int down_trylock(struct semaphore *sem);
extern int down_timeout(struct semaphore *sem, long jiffies);
extern void up(struct semaphore *sem);
# 22 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fiemap.h" 1 3 4
# 16 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fiemap.h" 3 4
struct fiemap_extent {
 __u64 fe_logical;

 __u64 fe_physical;

 __u64 fe_length;
 __u64 fe_reserved64[2];
 __u32 fe_flags;
 __u32 fe_reserved[3];
};

struct fiemap {
 __u64 fm_start;

 __u64 fm_length;

 __u32 fm_flags;
 __u32 fm_mapped_extents;
 __u32 fm_extent_count;
 __u32 fm_reserved;
 struct fiemap_extent fm_extents[0];
};
# 23 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/shrinker.h" 1 3 4







struct shrink_control {
 gfp_t gfp_mask;


 unsigned long nr_to_scan;
};
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/shrinker.h" 3 4
struct shrinker {
 int (*shrink)(struct shrinker *, struct shrink_control *sc);
 int seeks;
 long batch;


 struct list_head list;
 atomic_long_t nr_in_batch;
};

extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);
# 26 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/migrate_mode.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/migrate_mode.h" 3 4
enum migrate_mode {
 MIGRATE_ASYNC,
 MIGRATE_SYNC_LIGHT,
 MIGRATE_SYNC,
};
# 27 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu-rwsem.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/linux/percpu-rwsem.h" 3 4
struct percpu_rw_semaphore {
 unsigned int *fast_read_ctr;
 atomic_t write_ctr;
 struct rw_semaphore rw_sem;
 atomic_t slow_read_ctr;
 wait_queue_head_t write_waitq;
};

extern void percpu_down_read(struct percpu_rw_semaphore *);
extern void percpu_up_read(struct percpu_rw_semaphore *);

extern void percpu_down_write(struct percpu_rw_semaphore *);
extern void percpu_up_write(struct percpu_rw_semaphore *);

extern int __percpu_init_rwsem(struct percpu_rw_semaphore *,
    const char *, struct lock_class_key *);
extern void percpu_free_rwsem(struct percpu_rw_semaphore *);
# 30 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/blk_types.h" 1 3 4
# 12 "/lib/modules/3.11.0-15-generic/build/include/linux/blk_types.h" 3 4
struct bio_set;
struct bio;
struct bio_integrity_payload;
struct page;
struct block_device;
struct io_context;
struct cgroup_subsys_state;
typedef void (bio_end_io_t) (struct bio *, int);
typedef void (bio_destructor_t) (struct bio *);




struct bio_vec {
 struct page *bv_page;
 unsigned int bv_len;
 unsigned int bv_offset;
};





struct bio {
 sector_t bi_sector;

 struct bio *bi_next;
 struct block_device *bi_bdev;
 unsigned long bi_flags;
 unsigned long bi_rw;



 unsigned short bi_vcnt;
 unsigned short bi_idx;




 unsigned int bi_phys_segments;

 unsigned int bi_size;





 unsigned int bi_seg_front_size;
 unsigned int bi_seg_back_size;

 bio_end_io_t *bi_end_io;

 void *bi_private;





 struct io_context *bi_ioc;
 struct cgroup_subsys_state *bi_css;


 struct bio_integrity_payload *bi_integrity;






 unsigned int bi_max_vecs;

 atomic_t bi_cnt;

 struct bio_vec *bi_io_vec;

 struct bio_set *bi_pool;






 struct bio_vec bi_inline_vecs[0];
};
# 140 "/lib/modules/3.11.0-15-generic/build/include/linux/blk_types.h" 3 4
enum rq_flag_bits {

 __REQ_WRITE,
 __REQ_FAILFAST_DEV,
 __REQ_FAILFAST_TRANSPORT,
 __REQ_FAILFAST_DRIVER,

 __REQ_SYNC,
 __REQ_META,
 __REQ_PRIO,
 __REQ_DISCARD,
 __REQ_SECURE,
 __REQ_WRITE_SAME,

 __REQ_NOIDLE,
 __REQ_FUA,
 __REQ_FLUSH,


 __REQ_RAHEAD,
 __REQ_THROTTLED,



 __REQ_SORTED,
 __REQ_SOFTBARRIER,
 __REQ_NOMERGE,
 __REQ_STARTED,
 __REQ_DONTPREP,
 __REQ_QUEUED,
 __REQ_ELVPRIV,
 __REQ_FAILED,
 __REQ_QUIET,
 __REQ_PREEMPT,
 __REQ_ALLOCED,
 __REQ_COPY_USER,
 __REQ_FLUSH_SEQ,
 __REQ_IO_STAT,
 __REQ_MIXED_MERGE,
 __REQ_KERNEL,
 __REQ_PM,
 __REQ_NR_BITS,
};
# 31 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4


# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fs.h" 1 3 4
# 9 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fs.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/limits.h" 1 3 4
# 10 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fs.h" 2 3 4
# 38 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fs.h" 3 4
struct fstrim_range {
 __u64 start;
 __u64 len;
 __u64 minlen;
};


struct files_stat_struct {
 unsigned long nr_files;
 unsigned long nr_free_files;
 unsigned long max_files;
};

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
# 34 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4

struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct kobject;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
struct cred;
struct swap_info_struct;
struct seq_file;

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) inode_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) inode_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) files_init(unsigned long);

extern struct files_stat_struct files_stat;
extern unsigned long get_max_files(void);
extern int sysctl_nr_open;
extern struct inodes_stat_t inodes_stat;
extern int leases_enable, lease_break_time;
extern int sysctl_protected_symlinks;
extern int sysctl_protected_hardlinks;

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private, int ret,
   bool is_async);
# 225 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 kuid_t ia_uid;
 kgid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 1 3 4
# 42 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/dqblk_xfs.h" 1 3 4
# 50 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/dqblk_xfs.h" 3 4
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 146 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/dqblk_xfs.h" 3 4
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 43 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/dqblk_v1.h" 1 3 4
# 44 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/dqblk_v2.h" 1 3 4







# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/dqblk_qtree.h" 1 3 4
# 17 "/lib/modules/3.11.0-15-generic/build/include/linux/dqblk_qtree.h" 3 4
struct dquot;


struct qtree_fmt_operations {
 void (*mem2disk_dqblk)(void *disk, struct dquot *dquot);
 void (*disk2mem_dqblk)(struct dquot *dquot, void *disk);
 int (*is_id)(void *disk, struct dquot *dquot);
};


struct qtree_mem_dqinfo {
 struct super_block *dqi_sb;
 int dqi_type;
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
 unsigned int dqi_blocksize_bits;
 unsigned int dqi_entry_size;
 unsigned int dqi_usable_bs;
 unsigned int dqi_qtree_depth;
 struct qtree_fmt_operations *dqi_ops;
};

int qtree_write_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_read_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_delete_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_release_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_entry_unused(struct qtree_mem_dqinfo *info, char *disk);
static inline __attribute__((no_instrument_function)) int qtree_depth(struct qtree_mem_dqinfo *info)
{
 unsigned int epb = info->dqi_usable_bs >> 2;
 unsigned long long entries = epb;
 int i;

 for (i = 1; entries < (1ULL << 32); i++)
  entries *= epb;
 return i;
}
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/dqblk_v2.h" 2 3 4
# 45 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 2 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/projid.h" 1 3 4
# 16 "/lib/modules/3.11.0-15-generic/build/include/linux/projid.h" 3 4
struct user_namespace;
extern struct user_namespace init_user_ns;

typedef __kernel_uid32_t projid_t;
# 36 "/lib/modules/3.11.0-15-generic/build/include/linux/projid.h" 3 4
typedef projid_t kprojid_t;

static inline __attribute__((no_instrument_function)) projid_t __kprojid_val(kprojid_t projid)
{
 return projid;
}
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/projid.h" 3 4
static inline __attribute__((no_instrument_function)) bool projid_eq(kprojid_t left, kprojid_t right)
{
 return __kprojid_val(left) == __kprojid_val(right);
}

static inline __attribute__((no_instrument_function)) bool projid_lt(kprojid_t left, kprojid_t right)
{
 return __kprojid_val(left) < __kprojid_val(right);
}

static inline __attribute__((no_instrument_function)) bool projid_valid(kprojid_t projid)
{
 return !projid_eq(projid, ((kprojid_t) -1 ));
}
# 79 "/lib/modules/3.11.0-15-generic/build/include/linux/projid.h" 3 4
static inline __attribute__((no_instrument_function)) kprojid_t make_kprojid(struct user_namespace *from, projid_t projid)
{
 return ((kprojid_t) projid );
}

static inline __attribute__((no_instrument_function)) projid_t from_kprojid(struct user_namespace *to, kprojid_t kprojid)
{
 return __kprojid_val(kprojid);
}

static inline __attribute__((no_instrument_function)) projid_t from_kprojid_munged(struct user_namespace *to, kprojid_t kprojid)
{
 projid_t projid = from_kprojid(to, kprojid);
 if (projid == (projid_t)-1)
  projid = 65534;
 return projid;
}

static inline __attribute__((no_instrument_function)) bool kprojid_has_mapping(struct user_namespace *ns, kprojid_t projid)
{
 return true;
}
# 49 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/quota.h" 1 3 4
# 88 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/quota.h" 3 4
enum {
 QIF_BLIMITS_B = 0,
 QIF_SPACE_B,
 QIF_ILIMITS_B,
 QIF_INODES_B,
 QIF_BTIME_B,
 QIF_ITIME_B,
};
# 108 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/quota.h" 3 4
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 129 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/quota.h" 3 4
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};
# 151 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/quota.h" 3 4
enum {
 QUOTA_NL_C_UNSPEC,
 QUOTA_NL_C_WARNING,
 __QUOTA_NL_C_MAX,
};


enum {
 QUOTA_NL_A_UNSPEC,
 QUOTA_NL_A_QTYPE,
 QUOTA_NL_A_EXCESS_ID,
 QUOTA_NL_A_WARNING,
 QUOTA_NL_A_DEV_MAJOR,
 QUOTA_NL_A_DEV_MINOR,
 QUOTA_NL_A_CAUSED_ID,
 __QUOTA_NL_A_MAX,
};
# 50 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 2 3 4



enum quota_type {
 USRQUOTA = 0,
 GRPQUOTA = 1,
 PRJQUOTA = 2,
};

typedef __kernel_uid32_t qid_t;
typedef long long qsize_t;

struct kqid {
 union {
  kuid_t uid;
  kgid_t gid;
  kprojid_t projid;
 };
 enum quota_type type;
};

extern bool qid_eq(struct kqid left, struct kqid right);
extern bool qid_lt(struct kqid left, struct kqid right);
extern qid_t from_kqid(struct user_namespace *to, struct kqid qid);
extern qid_t from_kqid_munged(struct user_namespace *to, struct kqid qid);
extern bool qid_valid(struct kqid qid);
# 91 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
static inline __attribute__((no_instrument_function)) struct kqid make_kqid(struct user_namespace *from,
        enum quota_type type, qid_t qid)
{
 struct kqid kqid;

 kqid.type = type;
 switch (type) {
 case USRQUOTA:
  kqid.uid = make_kuid(from, qid);
  break;
 case GRPQUOTA:
  kqid.gid = make_kgid(from, qid);
  break;
 case PRJQUOTA:
  kqid.projid = make_kprojid(from, qid);
  break;
 default:
  do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/include/linux/quota.h"), "i" (108), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0);
 }
 return kqid;
}







static inline __attribute__((no_instrument_function)) struct kqid make_kqid_invalid(enum quota_type type)
{
 struct kqid kqid;

 kqid.type = type;
 switch (type) {
 case USRQUOTA:
  kqid.uid = ((kuid_t) -1 );
  break;
 case GRPQUOTA:
  kqid.gid = ((kgid_t) -1 );
  break;
 case PRJQUOTA:
  kqid.projid = ((kprojid_t) -1 );
  break;
 default:
  do { asm volatile("1:\tud2\n" ".pushsection __bug_table,\"a\"\n" "2:\t.long 1b - 2b, %c0 - 2b\n" "\t.word %c1, 0\n" "\t.org 2b+%c2\n" ".popsection" : : "i" ("/lib/modules/3.11.0-15-generic/build/include/linux/quota.h"), "i" (135), "i" (sizeof(struct bug_entry))); __builtin_unreachable(); } while (0);
 }
 return kqid;
}





static inline __attribute__((no_instrument_function)) struct kqid make_kqid_uid(kuid_t uid)
{
 struct kqid kqid;
 kqid.type = USRQUOTA;
 kqid.uid = uid;
 return kqid;
}





static inline __attribute__((no_instrument_function)) struct kqid make_kqid_gid(kgid_t gid)
{
 struct kqid kqid;
 kqid.type = GRPQUOTA;
 kqid.gid = gid;
 return kqid;
}





static inline __attribute__((no_instrument_function)) struct kqid make_kqid_projid(kprojid_t projid)
{
 struct kqid kqid;
 kqid.type = PRJQUOTA;
 kqid.projid = projid;
 return kqid;
}


extern spinlock_t dq_data_lock;
# 189 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
struct mem_dqblk {
 qsize_t dqb_bhardlimit;
 qsize_t dqb_bsoftlimit;
 qsize_t dqb_curspace;
 qsize_t dqb_rsvspace;
 qsize_t dqb_ihardlimit;
 qsize_t dqb_isoftlimit;
 qsize_t dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 int dqi_fmt_id;

 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 qsize_t dqi_maxblimit;
 qsize_t dqi_maxilimit;
 void *dqi_priv;
};

struct super_block;
# 229 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
extern void mark_info_dirty(struct super_block *sb, int type);
static inline __attribute__((no_instrument_function)) int info_dirty(struct mem_dqinfo *info)
{
 return (__builtin_constant_p((31)) ? constant_test_bit((31), (&info->dqi_flags)) : variable_test_bit((31), (&info->dqi_flags)));
}

enum {
 DQST_LOOKUPS,
 DQST_DROPS,
 DQST_READS,
 DQST_WRITES,
 DQST_CACHE_HITS,
 DQST_ALLOC_DQUOTS,
 DQST_FREE_DQUOTS,
 DQST_SYNCS,
 _DQST_DQSTAT_LAST
};

struct dqstats {
 int stat[_DQST_DQSTAT_LAST];
 struct percpu_counter counter[_DQST_DQSTAT_LAST];
};

extern struct dqstats *dqstats_pcpu;
extern struct dqstats dqstats;

static inline __attribute__((no_instrument_function)) void dqstats_inc(unsigned int type)
{
 percpu_counter_inc(&dqstats.counter[type]);
}

static inline __attribute__((no_instrument_function)) void dqstats_dec(unsigned int type)
{
 percpu_counter_dec(&dqstats.counter[type]);
}
# 277 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 struct kqid dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 struct mem_dqblk dq_dqb;
};


struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*write_dquot) (struct dquot *);
 struct dquot *(*alloc_dquot)(struct super_block *, int);
 void (*destroy_dquot)(struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);


 qsize_t *(*get_reserved_space) (struct inode *);
};

struct path;


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, struct path *);
 int (*quota_on_meta)(struct super_block *, int, int);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, struct kqid, struct fs_disk_quota *);
 int (*set_dqblk)(struct super_block *, struct kqid, struct fs_disk_quota *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
};

struct quota_format_type {
 int qf_fmt_id;
 const struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};


enum {
 _DQUOT_USAGE_ENABLED = 0,
 _DQUOT_LIMITS_ENABLED,
 _DQUOT_SUSPENDED,


 _DQUOT_STATE_FLAGS
};
# 366 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
static inline __attribute__((no_instrument_function)) unsigned int dquot_state_flag(unsigned int flags, int type)
{
 return flags << _DQUOT_STATE_FLAGS * type;
}

static inline __attribute__((no_instrument_function)) unsigned int dquot_generic_flag(unsigned int flags, int type)
{
 return (flags >> _DQUOT_STATE_FLAGS * type) & ((1 << _DQUOT_USAGE_ENABLED) | (1 << _DQUOT_LIMITS_ENABLED) | (1 << _DQUOT_SUSPENDED));
}


extern void quota_send_warning(struct kqid qid, dev_t dev,
          const char warntype);
# 387 "/lib/modules/3.11.0-15-generic/build/include/linux/quota.h" 3 4
struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 const struct quota_format_ops *ops[2];
};

int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 247 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 280 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};
# 294 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct page;
struct address_space;
struct writeback_control;

struct iov_iter {
 const struct iovec *iov;
 unsigned long nr_segs;
 size_t iov_offset;
 size_t count;
};

size_t iov_iter_copy_from_user_atomic(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count(const struct iov_iter *i);

static inline __attribute__((no_instrument_function)) void iov_iter_init(struct iov_iter *i,
   const struct iovec *iov, unsigned long nr_segs,
   size_t count, size_t written)
{
 i->iov = iov;
 i->nr_segs = nr_segs;
 i->iov_offset = 0;
 i->count = count + written;

 iov_iter_advance(i, written);
}

static inline __attribute__((no_instrument_function)) size_t iov_iter_count(struct iov_iter *i)
{
 return i->count;
}
# 339 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
typedef struct {
 size_t written;
 size_t count;
 union {
  char *buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *,
  unsigned long, unsigned long);

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned int, unsigned int);
 int (*releasepage) (struct page *, gfp_t);
 void (*freepage)(struct page *);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 int (*get_xip_mem)(struct address_space *, unsigned long, int,
      void **, unsigned long *);




 int (*migratepage) (struct address_space *,
   struct page *, struct page *, enum migrate_mode);
 int (*launder_page) (struct page *);
 int (*is_partially_uptodate) (struct page *, read_descriptor_t *,
     unsigned long);
 void (*is_dirty_writeback) (struct page *, bool *, bool *);
 int (*error_remove_page)(struct address_space *, struct page *);


 int (*swap_activate)(struct swap_info_struct *sis, struct file *file,
    sector_t *span);
 void (*swap_deactivate)(struct file *file);
};

extern const struct address_space_operations empty_aops;





int pagecache_write_begin(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);

int pagecache_write_end(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 spinlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct rb_root i_mmap;
 struct list_head i_mmap_nonlinear;
 struct mutex i_mmap_mutex;

 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 void *private_data;
} __attribute__((aligned(sizeof(long))));





struct request_queue;

struct block_device {
 dev_t bd_dev;
 int bd_openers;
 struct inode * bd_inode;
 struct super_block * bd_super;
 struct mutex bd_mutex;
 struct list_head bd_inodes;
 void * bd_claiming;
 void * bd_holder;
 int bd_holders;
 bool bd_write_holder;

 struct list_head bd_holder_disks;

 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct request_queue * bd_queue;
 struct list_head bd_list;






 unsigned long bd_private;


 int bd_fsfreeze_count;

 struct mutex bd_fsfreeze_mutex;
};
# 484 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
int mapping_tagged(struct address_space *mapping, int tag);




static inline __attribute__((no_instrument_function)) int mapping_mapped(struct address_space *mapping)
{
 return !((&mapping->i_mmap)->rb_node == ((void *)0)) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline __attribute__((no_instrument_function)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 517 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct posix_acl;
# 529 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct inode {
 umode_t i_mode;
 unsigned short i_opflags;
 kuid_t i_uid;
 kgid_t i_gid;
 unsigned int i_flags;


 struct posix_acl *i_acl;
 struct posix_acl *i_default_acl;


 const struct inode_operations *i_op;
 struct super_block *i_sb;
 struct address_space *i_mapping;


 void *i_security;



 unsigned long i_ino;







 union {
  const unsigned int i_nlink;
  unsigned int __i_nlink;
 };
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 spinlock_t i_lock;
 unsigned short i_bytes;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;






 unsigned long i_state;
 struct mutex i_mutex;

 unsigned long dirtied_when;

 struct hlist_node i_hash;
 struct list_head i_wb_list;
 struct list_head i_lru;
 struct list_head i_sb_list;
 union {
  struct hlist_head i_dentry;
  struct callback_head i_rcu;
 };
 u64 i_version;
 atomic_t i_count;
 atomic_t i_dio_count;
 atomic_t i_writecount;
 const struct file_operations *i_fop;
 struct file_lock *i_flock;
 struct address_space i_data;

 struct dquot *i_dquot[2];

 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };

 __u32 i_generation;


 __u32 i_fsnotify_mask;
 struct hlist_head i_fsnotify_marks;





 void *i_private;
};

static inline __attribute__((no_instrument_function)) int inode_unhashed(struct inode *inode)
{
 return hlist_unhashed(&inode->i_hash);
}
# 636 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};
# 655 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) loff_t i_size_read(const struct inode *inode)
{
# 674 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
 return inode->i_size;

}






static inline __attribute__((no_instrument_function)) void i_size_write(struct inode *inode, loff_t i_size)
{
# 696 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
 inode->i_size = i_size;

}






static inline __attribute__((no_instrument_function)) uid_t i_uid_read(const struct inode *inode)
{
 return from_kuid(&init_user_ns, inode->i_uid);
}

static inline __attribute__((no_instrument_function)) gid_t i_gid_read(const struct inode *inode)
{
 return from_kgid(&init_user_ns, inode->i_gid);
}

static inline __attribute__((no_instrument_function)) void i_uid_write(struct inode *inode, uid_t uid)
{
 inode->i_uid = make_kuid(&init_user_ns, uid);
}

static inline __attribute__((no_instrument_function)) void i_gid_write(struct inode *inode, gid_t gid)
{
 inode->i_gid = make_kgid(&init_user_ns, gid);
}

static inline __attribute__((no_instrument_function)) unsigned iminor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline __attribute__((no_instrument_function)) unsigned imajor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 struct pid *pid;
 enum pid_type pid_type;
 kuid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 unsigned int mmap_miss;
 loff_t prev_pos;
};




static inline __attribute__((no_instrument_function)) int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}




struct file {




 union {
  struct list_head fu_list;
  struct llist_node fu_llist;
  struct callback_head fu_rcuhead;
 } f_u;
 struct path f_path;

 struct inode *f_inode;
 const struct file_operations *f_op;





 spinlock_t f_lock;

 int f_sb_list_cpu;

 atomic_long_t f_count;
 unsigned int f_flags;
 fmode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 const struct cred *f_cred;
 struct file_ra_state f_ra;

 u64 f_version;

 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 struct list_head f_tfile_llink;

 struct address_space *f_mapping;



};

struct file_handle {
 __u32 handle_bytes;
 int handle_type;

 unsigned char f_handle[0];
};

static inline __attribute__((no_instrument_function)) struct file *get_file(struct file *f)
{
 atomic_long_inc(&f->f_count);
 return f;
}
# 868 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void file_take_write(struct file *filp) {}
static inline __attribute__((no_instrument_function)) void file_release_write(struct file *filp) {}
static inline __attribute__((no_instrument_function)) void file_reset_write(struct file *filp) {}
static inline __attribute__((no_instrument_function)) void file_check_state(struct file *filp) {}
static inline __attribute__((no_instrument_function)) int file_check_writeable(struct file *filp)
{
 return 0;
}
# 911 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*lm_compare_owner)(struct file_lock *, struct file_lock *);
 unsigned long (*lm_owner_key)(struct file_lock *);
 void (*lm_notify)(struct file_lock *);
 int (*lm_grant)(struct file_lock *, struct file_lock *, int);
 void (*lm_break)(struct file_lock *);
 int (*lm_change)(struct file_lock **, int);
};

struct lock_manager {
 struct list_head list;
};

struct net;
void locks_start_grace(struct net *, struct lock_manager *);
void locks_end_grace(struct lock_manager *);
int locks_in_grace(struct net *);


# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/nfs_fs_i.h" 1 3 4



struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 938 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4
# 957 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct file_lock {
 struct file_lock *fl_next;
 struct hlist_node fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_flags;
 unsigned char fl_type;
 unsigned int fl_pid;
 int fl_link_cpu;
 struct pid *fl_nspid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;

 unsigned long fl_break_time;
 unsigned long fl_downgrade_time;

 const struct file_lock_operations *fl_ops;
 const struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
  struct {
   struct list_head link;
   int state;
  } afs;
 } fl_u;
};
# 996 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/fcntl.h" 1 3 4



# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fcntl.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/fcntl.h" 1 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/fcntl.h" 1 3 4
# 139 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/fcntl.h" 3 4
struct f_owner_ex {
 int type;
 __kernel_pid_t pid;
};
# 179 "/lib/modules/3.11.0-15-generic/build/include/uapi/asm-generic/fcntl.h" 3 4
struct flock {
 short l_type;
 short l_whence;
 __kernel_off_t l_start;
 __kernel_off_t l_len;
 __kernel_pid_t l_pid;

};
# 1 "/usr/include/x86_64-linux-gnu/asm/fcntl.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/uapi/linux/fcntl.h" 2 3 4
# 5 "/lib/modules/3.11.0-15-generic/build/include/linux/fcntl.h" 2 3 4
# 997 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 2 3 4

extern void send_sigio(struct fown_struct *fown, int fd, int band);


extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


void locks_free_lock(struct file_lock *fl);
extern void locks_init_lock(struct file_lock *);
extern struct file_lock * locks_alloc_lock(void);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, const struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void locks_release_private(struct file_lock *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
# 1181 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct fasync_struct {
 spinlock_t fa_lock;
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
 struct callback_head fa_rcu;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);
extern struct fasync_struct *fasync_insert_entry(int, struct file *, struct fasync_struct **, struct fasync_struct *);
extern int fasync_remove_entry(struct file *, struct fasync_struct **);
extern struct fasync_struct *fasync_alloc(void);
extern void fasync_free(struct fasync_struct *);


extern void kill_fasync(struct fasync_struct **, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);

struct mm_struct;
# 1220 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
extern struct list_head super_blocks;
extern spinlock_t sb_lock;


enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_PAGEFAULT = 2,
 SB_FREEZE_FS = 3,

 SB_FREEZE_COMPLETE = 4,
};



struct sb_writers {

 struct percpu_counter counter[(SB_FREEZE_COMPLETE - 1)];
 wait_queue_head_t wait;

 int frozen;
 wait_queue_head_t wait_unfrozen;




};

struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned char s_blocksize_bits;
 unsigned long s_blocksize;
 loff_t s_maxbytes;
 struct file_system_type *s_type;
 const struct super_operations *s_op;
 const struct dquot_operations *dq_op;
 const struct quotactl_ops *s_qcop;
 const struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 int s_count;
 atomic_t s_active;

 void *s_security;

 const struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct hlist_bl_head s_anon;

 struct list_head *s_files;



 struct list_head s_mounts;

 struct list_head s_dentry_lru;
 int s_nr_dentry_unused;


 spinlock_t s_inode_lru_lock __attribute__((__aligned__((1 << (6)))));
 struct list_head s_inode_lru;
 int s_nr_inodes_unused;

 struct block_device *s_bdev;
 struct backing_dev_info *s_bdi;
 struct mtd_info *s_mtd;
 struct hlist_node s_instances;
 struct quota_info s_dquot;

 struct sb_writers s_writers;

 char s_id[32];
 u8 s_uuid[16];

 void *s_fs_info;
 unsigned int s_max_links;
 fmode_t s_mode;



 u32 s_time_gran;





 struct mutex s_vfs_rename_mutex;





 char *s_subtype;





 char *s_options;
 const struct dentry_operations *s_d_op;




 int cleancache_poolid;

 struct shrinker s_shrink;


 atomic_long_t s_remove_count;


 int s_readonly_remount;




 int s_stack_depth;
};


extern void prune_icache_sb(struct super_block *sb, int nr_to_scan);
extern void prune_dcache_sb(struct super_block *sb, int nr_to_scan);

extern struct timespec current_fs_time(struct super_block *sb);





void __sb_end_write(struct super_block *sb, int level);
int __sb_start_write(struct super_block *sb, int level, bool wait);
# 1364 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void sb_end_write(struct super_block *sb)
{
 __sb_end_write(sb, SB_FREEZE_WRITE);
}
# 1376 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void sb_end_pagefault(struct super_block *sb)
{
 __sb_end_write(sb, SB_FREEZE_PAGEFAULT);
}
# 1388 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void sb_end_intwrite(struct super_block *sb)
{
 __sb_end_write(sb, SB_FREEZE_FS);
}
# 1412 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void sb_start_write(struct super_block *sb)
{
 __sb_start_write(sb, SB_FREEZE_WRITE, true);
}

static inline __attribute__((no_instrument_function)) int sb_start_write_trylock(struct super_block *sb)
{
 return __sb_start_write(sb, SB_FREEZE_WRITE, false);
}
# 1441 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void sb_start_pagefault(struct super_block *sb)
{
 __sb_start_write(sb, SB_FREEZE_PAGEFAULT, true);
}
# 1459 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void sb_start_intwrite(struct super_block *sb)
{
 __sb_start_write(sb, SB_FREEZE_FS, true);
}


extern bool inode_owner_or_capable(const struct inode *inode);




extern int vfs_create(struct inode *, struct dentry *, umode_t, bool);
extern int vfs_mkdir(struct inode *, struct dentry *, umode_t);
extern int vfs_mknod(struct inode *, struct dentry *, umode_t, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern void inode_init_owner(struct inode *inode, const struct inode *dir,
   umode_t mode);



struct fiemap_extent_info {
 unsigned int fi_flags;
 unsigned int fi_extents_mapped;
 unsigned int fi_extents_max;
 struct fiemap_extent *fi_extents_start;

};
int fiemap_fill_next_extent(struct fiemap_extent_info *info, u64 logical,
       u64 phys, u64 len, u32 flags);
int fiemap_check_flags(struct fiemap_extent_info *fieinfo, u32 fs_flags);
# 1525 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
typedef int (*filldir_t)(void *, const char *, int, loff_t, u64, unsigned);
struct dir_context {
 const filldir_t actor;
 loff_t pos;
};

struct block_device_operations;







struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 int (*iterate) (struct file *, struct dir_context *);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, loff_t, loff_t, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
 long (*fallocate)(struct file *file, int mode, loff_t offset,
     loff_t len);
 int (*show_fdinfo)(struct seq_file *m, struct file *f);
};

struct inode_operations {
 struct dentry * (*lookup) (struct inode *,struct dentry *, unsigned int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 int (*permission) (struct inode *, int);
 struct posix_acl * (*get_acl)(struct inode *, int);

 int (*readlink) (struct dentry *, char *,int);
 void (*put_link) (struct dentry *, struct nameidata *, void *);

 int (*create) (struct inode *,struct dentry *, umode_t, bool);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,umode_t);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,umode_t,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 int (*fiemap)(struct inode *, struct fiemap_extent_info *, u64 start,
        u64 len);
 int (*update_time)(struct inode *, struct timespec *, int);
 int (*atomic_open)(struct inode *, struct dentry *,
      struct file *, unsigned open_flag,
      umode_t create_mode, int *opened);
 int (*tmpfile) (struct inode *, struct dentry *, umode_t);
 int (*dentry_open)(struct dentry *, struct file *, const struct cred *);
} __attribute__((__aligned__((1 << (6)))));

ssize_t rw_copy_check_uvector(int type, const struct iovec * uvector,
         unsigned long nr_segs, unsigned long fast_segs,
         struct iovec *fast_pointer,
         struct iovec **ret_pointer);

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);

struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

    void (*dirty_inode) (struct inode *, int flags);
 int (*write_inode) (struct inode *, struct writeback_control *wbc);
 int (*drop_inode) (struct inode *);
 void (*evict_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 int (*freeze_fs) (struct super_block *);
 int (*unfreeze_fs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct dentry *);
 int (*show_devname)(struct seq_file *, struct dentry *);
 int (*show_path)(struct seq_file *, struct dentry *);
 int (*show_stats)(struct seq_file *, struct dentry *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, const char *, size_t, loff_t);

 int (*bdev_try_to_free_page)(struct super_block*, struct page*, gfp_t);
 int (*nr_cached_objects)(struct super_block *);
 void (*free_cached_objects)(struct super_block *, int);
};
# 1769 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
extern void __mark_inode_dirty(struct inode *, int);
static inline __attribute__((no_instrument_function)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, ((1 << 0) | (1 << 1) | (1 << 2)));
}

static inline __attribute__((no_instrument_function)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 << 0));
}

extern void inc_nlink(struct inode *inode);
extern void drop_nlink(struct inode *inode);
extern void clear_nlink(struct inode *inode);
extern void set_nlink(struct inode *inode, unsigned int nlink);

static inline __attribute__((no_instrument_function)) void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}

static inline __attribute__((no_instrument_function)) void inode_dec_link_count(struct inode *inode)
{
 drop_nlink(inode);
 mark_inode_dirty(inode);
}
# 1805 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void inode_inc_iversion(struct inode *inode)
{
       spin_lock(&inode->i_lock);
       inode->i_version++;
       spin_unlock(&inode->i_lock);
}

enum file_time_flags {
 S_ATIME = 1,
 S_MTIME = 2,
 S_CTIME = 4,
 S_VERSION = 8,
};

extern void touch_atime(struct path *);
static inline __attribute__((no_instrument_function)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(&file->f_path);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
int sync_inode_metadata(struct inode *inode, int wait);

struct file_system_type {
 const char *name;
 int fs_flags;






 struct dentry *(*mount) (struct file_system_type *, int,
         const char *, void *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct hlist_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;
 struct lock_class_key s_vfs_rename_key;
 struct lock_class_key s_writers_key[(SB_FREEZE_COMPLETE - 1)];

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
};



extern struct dentry *mount_ns(struct file_system_type *fs_type, int flags,
 void *data, int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_subtree(struct vfsmount *mnt, const char *path);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
void deactivate_locked_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
int get_anon_bdev(dev_t *);
void free_anon_bdev(dev_t);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   int flags, void *data);
extern struct dentry *mount_pseudo(struct file_system_type *, char *,
 const struct super_operations *ops,
 const struct dentry_operations *dops,
 unsigned long);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern void kern_unmount(struct vfsmount *mnt);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(const char *, const char *, const char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct path *);
extern void drop_collected_mounts(struct vfsmount *);
extern int iterate_mounts(int (*)(struct vfsmount *, void *), void *,
     struct vfsmount *);
extern int vfs_statfs(struct path *, struct kstatfs *);
extern int user_statfs(const char *, struct kstatfs *);
extern int fd_statfs(int, struct kstatfs *);
extern int vfs_ustat(dev_t, struct kstatfs *);
extern int freeze_super(struct super_block *super);
extern int thaw_super(struct super_block *super);
extern bool our_mnt(struct vfsmount *mnt);

extern int current_umask(void);


extern struct kobject *fs_kobj;







extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);






static inline __attribute__((no_instrument_function)) int __mandatory_lock(struct inode *ino)
{
 return (ino->i_mode & (0002000 | 00010)) == 0002000;
}






static inline __attribute__((no_instrument_function)) int mandatory_lock(struct inode *ino)
{
 return ((ino)->i_sb->s_flags & (64)) && __mandatory_lock(ino);
}

static inline __attribute__((no_instrument_function)) int locks_verify_locked(struct inode *inode)
{
 if (mandatory_lock(inode))
  return locks_mandatory_locked(inode);
 return 0;
}

static inline __attribute__((no_instrument_function)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && mandatory_lock(inode))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline __attribute__((no_instrument_function)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}
# 2016 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
struct audit_names;
struct filename {
 const char *name;
 const char *uptr;
 struct audit_names *aname;
 bool separate;
};

extern long vfs_truncate(struct path *, loff_t);
extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern int do_fallocate(struct file *file, int mode, loff_t offset,
   loff_t len);
extern long do_sys_open(int dfd, const char *filename, int flags,
   umode_t mode);
extern struct file *file_open_name(struct filename *, int, umode_t);
extern struct file *filp_open(const char *, int, umode_t);
extern struct file *file_open_root(struct dentry *, struct vfsmount *,
       const char *, int);
extern int vfs_open(const struct path *, struct file *, const struct cred *);
extern struct file * dentry_open(const struct path *, int, const struct cred *);
extern int filp_close(struct file *, fl_owner_t id);

extern struct filename *getname(const char *);

enum {
 FILE_CREATED = 1,
 FILE_OPENED = 2
};
extern int finish_open(struct file *file, struct dentry *dentry,
   int (*open)(struct inode *, struct file *),
   int *opened);
extern int finish_no_open(struct file *file, struct dentry *dentry);



extern int ioctl_preallocate(struct file *filp, void *argp);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) vfs_caches_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) vfs_caches_init(unsigned long);

extern struct kmem_cache *names_cachep;

extern void final_putname(struct filename *name);






extern void putname(struct filename *name);



extern int register_blkdev(unsigned int, const char *);
extern void unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern struct block_device *bdgrab(struct block_device *bdev);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern void invalidate_bdev(struct block_device *);
extern void iterate_bdevs(void (*)(struct block_device *, void *), void *);
extern int sync_blockdev(struct block_device *bdev);
extern void kill_bdev(struct block_device *);
extern struct super_block *freeze_bdev(struct block_device *);
extern void emergency_thaw_all(void);
extern int thaw_bdev(struct block_device *bdev, struct super_block *sb);
extern int fsync_bdev(struct block_device *);
# 2106 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
extern int sync_filesystem(struct super_block *);
extern const struct file_operations def_blk_fops;
extern const struct file_operations def_chr_fops;
extern const struct file_operations bad_sock_fops;

extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct block_device *, fmode_t, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *bdev, fmode_t mode, void *holder);
extern struct block_device *blkdev_get_by_path(const char *path, fmode_t mode,
            void *holder);
extern struct block_device *blkdev_get_by_dev(dev_t dev, fmode_t mode,
           void *holder);
extern void blkdev_put(struct block_device *bdev, fmode_t mode);

extern int bd_link_disk_holder(struct block_device *bdev, struct gendisk *disk);
extern void bd_unlink_disk_holder(struct block_device *bdev,
      struct gendisk *disk);
# 2139 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int __register_chrdev(unsigned int major, unsigned int baseminor,
        unsigned int count, const char *name,
        const struct file_operations *fops);
extern void __unregister_chrdev(unsigned int major, unsigned int baseminor,
    unsigned int count, const char *name);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);

static inline __attribute__((no_instrument_function)) int register_chrdev(unsigned int major, const char *name,
      const struct file_operations *fops)
{
 return __register_chrdev(major, 0, 256, name, fops);
}

static inline __attribute__((no_instrument_function)) void unregister_chrdev(unsigned int major, const char *name)
{
 __unregister_chrdev(major, 0, 256, name);
}







extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern void blkdev_show(struct seq_file *,off_t);





extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);
# 2192 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
extern void check_disk_size_change(struct gendisk *disk,
       struct block_device *bdev);
extern int revalidate_disk(struct gendisk *);
extern int check_disk_change(struct block_device *);
extern int __invalidate_device(struct block_device *, bool);
extern int invalidate_partition(struct gendisk *, int);

unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline __attribute__((no_instrument_function)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_fdatawait_range(struct address_space *, loff_t lstart,
       loff_t lend);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);
extern int filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end);

extern int vfs_fsync_range(struct file *file, loff_t start, loff_t end,
      int datasync);
extern int vfs_fsync(struct file *file, int datasync);
extern int generic_write_sync(struct file *file, loff_t pos, loff_t count);
extern void emergency_sync(void);
extern void emergency_remount(void);

extern sector_t bmap(struct inode *, sector_t);

extern int notify_change(struct dentry *, struct iattr *);
extern int inode_permission(struct inode *, int);
extern int __inode_permission(struct inode *, int);
extern int generic_permission(struct inode *, int);

static inline __attribute__((no_instrument_function)) bool execute_ok(struct inode *inode)
{
 return (inode->i_mode & (00100|00010|00001)) || (((inode->i_mode) & 00170000) == 0040000);
}

static inline __attribute__((no_instrument_function)) struct inode *file_inode(struct file *f)
{
 return f->f_inode;
}

static inline __attribute__((no_instrument_function)) void file_start_write(struct file *file)
{
 if (!(((file_inode(file)->i_mode) & 00170000) == 0100000))
  return;
 __sb_start_write(file_inode(file)->i_sb, SB_FREEZE_WRITE, true);
}

static inline __attribute__((no_instrument_function)) bool file_start_write_trylock(struct file *file)
{
 if (!(((file_inode(file)->i_mode) & 00170000) == 0100000))
  return true;
 return __sb_start_write(file_inode(file)->i_sb, SB_FREEZE_WRITE, false);
}

static inline __attribute__((no_instrument_function)) void file_end_write(struct file *file)
{
 if (!(((file_inode(file)->i_mode) & 00170000) == 0100000))
  return;
 __sb_end_write(file_inode(file)->i_sb, SB_FREEZE_WRITE);
}
# 2286 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) int get_write_access(struct inode *inode)
{
 return atomic_inc_unless_negative(&inode->i_writecount) ? 0 : -26;
}
static inline __attribute__((no_instrument_function)) int deny_write_access(struct file *file)
{
 struct inode *inode = file_inode(file);
 return atomic_dec_unless_positive(&inode->i_writecount) ? 0 : -26;
}
static inline __attribute__((no_instrument_function)) void put_write_access(struct inode * inode)
{
 atomic_dec(&inode->i_writecount);
}
static inline __attribute__((no_instrument_function)) void allow_write_access(struct file *file)
{
 if (file)
  atomic_inc(&file_inode(file)->i_writecount);
}
# 2315 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) void i_readcount_dec(struct inode *inode)
{
 return;
}
static inline __attribute__((no_instrument_function)) void i_readcount_inc(struct inode *inode)
{
 return;
}

extern int do_pipe_flags(int *, int);

extern int kernel_read(struct file *, loff_t, char *, unsigned long);
extern ssize_t kernel_write(struct file *, const char *, size_t, loff_t);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern int path_is_under(struct path *, struct path *);




extern loff_t default_llseek(struct file *file, loff_t offset, int whence);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int whence);

extern int inode_init_always(struct super_block *, struct inode *);
extern void inode_init_once(struct inode *);
extern void address_space_init_once(struct address_space *mapping);
extern void ihold(struct inode * inode);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern int generic_delete_inode(struct inode *inode);
static inline __attribute__((no_instrument_function)) int generic_drop_inode(struct inode *inode)
{
 return !inode->i_nlink || inode_unhashed(inode);
}

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern int insert_inode_locked4(struct inode *, unsigned long, int (*test)(struct inode *, void *), void *);
extern int insert_inode_locked(struct inode *);



static inline __attribute__((no_instrument_function)) void lockdep_annotate_inode_mutex_key(struct inode *inode) { };

extern void unlock_new_inode(struct inode *);
extern unsigned int get_next_ino(void);

extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void clear_inode(struct inode *);
extern void __destroy_inode(struct inode *);
extern struct inode *new_inode_pseudo(struct super_block *sb);
extern struct inode *new_inode(struct super_block *sb);
extern void free_inode_nonrcu(struct inode *inode);
extern int should_remove_suid(struct dentry *);
extern int file_remove_suid(struct file *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
static inline __attribute__((no_instrument_function)) void insert_inode_hash(struct inode *inode)
{
 __insert_inode_hash(inode, inode->i_ino);
}

extern void __remove_inode_hash(struct inode *);
static inline __attribute__((no_instrument_function)) void remove_inode_hash(struct inode *inode)
{
 if (!inode_unhashed(inode))
  __remove_inode_hash(inode);
}

extern void inode_sb_list_add(struct inode *inode);


extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);

extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_remap_pages(struct vm_area_struct *, unsigned long addr,
  unsigned long size, unsigned long pgoff);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t __generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long,
  loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks(const struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t blkdev_aio_write(struct kiocb *iocb, const struct iovec *iov,
    unsigned long nr_segs, loff_t pos);
extern int blkdev_fsync(struct file *filp, loff_t start, loff_t end,
   int datasync);
extern void block_sync_page(struct page *page);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t default_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  loff_t *opos, size_t len, unsigned int flags);


extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t noop_llseek(struct file *file, loff_t offset, int whence);
extern loff_t no_llseek(struct file *file, loff_t offset, int whence);
extern loff_t vfs_setpos(struct file *file, loff_t offset, loff_t maxsize);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int whence);
extern loff_t generic_file_llseek_size(struct file *file, loff_t offset,
  int whence, loff_t maxsize, loff_t eof);
extern loff_t fixed_size_llseek(struct file *file, loff_t offset,
  int whence, loff_t size);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 2467 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}



typedef void (dio_submit_t)(int rw, struct bio *bio, struct inode *inode,
       loff_t file_offset);

enum {

 DIO_LOCKING = 0x01,


 DIO_SKIP_HOLES = 0x02,
};

void dio_end_io(struct bio *bio, int error);

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 dio_submit_t submit_io, int flags);

static inline __attribute__((no_instrument_function)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
  struct inode *inode, const struct iovec *iov, loff_t offset,
  unsigned long nr_segs, get_block_t get_block)
{
 return __blockdev_direct_IO(rw, iocb, inode, inode->i_sb->s_bdev, iov,
        offset, nr_segs, get_block, ((void *)0), ((void *)0),
        DIO_LOCKING | DIO_SKIP_HOLES);
}


void inode_dio_wait(struct inode *inode);
void inode_dio_done(struct inode *inode);

extern const struct file_operations generic_ro_fops;



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  int nofs);
extern int page_symlink(struct inode *inode, const char *symname, int len);
extern const struct inode_operations page_symlink_inode_operations;
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct path *, struct kstat *);
void __inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);
extern int iterate_dir(struct file *, struct dir_context *);

extern int vfs_stat(const char *, struct kstat *);
extern int vfs_lstat(const char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);
extern int vfs_fstatat(int , const char *, struct kstat *, int);

extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
      unsigned long arg);
extern int __generic_block_fiemap(struct inode *inode,
      struct fiemap_extent_info *fieinfo,
      loff_t start, loff_t len,
      get_block_t *get_block);
extern int generic_block_fiemap(struct inode *inode,
    struct fiemap_extent_info *fieinfo, u64 start,
    u64 len, get_block_t *get_block);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *get_super_thawed(struct block_device *);
extern struct super_block *get_active_super(struct block_device *bdev);
extern void drop_super(struct super_block *sb);
extern void iterate_supers(void (*)(struct super_block *, void *), void *);
extern void iterate_supers_type(struct file_system_type *,
           void (*)(struct super_block *, void *), void *);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, struct dir_context *);
extern int simple_setattr(struct dentry *, struct iattr *);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_open(struct inode *inode, struct file *file);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int noop_fsync(struct file *, loff_t, loff_t, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, unsigned int flags);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern const struct file_operations simple_dir_operations;
extern const struct inode_operations simple_dir_inode_operations;
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, unsigned long, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *to, size_t count,
   loff_t *ppos, const void *from, size_t available);
extern ssize_t simple_write_to_buffer(void *to, size_t available, loff_t *ppos,
  const void *from, size_t count);

extern int generic_file_fsync(struct file *, loff_t, loff_t, int);

extern int generic_check_addressable(unsigned, u64);


extern int buffer_migrate_page(struct address_space *,
    struct page *, struct page *,
    enum migrate_mode);




extern int inode_change_ok(const struct inode *, struct iattr *);
extern int inode_newsize_ok(const struct inode *, loff_t offset);
extern void setattr_copy(struct inode *inode, const struct iattr *attr);

extern int update_time(struct inode *, struct timespec *, int);
extern int file_update_time(struct file *file);

extern int generic_show_options(struct seq_file *m, struct dentry *root);
extern void save_mount_options(struct super_block *sb, char *options);
extern void replace_mount_options(struct super_block *sb, char *options);

static inline __attribute__((no_instrument_function)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;





 spin_lock(&dentry->d_lockref.lock);
 res = dentry->d_parent->d_inode->i_ino;
 spin_unlock(&dentry->d_lockref.lock);
 return res;
}







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

void simple_transaction_set(struct file *file, size_t n);
# 2682 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) __attribute__((format(printf, 1, 2)))
void __simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       int (*get)(void *, u64 *), int (*set)(void *, u64),
       const char *fmt);
int simple_attr_release(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);

struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write,
    void *buffer, size_t *lenp, loff_t *ppos);
int proc_nr_dentry(struct ctl_table *table, int write,
    void *buffer, size_t *lenp, loff_t *ppos);
int proc_nr_inodes(struct ctl_table *table, int write,
     void *buffer, size_t *lenp, loff_t *ppos);
int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) get_filesystem_list(char *buf);
# 2713 "/lib/modules/3.11.0-15-generic/build/include/linux/fs.h" 3 4
static inline __attribute__((no_instrument_function)) int is_sxid(umode_t mode)
{
 return (mode & 0004000) || ((mode & 0002000) && (mode & 00010));
}

static inline __attribute__((no_instrument_function)) void inode_has_no_xattr(struct inode *inode)
{
 if (!is_sxid(inode->i_mode) && (inode->i_sb->s_flags & (1<<28)))
  inode->i_flags |= 4096;
}

static inline __attribute__((no_instrument_function)) bool dir_emit(struct dir_context *ctx,
       const char *name, int namelen,
       u64 ino, unsigned type)
{
 return ctx->actor(ctx, name, namelen, ctx->pos, ino, type) == 0;
}
static inline __attribute__((no_instrument_function)) bool dir_emit_dot(struct file *file, struct dir_context *ctx)
{
 return ctx->actor(ctx, ".", 1, ctx->pos,
     file->f_path.dentry->d_inode->i_ino, 4) == 0;
}
static inline __attribute__((no_instrument_function)) bool dir_emit_dotdot(struct file *file, struct dir_context *ctx)
{
 return ctx->actor(ctx, "..", 2, ctx->pos,
     parent_ino(file->f_path.dentry), 4) == 0;
}
static inline __attribute__((no_instrument_function)) bool dir_emit_dots(struct file *file, struct dir_context *ctx)
{
 if (ctx->pos == 0) {
  if (!dir_emit_dot(file, ctx))
   return false;
  ctx->pos = 1;
 }
 if (ctx->pos == 1) {
  if (!dir_emit_dotdot(file, ctx))
   return false;
  ctx->pos = 2;
 }
 return true;
}
static inline __attribute__((no_instrument_function)) bool dir_relax(struct inode *inode)
{
 mutex_unlock(&inode->i_mutex);
 mutex_lock(&inode->i_mutex);
 return !((inode)->i_flags & 16);
}
# 9 "/lib/modules/3.11.0-15-generic/build/include/linux/proc_fs.h" 2 3 4

struct proc_dir_entry;



extern void proc_root_init(void);
extern void proc_flush_task(struct task_struct *);

extern struct proc_dir_entry *proc_symlink(const char *,
  struct proc_dir_entry *, const char *);
extern struct proc_dir_entry *proc_mkdir(const char *, struct proc_dir_entry *);
extern struct proc_dir_entry *proc_mkdir_data(const char *, umode_t,
           struct proc_dir_entry *, void *);
extern struct proc_dir_entry *proc_mkdir_mode(const char *, umode_t,
           struct proc_dir_entry *);

extern struct proc_dir_entry *proc_create_data(const char *, umode_t,
            struct proc_dir_entry *,
            const struct file_operations *,
            void *);

static inline __attribute__((no_instrument_function)) struct proc_dir_entry *proc_create(
 const char *name, umode_t mode, struct proc_dir_entry *parent,
 const struct file_operations *proc_fops)
{
 return proc_create_data(name, mode, parent, proc_fops, ((void *)0));
}

extern void proc_set_size(struct proc_dir_entry *, loff_t);
extern void proc_set_user(struct proc_dir_entry *, kuid_t, kgid_t);
extern void *PDE_DATA(const struct inode *);
extern void *proc_get_parent_data(const struct inode *);
extern void proc_remove(struct proc_dir_entry *);
extern void remove_proc_entry(const char *, struct proc_dir_entry *);
extern int remove_proc_subtree(const char *, struct proc_dir_entry *);
# 73 "/lib/modules/3.11.0-15-generic/build/include/linux/proc_fs.h" 3 4
static inline __attribute__((no_instrument_function)) struct proc_dir_entry *proc_net_mkdir(
 struct net *net, const char *name, struct proc_dir_entry *parent)
{
 return proc_mkdir_data(name, 0, parent, net);
}
# 62 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 2 3 4


extern struct proc_dir_entry *acpi_root_dir;

enum acpi_bus_device_type {
 ACPI_BUS_TYPE_DEVICE = 0,
 ACPI_BUS_TYPE_POWER,
 ACPI_BUS_TYPE_PROCESSOR,
 ACPI_BUS_TYPE_THERMAL,
 ACPI_BUS_TYPE_POWER_BUTTON,
 ACPI_BUS_TYPE_SLEEP_BUTTON,
 ACPI_BUS_DEVICE_TYPE_COUNT
};

struct acpi_driver;
struct acpi_device;






enum acpi_hotplug_mode {
 AHM_GENERIC = 0,
 AHM_CONTAINER,
 AHM_COUNT
};

struct acpi_hotplug_profile {
 struct kobject kobj;
 bool enabled:1;
 enum acpi_hotplug_mode mode;
};

static inline __attribute__((no_instrument_function)) struct acpi_hotplug_profile *to_acpi_hotplug_profile(
      struct kobject *kobj)
{
 return ({ const typeof( ((struct acpi_hotplug_profile *)0)->kobj ) *__mptr = (kobj); (struct acpi_hotplug_profile *)( (char *)__mptr - __builtin_offsetof(struct acpi_hotplug_profile,kobj) );});
}

struct acpi_scan_handler {
 const struct acpi_device_id *ids;
 struct list_head list_node;
 int (*attach)(struct acpi_device *dev, const struct acpi_device_id *id);
 void (*detach)(struct acpi_device *dev);
 struct acpi_hotplug_profile hotplug;
};






typedef int (*acpi_op_add) (struct acpi_device * device);
typedef int (*acpi_op_remove) (struct acpi_device * device);
typedef void (*acpi_op_notify) (struct acpi_device * device, u32 event);

struct acpi_device_ops {
 acpi_op_add add;
 acpi_op_remove remove;
 acpi_op_notify notify;
};



struct acpi_driver {
 char name[80];
 char class[80];
 const struct acpi_device_id *ids;
 unsigned int flags;
 struct acpi_device_ops ops;
 struct device_driver drv;
 struct module *owner;
};
# 144 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 3 4
struct acpi_device_status {
 u32 present:1;
 u32 enabled:1;
 u32 show_in_ui:1;
 u32 functional:1;
 u32 battery_present:1;
 u32 reserved:27;
};



struct acpi_device_flags {
 u32 dynamic_status:1;
 u32 removable:1;
 u32 ejectable:1;
 u32 power_manageable:1;
 u32 eject_pending:1;
 u32 match_driver:1;
 u32 reserved:26;
};



struct acpi_device_dir {
 struct proc_dir_entry *entry;
};





typedef char acpi_bus_id[8];
typedef unsigned long acpi_bus_address;
typedef char acpi_device_name[40];
typedef char acpi_device_class[20];

struct acpi_hardware_id {
 struct list_head list;
 char *id;
};

struct acpi_pnp_type {
 u32 hardware_id:1;
 u32 bus_address:1;
 u32 reserved:30;
};

struct acpi_device_pnp {
 acpi_bus_id bus_id;
 struct acpi_pnp_type type;
 acpi_bus_address bus_address;
 char *unique_id;
 struct list_head ids;
 acpi_device_name device_name;
 acpi_device_class device_class;
 union acpi_object *str_obj;
 unsigned long sun;
};



const char *acpi_device_hid(struct acpi_device *device);





struct acpi_device_power_flags {
 u32 explicit_get:1;
 u32 power_resources:1;
 u32 inrush_current:1;
 u32 power_removed:1;
 u32 reserved:28;
};

struct acpi_device_power_state {
 struct {
  u8 valid:1;
  u8 os_accessible:1;
  u8 explicit_set:1;
  u8 reserved:6;
 } flags;
 int power;
 int latency;
 struct list_head resources;
};

struct acpi_device_power {
 int state;
 struct acpi_device_power_flags flags;
 struct acpi_device_power_state states[5];
};



struct acpi_device_perf_flags {
 u8 reserved:8;
};

struct acpi_device_perf_state {
 struct {
  u8 valid:1;
  u8 reserved:7;
 } flags;
 u8 power;
 u8 performance;
 int latency;
};

struct acpi_device_perf {
 int state;
 struct acpi_device_perf_flags flags;
 int state_count;
 struct acpi_device_perf_state *states;
};


struct acpi_device_wakeup_flags {
 u8 valid:1;
 u8 run_wake:1;
 u8 notifier_present:1;
};

struct acpi_device_wakeup {
 acpi_handle gpe_device;
 u64 gpe_number;
 u64 sleep_state;
 struct list_head resources;
 struct acpi_device_wakeup_flags flags;
 int prepare_count;
};

struct acpi_device_physical_node {
 unsigned int node_id;
 struct list_head node;
 struct device *dev;
 bool put_online:1;
};


struct acpi_device {
 int device_type;
 acpi_handle handle;
 struct acpi_device *parent;
 struct list_head children;
 struct list_head node;
 struct list_head wakeup_list;
 struct acpi_device_status status;
 struct acpi_device_flags flags;
 struct acpi_device_pnp pnp;
 struct acpi_device_power power;
 struct acpi_device_wakeup wakeup;
 struct acpi_device_perf performance;
 struct acpi_device_dir dir;
 struct acpi_scan_handler *handler;
 struct acpi_driver *driver;
 void *driver_data;
 struct device dev;
 unsigned int physical_node_count;
 struct list_head physical_node_list;
 struct mutex physical_node_lock;
 struct list_head power_dependent;
 void (*remove)(struct acpi_device *);
};

static inline __attribute__((no_instrument_function)) void *acpi_driver_data(struct acpi_device *d)
{
 return d->driver_data;
}





extern struct bus_type acpi_bus_type;






struct acpi_bus_event {
 struct list_head node;
 acpi_device_class device_class;
 acpi_bus_id bus_id;
 u32 type;
 u32 data;
};

struct acpi_eject_event {
 struct acpi_device *device;
 u32 event;
};

struct acpi_hp_work {
 struct work_struct work;
 acpi_handle handle;
 u32 type;
 void *context;
};
void alloc_acpi_hp_work(acpi_handle handle, u32 type, void *context,
   void (*func)(struct work_struct *work));

extern struct kobject *acpi_kobj;
extern int acpi_bus_generate_netlink_event(const char*, const char*, u8, int);
void acpi_bus_private_data_handler(acpi_handle, void *);
int acpi_bus_get_private_data(acpi_handle, void **);
extern int acpi_notifier_call_chain(struct acpi_device *, u32, u32);
extern int register_acpi_notifier(struct notifier_block *);
extern int unregister_acpi_notifier(struct notifier_block *);

extern int register_acpi_bus_notifier(struct notifier_block *nb);
extern void unregister_acpi_bus_notifier(struct notifier_block *nb);




int acpi_bus_get_device(acpi_handle handle, struct acpi_device **device);
void acpi_bus_data_handler(acpi_handle handle, void *context);
acpi_status acpi_bus_get_status_handle(acpi_handle handle,
           unsigned long long *sta);
int acpi_bus_get_status(struct acpi_device *device);

int acpi_bus_set_power(acpi_handle handle, int state);
const char *acpi_power_state_string(int state);
int acpi_device_get_power(struct acpi_device *device, int *state);
int acpi_device_set_power(struct acpi_device *device, int state);
int acpi_bus_init_power(struct acpi_device *device);
int acpi_device_fix_up_power(struct acpi_device *device);
int acpi_bus_update_power(acpi_handle handle, int *state_p);
bool acpi_bus_power_manageable(acpi_handle handle);


bool acpi_bus_can_wakeup(acpi_handle handle);





int acpi_bus_generate_proc_event(struct acpi_device *device, u8 type, int data);
int acpi_bus_generate_proc_event4(const char *class, const char *bid, u8 type, int data);
int acpi_bus_receive_event(struct acpi_bus_event *event);





void acpi_scan_lock_acquire(void);
void acpi_scan_lock_release(void);
int acpi_scan_add_handler(struct acpi_scan_handler *handler);
int acpi_bus_register_driver(struct acpi_driver *driver);
void acpi_bus_unregister_driver(struct acpi_driver *driver);
int acpi_bus_scan(acpi_handle handle);
void acpi_bus_hot_remove_device(void *context);
void acpi_bus_trim(struct acpi_device *start);
acpi_status acpi_bus_get_ejd(acpi_handle handle, acpi_handle * ejd);
int acpi_match_device_ids(struct acpi_device *device,
     const struct acpi_device_id *ids);
int acpi_create_dir(struct acpi_device *);
void acpi_remove_dir(struct acpi_device *);
# 421 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 3 4
struct acpi_bus_type {
 struct list_head list;
 const char *name;
 bool (*match)(struct device *dev);
 int (*find_device) (struct device *, acpi_handle *);
 void (*setup)(struct device *);
 void (*cleanup)(struct device *);
};
int register_acpi_bus_type(struct acpi_bus_type *);
int unregister_acpi_bus_type(struct acpi_bus_type *);

struct acpi_pci_root {
 struct acpi_device * device;
 struct pci_bus *bus;
 u16 segment;
 struct resource secondary;

 u32 osc_support_set;
 u32 osc_control_set;
 phys_addr_t mcfg_addr;
};


acpi_handle acpi_find_child(acpi_handle, u64, bool);
static inline __attribute__((no_instrument_function)) acpi_handle acpi_get_child(acpi_handle handle, u64 addr)
{
 return acpi_find_child(handle, addr, false);
}
int acpi_is_root_bridge(acpi_handle);
struct acpi_pci_root *acpi_pci_find_root(acpi_handle handle);


int acpi_enable_wakeup_device_power(struct acpi_device *dev, int state);
int acpi_disable_wakeup_device_power(struct acpi_device *dev);


acpi_status acpi_add_pm_notifier(struct acpi_device *adev,
     acpi_notify_handler handler, void *context);
acpi_status acpi_remove_pm_notifier(struct acpi_device *adev,
        acpi_notify_handler handler);
int acpi_pm_device_sleep_state(struct device *, int *, int);
void acpi_dev_pm_add_dependent(acpi_handle handle, struct device *depdev);
void acpi_dev_pm_remove_dependent(acpi_handle handle, struct device *depdev);
# 490 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 3 4
int __acpi_device_run_wake(struct acpi_device *, bool);
int acpi_pm_device_run_wake(struct device *, bool);
# 504 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 3 4
int __acpi_device_sleep_wake(struct acpi_device *, u32, bool);
int acpi_pm_device_sleep_wake(struct device *, bool);
# 519 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_bus.h" 3 4
u32 acpi_target_system_state(void);




static inline __attribute__((no_instrument_function)) bool acpi_device_power_manageable(struct acpi_device *adev)
{
 return adev->flags.power_manageable;
}

static inline __attribute__((no_instrument_function)) bool acpi_device_can_wakeup(struct acpi_device *adev)
{
 return adev->wakeup.flags.valid;
}

static inline __attribute__((no_instrument_function)) bool acpi_device_can_poweroff(struct acpi_device *adev)
{
 return adev->power.states[(u8) 4].flags.os_accessible;
}
# 43 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_drivers.h" 1 3 4
# 29 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_drivers.h" 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 1 3 4
# 30 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_drivers.h" 2 3 4
# 88 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_drivers.h" 3 4
int acpi_irq_penalty_init(void);
int acpi_pci_link_allocate_irq(acpi_handle handle, int index, int *triggering,
          int *polarity, char **name);
int acpi_pci_link_free_irq(acpi_handle handle);



struct pci_bus;

struct pci_dev *acpi_get_pci_dev(acpi_handle);



struct pci_bus *pci_acpi_scan_root(struct acpi_pci_root *root);
void pci_acpi_crs_quirks(void);
# 115 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_drivers.h" 3 4
struct acpi_dock_ops {
 acpi_notify_handler handler;
 acpi_notify_handler uevent;
};


extern int is_dock_device(acpi_handle handle);
extern int register_dock_notifier(struct notifier_block *nb);
extern void unregister_dock_notifier(struct notifier_block *nb);
extern int register_hotplug_dock_device(acpi_handle handle,
     const struct acpi_dock_ops *ops,
     void *context,
     void (*init)(void *),
     void (*release)(void *));
extern void unregister_hotplug_dock_device(acpi_handle handle);
# 44 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4
# 1 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_numa.h" 1 3 4
# 14 "/lib/modules/3.11.0-15-generic/build/include/acpi/acpi_numa.h" 3 4
extern int pxm_to_node(int);
extern int node_to_pxm(int);
extern void __acpi_map_pxm_to_node(int, int);
extern int acpi_map_pxm_to_node(int);
extern unsigned char acpi_srat_revision;
# 45 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 2 3 4


enum acpi_irq_model_id {
 ACPI_IRQ_MODEL_PIC = 0,
 ACPI_IRQ_MODEL_IOAPIC,
 ACPI_IRQ_MODEL_IOSAPIC,
 ACPI_IRQ_MODEL_PLATFORM,
 ACPI_IRQ_MODEL_COUNT
};

extern enum acpi_irq_model_id acpi_irq_model;

enum acpi_interrupt_id {
 ACPI_INTERRUPT_PMI = 1,
 ACPI_INTERRUPT_INIT,
 ACPI_INTERRUPT_CPEI,
 ACPI_INTERRUPT_COUNT
};



enum acpi_address_range_id {
 ACPI_ADDRESS_RANGE_MEMORY = 1,
 ACPI_ADDRESS_RANGE_RESERVED = 2,
 ACPI_ADDRESS_RANGE_ACPI = 3,
 ACPI_ADDRESS_RANGE_NVS = 4,
 ACPI_ADDRESS_RANGE_COUNT
};




typedef int (*acpi_tbl_table_handler)(struct acpi_table_header *table);

typedef int (*acpi_tbl_entry_handler)(struct acpi_subtable_header *header,
          const unsigned long end);




static inline __attribute__((no_instrument_function)) void acpi_initrd_override(void *data, size_t size)
{
}


char * __acpi_map_table (unsigned long phys_addr, unsigned long size);
void __acpi_unmap_table(char *map, unsigned long size);
int early_acpi_boot_init(void);
int acpi_boot_init (void);
void acpi_boot_table_init (void);
int acpi_mps_check (void);
int acpi_numa_init (void);

int acpi_table_init (void);
int acpi_table_parse(char *id, acpi_tbl_table_handler handler);
int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_table_parse_entries(char *id, unsigned long table_size,
        int entry_id,
        acpi_tbl_entry_handler handler,
        unsigned int max_entries);
int acpi_table_parse_madt(enum acpi_madt_type id,
     acpi_tbl_entry_handler handler,
     unsigned int max_entries);
int acpi_parse_mcfg (struct acpi_table_header *header);
void acpi_table_print_madt_entry (struct acpi_subtable_header *madt);


void acpi_numa_slit_init (struct acpi_table_slit *slit);
void acpi_numa_processor_affinity_init (struct acpi_srat_cpu_affinity *pa);
void acpi_numa_x2apic_affinity_init(struct acpi_srat_x2apic_cpu_affinity *pa);
int acpi_numa_memory_affinity_init (struct acpi_srat_mem_affinity *ma);
void acpi_numa_arch_fixup(void);



int acpi_map_lsapic(acpi_handle handle, int *pcpu);
int acpi_unmap_lsapic(int cpu);


int acpi_register_ioapic(acpi_handle handle, u64 phys_addr, u32 gsi_base);
int acpi_unregister_ioapic(acpi_handle handle, u32 gsi_base);
void acpi_irq_stats_init(void);
extern u32 acpi_irq_handled;
extern u32 acpi_irq_not_handled;

extern int sbf_port;
extern unsigned long acpi_realmode_flags;

int acpi_register_gsi (struct device *dev, u32 gsi, int triggering, int polarity);
int acpi_gsi_to_irq (u32 gsi, unsigned int *irq);
int acpi_isa_irq_to_gsi (unsigned isa_irq, u32 *gsi);


extern int acpi_get_override_irq(u32 gsi, int *trigger, int *polarity);
# 146 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
void acpi_unregister_gsi (u32 gsi);

struct pci_dev;

int acpi_pci_irq_enable (struct pci_dev *dev);
void acpi_penalize_isa_irq(int irq, int active);

void acpi_pci_irq_disable (struct pci_dev *dev);

extern int ec_read(u8 addr, u8 *val);
extern int ec_write(u8 addr, u8 val);
extern int ec_transaction(u8 command,
                          const u8 *wdata, unsigned wdata_len,
                          u8 *rdata, unsigned rdata_len);
extern acpi_handle ec_get_handle(void);



typedef void (*wmi_notify_handler) (u32 value, void *context);

extern acpi_status wmi_evaluate_method(const char *guid, u8 instance,
     u32 method_id,
     const struct acpi_buffer *in,
     struct acpi_buffer *out);
extern acpi_status wmi_query_block(const char *guid, u8 instance,
     struct acpi_buffer *out);
extern acpi_status wmi_set_block(const char *guid, u8 instance,
     const struct acpi_buffer *in);
extern acpi_status wmi_install_notify_handler(const char *guid,
     wmi_notify_handler handler, void *data);
extern acpi_status wmi_remove_notify_handler(const char *guid);
extern acpi_status wmi_get_event_data(u32 event, struct acpi_buffer *out);
extern bool wmi_has_guid(const char *guid);
# 197 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
extern long acpi_video_get_capabilities(acpi_handle graphics_dev_handle);
extern long acpi_is_video_device(acpi_handle handle);
extern void acpi_video_dmi_promote_vendor(void);
extern void acpi_video_dmi_demote_vendor(void);
extern int acpi_video_backlight_support(void);
extern int acpi_video_display_switch_support(void);
# 236 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
extern int acpi_blacklisted(void);
extern void acpi_dmi_osi_linux(int enable, const struct dmi_system_id *d);
extern void acpi_osi_setup(char *str);


int acpi_get_pxm(acpi_handle handle);
int acpi_get_node(acpi_handle *handle);
# 253 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
extern int acpi_paddr_to_node(u64 start_addr, u64 size);

extern int pnpacpi_disabled;



bool acpi_dev_resource_memory(struct acpi_resource *ares, struct resource *res);
bool acpi_dev_resource_io(struct acpi_resource *ares, struct resource *res);
bool acpi_dev_resource_address_space(struct acpi_resource *ares,
         struct resource *res);
bool acpi_dev_resource_ext_address_space(struct acpi_resource *ares,
      struct resource *res);
unsigned long acpi_dev_irq_flags(u8 triggering, u8 polarity, u8 shareable);
bool acpi_dev_resource_interrupt(struct acpi_resource *ares, int index,
     struct resource *res);

struct resource_list_entry {
 struct list_head node;
 struct resource res;
};

void acpi_dev_free_resource_list(struct list_head *list);
int acpi_dev_get_resources(struct acpi_device *adev, struct list_head *list,
      int (*preproc)(struct acpi_resource *, void *),
      void *preproc_data);

int acpi_check_resource_conflict(const struct resource *res);

int acpi_check_region(resource_size_t start, resource_size_t n,
        const char *name);

int acpi_resources_are_enforced(void);


void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_no_s4_hw_signature(void);



void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_old_suspend_ordering(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_nvs_nosave(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((no_instrument_function)) acpi_nvs_nosave_s3(void);


struct acpi_osc_context {
 char *uuid_str;
 int rev;
 struct acpi_buffer cap;
 struct acpi_buffer ret;
};
# 314 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
acpi_status acpi_run_osc(acpi_handle handle, struct acpi_osc_context *context);
# 323 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
extern bool osc_sb_apei_support_acked;
# 350 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
extern acpi_status acpi_pci_osc_control_set(acpi_handle handle,
          u32 *mask, u32 req);
# 388 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
extern void acpi_early_init(void);

extern int acpi_nvs_register(__u64 start, __u64 size);

extern int acpi_nvs_for_each_region(int (*func)(__u64, __u64, void *),
        void *data);

const struct acpi_device_id *acpi_match_device(const struct acpi_device_id *ids,
            const struct device *dev);

static inline __attribute__((no_instrument_function)) bool acpi_driver_match_device(struct device *dev,
         const struct device_driver *drv)
{
 return !!acpi_match_device(drv->acpi_match_table, dev);
}
# 479 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
void acpi_os_set_prepare_sleep(int (*func)(u8 sleep_state,
          u32 pm1a_ctrl, u32 pm1b_ctrl));

acpi_status acpi_os_prepare_sleep(u8 sleep_state,
      u32 pm1a_control, u32 pm1b_control);

void arch_reserve_mem_area(acpi_physical_address addr, size_t size);
# 497 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
int acpi_dev_runtime_suspend(struct device *dev);
int acpi_dev_runtime_resume(struct device *dev);
int acpi_subsys_runtime_suspend(struct device *dev);
int acpi_subsys_runtime_resume(struct device *dev);
# 509 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
int acpi_dev_suspend_late(struct device *dev);
int acpi_dev_resume_early(struct device *dev);
int acpi_subsys_prepare(struct device *dev);
int acpi_subsys_suspend_late(struct device *dev);
int acpi_subsys_resume_early(struct device *dev);
# 523 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
struct acpi_device *acpi_dev_pm_get_node(struct device *dev);
int acpi_dev_pm_attach(struct device *dev, bool power_on);
void acpi_dev_pm_detach(struct device *dev, bool power_off);
# 539 "/lib/modules/3.11.0-15-generic/build/include/linux/acpi.h" 3 4
__attribute__((format(printf, 3, 4)))
void acpi_handle_printk(const char *level, acpi_handle handle,
   const char *fmt, ...);
# 4 "/home/sgosali/Documents/Work/RHEL6xFLASH/linux/driver/../kabi/tests/acpi_tables.c" 2


struct acpi_table_header table;
