//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXEventRepresentation;

@protocol HNDEventManagerDelegate
- (void)cancelCurrentGesture;
- (_Bool)isPerformingGesture;
- (void)handleRealEvent:(AXEventRepresentation *)arg1;
- (void)keyboardVisible:(_Bool)arg1 withFrame:(struct CGRect)arg2;
- (void)didFailToFloatApp;
- (void)didFailToPinApp;
- (void)screenshotDidFire;
- (void)screenshotWillFire;
- (void)mediaPlaybackChanged;
- (void)orientationChanged:(long long)arg1;
- (void)resetNubbitLocation;
- (void)volumeChanged;
- (void)rotationLockChanged;
- (void)ringerSwitchChanged;
- (void)mediaControlsChanged:(_Bool)arg1;
- (void)substantialTransitionOccurred;
@end

