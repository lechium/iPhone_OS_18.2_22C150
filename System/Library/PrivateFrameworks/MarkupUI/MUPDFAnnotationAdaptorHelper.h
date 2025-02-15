//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPDFAnnotationAdaptorHelper : NSObject
{
}

+ (_Bool)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFAnnotation:(struct CGPDFAnnotation *)arg2;	// IMP=0x008000000002269a
+ (id)_colorFromAppearanceTokens:(id)arg1;	// IMP=0x0080000000022446
+ (id)_fontNameFromAppearanceTokens:(id)arg1;	// IMP=0x00800000000222ee
+ (double)_pointSizeFromAppearanceTokens:(id)arg1;	// IMP=0x00800000000221e7
+ (id)_tokenizeAppearanceString:(id)arg1;	// IMP=0x00800000000220c7
+ (id)_getColorFromAppearanceString:(struct CGPDFString *)arg1;	// IMP=0x0080000000022041
+ (id)_getFontFromAppearanceString:(struct CGPDFString *)arg1 ofPDFPage:(struct CGPDFPage *)arg2;	// IMP=0x0080000000021c58
+ (id)_colorFromPDFArray:(struct CGPDFArray *)arg1;	// IMP=0x0080000000021ae6
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;	// IMP=0x00800000000218cb
+ (id)newAKAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg1;	// IMP=0x008000000002167c
+ (void)addQuaddingOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0080000000021535
+ (void)addDefaultAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0080000000020d41
+ (void)addAppearanceStreamOfAnnotation:(id)arg1 forPage:(struct CGPDFPage *)arg2 toDictionary:(id)arg3;	// IMP=0x0080000000020a84
+ (void)addRGBColor:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3;	// IMP=0x00800000000208c9
+ (void)addBorderStyleOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0080000000020643
+ (void)addString:(id)arg1 toDictionary:(id)arg2 forKey:(id)arg3;	// IMP=0x0080000000020557
+ (void)addTextOfAnnotation:(id)arg1 toDictionary:(id)arg2 forKey:(id)arg3 canUsePlaceholder:(_Bool)arg4;	// IMP=0x0080000000020468
+ (void)addContentsStringOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x008000000002030a
+ (void)addFlagsOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0080000000020291
+ (void)addTextLabelOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x008000000002028b
+ (void)addModificationDateOfAnnotation:(id)arg1 toDictionary:(id)arg2;	// IMP=0x00800000000201e6
+ (void)addBoundsOfAnnotation:(id)arg1 forPage:(struct CGPDFPage *)arg2 toDictionary:(id)arg3;	// IMP=0x008000000001ff7e
+ (void)readQuaddingFromPDFDictionary:(struct CGPDFDictionary *)arg1 toDictionary:(id)arg2;	// IMP=0x008000000001fe79
+ (void)readDefaultAppearanceStringFromPDFDictionary:(struct CGPDFDictionary *)arg1 ofPage:(struct CGPDFPage *)arg2 toDictionary:(id)arg3;	// IMP=0x008000000001fd85
+ (id)getFullFieldNameFromAnnotationDictionary:(struct CGPDFDictionary *)arg1;	// IMP=0x008000000001fbc7
+ (id)getTextStringForKey:(const char *)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2;	// IMP=0x008000000001fb83
+ (id)getRGBColorForKey:(const char *)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2;	// IMP=0x008000000001fb2f
+ (void)migrateAKTextAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x008000000001f7cb
+ (void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x008000000001f75d
+ (void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x008000000001f6d3
+ (void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;	// IMP=0x008000000001f5b3
+ (void)migrateAppearanceStreamFromCGPDFAnnotationDict:(struct CGPDFDictionary *)arg1 toAKAnnotation:(id)arg2 compensatingForPageRotation:(unsigned long long)arg3;	// IMP=0x008000000001eefa

@end

