//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAPModeSuspendPolicyIOS : CSPolicy
{
    NSObject<OS_dispatch_queue> *_recordStateQueue;	// 8 = 0x8
    _Bool _isAssistantClientConsideredAsRecord;	// 16 = 0x10
    NSString *_pendingRecordingStopUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000010882c
@property(retain, nonatomic) NSString *pendingRecordingStopUUID; // @synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID;
@property(nonatomic) _Bool isAssistantClientConsideredAsRecord; // @synthesize isAssistantClientConsideredAsRecord=_isAssistantClientConsideredAsRecord;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000001087e1
- (void);	// IMP=0x00100000001087db
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000001087d5
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000001087cf
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(_Bool)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;	// IMP=0x0010000000108729
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)arg1 stopStreamOption:(id)arg2 eventUUID:(id)arg3;	// IMP=0x0010000000108695
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 didStartAudioCaptureSuccessfully:(_Bool)arg2 option:(id)arg3 eventUUID:(id)arg4;	// IMP=0x00100000001085ef
- (void)_handleClientRecordStateDidChange:(_Bool)arg1 eventUUID:(id)arg2;	// IMP=0x0010000000108423
- (_Bool)_isInPhoneCallStateWithHSPhoneCallCapableRoute;	// IMP=0x001000000010817e
- (_Bool)_isAudioRouteIneligibleForAP;	// IMP=0x0010000000108073
- (_Bool)_isHearstRoutedAndWithNoPhoneCall;	// IMP=0x0010000000107fcf
- (_Bool)_isJarvisRouted;	// IMP=0x0010000000107f35
- (_Bool)_isSpeechDetectionDevicePresent;	// IMP=0x0010000000107e73
- (void)_addConditionsForIOSAOP;	// IMP=0x0010000000107ca4
- (void)_addConditionsForIOSBargeIn;	// IMP=0x0010000000107a06
- (void)_addVoiceTriggerAPModeSuspendConditions;	// IMP=0x001000000010792f
- (void)_subscribeEventMonitors;	// IMP=0x00100000001076b9
- (id)init;	// IMP=0x00100000001075b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
