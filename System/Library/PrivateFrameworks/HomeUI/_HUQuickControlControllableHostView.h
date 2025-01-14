//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HUQuickControlViewProfile, MTMaterialView, NSString;
@protocol HUQuickControlViewInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _HUQuickControlControllableHostView : UIView
{
    _Bool _userInteractionActive;	// 8 = 0x8
    HUQuickControlViewProfile *_profile;	// 16 = 0x10
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;	// 24 = 0x18
    id _value;	// 32 = 0x20
    MTMaterialView *_backgroundView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004365dd
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;	// IMP=0x0000000000436542
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;	// IMP=0x0000000000436529
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000043640d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long reachabilityState;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(retain, nonatomic) id secondaryValue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,&,N

@property(readonly) Class superclass;

@end

