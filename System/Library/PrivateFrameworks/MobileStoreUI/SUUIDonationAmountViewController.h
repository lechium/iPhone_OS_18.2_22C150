//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIDonationAmountView, SUUIGiftPurchaseRequest, SUUIGiftValidationResponse, SUUIGiftValidator;

__attribute__((visibility("hidden")))
@interface SUUIDonationAmountViewController
{
    SUUIDonationAmountView *_amountView;	// 8 = 0x8
    SUUIGiftValidationResponse *_lastValidationResponse;	// 16 = 0x10
    SUUIGiftPurchaseRequest *_purchaseRequest;	// 24 = 0x18
    _Bool _tappedNextWhileValidating;	// 32 = 0x20
    SUUIGiftValidator *_validator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000128d73
- (void)_validateDonation:(id)arg1;	// IMP=0x0000000000128a87
- (void)_setDonationButtonEnabled:(_Bool)arg1;	// IMP=0x00000000001289fb
- (void)_reenableAfterFailure;	// IMP=0x000000000012898c
- (void)_performActionAfterValidation;	// IMP=0x000000000012855d
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000001284b5
- (void)_finishPurchaseWithResult:(_Bool)arg1 errorMessage:(id)arg2;	// IMP=0x0000000000128174
- (void)_amountChangedNotification:(id)arg1;	// IMP=0x00000000001280e7
- (void)_donateButtonAction:(id)arg1;	// IMP=0x0000000000127fdd
- (void)_cancelButtonAction:(id)arg1;	// IMP=0x0000000000127f8d
- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;	// IMP=0x0000000000127ece
- (void)loadView;	// IMP=0x0000000000127b46
- (void)dealloc;	// IMP=0x0000000000127ac7
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000001279b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
