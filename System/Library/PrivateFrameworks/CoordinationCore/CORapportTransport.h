//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COConstituent, COExecutionContext, NSError, NSMapTable, NSMutableDictionary, NSString;
@protocol COCompanionLinkClientProtocol, CODiscoveryRecordProtocol, COTransportDelegate, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface CORapportTransport : NSObject
{
    _Bool _activated;	// 8 = 0x8
    id <COTransportDelegate> _delegate;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    COExecutionContext *_executionContext;	// 32 = 0x20
    id <CODiscoveryRecordProtocol> _record;	// 40 = 0x28
    double _minimumPingInterval;	// 48 = 0x30
    double _maximumPingInterval;	// 56 = 0x38
    COConstituent *_remote;	// 64 = 0x40
    id <COCompanionLinkClientProtocol> _client;	// 72 = 0x48
    unsigned long long _requestCount;	// 80 = 0x50
    double _averageRequestTime;	// 88 = 0x58
    CDUnknownBlockType _clientIsUsingOnDemandConnection;	// 96 = 0x60
    NSObject<OS_nw_activity> *_activity;	// 104 = 0x68
    NSMutableDictionary *_counters;	// 112 = 0x70
    NSMapTable *_sinks;	// 120 = 0x78
    NSMutableDictionary *_commands;	// 128 = 0x80
    NSMutableDictionary *_registrationCompletions;	// 136 = 0x88
    CDUnknownBlockType _activationHandler;	// 144 = 0x90
}

+ (void)_commandPayloadFromRapportRepresentation:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019913
- (void).cxx_destruct;	// IMP=0x000000000001b5c9
@property(copy, nonatomic) CDUnknownBlockType activationHandler; // @synthesize activationHandler=_activationHandler;
@property(readonly, nonatomic) NSMutableDictionary *registrationCompletions; // @synthesize registrationCompletions=_registrationCompletions;
@property(readonly, copy, nonatomic) NSMutableDictionary *commands; // @synthesize commands=_commands;
@property(readonly, nonatomic) NSMapTable *sinks; // @synthesize sinks=_sinks;
@property(readonly, copy, nonatomic) NSMutableDictionary *counters; // @synthesize counters=_counters;
@property(readonly, nonatomic) NSObject<OS_nw_activity> *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) CDUnknownBlockType clientIsUsingOnDemandConnection; // @synthesize clientIsUsingOnDemandConnection=_clientIsUsingOnDemandConnection;
@property(nonatomic) double averageRequestTime; // @synthesize averageRequestTime=_averageRequestTime;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) id <COCompanionLinkClientProtocol> client; // @synthesize client=_client;
@property(retain, nonatomic) COConstituent *remote; // @synthesize remote=_remote;
@property(nonatomic) double maximumPingInterval; // @synthesize maximumPingInterval=_maximumPingInterval;
@property(nonatomic) double minimumPingInterval; // @synthesize minimumPingInterval=_minimumPingInterval;
@property(readonly, nonatomic) id <CODiscoveryRecordProtocol> record; // @synthesize record=_record;
@property(readonly, nonatomic) COExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <COTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pingWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b3bb
- (void)_handleDisconnect;	// IMP=0x000000000001b246
- (void)_handleRPErrorFlagsUpdate;	// IMP=0x000000000001b1ac
- (void)_handleRPIsUsingOnDemandConnection;	// IMP=0x000000000001b090
- (void)_handleRPStateUpdate;	// IMP=0x000000000001aff8
- (void)_registerHandlersOnClient;	// IMP=0x000000000001a6e0
- (_Bool)_validateSource:(id)arg1 options:(id)arg2;	// IMP=0x000000000001a243
- (id)_eventIDForClass:(Class)arg1;	// IMP=0x000000000001a198
- (id)_serializedDataForCommand:(id)arg1;	// IMP=0x0000000000019a63
- (void)_commandPayloadFromRapportRepresentationWithValidation:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019600
@property(readonly, nonatomic) double currentPingTimeout;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000194a1
- (void)handleEventIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3;	// IMP=0x0000000000018de7
- (void)_updateRequestTimesFromRapportRepresentation:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;	// IMP=0x000000000001882d
- (void)handleResponseToRequest:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 error:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 at:(unsigned long long)arg6;	// IMP=0x0000000000017a70
- (void)handleRequestIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 at:(unsigned long long)arg5;	// IMP=0x0000000000016e22
- (void)handleRequestFromUnknownNodeWithIdentifier:(id)arg1 rapportRepresentation:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 at:(unsigned long long)arg5;	// IMP=0x00000000000167e2
- (void)_commandForIdentifier:(id)arg1 fromData:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016597
- (void)_handleOnDemanNodeCreationRequest;	// IMP=0x0000000000016378
- (void)sendRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001575e
- (void)sendCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000150aa
- (void)_setUpRegistrationCompletionHandlers;	// IMP=0x0000000000014b0f
- (void)deregisterCommandForClass:(Class)arg1;	// IMP=0x00000000000149cb
- (void)deregisterRequestForClass:(Class)arg1;	// IMP=0x0000000000014887
- (void)registerCommandForClass:(Class)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014393
- (void)registerRequestForClass:(Class)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013e40
- (void)invalidateWithError:(id)arg1;	// IMP=0x0000000000013b80
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013372
- (void)sourceHasBeenActivated;	// IMP=0x00000000000131cd
- (_Bool)isActivated;	// IMP=0x00000000000131c4
- (_Bool)supportsLeaderElection;	// IMP=0x0000000000013180
- (void)removeAsSink:(id)arg1;	// IMP=0x0000000000012fb8
- (void)setAsSink:(id)arg1;	// IMP=0x0000000000012ddd
- (void)setRecord:(id)arg1;	// IMP=0x0000000000012dcc
@property(readonly, nonatomic) int listeningPort;
- (id)shortDescription;	// IMP=0x0000000000012cbd
@property(readonly, copy) NSString *description;
- (id)initWithDiscoveryRecord:(id)arg1 executionContext:(id)arg2;	// IMP=0x00000000000128d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

