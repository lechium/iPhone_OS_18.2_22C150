//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactGroupPickerViewController, CNGroup, NSString;

@protocol CNContactGroupPickerViewControllerDelegate <NSObject>
- (void)groupPickerDidCancel:(CNContactGroupPickerViewController *)arg1;
- (void)groupPicker:(CNContactGroupPickerViewController *)arg1 didSelectGroup:(CNGroup *)arg2;
- (_Bool)groupPicker:(CNContactGroupPickerViewController *)arg1 shouldEnableGroupWithIdentifier:(NSString *)arg2;
@end
