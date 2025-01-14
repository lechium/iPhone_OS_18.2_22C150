//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener, SBSRemoteAlertHandle;
@protocol SODaemonUIProtocol;

@interface SODaemonUIManager : NSObject
{
    SBSRemoteAlertHandle *_remoteAlertHandle;	// 8 = 0x8
    NSString *_requestThatPresentedRemoteAlert;	// 16 = 0x10
    NSXPCListener *_uiListener;	// 24 = 0x18
    _Bool _isInternalExtension;	// 32 = 0x20
    NSXPCConnection *_uiServiceConnection;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    id <SODaemonUIProtocol> _delegate;	// 56 = 0x38
}

+ (id)_queue;	// IMP=0x0020000000002a2b
- (void).cxx_destruct;	// IMP=0x0020000000004824
@property(nonatomic) __weak id <SODaemonUIProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)extensionCleanupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000468f
- (void)finishAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004418
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004218
- (void)connectionInvalidated;	// IMP=0x0010000000004178
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000003e94
- (_Bool)_closeRemoteUIWithError:(id *)arg1;	// IMP=0x0010000000003d57
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0010000000003be1
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0010000000003b03
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x0010000000003a9b
- (_Bool)cancelAuthorization:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000039e1
- (_Bool)beginAuthorizationWithRequestParameters:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000002bee
- (void)dealloc;	// IMP=0x0010000000002b70
- (id)init;	// IMP=0x0010000000002a82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

