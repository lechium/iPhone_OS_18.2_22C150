//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSObject, NSString;
@protocol OS_dispatch_source;

@interface PasscodeEmbeddedRemoteViewController
{
    NSData *_externalizedContext;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_backoffTimer;	// 80 = 0x50
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00200000000243c2
+ (id)_exportedInterface;	// IMP=0x0010000000024356
- (void).cxx_destruct;	// IMP=0x0020000000024b6a
- (double)_backoffTimeout;	// IMP=0x0010000000024b51
- (void)_dispatchBackoffTimer;	// IMP=0x00100000000249da
- (void)_notifyPasscodeVerificationFinishedWithSuccess:(_Bool)arg1;	// IMP=0x001000000002488a
- (_Bool)verifyPasscode:(id)arg1;	// IMP=0x00100000000245cf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000024555
- (void)endEditing;	// IMP=0x0010000000024541
- (void)startEditing;	// IMP=0x00100000000244fd
- (void)setContext:(id)arg1;	// IMP=0x0010000000024436
- (_Bool)_shouldForwardSystemLayoutFittingSizeChanges;	// IMP=0x001000000002442e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

