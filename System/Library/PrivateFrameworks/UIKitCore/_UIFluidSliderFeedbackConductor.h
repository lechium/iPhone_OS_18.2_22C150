//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIFluidSliderFeedbackPlayer;

__attribute__((visibility("hidden")))
@interface _UIFluidSliderFeedbackConductor : NSObject
{
    double _epsilon;	// 8 = 0x8
    id <_UIFluidSliderFeedbackPlayer> __directFeedbackPlayer;	// 16 = 0x10
    id <_UIFluidSliderFeedbackPlayer> __indirectFeedbackPlayer;	// 24 = 0x18
    double __lastValue;	// 32 = 0x20
    double __lastSnappingTarget;	// 40 = 0x28
    unsigned long long __detentCount;	// 48 = 0x30
    long long __currentRegion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000015d4c73
@property(nonatomic) long long _currentRegion; // @synthesize _currentRegion=__currentRegion;
@property(nonatomic) unsigned long long _detentCount; // @synthesize _detentCount=__detentCount;
@property(nonatomic) double _lastSnappingTarget; // @synthesize _lastSnappingTarget=__lastSnappingTarget;
@property(nonatomic) double _lastValue; // @synthesize _lastValue=__lastValue;
@property(retain, nonatomic) id <_UIFluidSliderFeedbackPlayer> _indirectFeedbackPlayer; // @synthesize _indirectFeedbackPlayer=__indirectFeedbackPlayer;
@property(retain, nonatomic) id <_UIFluidSliderFeedbackPlayer> _directFeedbackPlayer; // @synthesize _directFeedbackPlayer=__directFeedbackPlayer;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
- (void)_playFeedback:(long long)arg1 forUpdateType:(long long)arg2 value:(double)arg3 atLocation:(struct CGPoint)arg4;	// IMP=0x00000000015d4aec
- (void)moveToValue:(double)arg1 snappingTarget:(double)arg2 withUpdateType:(long long)arg3 atLocation:(struct CGPoint)arg4 forced:(_Bool)arg5;	// IMP=0x00000000015d4684
- (id)initWithDetentCount:(unsigned long long)arg1 view:(id)arg2 indirectFeedbackPlayer:(id)arg3;	// IMP=0x00000000015d4592

@end

