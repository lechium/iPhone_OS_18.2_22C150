//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LoggingSupport/OSLogTermDumper.h>

@class NSPredicate;

@interface OSLogOutputFormatter : OSLogTermDumper
{
    struct _log_flags_s _flags;	// 32 = 0x20
    struct _log_colors_s _colors;	// 84 = 0x54
    _Bool _highlight;	// 110 = 0x6e
    _Bool isVerbose;	// 111 = 0x6f
    NSPredicate *highlightPredicate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000020f6f
@property(nonatomic) _Bool isVerbose; // @synthesize isVerbose;
@property(retain, nonatomic) NSPredicate *highlightPredicate; // @synthesize highlightPredicate;
- (void)printSubsystem:(const char *)arg1 category:(const char *)arg2;	// IMP=0x0010000000020e50
- (void)printDropMessage:(id)arg1;	// IMP=0x0010000000020df4
- (void)printEvent:(id)arg1;	// IMP=0x0010000000020d44
- (void)printSignpostInfo:(id)arg1;	// IMP=0x0010000000020c2f
- (void)printSourceInfo:(id)arg1;	// IMP=0x0010000000020b1c
- (void)printComposedMessage:(id)arg1;	// IMP=0x0010000000020a88
- (void)printBacktrace:(id)arg1;	// IMP=0x00100000000207ed
- (void)printEventPath:(id)arg1;	// IMP=0x0010000000020472
- (void)printSender:(const char *)arg1;	// IMP=0x0010000000020426
- (void)printProcess:(const char *)arg1;	// IMP=0x00100000000203da
- (void)printTimeToLive:(unsigned long long)arg1;	// IMP=0x001000000002037f
- (void)printProcessIdentifier:(int)arg1;	// IMP=0x0010000000020325
- (void)printActivityIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000202ca
- (void)printType:(const char *)arg1;	// IMP=0x001000000002026f
- (void)printThreadIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000020214
- (void)calculateTime:(struct time *)arg1 fromEvent:(id)arg2;	// IMP=0x001000000002019b
- (void)calculateTime:(struct time *)arg1 fromDate:(struct timeval *)arg2 withTimeZone:(struct timezone *)arg3;	// IMP=0x0010000000020056
- (void)resetStyleWithHighlight;	// IMP=0x0010000000020007
- (void)setColors:(CDStruct_d78a4c71 *)arg1;	// IMP=0x001000000001ff7e
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2 flags:(struct _log_flags_s *)arg3 colors:(struct _log_colors_s *)arg4;	// IMP=0x001000000001fefc

@end
