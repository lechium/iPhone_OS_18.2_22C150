//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OSLogSyslogOutputFormatter
{
}

- (void)printDropMessage:(id)arg1;	// IMP=0x0040000000025c4f
- (void)printEvent:(id)arg1;	// IMP=0x00100000000255fc
- (void)printPrologue:(id)arg1;	// IMP=0x00100000000254a0
- (void)printComposedLossMessage:(id)arg1;	// IMP=0x00100000000252b7
- (void)printTimestamp:(id)arg1;	// IMP=0x0010000000025221
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2 flags:(struct _log_flags_s *)arg3 colors:(struct _log_colors_s *)arg4;	// IMP=0x001000000002519a

@end

