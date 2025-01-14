//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSCache, NSMutableDictionary, NSMutableSet, UIImage;
@protocol MapsUIImageCacheUserInterfaceDelegate, OS_dispatch_queue;

@interface MapsUIImageCache : NSObject
{
    NSCache *_imageCache;	// 8 = 0x8
    NSMutableSet *_loadingKeys;	// 16 = 0x10
    NSMutableDictionary *_fetchBlocks;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lock;	// 32 = 0x20
    _Bool _isCarPlay;	// 40 = 0x28
    UIImage *_searchImage;	// 48 = 0x30
    id <MapsUIImageCacheUserInterfaceDelegate> _userInterfaceDelegate;	// 56 = 0x38
}

+ (id)sharedCarCache;	// IMP=0x0040000000937090
+ (id)sharedCache;	// IMP=0x0010000000936ff9
- (void).cxx_destruct;	// IMP=0x0020000000938993
@property(readonly, nonatomic) _Bool isCarPlay; // @synthesize isCarPlay=_isCarPlay;
@property(nonatomic) __weak id <MapsUIImageCacheUserInterfaceDelegate> userInterfaceDelegate; // @synthesize userInterfaceDelegate=_userInterfaceDelegate;
- (MISSING_TYPE *)fetchImageForKey:completion: /* Error: Ran out of types for this method. */;	// IMP=0x00100000009386fb
- (void)setImage:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000938303
- (void)loadImageForKey:(id)arg1 loadImageOnBackgroundQueue:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000009380e9
- (void)getImageForSpec:(id)arg1 loadImageOnBackgroundQueue:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000937e7e
- (void)getImageForSpec:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000937e64
- (void)getImageForAppIcon:(id)arg1 format:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000937dce
- (void)getImageForPublisherWithIconIdentifier:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000937d5a
- (void)getImageForRowFavorite:(id)arg1 inverted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000937cb5
- (void)getImageForRowSuggestion:(id)arg1 inverted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000937c10
- (void)getImageForCarSmallWidget:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000937b45
- (void)getImageForSuggestion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000937ab3
- (void)getImageForTransparentStyleAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000937a0f
- (void)getImageForStyleAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000093797d
- (void)getImageForInvertedStyleAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009378d9
- (void)getImageForMarkerTransparent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000093785d
- (void)getImageForContact:(id)arg1 style:(long long)arg2 tintColor:(id)arg3 size:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000093774d
- (void)getImageForContact:(id)arg1 size:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000937730
- (void)getImageForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000093771b
- (void)getImageForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000937658
- (void)getImageForSearchResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000093759f
- (void)getImageForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009374eb
@property(readonly, nonatomic) UIImage *searchImage; // @synthesize searchImage=_searchImage;
@property(readonly, nonatomic) double screenScale;
- (void)handleMemoryWarning:(id)arg1;	// IMP=0x0010000000937318
- (void)dealloc;	// IMP=0x00100000009372a3
- (id)initWithCarPlay:(_Bool)arg1;	// IMP=0x001000000093712a

@end

