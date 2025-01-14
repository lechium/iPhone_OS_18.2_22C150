//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBWindowScene, STUIStatusBar_Wrapper, UIStatusBarOrientationAnimationParameters;

@protocol STUIStatusBarWindow <NSObject>
+ (struct CGRect)_defaultStatusBarSceneReferenceBounds;
@property(nonatomic) long long orientation;
@property(retain, nonatomic) STUIStatusBar_Wrapper *statusBar;
- (void)windowSceneDidConnect:(SBWindowScene *)arg1;
- (void)setOrientation:(long long)arg1 animationParameters:(UIStatusBarOrientationAnimationParameters *)arg2;

@optional
- (_Bool)_isStatusBarWindow;
@end

