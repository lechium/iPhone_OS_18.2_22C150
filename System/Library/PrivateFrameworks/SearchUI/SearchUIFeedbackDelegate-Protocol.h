//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/SFFeedbackListener-Protocol.h>

@class NSError, NSString, SFCard, SFCardSectionEngagementFeedback, SiriTTSAudioData, UIView, UIViewController;
@protocol SearchUICommandDelegate;

@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional
- (void)lockupViewForAppIdentifier:(NSString *)arg1 didChangeState:(NSString *)arg2;
- (void)lockupViewEngagedForAppIdentifier:(NSString *)arg1;
- (void)lockupViewForAppIdentifier:(NSString *)arg1 didFailRequestWithError:(NSError *)arg2;
- (id <SearchUICommandDelegate>)commandDelegate;
- (void)stopPlaybackForAudioData:(SiriTTSAudioData *)arg1;
- (void)performPlaybackForAudioData:(SiriTTSAudioData *)arg1 completionHandler:(void (^)(void))arg2;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;
- (void)presentViewControllerForCard:(SFCard *)arg1 animate:(_Bool)arg2;
- (void)willDismissViewController:(UIViewController *)arg1;
- (void)presentViewController:(UIViewController *)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1 animate:(_Bool)arg2;
- (_Bool)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
@end

