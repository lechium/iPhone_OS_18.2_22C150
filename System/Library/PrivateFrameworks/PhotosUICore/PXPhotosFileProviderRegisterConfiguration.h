//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber;

@interface PXPhotosFileProviderRegisterConfiguration : NSObject
{
    MISSING_TYPE *usage;	// 8 = 0x8
    MISSING_TYPE *userEncodingPolicy;	// 16 = 0x10
    MISSING_TYPE *clientEncodingPolicy;	// 24 = 0x18
    MISSING_TYPE *shouldIncludeLocation;	// 32 = 0x20
    MISSING_TYPE *shouldIncludeCaption;	// 33 = 0x21
    MISSING_TYPE *downscalingTargetDimension;	// 40 = 0x28
    MISSING_TYPE *isLiveWallpaperSelection;	// 48 = 0x30
    MISSING_TYPE *livePhotoContentType;	// 1717961050 = 0x6666015a
    MISSING_TYPE *autoLoopAsGIFContentType;	// 8658703 = 0x841f0f
    MISSING_TYPE *liveWallpaperContentType;	// 3850979413 = 0xe5894855
    MISSING_TYPE *thumbnailLowContentType;	// 1208084979 = 0x4801e9f3
    MISSING_TYPE *thumbnailStandardContentType;	// 2370356061 = 0x8d48c35d
    MISSING_TYPE *mailMovieExportContentType;	// 898451457 = 0x358d4801
}

+ (id)typeIdentifierMailMovieExportPrivate;	// IMP=0x0040000000a8e980
+ (id)typeIdentifierThumbnailStandardPrivate;	// IMP=0x0040000000a8e950
+ (id)typeIdentifierThumbnailLowPrivate;	// IMP=0x0040000000a8e920
+ (id)typeIdentifierLiveWallpaperPrivate;	// IMP=0x0040000000a8e8f0
+ (id)typeIdentifierAutoLoopAsGIFPrivate;	// IMP=0x0040000000a8e8c0
+ (id)typeIdentifierLivePhotoBundlePrivate;	// IMP=0x0040000000a8e890
- (void).cxx_destruct;	// IMP=0x0000000000a8f7b0
- (id)init;	// IMP=0x0000000000a8f760
- (id)initWithUsage:(long long)arg1;	// IMP=0x0000000000a8f710
@property(nonatomic) _Bool isLiveWallpaperSelection; // @synthesize isLiveWallpaperSelection;
@property(nonatomic, retain) NSNumber *downscalingTargetDimension; // @synthesize downscalingTargetDimension;
@property(nonatomic) _Bool shouldIncludeCaption; // @synthesize shouldIncludeCaption;
@property(nonatomic) _Bool shouldIncludeLocation; // @synthesize shouldIncludeLocation;
@property(nonatomic) long long clientEncodingPolicy; // @synthesize clientEncodingPolicy;
@property(nonatomic) long long userEncodingPolicy; // @synthesize userEncodingPolicy;
@property(nonatomic, readonly) long long usage; // @synthesize usage;

@end

