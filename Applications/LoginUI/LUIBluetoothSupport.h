//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BluetoothManager;

@interface LUIBluetoothSupport : NSObject
{
    BluetoothManager *btManager;	// 8 = 0x8
    long long btStatus;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000458f4
- (void).cxx_destruct;	// IMP=0x0020000000045c40
- (long long)bluetoothStatus;	// IMP=0x0010000000045b6b
- (void)turnBluetoothOn;	// IMP=0x0010000000045b2e
- (void)availabilityChanged:(id)arg1;	// IMP=0x0010000000045a15
- (id)init;	// IMP=0x0010000000045949

@end
