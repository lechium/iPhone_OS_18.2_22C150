//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AAUICustodianRecoveryApprovalController : NSObject
{
    NSString *_recoverySessionID;	// 8 = 0x8
    NSString *_telemetryFlowID;	// 16 = 0x10
    AKAppleIDAuthenticationContext *_context;	// 24 = 0x18
    UIViewController *_presenter;	// 32 = 0x20
    _Bool _isResetEligible;	// 40 = 0x28
}

+ (id)approvalControllerWithPresenter:(id)arg1 recoverySessionID:(id)arg2 telemetryFlowID:(id)arg3;	// IMP=0x0060000000004dd9
- (void).cxx_destruct;	// IMP=0x000000000000638b
@property(nonatomic) _Bool isResetEligible; // @synthesize isResetEligible=_isResetEligible;
- (id)_actionsForRecoveryCodeAlert:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006045
- (void)_promptForRecoveryCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005552
- (void)_sendAnalyticsEventWithSelectedOffer:(id)arg1;	// IMP=0x000000000000548d
- (void)_validateRecoveryCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000051c4
- (void)validateRecoveryCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004f87
- (void)dealloc;	// IMP=0x0000000000004f03

@end

