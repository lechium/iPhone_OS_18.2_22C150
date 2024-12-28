//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LoggingSupport/OSLogTermDumper.h>

@interface OSLogRawDumper : OSLogTermDumper
{
    int _rc;	// 32 = 0x20
    unsigned int _tv3c_count;	// 36 = 0x24
    const struct tracev3_chunk_header_s *_cur_hdr;	// 40 = 0x28
    const struct tracev3_chunk_s *_tv3c;	// 48 = 0x30
    struct chunk_support_context_s *_ctx;	// 56 = 0x38
    struct _os_timesync_db_s *_tsdb;	// 64 = 0x40
    const char *_message;	// 72 = 0x48
    struct raw_statistics_s _total;	// 80 = 0x50
    struct raw_statistics_s _main_exe;	// 120 = 0x78
    struct raw_statistics_s _shared_cache;	// 160 = 0xa0
    struct raw_statistics_s _caller_pc;	// 200 = 0xc8
    struct raw_statistics_s _uuid_rel;	// 240 = 0xf0
    _Bool _render;	// 280 = 0x118
    _Bool _hexdump;	// 281 = 0x119
}

@property(nonatomic) _Bool hexdump; // @synthesize hexdump=_hexdump;
@property(nonatomic) _Bool render; // @synthesize render=_render;
- (int)rawDumpPrefsCache;	// IMP=0x0010000000012fd7
- (void)rawDumpPrefsCacheSubsystem:(struct os_log_pref_cache_record_s *)arg1;	// IMP=0x0010000000012e96
- (int)rawDumpSharedCacheStrings:(const char *)arg1;	// IMP=0x0010000000012761
- (int)rawDumpTimesyncDatabase:(const char *)arg1;	// IMP=0x00100000000124ea
- (void)rawDumpTimesync:(void *)arg1 size:(long long)arg2;	// IMP=0x0010000000011dc0
- (void)rawDumpTimesyncWallTime:(unsigned long long)arg1 timezone:(struct timezone *)arg2;	// IMP=0x0010000000011cef
- (int)rawDumpPath:(const char *)arg1;	// IMP=0x00100000000119c1
- (void)rawDumpTrailer;	// IMP=0x00100000000118b9
- (void)rawDumpStat:(struct raw_statistics_s *)arg1 name:(const char *)arg2;	// IMP=0x001000000001187d
- (void)rawDumpOversizeOld;	// IMP=0x0010000000011668
- (void)rawDumpOversize;	// IMP=0x00100000000113fa
- (void)rawDumpSimple;	// IMP=0x001000000001111b
- (void)rawDumpStateDump;	// IMP=0x0010000000010d4b
- (void)rawDumpFirehose;	// IMP=0x0010000000010b82
- (void)rawDumpFirehoseOld;	// IMP=0x00100000000109dc
- (void)rawDumpFirehoseChunkHeader:(struct _firehose_unaligned_chunk_s *)arg1;	// IMP=0x00100000000108b8
- (void)rawDumpFirehoseChunk:(struct _firehose_unaligned_chunk_s *)arg1;	// IMP=0x0010000000010415
- (void)rawDumpLossTP:(struct _firehose_unaligned_tracepoint_s *)arg1;	// IMP=0x001000000001022a
- (struct raw_statistics_s *)rawDumpLogTP:(struct _firehose_unaligned_tracepoint_s *)arg1;	// IMP=0x001000000000f9f1
- (struct raw_statistics_s *)rawDumpActivityTP:(struct _firehose_unaligned_tracepoint_s *)arg1;	// IMP=0x001000000000f7cc
- (struct raw_statistics_s *)rawDumpLocation:(struct _firehose_unaligned_tracepoint_s *)arg1 ft_pos:(unsigned short *)arg2;	// IMP=0x001000000000f284
- (void)rawDumpFTID:(CDUnion_780443c4)arg1;	// IMP=0x001000000000eb09
- (_Bool)rawDumpComma:(_Bool)arg1;	// IMP=0x001000000000eae9
- (void)rawDumpChunkSet;	// IMP=0x001000000000e9c1
- (void)rawDumpCatalog;	// IMP=0x001000000000e93d
- (void)rawDumpHeader;	// IMP=0x001000000000e485
- (void)rawDumpChunkInfo:(const char *)arg1;	// IMP=0x001000000000e3a1
- (void)printKey:(const char *)arg1;	// IMP=0x001000000000e27b
- (void)fail:(const char *)arg1;	// IMP=0x001000000000e172
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2;	// IMP=0x001000000000e133

@end
