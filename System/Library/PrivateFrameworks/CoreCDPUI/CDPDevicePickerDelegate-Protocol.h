//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDPDevice, CDPDevicePickerViewController, NSArray;

@protocol CDPDevicePickerDelegate
- (NSArray *)devicePicker:(CDPDevicePickerViewController *)arg1 escapeOffersForDevices:(NSArray *)arg2;
- (void)devicePicker:(CDPDevicePickerViewController *)arg1 didSelectDevice:(CDPDevice *)arg2;
@end
