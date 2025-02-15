//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject
{
    unsigned long long _numberOfTouchesRequired;	// 8 = 0x8
    unsigned long long _numberOfTapsRequired;	// 16 = 0x10
    long long _buttonMaskRequired;	// 24 = 0x18
    NSMutableSet *_activeTouches;	// 32 = 0x20
    struct CGPoint _startPoint;	// 40 = 0x28
    struct CGPoint _digitizerLocation;	// 56 = 0x38
    double _allowableMovement;	// 72 = 0x48
    double _allowableSeparation;	// 80 = 0x50
    double _allowableTouchTimeSeparation;	// 88 = 0x58
    double _maximumTapDuration;	// 96 = 0x60
    double _minimumTapDuration;	// 104 = 0x68
    double _startTime;	// 112 = 0x70
    double _maximumIntervalBetweenSuccessiveTaps;	// 120 = 0x78
    NSMutableArray *_touches;	// 128 = 0x80
    long long _strongestDirectionalAxis;	// 136 = 0x88
    double _strongestDirectionalForce;	// 144 = 0x90
    int _currentNumberOfTouches;	// 152 = 0x98
    int _currentNumberOfTaps;	// 156 = 0x9c
    int _numberOfTouchesForCurrentTap;	// 160 = 0xa0
    unsigned int _timerOn:1;	// 164 = 0xa4
    unsigned int _multitouchTimerOn:1;	// 164 = 0xa4
    unsigned int _hasPointerTouch:1;	// 164 = 0xa4
    _Bool _countsOnlyActiveTouches;	// 165 = 0xa5
    _Bool _continuousTapRecognition;	// 166 = 0xa6
    id <UITapRecognizerDelegate> _delegate;	// 168 = 0xa8
    long long _exclusiveDirectionalAxis;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000c8c458
- (void).cxx_destruct;	// IMP=0x0000000000c8df42
@property(nonatomic) long long exclusiveDirectionalAxis; // @synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis;
@property(nonatomic) _Bool countsOnlyActiveTouches; // @synthesize countsOnlyActiveTouches=_countsOnlyActiveTouches;
@property(nonatomic) double minimumTapDuration; // @synthesize minimumTapDuration=_minimumTapDuration;
@property(nonatomic) double allowableTouchTimeSeparation; // @synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation;
@property(nonatomic) double maximumTapDuration; // @synthesize maximumTapDuration=_maximumTapDuration;
@property(nonatomic) long long buttonMaskRequired; // @synthesize buttonMaskRequired=_buttonMaskRequired;
@property(nonatomic) __weak id <UITapRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) unsigned long long numberOfTapsRequired; // @synthesize numberOfTapsRequired=_numberOfTapsRequired;
@property(readonly, nonatomic) NSSet *activeTouches;
- (struct CGPoint)locationInView:(id)arg1 focusSystem:(id)arg2;	// IMP=0x0000000000c8dd46
- (struct CGPoint)locationInViewNotTrackingTouches:(id)arg1;	// IMP=0x0000000000c8daf2
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x0000000000c8da17
- (struct CGPoint)_locationInSceneReferenceSpace;	// IMP=0x0000000000c8da04
@property(nonatomic) double maximumIntervalBetweenSuccessiveTaps;
@property(nonatomic) double allowableSeparation;
@property(nonatomic) double allowableMovement;
@property(nonatomic) _Bool continuousTapRecognition;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d971
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d90a
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d87a
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d815
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d7a8
- (void)_interactionEndedTouch:(_Bool)arg1;	// IMP=0x0000000000c8d698
- (void)_beginInteraction;	// IMP=0x0000000000c8d5f3
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d509
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8d26b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000c8cbb3
- (_Bool)activeTouchesExceedAllowableSeparation;	// IMP=0x0000000000c8cb13
- (double)_effectiveAllowableMovement;	// IMP=0x0000000000c8cab4
- (void)multitouchExpired:(id)arg1;	// IMP=0x0000000000c8ca30
- (void)startMultitouchTimer:(double)arg1;	// IMP=0x0000000000c8c9e0
- (void)clearMultitouchTimer;	// IMP=0x0000000000c8c997
- (void)tooSlow:(id)arg1;	// IMP=0x0000000000c8c93a
- (void)startTapTimer:(double)arg1;	// IMP=0x0000000000c8c8ea
- (void)clearTapTimer;	// IMP=0x0000000000c8c8a1
- (void)_reset;	// IMP=0x0000000000c8c818
- (void)dealloc;	// IMP=0x0000000000c8c7c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c8c69f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c8c460
- (id)init;	// IMP=0x0000000000c8c3b8

@end

