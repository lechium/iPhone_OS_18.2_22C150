//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSHashTable, PGCABackdropLayer, UIColor;

__attribute__((visibility("hidden")))
@interface PGCABackdropLayerView : UIView
{
    UIColor *_customBackgroundColor;	// 8 = 0x8
    PGCABackdropLayerView *_groupLeader;	// 16 = 0x10
    NSHashTable *_dependents;	// 24 = 0x18
}

+ (id)reducedTransparencyColor;	// IMP=0x0060000000012f3f
+ (id)materialFilters;	// IMP=0x0060000000012b8d
+ (Class)layerClass;	// IMP=0x0060000000012b7c
- (void).cxx_destruct;	// IMP=0x0000000000013e71
@property(readonly, nonatomic) NSHashTable *dependents; // @synthesize dependents=_dependents;
@property(nonatomic) __weak PGCABackdropLayerView *groupLeader; // @synthesize groupLeader=_groupLeader;
@property(copy, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
- (_Bool)_isTransparentOrHasTransparentAncestor;	// IMP=0x0000000000013d57
- (void)_enumerateDependents:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013c11
- (void)_ensureDependents;	// IMP=0x0000000000013bc6
- (void)_removeDependent:(id)arg1;	// IMP=0x0000000000013b8d
- (void)_addDependent:(id)arg1;	// IMP=0x0000000000013b33
- (_Bool)_hasAnyDependentsThatWantsCapturedBlur;	// IMP=0x0000000000013a4b
- (_Bool)_isCaptureOnly;	// IMP=0x000000000001385e
- (_Bool)_wantsCapturedBlur;	// IMP=0x0000000000013820
- (id)_preferredBackgroundColor;	// IMP=0x00000000000137aa
- (long long)_preferredEffect;	// IMP=0x000000000001373c
- (void)updateEffects;	// IMP=0x00000000000132d8
- (void)didMoveToWindow;	// IMP=0x0000000000013218
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000013210
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000013208
- (void)dealloc;	// IMP=0x0000000000013186
- (id)initWithFrame:(struct CGRect)arg1 captureOnly:(_Bool)arg2;	// IMP=0x000000000001300c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000012ff8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012fc4

// Remaining properties
@property(readonly, nonatomic) PGCABackdropLayer *layer; // @dynamic layer;

@end
