//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIKBCadenceMonitor : NSObject
{
    _Bool _isUserTyping;	// 8 = 0x8
    float _cadence;	// 12 = 0xc
    float _confidence;	// 16 = 0x10
    float _typingAvg;	// 20 = 0x14
    int _touchCount;	// 24 = 0x18
    double _gapAvg;	// 32 = 0x20
    double _prevTouchDown;	// 40 = 0x28
    UIDelayedAction *_touchLogTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000010f1b47
@property(retain, nonatomic) UIDelayedAction *touchLogTimer; // @synthesize touchLogTimer=_touchLogTimer;
@property(nonatomic) int touchCount; // @synthesize touchCount=_touchCount;
@property(nonatomic) double prevTouchDown; // @synthesize prevTouchDown=_prevTouchDown;
@property(nonatomic) double gapAvg; // @synthesize gapAvg=_gapAvg;
@property(nonatomic) float typingAvg; // @synthesize typingAvg=_typingAvg;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) float cadence; // @synthesize cadence=_cadence;
@property(nonatomic) _Bool isUserTyping; // @synthesize isUserTyping=_isUserTyping;
- (id)init;	// IMP=0x00000000010f1a4e
- (void)reset;	// IMP=0x00000000010f19cc
- (void)addTypingTouchTime:(double)arg1;	// IMP=0x00000000010f1985
- (void)logUserTyping:(id)arg1;	// IMP=0x00000000010f190b
- (void)typingCadence:(double)arg1;	// IMP=0x00000000010f1612
- (void)updateConfidenceWithGap:(double)arg1;	// IMP=0x00000000010f156c
- (id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2;	// IMP=0x00000000010f1564
- (id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2;	// IMP=0x00000000010f14df

@end

