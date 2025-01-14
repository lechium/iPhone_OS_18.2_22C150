//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OADBackground, OADTableStyle, PDAnimation, PDTransition;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject
{
    unsigned int mSlideId;	// 8 = 0x8
    NSString *mName;	// 16 = 0x10
    NSArray *mDrawables;	// 24 = 0x18
    OADBackground *mBackground;	// 32 = 0x20
    PDAnimation *mAnimation;	// 40 = 0x28
    PDTransition *mTransition;	// 48 = 0x30
    PDTransition *mPpt2011Transition;	// 56 = 0x38
    OADTableStyle *mDefaultTableStyle;	// 64 = 0x40
    unsigned int mIsHidden:1;	// 72 = 0x48
    unsigned int mIsDoneWithContent:1;	// 72 = 0x48
}

+ (int)inheritedPlaceholderType:(int)arg1;	// IMP=0x00600000000374cf
- (void).cxx_destruct;	// IMP=0x000000000043fff9
@property(nonatomic) unsigned int slideId; // @synthesize slideId=mSlideId;
- (id)description;	// IMP=0x000000000043ffa9
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000043ff8c
- (void)generatePpt9Animations:(id)arg1;	// IMP=0x000000000043fe73
- (_Bool)hasPpt9Animations;	// IMP=0x000000000043fd33
- (_Bool)hasPpt10Animations;	// IMP=0x000000000043fcfc
- (id)drawingTheme;	// IMP=0x000000000043fcf4
- (void)doneWithContent;	// IMP=0x000000000043fc8c
- (void)setDefaultTableStyle:(id)arg1;	// IMP=0x00000000001ca06f
- (id)defaultTableStyle;	// IMP=0x000000000043fc7e
- (void)setIsHidden:(_Bool)arg1;	// IMP=0x00000000001d662b
- (_Bool)isHidden;	// IMP=0x00000000000a593a
- (id)styleMatrix;	// IMP=0x000000000043fc76
- (id)colorMap;	// IMP=0x000000000043fc6e
- (id)fontScheme;	// IMP=0x000000000043fc66
- (id)colorScheme;	// IMP=0x000000000043fc5e
- (id)parentSlideBase;	// IMP=0x000000000043fc56
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x000000000043fc4e
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x000000000043fc46
- (id)parentTextStyleForTables;	// IMP=0x000000000043fc3e
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;	// IMP=0x000000000043fc36
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x000000000043fc2e
- (id)placeholders;	// IMP=0x000000000043fa04
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(_Bool)arg3 overrideIndex:(_Bool)arg4;	// IMP=0x000000000003750a
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x00000000000374f2
- (id)defaultTextListStyle;	// IMP=0x000000000043f9fc
- (id)defaultTheme;	// IMP=0x000000000043f9f4
- (void)setPpt2011Transition:(id)arg1;	// IMP=0x000000000043f9e3
- (id)ppt2011Transition;	// IMP=0x000000000043f9d5
- (void)setTransition:(id)arg1;	// IMP=0x0000000000151860
- (id)transition;	// IMP=0x00000000001cab72
- (id)animation;	// IMP=0x00000000001c841c
- (void)setBackground:(id)arg1;	// IMP=0x0000000000034e98
- (id)background;	// IMP=0x00000000000a6593
- (void)setDrawables:(id)arg1;	// IMP=0x000000000043f97b
- (void)setDrawablesNoHierarchy:(id)arg1;	// IMP=0x000000000043f96a
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;	// IMP=0x000000000043f962
- (void)setUpPropertyHierarchyPreservingEffectiveValues;	// IMP=0x000000000043f814
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg1;	// IMP=0x000000000043f194
- (void)setUpDrawablePropertyHierarchy;	// IMP=0x000000000043f046
- (void)setUpPropertyHierarchyForDrawable:(id)arg1;	// IMP=0x000000000043ea4d
- (id)drawables;	// IMP=0x0000000000034386
- (void)setName:(id)arg1;	// IMP=0x00000000001caa11
- (id)name;	// IMP=0x000000000043ea3f
- (id)init;	// IMP=0x000000000001ddb2
- (void)addSlideNumberPlaceholder:(id)arg1;	// IMP=0x0000000000038738
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;	// IMP=0x0000000000440058

@end

