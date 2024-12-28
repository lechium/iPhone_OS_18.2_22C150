//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, PXMediaProvider, PXSectionedSelectionManager;

@interface PXBoopableItemsProvider_Swift : NSObject
{
    MISSING_TYPE *selectionManager;	// 8 = 0x8
    MISSING_TYPE *assets;	// 16 = 0x10
    MISSING_TYPE *imagePreviewMediaProvider;	// 24 = 0x18
    MISSING_TYPE *cachedItemProvidersByAsset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a42f20
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000a45030
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(struct CGSize)arg3;	// IMP=0x0000000000a44ed0
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;	// IMP=0x0000000000a44de0
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;	// IMP=0x0000000000a44cf0
@property(nonatomic, readonly) NSArray *itemProvidersForActivityItemsConfiguration;
@property(nonatomic, retain) PXMediaProvider *imagePreviewMediaProvider; // @synthesize imagePreviewMediaProvider;
@property(nonatomic, copy) NSArray *assets;
@property(nonatomic, retain) PXSectionedSelectionManager *selectionManager; // @synthesize selectionManager;
- (void)dealloc;	// IMP=0x0000000000a42e10
- (id)init;	// IMP=0x0000000000a42cf0

@end
