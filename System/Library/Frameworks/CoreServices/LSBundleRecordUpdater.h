//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LSBundleRecordUpdater
{
    struct LSContext _context;	// 16 = 0x10
    _Bool _hasContext;	// 24 = 0x18
    unsigned int _bundleID;	// 28 = 0x1c
    struct LSBundleData _bundleData;	// 32 = 0x20
    struct unordered_map<unsigned int, LSPluginData, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, LSPluginData>>> _modifiedPlugins;	// 584 = 0x248
}

- (id).cxx_construct;	// IMP=0x000000000009215b
- (void).cxx_destruct;	// IMP=0x000000000009212c
- (_Bool)checkNeedsUpdateForiTunesMetadata:(id)arg1 SINFo:(id)arg2 placeholderMetadata:(id)arg3;	// IMP=0x0000000000092008
- (_Bool)updateBundleRecord:(id *)arg1;	// IMP=0x0000000000091e7d
- (void)parsePlaceholderMetadata:(id)arg1;	// IMP=0x0000000000091dd3
- (void)parseSINFDictionary:(id)arg1;	// IMP=0x0000000000091ca8
- (void)parseiTunesMetadata:(id)arg1;	// IMP=0x000000000009134a
- (void)dealloc;	// IMP=0x00000000000912ba
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000912a6
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(_Bool)arg2;	// IMP=0x0000000000090f98
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x0000000000090ecc

@end
