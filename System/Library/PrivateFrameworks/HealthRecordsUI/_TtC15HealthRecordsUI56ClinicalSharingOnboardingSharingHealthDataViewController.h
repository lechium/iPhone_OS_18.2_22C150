//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15HealthRecordsUI56ClinicalSharingOnboardingSharingHealthDataViewController : OBWelcomeController
{
    MISSING_TYPE *onboardingSession;	// 8 = 0x8
    MISSING_TYPE *account;	// 16 = 0x10
    MISSING_TYPE *selectedItems;	// 24 = 0x18
    MISSING_TYPE *readyToDismiss;	// 32 = 0x20
    MISSING_TYPE *cancellable;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_doneButton;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_spinner;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000299db0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0000000000299d50
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0000000000299d20
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x0000000000299ca0
- (void)doneButtonTapped:(id)arg1;	// IMP=0x0000000000299c90
- (void)viewDidLoad;	// IMP=0x0000000000294820

@end

