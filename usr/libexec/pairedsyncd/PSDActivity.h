//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection, PSDServiceProgressDelegate, PSYActivityInfo;
@protocol OS_dispatch_queue, PSDActivityDelegate;

@interface PSDActivity : NSObject
{
    id <PSDActivityDelegate> _delegate;	// 8 = 0x8
    PSYActivityInfo *_activityInfo;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    PSDServiceProgressDelegate *_progressDelegate;	// 40 = 0x28
    NSMutableSet *_requestedServiceNames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001e42e
@property(retain, nonatomic) NSMutableSet *requestedServiceNames; // @synthesize requestedServiceNames=_requestedServiceNames;
@property(retain, nonatomic) PSDServiceProgressDelegate *progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) PSYActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <PSDActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_prelaunchBundleIdentifier;	// IMP=0x001000000001e352
- (void)_preloadAppWithBundleID:(id)arg1 inBackboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e1a5
- (_Bool)_shouldPrelaunchWithBackboard;	// IMP=0x001000000001e142
- (id)description;	// IMP=0x001000000001e07d
- (void)progressDelegateDidUpdateProgress:(float)arg1;	// IMP=0x001000000001dfab
- (void)progressDelegateDidCompleteSending;	// IMP=0x001000000001df5f
- (id)_remoteServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001dee5
- (void)_abortSyncJustDoItWithCompletion:(CDUnknownBlockType)arg1 interruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001db0d
- (void)_beginSyncJustDoItWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2 interruptionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d710
- (void)_handleInterruptionWithError:(id)arg1 interruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d6f9
- (void)abortSyncWithCompletion:(CDUnknownBlockType)arg1 interruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d44d
- (void)beginSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2 interruptionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d083
- (void)_startConnectionIfNeeded;	// IMP=0x001000000001cc63
- (id)initWithActivityInfo:(id)arg1 queue:(id)arg2;	// IMP=0x001000000001cb70

@end
