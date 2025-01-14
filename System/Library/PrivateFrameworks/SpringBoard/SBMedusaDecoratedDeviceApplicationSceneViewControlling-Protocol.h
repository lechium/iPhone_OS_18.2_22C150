//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSceneLayoutMedusaStatusBarAssertionProviding-Protocol.h>

@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <SBDeviceApplicationSceneViewControlling, SBLayoutStateTransitionObserver, SBSceneLayoutMedusaStatusBarAssertionProviding>
@property(nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;
@property(nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
@property(nonatomic) double blurViewIconScale;
- (void)setLiveContentBlurEnabled:(_Bool)arg1 duration:(double)arg2 blurDelay:(double)arg3 iconViewScale:(double)arg4 began:(void (^)(void))arg5 completion:(void (^)(void))arg6;
@end

