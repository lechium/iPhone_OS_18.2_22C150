//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrowseManager, NSOperationQueue;
@protocol MapsUIImageCacheUserInterfaceDelegate;

@interface BrowseImageManager : NSObject
{
    _Bool _transparencyEnabled;	// 8 = 0x8
    id <MapsUIImageCacheUserInterfaceDelegate> _userInterfaceDelegate;	// 16 = 0x10
    BrowseManager *_browseManager;	// 24 = 0x18
    NSOperationQueue *_imageOperationQueue;	// 32 = 0x20
    struct CGSize _desiredImageSize;	// 40 = 0x28
}

+ (id)sharedImageCache;	// IMP=0x00400000009526f7
- (void).cxx_destruct;	// IMP=0x0020000000953b2b
@property(readonly, nonatomic) NSOperationQueue *imageOperationQueue; // @synthesize imageOperationQueue=_imageOperationQueue;
@property(nonatomic) __weak BrowseManager *browseManager; // @synthesize browseManager=_browseManager;
@property(nonatomic) __weak id <MapsUIImageCacheUserInterfaceDelegate> userInterfaceDelegate; // @synthesize userInterfaceDelegate=_userInterfaceDelegate;
@property(nonatomic) struct CGSize desiredImageSize; // @synthesize desiredImageSize=_desiredImageSize;
@property(nonatomic, getter=isTransparencyEnabled) _Bool transparencyEnabled; // @synthesize transparencyEnabled=_transparencyEnabled;
- (id)_scaleImage:(id)arg1 ifNeededToFitSize:(struct CGSize)arg2;	// IMP=0x0010000000953938
- (id)transparentImageForCategory:(id)arg1;	// IMP=0x00100000009536fd
- (double)_screenScaleForScale:(double)arg1 isCarplay:(_Bool)arg2;	// IMP=0x001000000095363c
- (id)_createImageForCategory:(id)arg1 scale:(double)arg2 traits:(id)arg3 isCarplay:(_Bool)arg4 nightMode:(_Bool)arg5;	// IMP=0x00100000009531ff
- (_Bool)_isNightMode;	// IMP=0x001000000095314b
- (id)_cachedImageForCategory:(id)arg1 scale:(double)arg2 traits:(id)arg3 isCarplay:(_Bool)arg4 outputCategoryKey:(id *)arg5;	// IMP=0x0010000000952f5f
- (id)synchronousImageForCategory:(id)arg1 scale:(double)arg2 traits:(id)arg3 isCarplay:(_Bool)arg4;	// IMP=0x0010000000952d75
- (void)imageForCategory:(id)arg1 scale:(double)arg2 traits:(id)arg3 isCarplay:(_Bool)arg4 isTouchBar:(_Bool)arg5 resultHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000095296e
- (void)imageForCategory:(id)arg1 scale:(double)arg2 traits:(id)arg3 isCarplay:(_Bool)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000095294c
- (void)imageForCategory:(id)arg1 scale:(double)arg2 traits:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000952931
- (void)imageForCategory:(id)arg1 traits:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000095291c
- (void)imageForCategory:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000095286d
- (void)maskedImage:(id)arg1 inRect:(struct CGRect)arg2 withColor:(struct CGColor *)arg3 inContext:(struct CGContext *)arg4;	// IMP=0x001000000095274c
- (id)init;	// IMP=0x001000000095265b

@end

