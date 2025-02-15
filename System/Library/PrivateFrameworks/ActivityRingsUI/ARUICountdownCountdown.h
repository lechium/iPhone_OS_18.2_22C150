//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown
{
    unsigned long long _step;	// 8 = 0x8
    _Bool _cancelable;	// 16 = 0x10
    double _percent;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x0010000000016a91
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (unsigned long long)countdownStep;	// IMP=0x0000000000016dd7
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016b7f
- (id)description;	// IMP=0x0000000000016ab8
- (id)identifier;	// IMP=0x0000000000016a9e
- (_Bool)cancelable;	// IMP=0x0000000000016a81
- (id)timingFunction;	// IMP=0x0000000000016a52
- (double)duration;	// IMP=0x0000000000016a44
- (double)delay;	// IMP=0x0000000000016a36
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(_Bool)arg3;	// IMP=0x00000000000169cc

@end

