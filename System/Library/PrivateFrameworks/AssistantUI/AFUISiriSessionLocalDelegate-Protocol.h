//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/AFUISiriSessionListener-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, AFUISiriSession, NSString, SADeviceControlStartScreenRecording, SADeviceControlStopScreenRecording, SAUIAppPunchOut, SAUIDelayedActionCancelCommand, SAUIDelayedActionCommand, SAUISetUpdateMask, SAUITakeScreenshot;

@protocol AFUISiriSessionLocalDelegate <AFUISiriSessionListener>
- (void)siriSession:(AFUISiriSession *)arg1 initialBringupProcessedWithTurnIdentifier:(AFAnalyticsTurnBasedInstrumentationContext *)arg2;
- (void)siriSessionDidReceiveSetUpdateMaskCommand:(SAUISetUpdateMask *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveStopScreenRecordingCommand:(SADeviceControlStopScreenRecording *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveStartScreenRecordingCommand:(SADeviceControlStartScreenRecording *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveTakeScreenshotCommand:(SAUITakeScreenshot *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionImmersiveExperienceRequested;
- (void)siriSessionAudioOutputDidChangePowerLevel:(float)arg1;
- (void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1 peakLevel:(float)arg2;
- (void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1;
- (void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
- (void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
- (void)siriSession:(AFUISiriSession *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 failedToLaunchAppWithBundleIdentifier:(NSString *)arg2;
- (void)siriSession:(AFUISiriSession *)arg1 willProcessAppLaunchWithBundleIdentifier:(NSString *)arg2;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(SAUIDelayedActionCancelCommand *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(SAUIDelayedActionCommand *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void (^)(long long))arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveAppUnlockRequestForAppId:(NSString *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(_Bool)arg2 withCompletion:(void (^)(long long))arg3;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2 event:(long long)arg3 machAbsoluteTransitionTime:(double)arg4;

@optional
- (void)handlePunchoutCommand:(SAUIAppPunchOut *)arg1 completion:(void (^)(_Bool))arg2;
- (_Bool)shouldNonLocalDelegateHandlePunchouts;
- (_Bool)headphonesAuthenticated;
- (void)siriSessionDidReactivateFromFlexibleFollowups;
@end

