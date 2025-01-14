//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITapGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer
{
    _Bool _isWaitingForHoldToAction;	// 8 = 0x8
    _Bool _isInHoldToAction;	// 9 = 0x9
    _Bool _isWaitingForTooSlowForDoubleTap;	// 10 = 0xa
    int _currentNumberOfPresses;	// 12 = 0xc
    long long _gestureType;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    double _pressEventBeginTimestamp;	// 32 = 0x20
}

@property(nonatomic) _Bool isWaitingForTooSlowForDoubleTap; // @synthesize isWaitingForTooSlowForDoubleTap=_isWaitingForTooSlowForDoubleTap;
@property(nonatomic) _Bool isInHoldToAction; // @synthesize isInHoldToAction=_isInHoldToAction;
@property(nonatomic) _Bool isWaitingForHoldToAction; // @synthesize isWaitingForHoldToAction=_isWaitingForHoldToAction;
@property(nonatomic) double pressEventBeginTimestamp; // @synthesize pressEventBeginTimestamp=_pressEventBeginTimestamp;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int currentNumberOfPresses; // @synthesize currentNumberOfPresses=_currentNumberOfPresses;
@property(nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f491f5
- (void)cancelPendingHoldToAction;	// IMP=0x0000000000f491b2
- (void)scheduleHoldToAction;	// IMP=0x0000000000f49179
- (void)holdToAction:(id)arg1;	// IMP=0x0000000000f490f4
- (void)cancelPendingTooSlowForDoubleTap;	// IMP=0x0000000000f490b1
- (void)scheduleTooSlowForDoubleTap;	// IMP=0x0000000000f49083
- (void)tooSlowForDoubleTap:(id)arg1;	// IMP=0x0000000000f49040
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f48f32
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f48e90
- (void)reset;	// IMP=0x0000000000f48dfe
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000f48dcf

@end

