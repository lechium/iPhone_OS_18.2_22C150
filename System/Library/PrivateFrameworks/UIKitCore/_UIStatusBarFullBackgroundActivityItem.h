//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFullBackgroundActivityItem
{
    _UIStatusBarStringView *_detailStringView;	// 40 = 0x28
}

+ (id)detailDisplayIdentifier;	// IMP=0x004000000143c128
- (void).cxx_destruct;	// IMP=0x000000000143c8ce
@property(retain, nonatomic) _UIStatusBarStringView *detailStringView; // @synthesize detailStringView=_detailStringView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000143c745
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000143c597
- (id)viewForIdentifier:(id)arg1;	// IMP=0x000000000143c4e9
- (void)_create_backgroundView;	// IMP=0x000000000143c47c
- (void)_create_detailStringView;	// IMP=0x000000000143c422
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000143c141

@end
