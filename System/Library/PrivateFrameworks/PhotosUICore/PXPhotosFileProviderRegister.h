//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PXPhotosFileProviderRegister : NSObject
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *fileProviderManager;	// 16 = 0x10
    MISSING_TYPE *domain;	// 24 = 0x18
}

+ (_Bool)canRegisterFileRepresentationsFor:(id)arg1 contentType:(id)arg2 configuration:(id)arg3;	// IMP=0x0040000000a92090
+ (id)urlQueryItemVideoPresetKey;	// IMP=0x0040000000a8ff30
+ (id)urlQueryItemThumbnailSizeKey;	// IMP=0x0040000000a8fed0
+ (id)urlQueryItemIncludeCaptionKey;	// IMP=0x0040000000a8fe70
+ (id)urlQueryItemIncludeLocationKey;	// IMP=0x0040000000a8fe10
+ (id)urlQueryItemDownscalingTargetDimensionKey;	// IMP=0x0040000000a8fdb0
+ (id)urlQueryItemClientEncodingPolicyKey;	// IMP=0x0040000000a8fd50
+ (id)urlQueryItemItemTypeKey;	// IMP=0x0040000000a8fcf0
+ (id)urlQueryItemLibraryIdentifierKey;	// IMP=0x0040000000a8fc90
+ (id)urlQueryItemIdentifierCodeKey;	// IMP=0x0040000000a8fc30
+ (id)urlQueryItemUUIDKey;	// IMP=0x0040000000a8fbd0
- (void).cxx_destruct;	// IMP=0x0000000000a943b0
- (id)init;	// IMP=0x0000000000a94360
- (id)registeredFileRepresentationWithContentType:(id)arg1 uuid:(id)arg2 identifierCode:(id)arg3 libraryIdentifier:(id)arg4 itemType:(unsigned long long)arg5 encodingPolicy:(long long)arg6 hasLimitedVisibility:(_Bool)arg7;	// IMP=0x0000000000a941b0
- (id)registeredFileRepresentationsWithAsset:(id)arg1;	// IMP=0x0000000000a91f80
- (id)registeredFolderRepresentationWithObject:(id)arg1;	// IMP=0x0000000000a91ca0
- (id)registerFolderRepresentationWithItemProvider:(id)arg1 object:(id)arg2;	// IMP=0x0000000000a919e0
- (id)registerFileRepresentationsWithItemProvider:(id)arg1 asset:(id)arg2;	// IMP=0x0000000000a91270
- (id)initWithConfiguration:(id)arg1 fileProviderManager:(id)arg2 domain:(id)arg3;	// IMP=0x0000000000a90040

@end

