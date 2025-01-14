//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGLayout.h>

@class MISSING_TYPE, NSIndexSet;

@interface PUStoryColorGradeEditorItemOverlayLayout : PXGLayout
{
    MISSING_TYPE *colorGradeKind;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 16 = 0x10
    MISSING_TYPE *backgroundSpriteIndex;	// 24 = 0x18
    MISSING_TYPE *captionSpriteIndex;	// 28 = 0x1c
    MISSING_TYPE *captionBackgroundSpriteIndex;	// 32 = 0x20
    MISSING_TYPE *selectionBadgeSpriteIndex;	// 36 = 0x24
    MISSING_TYPE *accessibleSpriteIndexes;	// 0 = 0x0
    MISSING_TYPE *cachedCaptionSpriteFrame;	// 0 = 0x0
    MISSING_TYPE *updateFlags;	// 0 = 0x0
    MISSING_TYPE *captionSpriteVersion;	// 0 = 0x0
    MISSING_TYPE *captionBackgroundSpriteVersion;	// 0 = 0x0
    MISSING_TYPE *captionHeight;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000158cec
- (id)init;	// IMP=0x0000000000158cc2
@property(nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;	// IMP=0x0000000000158b34
@property(nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;
@property(nonatomic, readonly) NSIndexSet *axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000001587f2
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000001586cc
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x00000000001585ad
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x0000000000158537
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000015843d
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;	// IMP=0x000000000015825f
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000001581b2
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;	// IMP=0x0000000000157662
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;	// IMP=0x000000000015752f
- (void)viewEnvironmentDidChange;	// IMP=0x00000000001574cc
- (void)displayScaleDidChange;	// IMP=0x0000000000157413
- (void)referenceSizeDidChange;	// IMP=0x00000000001573bd
- (void)update;	// IMP=0x00000000001572db

@end

