//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSArray, UIImage;

@interface NSString (UIKitAdditions)
+ (Class)_ui_augmentingNSItemProviderReadingClass;	// IMP=0x00100000011fd97c
- (id)queryKeysAndValues;	// IMP=0x0010000000bf42d1
- (id)_uikit_unescapedQueryValue;	// IMP=0x0010000000bf423b
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;	// IMP=0x0010000000d0d2d4
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;	// IMP=0x0010000000d0d251
- (struct CGSize)sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;	// IMP=0x0010000000d0d1e2
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;	// IMP=0x0010000000d0d1d0
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;	// IMP=0x0010000000d0d1be
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2;	// IMP=0x0010000000d0d1ac
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;	// IMP=0x0010000000d0d19a
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;	// IMP=0x0010000000d0d188
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;	// IMP=0x0010000000d0d119
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;	// IMP=0x0010000000d0d0be
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;	// IMP=0x0010000000d0d066
- (struct CGSize)sizeWithFont:(id)arg1;	// IMP=0x0010000000d0cffd
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(_Bool)arg8;	// IMP=0x0010000000d0d3fd
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(_Bool)arg7;	// IMP=0x0010000000d0d3e8
- (struct CGSize)_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6 truncationRect:(struct CGRect *)arg7;	// IMP=0x0010000000d0d3d6
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6;	// IMP=0x0010000000d0d3c4
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;	// IMP=0x0010000000d0d3b2
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;	// IMP=0x0010000000d0d39d
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(_Bool)arg6;	// IMP=0x0010000000d0d388
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;	// IMP=0x0010000000d0d373
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;	// IMP=0x0010000000d0d361
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7;	// IMP=0x0010000000d0e551
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(_Bool)arg8;	// IMP=0x0010000000d0e4ac
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6;	// IMP=0x0010000000d0e491
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(_Bool)arg7;	// IMP=0x0010000000d0e31b
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double *)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5;	// IMP=0x0010000000d0dfbd
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6 truncationRect:(struct CGRect *)arg7;	// IMP=0x0010000000d0dcd6
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6;	// IMP=0x0010000000d0dc97
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;	// IMP=0x0010000000d0dc63
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;	// IMP=0x0010000000d0dc2c
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3;	// IMP=0x0010000000d0dbf2
- (struct CGSize)_legacy_drawInRect:(struct CGRect)arg1 withFont:(id)arg2;	// IMP=0x0010000000d0dbb6
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;	// IMP=0x0010000000d0d99f
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;	// IMP=0x0010000000d0d987
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;	// IMP=0x0010000000d0d96a
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(_Bool)arg6;	// IMP=0x0010000000d0d6e3
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;	// IMP=0x0010000000d0d6c8
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4;	// IMP=0x0010000000d0d6aa
- (struct CGSize)_legacy_drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2;	// IMP=0x0010000000d0d682
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;	// IMP=0x0010000000d0d4ed
- (struct CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;	// IMP=0x0010000000d0d4d8
- (struct CGSize)_legacy_sizeWithFont:(id)arg1;	// IMP=0x0010000000d0d412
- (struct CGSize)_optimizedSizeWithFont:(id)arg1;	// IMP=0x0010000000dba210
- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0010000001301e9e
@property(readonly, nonatomic) NSString *_asMenuElementImageName;
@property(readonly, nonatomic) UIImage *_asMenuElementImage;
- (id)_uikit_stringByRemovingFirstMatchFromPrefixes:(id)arg1;	// IMP=0x0010000001b2cd17
- (id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(_Bool)arg2;	// IMP=0x0010000001b2cc50
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;	// IMP=0x0010000001b2cb7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@end
