#ifndef __included_kabi_h__
#define __included_kabi_h__

#define SYM_init_memory_mapping 0xffffffff817244d0
#define SYM_raw_pci_read 0xffffffff8161c770
#define SYM_raw_pci_write 0xffffffff8161c7e0
#define SYM_clflush_cache_range 0xffffffff810563f0

#define KABI__4k_support
#define KABI__bool
#define KABI__dmi_walk 2
#define KABI__export_header
#define KABI__is_err_or_null
#define KABI__memcpy_inline

#endif
