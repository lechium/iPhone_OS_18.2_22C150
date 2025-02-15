//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OSLogCompactOutputFormatter
{
}

- (void)printDropMessage:(id)arg1;	// IMP=0x00400000000235d6
- (void)printEvent:(id)arg1;	// IMP=0x0010000000022ab6
- (void)printThreadIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000022a60
- (void)printProcessIdentifier:(int)arg1;	// IMP=0x0010000000022a0c
- (void)printType:(const char *)arg1 overrideColor:(unsigned char)arg2;	// IMP=0x0010000000022998
- (void)printComposedLossMessage:(id)arg1;	// IMP=0x00100000000227ba
- (void)printTimestamp:(id)arg1;	// IMP=0x0010000000022707
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2 flags:(struct _log_flags_s *)arg3 colors:(struct _log_colors_s *)arg4;	// IMP=0x0010000000022675

@end

