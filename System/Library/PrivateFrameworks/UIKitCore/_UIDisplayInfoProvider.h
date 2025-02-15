//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration, NSString;
@protocol _UIDisplayInfoShape;

__attribute__((visibility("hidden")))
@interface _UIDisplayInfoProvider : NSObject
{
    FBSDisplayConfiguration *displayConfiguration;	// 8 = 0x8
    unsigned long long artworkSubtype;	// 16 = 0x10
    double homeAffordanceOverlayAllowance;	// 24 = 0x18
    double systemMinimumMargin;	// 32 = 0x20
    id <_UIDisplayInfoShape> exclusionArea;	// 40 = 0x28
    struct UIEdgeInsets peripheryInsets;	// 48 = 0x30
    struct UIEdgeInsets safeAreaInsetsPortrait;	// 80 = 0x50
    struct UIEdgeInsets safeAreaInsetsLandscapeLeft;	// 112 = 0x70
    struct UIEdgeInsets safeAreaInsetsLandscapeRight;	// 144 = 0x90
    struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000015e6ef9
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown; // @synthesize safeAreaInsetsPortraitUpsideDown;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight; // @synthesize safeAreaInsetsLandscapeRight;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft; // @synthesize safeAreaInsetsLandscapeLeft;
@property(readonly, nonatomic) id <_UIDisplayInfoShape> exclusionArea; // @synthesize exclusionArea;
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait; // @synthesize safeAreaInsetsPortrait;
@property(readonly, nonatomic) struct UIEdgeInsets peripheryInsets; // @synthesize peripheryInsets;
@property(readonly, nonatomic) double systemMinimumMargin; // @synthesize systemMinimumMargin;
@property(readonly, nonatomic) double homeAffordanceOverlayAllowance; // @synthesize homeAffordanceOverlayAllowance;
@property(readonly, nonatomic) unsigned long long artworkSubtype; // @synthesize artworkSubtype;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

