//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UGCInlinePOIEnrichmentController, UGCPOIEnrichmentForm, UGCPOIEnrichmentViewController;

@interface UGCInlinePOIEnrichmentViewController : UIViewController
{
    UGCPOIEnrichmentViewController *_contentVC;	// 8 = 0x8
    _Bool _formInteractionEnabled;	// 16 = 0x10
    UGCInlinePOIEnrichmentController *_enrichmentController;	// 24 = 0x18
    UGCPOIEnrichmentForm *_poiEnrichmentForm;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000b9d7bd
@property(readonly, nonatomic) UGCPOIEnrichmentForm *poiEnrichmentForm; // @synthesize poiEnrichmentForm=_poiEnrichmentForm;
@property(nonatomic) _Bool formInteractionEnabled; // @synthesize formInteractionEnabled=_formInteractionEnabled;
@property(nonatomic) __weak UGCInlinePOIEnrichmentController *enrichmentController; // @synthesize enrichmentController=_enrichmentController;
- (void)poiEnrichmentViewController:(id)arg1 didSelectTermsOfServiceURL:(id)arg2;	// IMP=0x0010000000b9d706
- (void)poiEnrichmentViewController:(id)arg1 captureUserAction:(int)arg2 value:(id)arg3 target:(int)arg4;	// IMP=0x0010000000b9d68c
- (void)poiEnrichmentViewController:(id)arg1 captureUserActionForRatingCategoryState:(long long)arg2 value:(id)arg3 target:(int)arg4;	// IMP=0x0010000000b9d612
- (void)poiEnrichmentViewController:(id)arg1 didSelectAddPhotosUsingSourceType:(long long)arg2 presentationOptions:(id)arg3;	// IMP=0x0010000000b9d59b
- (void)poiEnrichmentViewController:(id)arg1 presentInformedConsentIfNeededWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b9d532
- (void)formDidChange:(id)arg1;	// IMP=0x0010000000b9d465
- (void)viewDidLoad;	// IMP=0x0010000000b9d1c7
- (id)initWithPOIEnrichmentForm:(id)arg1;	// IMP=0x0010000000b9d119

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
