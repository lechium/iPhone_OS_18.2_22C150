//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIStatusBarBluetoothBatteryItemView
{
    int _capacity;	// 8 = 0x8
    int _accessibilityCachedHUDCapacity;	// 12 = 0xc
    UIImage *_accessibilityCachedHUDImage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001410e8b
- (id)accessibilityHUDRepresentation;	// IMP=0x00000000014109e9
- (struct UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;	// IMP=0x00000000014109cb
- (double)extraLeftPadding;	// IMP=0x000000000141097b
- (id)contentsImage;	// IMP=0x0000000001410630
- (double)_normalizedCapacity;	// IMP=0x0000000001410616
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x00000000014105c0

@end

