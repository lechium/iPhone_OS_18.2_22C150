//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLAsset, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelAssetRendition
{
    MDLAsset *_asset;	// 216 = 0xd8
    NSMutableArray *_meshKeys;	// 224 = 0xe0
}

- (unsigned long long)writeToData:(id)arg1;	// IMP=0x000000000006ab28
@property(readonly) NSArray *meshKeys;
- (id)modelAsset;	// IMP=0x000000000006aaf2
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x000000000006a8cc
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x000000000006a8ba
- (void)dealloc;	// IMP=0x000000000006a862
- (id)initForArchiving:(id)arg1 withMeshRenditionKeys:(id)arg2;	// IMP=0x000000000006a7da

@end

