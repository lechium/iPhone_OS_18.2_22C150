//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface UIHeldAction
{
    _Bool _holding;	// 72 = 0x48
    NSDate *_holdBegan;	// 80 = 0x50
    double _baseDelay;	// 88 = 0x58
    double _timeBalance;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000187afaa
- (void)cancel;	// IMP=0x000000000187af6c
- (void)unschedule;	// IMP=0x000000000187af17
- (void)touchWithDelay:(double)arg1;	// IMP=0x000000000187aeac
- (_Bool)isHolding;	// IMP=0x000000000187ae9c
- (void)resume;	// IMP=0x000000000187ad9a
- (void)hold;	// IMP=0x000000000187ac8e

@end
