//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterfaceConnectionRequest : NSObject
{
    CDUnknownBlockType _connectionHandler;	// 8 = 0x8
    NSString *_serviceBundleIdentifier;	// 16 = 0x10
    _UIRemoteViewService *_service;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _isCancelled;	// 40 = 0x28
    _Bool _successfullyHandledConnection;	// 41 = 0x29
    NSError *_cancellationError;	// 48 = 0x30
    _UIAsyncInvocation *_cancellationInvocation;	// 56 = 0x38
    int _sessionRequestNotifyToken;	// 64 = 0x40
    BKSProcessAssertion *_serviceProcessAssertion;	// 72 = 0x48
    NSXPCConnection *_serviceSessionConnection;	// 80 = 0x50
    _Bool _serviceSessionConnectionResumed;	// 88 = 0x58
}

+ (id)connectToViewService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000018a5b5f
+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000018a54eb
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000018a54d4
+ (void)initialize;	// IMP=0x00600000018a542d
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x00000000018a69b7
- (void)_cancelWithError:(id)arg1;	// IMP=0x00000000018a68f3
- (void)_didConnectToService;	// IMP=0x00000000018a6862
- (void)_establishConnection;	// IMP=0x00000000018a666b
- (void)_createAndEstablishConnection;	// IMP=0x00000000018a6578
- (void)_createPlugInProcessAssertion;	// IMP=0x00000000018a63c7
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000018a623c
- (void)_createProcessAssertion;	// IMP=0x00000000018a6099
- (void)_launchService;	// IMP=0x00000000018a5cd6
- (void)dealloc;	// IMP=0x00000000018a5b79
- (void)_objc_initiateDealloc;	// IMP=0x00000000018a545c

@end

