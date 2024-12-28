//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarActivityIconView, _UIStatusBarImageView, _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem
{
    _UIStatusBarPillView *_backgroundView;	// 8 = 0x8
    _UIStatusBarActivityIconView *_iconView;	// 16 = 0x10
    _UIStatusBarImageView *_secondaryIconView;	// 24 = 0x18
    long long _previousType;	// 32 = 0x20
}

+ (double)_fontSizeAdjustmentForActivityType:(long long)arg1;	// IMP=0x004000000143a9e4
+ (double)_verticalOffsetForActivityType:(long long)arg1;	// IMP=0x004000000143a977
+ (_Bool)_identifierContainsSecondaryItemImage:(id)arg1;	// IMP=0x00400000014398db
+ (_Bool)_identifierContainsItemImage:(id)arg1;	// IMP=0x004000000143987d
+ (id)secondaryIconDisplayIdentifier;	// IMP=0x00400000014396d1
+ (id)backgroundDisplayIdentifier;	// IMP=0x00400000014396b8
- (void).cxx_destruct;	// IMP=0x000000000143b1b9
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // @synthesize secondaryIconView=_secondaryIconView;
@property(retain, nonatomic) _UIStatusBarActivityIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) _UIStatusBarPillView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (_Bool)crossfadeForUpdate:(id)arg1;	// IMP=0x000000000143b09e
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000143afe7
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000143af30
- (id)viewForIdentifier:(id)arg1;	// IMP=0x000000000143ae48
- (id)imageView;	// IMP=0x000000000143ae36
- (void)_create_secondaryIconView;	// IMP=0x000000000143addc
- (void)_create_iconView;	// IMP=0x000000000143ad4b
- (void)_create_backgroundView;	// IMP=0x000000000143acba
- (id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x000000000143ac29
- (_Bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x000000000143abec
- (_Bool)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x000000000143abb8
- (id)_backgroundColorForActivityType:(long long)arg1;	// IMP=0x000000000143aa07
- (id)secondaryImageForUpdate:(id)arg1;	// IMP=0x000000000143a8b2
- (id)_secondarySystemImageNameForActivityType:(long long)arg1;	// IMP=0x000000000143a8aa
- (id)imageForUpdate:(id)arg1;	// IMP=0x000000000143a5c2
- (id)_textLabelForActivityType:(long long)arg1;	// IMP=0x000000000143a5ab
- (id)_imageNameForActivityType:(long long)arg1;	// IMP=0x000000000143a55e
- (id)_systemImageNameForActivityType:(long long)arg1;	// IMP=0x000000000143a53f
- (id)imageNameForUpdate:(id)arg1;	// IMP=0x000000000143a4af
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x000000000143a41f
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000143a35d
- (void)updatedDisplayItemsWithData:(id)arg1;	// IMP=0x000000000143a2be
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000001439a13
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x0000000001439939
- (id)_backgroundActivityViewForIdentifier:(id)arg1;	// IMP=0x00000000014397fc
- (id)createDisplayItemForIdentifier:(id)arg1;	// IMP=0x0000000001439741
- (id)indicatorEntryKey;	// IMP=0x000000000143972d
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;	// IMP=0x00000000014396ea

@end
