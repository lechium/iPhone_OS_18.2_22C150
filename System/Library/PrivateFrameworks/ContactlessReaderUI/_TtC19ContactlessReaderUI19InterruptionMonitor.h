//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19ContactlessReaderUI19InterruptionMonitor : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *callObserver;	// 24 = 0x18
    MISSING_TYPE *hardwareButtonConsumer;	// 32 = 0x20
    MISSING_TYPE *_interruption;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000019190
- (id)init;	// IMP=0x0000000000019730
- (void)dealloc;	// IMP=0x0000000000019140
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x0000000000019830
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;	// IMP=0x00000000000198a0

@end
