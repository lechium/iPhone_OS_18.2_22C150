//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemindersUICore/NSObject-Protocol.h>

@class CNContact, CNContactPickerViewController, CNContactProperty, NSArray;

@protocol CNContactPickerDelegate <NSObject>

@optional
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperties:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContacts:(NSArray *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContactProperty:(CNContactProperty *)arg2;
- (void)contactPicker:(CNContactPickerViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactPickerDidCancel:(CNContactPickerViewController *)arg1;
@end
