//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC21ProximityReaderDaemon9UIManager : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *transactionUI;	// 16 = 0x10
    MISSING_TYPE *regUI;	// 24 = 0x18
    MISSING_TYPE *identityUI;	// 32 = 0x20
    MISSING_TYPE *identityRegistrationUI;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
    MISSING_TYPE *identityDelegate;	// 56 = 0x38
    MISSING_TYPE *isTapUIVisible;	// 64 = 0x40
    MISSING_TYPE *substatePINLoaded;	// 65 = 0x41
    MISSING_TYPE *isPINUIVisible;	// 66 = 0x42
    MISSING_TYPE *isRegUIVisible;	// 67 = 0x43
    MISSING_TYPE *isIdentityUIVisible;	// 68 = 0x44
    MISSING_TYPE *deferredWork;	// 72 = 0x48
    MISSING_TYPE *invalidationHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000050d50
- (id)init;	// IMP=0x0000000000050d00
- (void)updateSessionEventWithSessionEvent:(long long)arg1;	// IMP=0x0000000000051170
- (void)errorInDaemonWithError:(long long)arg1;	// IMP=0x0000000000051150
- (void)closePINUIImmediate;	// IMP=0x0000000000051130
- (void)closePINUI;	// IMP=0x0000000000051110
- (void)requiresCardPIN:(id)arg1;	// IMP=0x00000000000510c0
- (void)closeUIImmediate;	// IMP=0x0000000000050f20
- (void)closeUI;	// IMP=0x0000000000050f00
- (void)vasReadSuccessWithMerchantNames:(id)arg1;	// IMP=0x0000000000050e40
- (void)updateWithTransactionEvent:(long long)arg1;	// IMP=0x0000000000050e20
- (void)setVoiceOverWithEnabled:(_Bool)arg1;	// IMP=0x00000000000520c0
- (void)pinAuthResultWithError:(id)arg1 cancelsFlow:(_Bool)arg2;	// IMP=0x0000000000051ff0
- (void)pinAuthNeeded;	// IMP=0x0000000000051f70
- (void)pinValidateSession;	// IMP=0x0000000000051f50
- (void)reportPINErrorWithError:(long long)arg1 isCardRequest:(_Bool)arg2 isAccessibilityEnabled:(_Bool)arg3 accessibilityEntryType:(long long)arg4 drawNumberFailures:(long long)arg5;	// IMP=0x0000000000051ef0
- (void)pinDataReceivedWithPinData:(id)arg1 isCardRequest:(_Bool)arg2 isAccessibilityEnabled:(_Bool)arg3 accessibilityEntryType:(long long)arg4 drawNumberFailures:(long long)arg5;	// IMP=0x0000000000051c90
- (void)pinUIDidLoad;	// IMP=0x0000000000051c60
- (void)reportProxEventInRange:(_Bool)arg1 inRangeTime:(unsigned int)arg2;	// IMP=0x0000000000051a90
- (void)reportGuidanceUpdateWithVisible:(_Bool)arg1 trigger:(id)arg2;	// IMP=0x00000000000519e0
- (void)tapUIFinishedWithExpected:(_Bool)arg1 issuerPIN:(_Bool)arg2;	// IMP=0x00000000000519a0
- (void)tapUIRequestingRetry;	// IMP=0x0000000000051770
- (void)tapUIRequestingCancel;	// IMP=0x00000000000515b0
- (void)tapUIDidLoad;	// IMP=0x0000000000051580
- (void)closeRegUIImmediate;	// IMP=0x0000000000053960
- (void)closeRegUI;	// IMP=0x0000000000053700
- (void)notifyRegUIResultWithResult:(id)arg1;	// IMP=0x00000000000536e0
- (void)updateAccountSubscription;	// IMP=0x00000000000544c0
- (void)regUIFinishedWithUserCancelled:(_Bool)arg1 regStatus:(_Bool)arg2;	// IMP=0x00000000000541c0
- (void)regUIAccountWithAccount:(id)arg1;	// IMP=0x0000000000053fb0
- (void)regUIDidLoad;	// IMP=0x0000000000053e00
- (void)displayIdentityInformation:(id)arg1;	// IMP=0x0000000000055590
- (void)updateUIState:(long long)arg1;	// IMP=0x0000000000055570
- (void)notifyUIButtonTapWithButton:(long long)arg1;	// IMP=0x0000000000055ae0
- (void)qrCodeScanErrorWithError:(id)arg1;	// IMP=0x0000000000055a60
- (void)qrCodeScanInitiated;	// IMP=0x0000000000055910
- (void)requestRestartReadWithTriggeredByMultipleCheck:(_Bool)arg1;	// IMP=0x00000000000556e0
- (void)readDocumentFromScannedQRCodeWithPayload:(id)arg1;	// IMP=0x0000000000055640
- (void)requestCancelReadWithIsEngagementTransition:(_Bool)arg1;	// IMP=0x0000000000055620
- (void)identityUIFinished;	// IMP=0x00000000000555f0
- (void)identityUIDidLoad;	// IMP=0x00000000000555d0
- (void)closeIdentityRegUI;	// IMP=0x0000000000055b50
- (void)identityRegUIFinished;	// IMP=0x0000000000055d90
- (void)identityRegUIDidLoad;	// IMP=0x0000000000055cb0
- (void)cancelRegistration;	// IMP=0x0000000000055c30
- (void)registerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000055b90

@end
