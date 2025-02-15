//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MKLocationManager, MKMapItem, MUPlaceCallToActionAppearance, MUPlaceCardAnalyticsController, UGCPOIEnrichmentForm, UGCSubmissionLookupResult, UIViewController;
@protocol UGCInlinePOIEnrichmentControllerDelegate;

@interface UGCInlinePOIEnrichmentController : NSObject
{
    UIViewController *_contentViewController;	// 8 = 0x8
    MISSING_TYPE *_inlineViewController;	// 16 = 0x10
    MKLocationManager *_locationManager;	// 24 = 0x18
    UGCPOIEnrichmentForm *_poiEnrichmentForm;	// 32 = 0x20
    MKMapItem *_mapItem;	// 40 = 0x28
    id <UGCInlinePOIEnrichmentControllerDelegate> _delegate;	// 48 = 0x30
    UIViewController *_presentingViewController;	// 56 = 0x38
    MUPlaceCardAnalyticsController *_analyticsController;	// 64 = 0x40
    MUPlaceCallToActionAppearance *_submissionStatus;	// 72 = 0x48
    UGCSubmissionLookupResult *_lookupResult;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000040a587
@property(retain, nonatomic) UGCSubmissionLookupResult *lookupResult; // @synthesize lookupResult=_lookupResult;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus; // @synthesize submissionStatus=_submissionStatus;
@property(nonatomic) __weak MUPlaceCardAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <UGCInlinePOIEnrichmentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)openTermsOfServiceURL:(id)arg1;	// IMP=0x001000000040a489
- (void)captureAnalyticsForRatingsForm:(id)arg1 photosForm:(id)arg2;	// IMP=0x0010000000409a7f
- (void)captureUserAction:(int)arg1 value:(id)arg2 target:(int)arg3;	// IMP=0x00100000004099f9
- (void)captureUserActionForRatingState:(long long)arg1 value:(id)arg2 target:(int)arg3;	// IMP=0x001000000040995a
- (void)requestAddPhotosWithSourceType:(long long)arg1 presentationOptions:(id)arg2;	// IMP=0x001000000040976f
- (void)presentInformedConsentIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004096ab
- (void)_submitWithUploadPolicy:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000040910b
- (void)submitForCurrentState;	// IMP=0x001000000040905b
- (void)_reloadInlineViewController;	// IMP=0x0010000000408ac4
- (id)_previousSubmission;	// IMP=0x0010000000408a74
- (_Bool)_isLoading;	// IMP=0x0010000000408a4d
@property(readonly, nonatomic) UIViewController *contentViewController;
- (id)initWithMapItem:(id)arg1;	// IMP=0x001000000040888f

@end

