//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CARThemeAssetOverrider : NSObject
{
}

+ (void)postAssetErrorNotification:(id)arg1 forAsset:(id)arg2;	// IMP=0x008000000003c785
+ (id)_readVersionFromAsset:(id)arg1 assetIdentifier:(id)arg2;	// IMP=0x008000000003c359
+ (id)_assetURLForVersion:(id)arg1;	// IMP=0x008000000003c19e
+ (id)_carplayLibraryDirectoryForAssetIdentifier:(id)arg1;	// IMP=0x008000000003c048
+ (id)_carplayLibraryURL;	// IMP=0x008000000003bf8a
+ (_Bool)_shouldForceUpdateAsset;	// IMP=0x008000000003bf14
+ (id)_generatedAssetForSourceAssetURL:(id)arg1 version:(id)arg2;	// IMP=0x008000000003b747
+ (id)_overrideAssetSourceURLForAssetIdentifier:(id)arg1;	// IMP=0x008000000003b459
+ (id)overrideAssetNewerThanAssetVersion:(id)arg1;	// IMP=0x008000000003af86

@end

