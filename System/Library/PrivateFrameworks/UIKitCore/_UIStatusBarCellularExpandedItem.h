//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarBadgeView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularExpandedItem
{
    _UIStatusBarBadgeView *_badgeView;	// 72 = 0x48
}

+ (id)badgeDisplayIdentifier;	// IMP=0x0040000001445651
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(_Bool)arg4;	// IMP=0x0040000001474d0c
- (void).cxx_destruct;	// IMP=0x0000000001445979
@property(retain, nonatomic) _UIStatusBarBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000014458b7
- (void)_create_badgeView;	// IMP=0x000000000144585d
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000144566a

@end

