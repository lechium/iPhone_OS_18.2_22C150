//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15ActivityRingsUI15SpringAnimation : NSObject
{
    MISSING_TYPE *delay;	// 8 = 0x8
    MISSING_TYPE *remainingDelay;	// 16 = 0x10
    MISSING_TYPE *animationState;	// 24 = 0x18
}

- (id)init;	// IMP=0x0000000000024200
- (void)completeWithSnap;	// IMP=0x0000000000024180
- (_Bool)advanceWithDeltaTime:(double)arg1;	// IMP=0x0000000000024110
- (void)updateTarget:(double)arg1;	// IMP=0x0000000000023cf0
- (void)configureWithTension:(double)arg1 friction:(double)arg2 target:(double)arg3;	// IMP=0x0000000000023c50
- (id)initWithInitialValue:(double)arg1 delay:(double)arg2;	// IMP=0x0000000000023bb0
@property(nonatomic, readonly) double target;
@property(nonatomic, readonly) double value;

@end
