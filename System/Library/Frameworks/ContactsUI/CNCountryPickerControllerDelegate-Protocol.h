//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNCountryPickerController, NSString;

@protocol CNCountryPickerControllerDelegate <UINavigationControllerDelegate>
- (void)countryPickerDidCancel:(CNCountryPickerController *)arg1;
- (void)countryPicker:(CNCountryPickerController *)arg1 didPickCountryCode:(NSString *)arg2;
@end
