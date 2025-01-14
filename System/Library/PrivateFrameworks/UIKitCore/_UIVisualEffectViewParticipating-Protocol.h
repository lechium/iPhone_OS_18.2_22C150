//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating;

@protocol _UIVisualEffectViewParticipating <NSObject>
@property(copy, nonatomic) NSArray *filters;
@property(copy, nonatomic) NSArray *viewEffects;
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
@end

