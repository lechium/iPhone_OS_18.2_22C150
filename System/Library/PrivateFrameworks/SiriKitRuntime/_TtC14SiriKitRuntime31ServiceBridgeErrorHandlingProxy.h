//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14SiriKitRuntime31ServiceBridgeErrorHandlingProxy : _TtCs12_SwiftObject
{
    MISSING_TYPE *wrappedProxy;	// 16 = 0x10
}

- (void)postToMessageBusWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dfe70
- (void)submitExternalActivationRequestWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dfac0
- (void)fetchRecentDialogsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002df730
- (void)closeServerRequestForExecutionRequestId:(id)arg1;	// IMP=0x00000000002df3a0
- (void)retriggerOriginalRequestWithExecutionRequestId:(id)arg1 forUserId:(id)arg2 givenCurrentExecutionRequestId:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000002df0d0
- (void)fetchSpeechInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ded50
- (void)fetchContextsFor:(id)arg1 includesNearByDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002de9e0
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002de640
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002de340
- (void)fallbackToInfoDomainResultsForResultCandidateId:(id)arg1;	// IMP=0x00000000002ddf70
- (void)fallbackToServerForResultCandidateId:(id)arg1;	// IMP=0x00000000002ddd30
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg1;	// IMP=0x00000000002ddc50
- (void)closeWithExecutionOutput:(id)arg1 needsUserInput:(_Bool)arg2;	// IMP=0x00000000002dd9b0
- (void)closeWithExecutionOutput:(id)arg1 errorString:(id)arg2;	// IMP=0x00000000002dd6f0
- (void)closeWithExecutionOutput:(id)arg1;	// IMP=0x00000000002dd4c0
- (void)submitWithExecutionOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002dd480

@end
