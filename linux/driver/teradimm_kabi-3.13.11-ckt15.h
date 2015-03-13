#ifndef __included_kabi_h__
#define __included_kabi_h__

#define SYM_init_memory_mapping 0xffffffff81724ff0
#define SYM_raw_pci_read 0xffffffff8161d5d0
#define SYM_raw_pci_write 0xffffffff8161d640
#define SYM_clflush_cache_range 0xffffffff81056f30

#define KABI__4k_support
#define KABI__acpi_evaluate_object_typed
#define KABI__acpi_get_table_by_index
#define KABI__acpi_tables
#define KABI__atomic64
#define KABI__bio_bi_size
#define KABI__bio_endio 2
#define KABI__bio_list
#define KABI__blk_max_segments
#define KABI__blk_queue_discard_granularity
#define KABI__blk_queue_discard_zeroes_data
#define KABI__blk_queue_flush
#define KABI__blk_queue_io_min
#define KABI__blk_queue_io_opt
#define KABI__blk_queue_logical_block_size
#define KABI__blk_queue_max_discard_sectors
#define KABI__blk_queue_max_hw_sectors
#define KABI__blk_queue_physical_block_size
#define KABI__bool
#define KABI__clflush
#define KABI__dmi_walk 2
#define KABI__export_header
#define KABI__ioremap_cache
#define KABI__ioremap_wc
#define KABI__is_err_or_null
#define KABI__kzalloc_node
#define KABI__make_request_fn_returns_void
#define KABI__memcpy_inline
#define KABI__movntdqa
#define KABI__new_blk_dev_ops
#define KABI__pm_notifier
#define KABI__queue_flag_set_unlocked
#define KABI__ratelimit
#define KABI__time_after64
#define KABI__uintptr
#define KABI__vmalloc_node

#endif
