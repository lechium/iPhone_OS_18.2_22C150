//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC13HearingTestUI29HearingTestStepViewController : OBWelcomeController
{
    MISSING_TYPE *step;	// 8 = 0x8
    MISSING_TYPE *flowManager;	// 16 = 0x10
    MISSING_TYPE *stepStartTime;	// 0 = 0x0
    MISSING_TYPE *automationIdentifierBase;	// 0 = 0x0
    MISSING_TYPE *continueButtonTitle;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_continueButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_takeTestAgainButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_doneButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_cancelButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_doneBarButton;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000043090
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0000000000043030
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000042df0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000042dc0
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x00000000000429b0
- (void)takeTestAgainButtonTapped:(id)arg1;	// IMP=0x0000000000042880
- (void)doneButtonTapped:(id)arg1;	// IMP=0x0000000000042790
- (void)continueButtonTapped:(id)arg1;	// IMP=0x0000000000042780
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00000000000424d0

@end
