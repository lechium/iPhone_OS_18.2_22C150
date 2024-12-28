//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BLSHOSInterfaceProviding-Protocol.h>

@protocol BLSCADisplayPowerAssertion, BLSDisplayPowerResourceHint, BLSDisplayStateDelegate;

@protocol BLSHBacklightOSInterfaceProviding <BLSHOSInterfaceProviding>
@property(readonly, nonatomic, getter=isShowingBlankingWindow) _Bool showingBlankingWindow;
@property(readonly, nonatomic) long long caDisplayPowerState;
@property(readonly, nonatomic) long long caDisplayState;
@property(readonly, nonatomic) long long cbFlipbookState;
@property(readonly, nonatomic) _Bool supportsFlipbookState;
@property(readonly, nonatomic) long long cbDisplayMode;
@property(retain, setter=setDisplayStateDelegate:) id <BLSDisplayStateDelegate> displayStateDelegate;
@property(nonatomic, getter=isKernelAlwaysOnMode) _Bool kernelAlwaysOnMode;
- (void)setShowingBlankingWindow:(_Bool)arg1 fadeDuration:(double)arg2;
- (id <BLSDisplayPowerResourceHint>)createDisplayPowerResourceHintWithState:(unsigned long long)arg1;
- (void)transitionToCADisplayState:(long long)arg1;
- (id <BLSCADisplayPowerAssertion>)acquireDisplayPowerAssertionForReason:(long long)arg1;
- (void)switchToFlipbookState:(long long)arg1;
- (void)transitionToDisplayMode:(long long)arg1 withDuration:(double)arg2;
@end
