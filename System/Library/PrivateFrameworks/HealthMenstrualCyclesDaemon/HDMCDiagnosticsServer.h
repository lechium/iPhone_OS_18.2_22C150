//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDHealthStoreClient, HDMCProfileExtension, HDProfile, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMCDiagnosticsServer : HDStandardTaskServer
{
    HDProfile *_profile;	// 8 = 0x8
    HDMCProfileExtension *_profileExtension;	// 16 = 0x10
    HDHealthStoreClient *_client;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)requiredEntitlements;	// IMP=0x001000000002cf22
+ (id)taskIdentifier;	// IMP=0x001000000002cf0e
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;	// IMP=0x001000000002cc8b
- (void).cxx_destruct;	// IMP=0x000000000002d1b4
- (void)connectionInvalidated;	// IMP=0x000000000002d1ae
- (id)remoteInterface;	// IMP=0x000000000002d1a4
- (id)exportedInterface;	// IMP=0x000000000002d19a
- (void)remote_triggerAnalysisForDiagnosticsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cf8c
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 profileExtension:(id)arg5;	// IMP=0x000000000002ce19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
