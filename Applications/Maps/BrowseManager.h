//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrowseImageManager, BrowseManagerContentCache, GEOMapServiceTraits, NSArray, NSHashTable, NSString;
@protocol MapsUIImageCacheUserInterfaceDelegate;

@interface BrowseManager : NSObject
{
    unsigned long long _requestCount;	// 8 = 0x8
    _Bool _needToSendDisplayedUsage;	// 16 = 0x10
    BrowseImageManager *_imageManager;	// 24 = 0x18
    NSString *_cacheKey;	// 32 = 0x20
    GEOMapServiceTraits *_traits;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    id <MapsUIImageCacheUserInterfaceDelegate> _userInterfaceDelegate;	// 56 = 0x38
    BrowseManagerContentCache *_contentCache;	// 64 = 0x40
}

+ (void)precacheCategoriesForCacheKey:(id)arg1 withTraits:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00400000009557ab
+ (void)prepareImagesForCacheKey:(id)arg1 traits:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009553b5
+ (void)updateMapRegionInTraits:(id)arg1 withLocation:(id)arg2;	// IMP=0x00100000009547ed
+ (void)checkIfNearbyIsAvailableForTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009542ef
+ (_Bool)alreadyHasCategoriesForTraits:(id)arg1;	// IMP=0x0010000000954227
+ (id)nearbyCacheKeyForTraits:(id)arg1;	// IMP=0x001000000095421f
+ (_Bool)traitsIsForCurrentLocationOnly:(id)arg1;	// IMP=0x00100000009541e9
+ (void)setCacheKey:(id)arg1 writesToDisk:(_Bool)arg2;	// IMP=0x0010000000954098
+ (id)sharedManager;	// IMP=0x0010000000953ded
+ (id)sharedContentCache:(id)arg1;	// IMP=0x0010000000953b5a
- (void).cxx_destruct;	// IMP=0x00200000009563d1
@property(retain, nonatomic) BrowseManagerContentCache *contentCache; // @synthesize contentCache=_contentCache;
@property(nonatomic) __weak id <MapsUIImageCacheUserInterfaceDelegate> userInterfaceDelegate; // @synthesize userInterfaceDelegate=_userInterfaceDelegate;
@property(nonatomic) _Bool needToSendDisplayedUsage; // @synthesize needToSendDisplayedUsage=_needToSendDisplayedUsage;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void)submitBrowseUsageIfNeeded;	// IMP=0x00100000009562b1
@property(readonly, nonatomic) NSArray *cachedCategories;
- (void)getBatchNearby;	// IMP=0x001000000095617f
- (id)cachedCategoriesForTraits:(id)arg1;	// IMP=0x00100000009560fd
- (void)getCategoriesFromSearchHome:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000955b22
- (void)getCategoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000955b0b
- (void)preCacheWithTraits:(id)arg1;	// IMP=0x0010000000955944
- (void)readCategoriesFromDiskIfNeeded;	// IMP=0x0010000000955378
- (id)cellImageForCategory:(id)arg1;	// IMP=0x00100000009551db
- (_Bool)needsRefresh;	// IMP=0x0010000000955197
- (id)submitTicketForSearchForCategory:(id)arg1 source:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000954ba2
- (id)searchForCategory:(id)arg1 source:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000095497f
@property(retain, nonatomic) BrowseImageManager *imageManager; // @synthesize imageManager=_imageManager;
- (_Bool)sharesCacheWithManager:(id)arg1;	// IMP=0x0010000000953f77
- (id)initWithCacheKey:(id)arg1;	// IMP=0x0010000000953e86
- (id)init;	// IMP=0x0010000000953e72
- (id)synchronousImageForCategory:(id)arg1 scale:(double)arg2 isCarplay:(_Bool)arg3;	// IMP=0x0010000000953d3a
- (void)imageForCategory:(id)arg1 scale:(double)arg2 isCarplay:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000953c83
- (void)imageForCategory:(id)arg1 scale:(double)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000953c6c

@end
