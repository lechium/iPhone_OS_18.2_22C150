//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSArray, NSDictionary, NSString, UGCRatingsForm;
@protocol UGCPOIEnrichmentAnalyticsDelegate, UGCSectionControllerDelegate;

@interface UGCRatingsSectionController : NSObject
{
    UGCRatingsForm *_ratingsForm;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    NSDictionary *_ratingCells;	// 24 = 0x18
    _Bool _formInteractionEnabled;	// 32 = 0x20
    NSArray *_rowItems;	// 40 = 0x28
    id <UGCSectionControllerDelegate> _delegate;	// 48 = 0x30
    id <UGCPOIEnrichmentAnalyticsDelegate> _analyticsDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000b790f0
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) _Bool formInteractionEnabled; // @synthesize formInteractionEnabled=_formInteractionEnabled;
@property(nonatomic) __weak id <UGCSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)formDidChange:(id)arg1;	// IMP=0x0010000000b79098
- (id)_mapItemAppleRatings;	// IMP=0x0010000000b78ca8
- (long long)_countAdjustmentForCategory:(id)arg1;	// IMP=0x0010000000b78c3d
- (id)_ratingKeyForAppleRating:(id)arg1;	// IMP=0x0010000000b78bdc
- (id)_ratingKeyForCategory:(id)arg1;	// IMP=0x0010000000b78b7a
- (void)_updateCategoryViewModels;	// IMP=0x0010000000b787bf
@property(readonly, nonatomic) NSArray *rowItems; // @synthesize rowItems=_rowItems;
- (void)handleSuccessfulSubmission;	// IMP=0x0010000000b780ef
- (void)ratingCategoryCellChangedState:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000b7800c
- (void)ratingCategoryCell:(id)arg1 presentInformedConsentIfNeededWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b77f78
- (id)initWithRatingsForm:(id)arg1 mapItem:(id)arg2 analyticsDelegate:(id)arg3;	// IMP=0x0010000000b77ea9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
