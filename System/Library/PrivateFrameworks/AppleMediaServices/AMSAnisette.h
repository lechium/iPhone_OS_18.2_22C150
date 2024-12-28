//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAnisette : NSObject
{
}

+ (id)bagKeySet;	// IMP=0x00100000002d4758
+ (_Bool)_shouldRetryAfterError:(id)arg1;	// IMP=0x00100000002d4707
+ (id)_syncMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;	// IMP=0x00100000002d43bc
+ (id)_provisionMachineWithActionData:(id)arg1 type:(long long)arg2 account:(id)arg3 bag:(id)arg4;	// IMP=0x00100000002d4078
+ (id)_headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3;	// IMP=0x00100000002d4070
+ (id)_handleActionName:(id)arg1 actionData:(id)arg2 account:(id)arg3 type:(long long)arg4 bag:(id)arg5;	// IMP=0x00100000002d3de3
+ (id)_eraseProvisioningForType:(long long)arg1 account:(id)arg2;	// IMP=0x00100000002d3ddb
+ (void)_bagDomainExistsForURL:(id)arg1 type:(long long)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d39df
+ (unsigned long long)_accountIDForType:(long long)arg1 account:(id)arg2;	// IMP=0x00100000002d39d7
+ (id)createBagForSubProfile;	// IMP=0x00100000002d393d
+ (id)bagSubProfileVersion;	// IMP=0x00100000002d38ed
+ (id)bagSubProfile;	// IMP=0x00100000002d389d
+ (id)headersForRequest:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x00100000002d3837
+ (id)handleResponse:(id)arg1 type:(long long)arg2 bag:(id)arg3 account:(id)arg4;	// IMP=0x00100000002d3624
+ (_Bool)handleResponse:(id)arg1 account:(id)arg2 type:(long long)arg3 bag:(id)arg4;	// IMP=0x00100000002d35cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
