//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITargetedPreview;
@protocol _UIContentEffectDescriptor;

@protocol _UIContentEffectDescriptor <NSObject>
@property(readonly, nonatomic) NSArray *compatibleDescriptors;
@property(readonly, nonatomic) UITargetedPreview *targetedPreview;
- (_Bool)canTransitionInPlaceToEffectWithDescriptor:(id <_UIContentEffectDescriptor>)arg1;
@end
