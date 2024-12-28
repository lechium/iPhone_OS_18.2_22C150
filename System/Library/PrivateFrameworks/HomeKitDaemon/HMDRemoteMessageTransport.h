//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMFFuture, HMFPromise, NSString;
@protocol HMDHomeMembershipVerifier, HMDRemoteMessageTransportReachabilityDelegate;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageTransport : HMFMessageTransport
{
    int _transportType;	// 8 = 0x8
    HMDAccountRegistry *_accountRegistry;	// 16 = 0x10
    long long _qualityOfService;	// 24 = 0x18
    id <HMDRemoteMessageTransportReachabilityDelegate> _reachabilityDelegate;	// 32 = 0x20
    id <HMDHomeMembershipVerifier> _homeMembershipVerifier;	// 40 = 0x28
    HMFFuture *_startFuture;	// 48 = 0x30
    HMFPromise *_startPromise;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000f614b7
+ (id)remoteMessageFromMessage:(id)arg1 secure:(_Bool)arg2 accountRegistry:(id)arg3;	// IMP=0x0010000000f60c93
+ (unsigned long long)restriction;	// IMP=0x0010000000f60c86
+ (id)remoteMessageTransportsForProductInfo:(id)arg1;	// IMP=0x0010000000d7021a
- (void).cxx_destruct;	// IMP=0x0000000000f608b1
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) HMFPromise *startPromise; // @synthesize startPromise=_startPromise;
@property(readonly, nonatomic) HMFFuture *startFuture; // @synthesize startFuture=_startFuture;
@property(readonly, nonatomic) __weak id <HMDHomeMembershipVerifier> homeMembershipVerifier; // @synthesize homeMembershipVerifier=_homeMembershipVerifier;
@property(nonatomic) __weak id <HMDRemoteMessageTransportReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=_reachabilityDelegate;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (id)dumpState;	// IMP=0x0000000000f6079a
- (void)configureWithHomeMembershipVerifier:(id)arg1;	// IMP=0x0000000000f60786
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;	// IMP=0x0000000000f6060a
- (_Bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;	// IMP=0x0000000000f603f9
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;	// IMP=0x0000000000f5fa27
- (id)remoteMessageFromMessage:(id)arg1;	// IMP=0x0000000000f5f9a0
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;	// IMP=0x0000000000f5f8ef
- (_Bool)isValidMessage:(id)arg1;	// IMP=0x0000000000f5f8e7
- (id)start;	// IMP=0x0000000000f5f88d
@property(readonly, nonatomic, getter=isSecure) _Bool secure;
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x0000000000f5f7b1
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000f5f6fd
- (id)init;	// IMP=0x0000000000f5f655

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
