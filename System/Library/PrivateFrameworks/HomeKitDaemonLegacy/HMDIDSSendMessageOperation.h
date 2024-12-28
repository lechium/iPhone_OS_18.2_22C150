//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMDRemoteMessageDestination, HMFMessage, NSArray, NSString;
@protocol HMDIDSService;

__attribute__((visibility("hidden")))
@interface HMDIDSSendMessageOperation : HMFOperation
{
    double _timeout;	// 8 = 0x8
    HMDRemoteMessageDestination *_destination;	// 16 = 0x10
    NSString *_messageIdentifier;	// 24 = 0x18
    id <HMDIDSService> _service;	// 32 = 0x20
    HMFMessage *_message;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000003d2a40
+ (id)shortDescription;	// IMP=0x00100000003d2a2e
+ (double)timeout;	// IMP=0x00100000003d2950
- (void).cxx_destruct;	// IMP=0x00000000003d28fd
@property(readonly) HMFMessage *message; // @synthesize message=_message;
@property(readonly) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000000003d2618
- (id)logIdentifier;	// IMP=0x00000000003d25bd
- (void)main;	// IMP=0x00000000003d1d69
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithMessage:(id)arg1 service:(id)arg2;	// IMP=0x00000000003d1788
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000003d16e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
