//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSString;

__attribute__((visibility("hidden")))
@interface HMDEventRouterTimer : NSObject
{
    CDUnknownBlockType _timerFireHandler;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c2149f
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) CDUnknownBlockType timerFireHandler; // @synthesize timerFireHandler=_timerFireHandler;
@property(readonly, nonatomic) double timeInterval;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000c213f4
- (void)suspend;	// IMP=0x0000000000c213b7
- (void)resume;	// IMP=0x0000000000c2137a
- (id)initWithQueue:(id)arg1 interval:(double)arg2 timerFireHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c21289

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
