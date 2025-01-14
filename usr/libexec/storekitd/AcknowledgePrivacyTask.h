//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface AcknowledgePrivacyTask
{
    ACAccount *_account;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_privacyPromptSemaphore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000e60f
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000000e4e4
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x001000000000e3d8
- (void)main;	// IMP=0x001000000000db44
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000000dad6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

