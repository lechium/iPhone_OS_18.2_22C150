//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardTypingStyleEstimator : NSObject
{
    NSTimer *_tapTypingFlipTimer;	// 8 = 0x8
    double _lastContinuousPathEvent;	// 16 = 0x10
    unsigned long long _currentTypingStyle;	// 24 = 0x18
    id <UIKeyboardTypingStyleEstimatorDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000011979e2
@property(nonatomic) __weak id <UIKeyboardTypingStyleEstimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)currentTypingStyleEstimation;	// IMP=0x00000000011979b1
- (void)tapTypedKey;	// IMP=0x000000000119799a
- (void)cancelContinuousPath;	// IMP=0x00000000011978c7
- (void)endedContinuousPath;	// IMP=0x0000000001197777
- (void)beganContinuousPath;	// IMP=0x0000000001197716
- (void)_setTypingStyleEstimation:(unsigned long long)arg1;	// IMP=0x00000000011975b4

@end

