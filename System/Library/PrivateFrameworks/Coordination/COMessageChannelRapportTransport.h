//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, RPCompanionLinkClient;
@protocol COMessageChannelRapportTransportDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COMessageChannelRapportTransport : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _activated;	// 12 = 0xc
    id <COMessageChannelRapportTransportDelegate> _delegate;	// 16 = 0x10
    NSSet *_groupHKIdentifiers;	// 24 = 0x18
    RPCompanionLinkClient *_companionLinkClient;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_requestIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSMutableDictionary *_activeMemberDevices;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000008d59
@property(retain, nonatomic) NSMutableDictionary *activeMemberDevices; // @synthesize activeMemberDevices=_activeMemberDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // @synthesize companionLinkClient=_companionLinkClient;
@property(readonly, retain, nonatomic) NSSet *groupHKIdentifiers; // @synthesize groupHKIdentifiers=_groupHKIdentifiers;
@property(readonly, nonatomic) __weak id <COMessageChannelRapportTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_payloadClassFromType:(id)arg1;	// IMP=0x0000000000008cb6
- (id)_payloadTypeFromClass:(Class)arg1;	// IMP=0x0000000000008c8d
- (id)_serializedDataForRequest:(id)arg1;	// IMP=0x0000000000008c6c
- (id)_serializeDataForResponse:(id)arg1;	// IMP=0x0000000000008c4b
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008c0d
- (id)_onqueue_memberFromRPCompanionLinkDevice:(id)arg1;	// IMP=0x0000000000008a52
- (id)_onqueue_activeMemberWithIDSIdentifier:(id)arg1;	// IMP=0x000000000000888e
- (_Bool)_onqueue_devicePresentInGroup:(id)arg1;	// IMP=0x000000000000871a
- (void)_onqueue_handleDeviceUpdated:(id)arg1;	// IMP=0x00000000000083e6
- (void)_onqueue_handleDeviceLost:(id)arg1;	// IMP=0x0000000000008208
- (void)_onqueue_handleDeviceFound:(id)arg1;	// IMP=0x0000000000007fde
- (void)_onqueue_handleIncomingRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000071c8
- (void)sendRequest:(id)arg1 to:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006b3b
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005eed
- (void)removeHomeKitGroupIdentifiers:(id)arg1;	// IMP=0x000000000000587b
- (void)addHomeKitGroupIdentifiers:(id)arg1;	// IMP=0x0000000000005161
@property(readonly, retain, nonatomic) NSArray *activeMembers;
- (void)dealloc;	// IMP=0x0000000000004fb6
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2 companionLink:(id)arg3 dispatchQueue:(id)arg4;	// IMP=0x0000000000004e5e
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;	// IMP=0x0000000000004d91

@end
