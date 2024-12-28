//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol CDServiceConnectionDelegate;

@interface CDServiceConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <CDServiceConnectionDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000b762
@property(nonatomic) __weak id <CDServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authenticationSessionDidFailWithError:(id)arg1;	// IMP=0x001000000000b6d1
- (void)authenticationSessionDidFinishWithResponse:(id)arg1;	// IMP=0x001000000000b667
- (void)authenticationSessionDeviceStartedAuthentication:(id)arg1;	// IMP=0x001000000000b43e
- (void)authenticationSessionDeviceTappedNotification:(id)arg1;	// IMP=0x001000000000b215
- (void)performAMSDelegatePurchaseWithRequest:(id)arg1 isSandboxPurchase:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ae2a
- (void)fetchDaemonStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ac00
- (void)startAuthenticationSessionWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a540
- (id)succinctDescription;	// IMP=0x0010000000009e5a
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000009e3e
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000009dee
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000009ce4
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000009c79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
