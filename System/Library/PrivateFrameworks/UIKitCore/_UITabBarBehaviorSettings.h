//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UITabBarBehaviorSettings : PTSettings
{
    double _stackedLeadingPadding;	// 8 = 0x8
    double _stackedTrailingPadding;	// 16 = 0x10
    double _stackedTopInset;	// 24 = 0x18
    double _stackedBottomInset;	// 32 = 0x20
    double _stackedCornerRadius;	// 40 = 0x28
    double _inlineLeadingPadding;	// 48 = 0x30
    double _inlineTrailingPadding;	// 56 = 0x38
    double _inlineTopInset;	// 64 = 0x40
    double _inlineBottomInset;	// 72 = 0x48
    double _inlineCornerRadius;	// 80 = 0x50
    double _inlineHomeButtonVerticalOffset;	// 88 = 0x58
    double _inlineHomeAffordanceVerticalOffset;	// 96 = 0x60
}

+ (id)settingsControllerModule;	// IMP=0x006000000111bc7f
@property(nonatomic) double inlineHomeAffordanceVerticalOffset; // @synthesize inlineHomeAffordanceVerticalOffset=_inlineHomeAffordanceVerticalOffset;
@property(nonatomic) double inlineHomeButtonVerticalOffset; // @synthesize inlineHomeButtonVerticalOffset=_inlineHomeButtonVerticalOffset;
@property(nonatomic) double inlineCornerRadius; // @synthesize inlineCornerRadius=_inlineCornerRadius;
@property(nonatomic) double inlineBottomInset; // @synthesize inlineBottomInset=_inlineBottomInset;
@property(nonatomic) double inlineTopInset; // @synthesize inlineTopInset=_inlineTopInset;
@property(nonatomic) double inlineTrailingPadding; // @synthesize inlineTrailingPadding=_inlineTrailingPadding;
@property(nonatomic) double inlineLeadingPadding; // @synthesize inlineLeadingPadding=_inlineLeadingPadding;
@property(nonatomic) double stackedCornerRadius; // @synthesize stackedCornerRadius=_stackedCornerRadius;
@property(nonatomic) double stackedBottomInset; // @synthesize stackedBottomInset=_stackedBottomInset;
@property(nonatomic) double stackedTopInset; // @synthesize stackedTopInset=_stackedTopInset;
@property(nonatomic) double stackedTrailingPadding; // @synthesize stackedTrailingPadding=_stackedTrailingPadding;
@property(nonatomic) double stackedLeadingPadding; // @synthesize stackedLeadingPadding=_stackedLeadingPadding;
- (void)setDefaultValues;	// IMP=0x000000000111bb47

@end

