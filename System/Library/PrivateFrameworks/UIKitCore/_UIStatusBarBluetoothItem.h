//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBluetoothItem
{
    _UIStatusBarImageView *_batteryImageView;	// 8 = 0x8
}

+ (_Bool)alwaysShowRegulatoryBluetoothIndicator;	// IMP=0x004000000143f2b3
+ (id)batteryDisplayIdentifier;	// IMP=0x004000000143f206
- (void).cxx_destruct;	// IMP=0x000000000143fd62
@property(retain, nonatomic) _UIStatusBarImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x000000000143fca4
- (void)_create_batteryImageView;	// IMP=0x000000000143fc4a
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;	// IMP=0x000000000143fb4f
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x000000000143f2f6
- (id)systemImageNameForUpdate:(id)arg1;	// IMP=0x000000000143f233
- (id)indicatorEntryKey;	// IMP=0x000000000143f21f

@end
