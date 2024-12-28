//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFluidSliderDiscreteButtonDriver.h"

@class NSString, UIView, _UIPhysicalButtonInteraction;
@protocol _UIFluidSliderDrivable;

__attribute__((visibility("hidden")))
@interface _UIFluidSliderDiscreteVolumeButtonDriver : _UIFluidSliderDiscreteButtonDriver
{
    _UIPhysicalButtonInteraction *_physicalButtonInteraction;	// 8 = 0x8
    unsigned long long __pressedButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000138b280
@property(nonatomic) unsigned long long _pressedButton; // @synthesize _pressedButton=__pressedButton;
@property(readonly, nonatomic) _UIPhysicalButtonInteraction *physicalButtonInteraction; // @synthesize physicalButtonInteraction=_physicalButtonInteraction;
- (void)_end;	// IMP=0x000000000138b1d3
- (void)_beginWithButton:(unsigned long long)arg1;	// IMP=0x000000000138b1c1
- (void)_physicalButtonInteraction:(id)arg1 handleAction:(id)arg2 withActiveActions:(id)arg3;	// IMP=0x000000000138b0fc
@property(readonly, nonatomic) NSString *name;
- (void)cancel;	// IMP=0x000000000138b0ae
@property(nonatomic) _Bool enabled;
@property(nonatomic) __weak UIView *view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <_UIFluidSliderDrivable> drivable;
@property(readonly) unsigned long long hash;
@property(nonatomic) double stretchAmount;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long trackAxis;
@property(nonatomic) double velocityMultiplier;

@end
