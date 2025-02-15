//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, SBSRemoteAlertActivationContext, SBSRemoteAlertDefinition, SBSRemoteAlertHandle, SBSRemoteAlertPresentationTarget;
@protocol SBSRemoteAlertHandleObserver;

@interface RemoteAlertWrapper : NSObject
{
    id <SBSRemoteAlertHandleObserver> _observer;	// 8 = 0x8
    SBSRemoteAlertDefinition *_definition;	// 16 = 0x10
    SBSRemoteAlertHandle *_handle;	// 24 = 0x18
    SBSRemoteAlertPresentationTarget *_presentationTarget;	// 32 = 0x20
    SBSRemoteAlertActivationContext *_activationContext;	// 40 = 0x28
    NSXPCConnection *_xpcConnection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000007a11
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) SBSRemoteAlertActivationContext *activationContext; // @synthesize activationContext=_activationContext;
@property(retain) SBSRemoteAlertPresentationTarget *presentationTarget; // @synthesize presentationTarget=_presentationTarget;
@property(retain) SBSRemoteAlertHandle *handle; // @synthesize handle=_handle;
@property(retain) SBSRemoteAlertDefinition *definition; // @synthesize definition=_definition;
@property(nonatomic) __weak id <SBSRemoteAlertHandleObserver> observer; // @synthesize observer=_observer;
- (void)activateForTargetXPCConnection:(id)arg1 sceneID:(id)arg2 shouldDismissOnUILock:(_Bool)arg3 userInfo:(id)arg4;	// IMP=0x0010000000007593
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;	// IMP=0x00100000000074d6

@end

