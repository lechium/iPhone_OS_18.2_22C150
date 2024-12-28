//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBScene, SBWindowScene;
@protocol SBKeyboardFocusControlling;

@protocol SBKeyboardFocusControllerObserver <NSObject>
- (void)keyboardFocusController:(id <SBKeyboardFocusControlling>)arg1 externalSceneDidAcquireFocus:(FBScene *)arg2;

@optional
- (void)keyboardFocusController:(id <SBKeyboardFocusControlling>)arg1 didUpdateWindowSceneWithFocusFrom:(SBWindowScene *)arg2 to:(SBWindowScene *)arg3;
@end
