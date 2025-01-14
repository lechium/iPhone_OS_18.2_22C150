//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HomeAnalyticsManager : NSObject
{
}

+ (void)captureStateWithShortcuts:(id)arg1;	// IMP=0x0040000000e7dfa7
+ (void)captureRAPAction;	// IMP=0x0010000000e7df81
+ (void)captureMarkMyLocationAction;	// IMP=0x0010000000e7df5b
+ (void)captureShareMyLocationAction;	// IMP=0x0010000000e7df35
+ (void)captureExploreGuidesTapAction;	// IMP=0x0010000000e7df0f
+ (void)captureFeatureDiscoveryBannerDidAppear;	// IMP=0x0010000000e7dee9
+ (void)captureRatingSuggestionTapAction;	// IMP=0x0010000000e7dec3
+ (void)captureRatingRequestDiscoveryAction:(int)arg1;	// IMP=0x0010000000e7dea2
+ (void)captureDisplayActionWithFavorite:(id)arg1;	// IMP=0x0010000000e7de45
+ (void)captureDisplayActionWithEntry:(id)arg1;	// IMP=0x0010000000e7dde8
+ (void)captureTapActionWithEntry:(id)arg1;	// IMP=0x0010000000e7dbcc
+ (void)captureTapActionWithFavorite:(id)arg1;	// IMP=0x0010000000e7da14
+ (void)captureCuratedCollectionCarouselScrollBackward;	// IMP=0x0010000000e7d9fd
+ (void)captureCuratedCollectionCarouselScrollForward;	// IMP=0x0010000000e7d9e6
+ (void)_captureCuratedCollectionCarouselScrollAction:(int)arg1;	// IMP=0x0010000000e7d99e
+ (void)captureCuratedCollectionCarouselTapCollectionWithIdentifier:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x0010000000e7d89c
+ (void)captureCuratedCollectionAction:(int)arg1 withCollectionHandler:(id)arg2 verticalIndex:(unsigned long long)arg3;	// IMP=0x0010000000e7d718

@end

