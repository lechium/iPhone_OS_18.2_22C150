//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface CUIThemeRendition : NSObject
{
    struct _renditionkeytoken _stackKey[22];	// 8 = 0x8
    struct _renditionkeytoken *_key;	// 96 = 0x60
    long long _type;	// 104 = 0x68
    unsigned int _subtype;	// 112 = 0x70
    unsigned int _scale;	// 116 = 0x74
    int _exifOrientation;	// 120 = 0x78
    int _blendMode;	// 124 = 0x7c
    struct cuithemerenditionrenditionflags _renditionFlags;	// 128 = 0x80
    long long _templateRenderingMode;	// 136 = 0x88
    unsigned long long _colorSpaceID;	// 144 = 0x90
    NSString *_name;	// 152 = 0x98
    NSData *_srcData;	// 160 = 0xa0
    double _opacity;	// 168 = 0xa8
    NSString *_utiType;	// 176 = 0xb0
    struct CGImage *_uncroppedImage;	// 184 = 0xb8
    struct CGSize _physicalSizeInMeters;	// 192 = 0xc0
    NSDictionary *_properties;	// 208 = 0xd0
}

+ (id)displayNameForRenditionType:(long long)arg1;	// IMP=0x006000000007c7fc
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;	// IMP=0x006000000007c662
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) NSData *srcData; // @synthesize srcData=_srcData;
@property(nonatomic) long long internalTemplateRenderingMode; // @synthesize internalTemplateRenderingMode=_templateRenderingMode;
@property(nonatomic) unsigned int internalScale; // @synthesize internalScale=_scale;
@property(nonatomic) unsigned int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;	// IMP=0x000000000007d81a
- (long long)vectorGlyphRenderingMode;	// IMP=0x000000000007d80f
- (id)_sourceRendition;	// IMP=0x000000000007d807
- (float)vectorGlyphTemplateVersion;	// IMP=0x000000000007d7fe
- (CDStruct_3c058996)vectorGlyphAlignmentRectInsets;	// IMP=0x000000000007d7e0
- (double)vectorGlyphReferencePointSize;	// IMP=0x000000000007d7d7
- (double)vectorGlyphCapLine;	// IMP=0x000000000007d7ce
- (double)vectorGlyphBaseline;	// IMP=0x000000000007d7c5
- (id)vectorGlyphAvailableSizes;	// IMP=0x000000000007d7bd
- (struct CGSVGDocument *)svgDocument;	// IMP=0x000000000007d7b5
- (id)modelSubmesh;	// IMP=0x000000000007d7ad
- (id)modelMesh;	// IMP=0x000000000007d7a5
- (id)modelAsset;	// IMP=0x000000000007d79d
- (int)objectVersion;	// IMP=0x000000000007d795
- (CDStruct_14d5dc5e)transformation;	// IMP=0x000000000007d77a
- (struct CGImage *)uncroppedImage;	// IMP=0x000000000007d5a8
- (struct CGRect)alphaCroppedRect;	// IMP=0x000000000007d58a
- (struct CGSize)originalUncroppedSize;	// IMP=0x000000000007d574
- (id)contentNames;	// IMP=0x000000000007d56c
- (id)mipLevels;	// IMP=0x000000000007d564
- (id)layerReferences;	// IMP=0x000000000007d55c
- (id)externalTags;	// IMP=0x000000000007d554
- (id)assetPackIdentifier;	// IMP=0x000000000007d54c
- (id)data;	// IMP=0x000000000007d544
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;	// IMP=0x000000000007d53c
- (struct CGPDFDocument *)pdfDocument;	// IMP=0x000000000007d534
- (id)effectPreset;	// IMP=0x000000000007d52c
- (unsigned int)gradientStyle;	// IMP=0x000000000007d4a2
- (id)gradient;	// IMP=0x000000000007d49a
- (double)gradientDrawingAngle;	// IMP=0x000000000007d491
- (id)sizeIndexes;	// IMP=0x000000000007d489
- (const struct _csitextstyle *)csiTextStyle;	// IMP=0x000000000007d481
- (_Bool)substituteWithSystemColor;	// IMP=0x000000000007d479
- (id)systemColorName;	// IMP=0x000000000007d471
- (struct CGColor *)cgColor;	// IMP=0x000000000007d469
- (_Bool)edgesOnly;	// IMP=0x000000000007d461
- (_Bool)isScaled;	// IMP=0x000000000007d459
- (_Bool)isTiled;	// IMP=0x000000000007d451
- (id)sliceInformation;	// IMP=0x000000000007d449
- (id)metrics;	// IMP=0x000000000007d441
- (double)scale;	// IMP=0x000000000007d433
- (id)maskForSliceIndex:(long long)arg1;	// IMP=0x000000000007d42b
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x000000000007d423
- (struct CGImage *)unslicedImage;	// IMP=0x000000000007d41b
- (long long)textureIntepretation;	// IMP=0x000000000007d413
- (id)textureImages;	// IMP=0x000000000007d40b
- (id)provideTextureInfo;	// IMP=0x000000000007d403
- (id)description;	// IMP=0x000000000007d39a
- (unsigned long long)colorSpaceID;	// IMP=0x000000000007d38d
- (id)properties;	// IMP=0x000000000007d36c
- (_Bool)isTintable;	// IMP=0x000000000007d35e
- (_Bool)preservedVectorRepresentation;	// IMP=0x000000000007d34e
- (void)_setFlippable:(_Bool)arg1;	// IMP=0x000000000007d332
- (_Bool)isInterpolatable;	// IMP=0x000000000007d32a
- (_Bool)isFlippable;	// IMP=0x000000000007d31b
- (_Bool)preserveForArchiveOnly;	// IMP=0x000000000007d30a
- (_Bool)optOutOfThinning;	// IMP=0x000000000007d2f9
- (long long)templateRenderingMode;	// IMP=0x000000000007d2ec
- (int)bitmapEncoding;	// IMP=0x000000000007d2da
- (_Bool)isOpaque;	// IMP=0x000000000007d2ca
- (_Bool)isVectorBased;	// IMP=0x000000000007d2bc
- (struct CGSize)physicalSizeInMeters;	// IMP=0x000000000007d2a6
- (id)utiType;	// IMP=0x000000000007d285
- (id)name;	// IMP=0x000000000007d278
- (const struct _renditionkeytoken *)key;	// IMP=0x000000000007d259
- (void)dealloc;	// IMP=0x000000000007d1e0
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x000000000007d0af
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x000000000007cfd2
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;	// IMP=0x000000000007cf65
- (int)pixelFormat;	// IMP=0x000000000007cf5d
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x000000000007cd9c
- (void)_initializePropertiesFromCSIData:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x000000000007cb00
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x000000000007c9f7
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x000000000007c903
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;	// IMP=0x000000000007c87c
- (struct CGRect)_destinationFrame;	// IMP=0x000000000007c85e
- (unsigned long long)sourceRowbytes;	// IMP=0x000000000007c856
- (struct CGSize)unslicedSize;	// IMP=0x000000000007c840
- (id)linkingToRendition;	// IMP=0x000000000007c838
- (_Bool)isInternalLink;	// IMP=0x000000000007c830
- (void)_setStructuredThemeStore:(id)arg1;	// IMP=0x000000000007c82a
- (struct cuithemerenditionrenditionflags *)renditionFlags;	// IMP=0x000000000007c655
- (void)setName:(id)arg1;	// IMP=0x000000000007c621
@property(retain, nonatomic) NSString *internalName;

@end
