//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarImageView, _UIStatusBarStringView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem : _UIStatusBarItem
{
    _UIStatusBarWifiSignalView *_signalView;	// 8 = 0x8
    _UIStatusBarImageView *_networkIconView;	// 16 = 0x10
    _UIStatusBarStringView *_rawStringView;	// 24 = 0x18
}

+ (id)rawDisplayIdentifier;	// IMP=0x00400000014507f6
+ (id)iconDisplayIdentifier;	// IMP=0x00400000014507dd
+ (id)signalStrengthDisplayIdentifier;	// IMP=0x00400000014507c4
+ (id)groupWithPriority:(long long)arg1;	// IMP=0x004000000147810e
- (void).cxx_destruct;	// IMP=0x00000000014515c2
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property(retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000001451460
- (void)_create_rawStringView;	// IMP=0x0000000001451406
- (void)_create_networkIconView;	// IMP=0x0000000001451375
- (void)_create_signalView;	// IMP=0x00000000014512c3
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000001450b77
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000001450aad
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x00000000014509d2
- (double)_totalWidthForUpdate:(id)arg1;	// IMP=0x000000000145094b
- (double)_interspaceForUpdate:(id)arg1;	// IMP=0x00000000014508c4
- (double)_barThicknessForUpdate:(id)arg1;	// IMP=0x000000000145083d
- (long long)_barCountForUpdate:(id)arg1;	// IMP=0x0000000001450832
- (id)dependentEntryKeys;	// IMP=0x000000000145080f

@end

