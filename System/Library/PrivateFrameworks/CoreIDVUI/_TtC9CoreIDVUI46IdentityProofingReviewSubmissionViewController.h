//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9CoreIDVUI46IdentityProofingReviewSubmissionViewController
{
    MISSING_TYPE *tableViewCellIdentifier;	// 224 = 0xe0
    MISSING_TYPE *documentsToBeReviewed;	// 240 = 0xf0
    MISSING_TYPE *viewConfiguration;	// 248 = 0xf8
    MISSING_TYPE *proofingFlowManager;	// 272 = 0x110
    MISSING_TYPE *documentsRepository;	// 280 = 0x118
    MISSING_TYPE *biometricBindingController;	// 288 = 0x120
    MISSING_TYPE *analyticsReporter;	// 296 = 0x128
    MISSING_TYPE *context;	// 304 = 0x130
    MISSING_TYPE *eligibilityHelper;	// 312 = 0x138
    MISSING_TYPE *unboundACL;	// 320 = 0x140
    MISSING_TYPE *hasAttemptedToShowLivenessAlert;	// 336 = 0x150
    MISSING_TYPE *advancedAfterProofingBegan;	// 337 = 0x151
    MISSING_TYPE *proofingRequestTimeout;	// 344 = 0x158
    MISSING_TYPE *$__lazy_storage_$_tableView;	// 352 = 0x160
}

- (void).cxx_destruct;	// IMP=0x000000000006ddd0
- (void)updateUI;	// IMP=0x000000000006ac90
- (void)updateViewLayout:(id)arg1 previousTraitCollection:(id)arg2;	// IMP=0x000000000006a6f0
- (void)viewDidLoad;	// IMP=0x000000000006a6c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000006a370
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000006a340
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006a110
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006e4d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000006e420
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000006ded0

@end
