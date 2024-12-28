//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUICommonAssetStorage, NSCache, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface CUIStructuredThemeStore : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    CUICommonAssetStorage *_store;	// 16 = 0x10
    struct os_unfair_lock_s _cacheLock;	// 24 = 0x18
    struct os_unfair_lock_s _storeLock;	// 28 = 0x1c
    unsigned long long _themeIndex;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSCache *_namedRenditionKeyCache;	// 48 = 0x30
    CDUnknownFunctionPointerType _attributePresent;	// 56 = 0x38
    unsigned int _mainBundle:1;	// 64 = 0x40
    NSDictionary *_aliasDictionary;	// 72 = 0x48
    NSSet *_legacyFlippableSet;	// 80 = 0x50
    NSCache *_nameCache;	// 88 = 0x58
}

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)store;	// IMP=0x0000000000074899
- (long long)deploymentPlatform;	// IMP=0x0000000000074883
- (id)deploymentPlatformString;	// IMP=0x000000000007486d
- (unsigned long long)themeIndex;	// IMP=0x0000000000074863
- (void)setThemeIndex:(unsigned long long)arg1;	// IMP=0x0000000000074859
- (void)setBundleID:(id)arg1;	// IMP=0x000000000007482f
- (id)bundleID;	// IMP=0x0000000000074825
- (_Bool)imageNamedShouldFlip:(id)arg1;	// IMP=0x000000000007470a
- (id)mappedAliases;	// IMP=0x00000000000746c8
- (id)aliasForName:(id)arg1;	// IMP=0x0000000000074602
- (_Bool)localizationWorkaroundForKeyList:(const struct _renditionkeytoken *)arg1 withLocale:(id)arg2;	// IMP=0x0000000000074406
- (void)clearRenditionCache;	// IMP=0x00000000000743cb
- (_Bool)caAllowSubimageOfImage:(struct CGImage *)arg1;	// IMP=0x0000000000074371
- (_Bool)_subImageTexturingShouldBeSupported;	// IMP=0x00000000000742ea
@property _Bool mainBundle;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;	// IMP=0x00000000000742a0
- (unsigned short)localizationIdentifierForName:(id)arg1;	// IMP=0x000000000007428a
- (id)localizations;	// IMP=0x0000000000074274
- (id)appearances;	// IMP=0x000000000007425e
- (id)nameForLocalizationIdentifier:(unsigned short)arg1;	// IMP=0x0000000000074248
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;	// IMP=0x0000000000074232
- (unsigned short)appearanceIdentifierForName:(id)arg1;	// IMP=0x000000000007421c
- (id)catalogGlobals;	// IMP=0x0000000000074137
- (id)imagesWithName:(id)arg1;	// IMP=0x0000000000073e5e
- (_Bool)containsLookupForName:(id)arg1;	// IMP=0x0000000000073e43
- (id)allImageNames;	// IMP=0x0000000000073e2d
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;	// IMP=0x0000000000073e17
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;	// IMP=0x0000000000073c8d
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;	// IMP=0x0000000000073c79
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000073a43
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;	// IMP=0x00000000000736cd
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000736b9
- (id)lookupAssetForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000733ec
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000072ccf
- (const struct _renditionkeyfmt *)renditionKeyFormat;	// IMP=0x0000000000072c88
- (id)convertRenditionKeyToKeyData:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000072c6e
- (id)_newRenditionKeyDataFromKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000072b4c
- (_Bool)_formatStorageKeyArrayBytes:(void *)arg1 length:(unsigned long long)arg2 fromKey:(const struct _renditionkeytoken *)arg3;	// IMP=0x0000000000072a46
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg1;	// IMP=0x00000000000729f4
- (double)fontSizeForFontSizeType:(id)arg1;	// IMP=0x00000000000729a3
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(id)arg3;	// IMP=0x000000000007292b
- (_Bool)hasPhysicalColorWithName:(id)arg1;	// IMP=0x00000000000728d1
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;	// IMP=0x0000000000072868
- (id)defaultAppearanceName;	// IMP=0x000000000007281a
- (unsigned int)authoredWithSchemaVersion;	// IMP=0x0000000000072804
- (unsigned int)thinnedWithCoreUIVersion;	// IMP=0x00000000000727ee
- (unsigned int)distilledInCoreUIVersion;	// IMP=0x00000000000727d8
- (unsigned int)documentFormatVersion;	// IMP=0x00000000000727c2
- (id)themeStore;	// IMP=0x00000000000727b8
- (void)dealloc;	// IMP=0x000000000007274b
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000726b9
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000072685
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000725fd
- (void)_commonInit;	// IMP=0x0000000000072554
- (_Bool)assetExistsForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x0000000000072472
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000723d0
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000722ee
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken *)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000000072261
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x00000000000721bc
- (const struct _renditionkeyattributeindex *)keyAttributeIndex;	// IMP=0x000000000007219d
- (const struct _renditionkeyfmt *)keyFormat;	// IMP=0x00000000000720f6
- (_Bool)usesCUISystemThemeRenditionKey;	// IMP=0x0000000000072051
- (long long)maximumRenditionKeyTokenCount;	// IMP=0x0000000000071fa9
- (unsigned long long)colorSpaceID;	// IMP=0x0000000000071f84

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
