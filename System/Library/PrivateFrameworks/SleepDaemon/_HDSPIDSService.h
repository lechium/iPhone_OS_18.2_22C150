//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString;
@protocol HDSPIDSServiceDelegate, HKSPQueueBackedScheduler;

__attribute__((visibility("hidden")))
@interface _HDSPIDSService : NSObject
{
    IDSService *_service;	// 8 = 0x8
    id <HKSPQueueBackedScheduler> _scheduler;	// 16 = 0x10
    _Bool _isCloudService;	// 24 = 0x18
    id <HDSPIDSServiceDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006ded7
@property(nonatomic) __weak id <HDSPIDSServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isCloudService; // @synthesize isCloudService=_isCloudService;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000000006dd3f
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000000006dab4
- (id)_cloudDestinations;	// IMP=0x000000000006d987
- (id)_localDestinations;	// IMP=0x000000000006d964
- (void)_sendSerializedMessage:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d40b
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006d196
- (id)_loggingDescription;	// IMP=0x000000000006d0e8
- (id)initWithIsCloudService:(_Bool)arg1 scheduler:(id)arg2;	// IMP=0x000000000006d020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
