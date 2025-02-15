//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMDAccountHandle, HMDIDSMessageContext, NSMutableArray, NSString;
@protocol HMDIDSService;

__attribute__((visibility("hidden")))
@interface HMDAccountHandleResolveOperation : HMFOperation
{
    HMDAccountHandle *_handle;	// 8 = 0x8
    id <HMDIDSService> _service;	// 16 = 0x10
    HMDIDSMessageContext *_messageContext;	// 24 = 0x18
    NSMutableArray *_resolveBlocks;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000048d0d4
+ (double)timeout;	// IMP=0x001000000048cff6
- (void).cxx_destruct;	// IMP=0x000000000048cd1d
@property(readonly) NSMutableArray *resolveBlocks; // @synthesize resolveBlocks=_resolveBlocks;
@property(retain, nonatomic) HMDIDSMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(readonly) id <HMDIDSService> service; // @synthesize service=_service;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000048c66e
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000000048c389
- (id)logIdentifier;	// IMP=0x000000000048c2d5
- (void)addResolveBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000048c21d
- (void)main;	// IMP=0x000000000048ba0c
- (id)initWithHandle:(id)arg1;	// IMP=0x000000000048b89b
- (id)initWithQualityOfService:(long long)arg1 timeout:(double)arg2;	// IMP=0x000000000048b7f3
- (id)initWithTimeout:(double)arg1;	// IMP=0x000000000048b74b
- (id)init;	// IMP=0x000000000048b6a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

