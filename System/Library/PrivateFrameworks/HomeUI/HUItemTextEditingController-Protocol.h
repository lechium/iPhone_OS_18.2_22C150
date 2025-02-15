//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, NSString, UITextField;

@protocol HUItemTextEditingController <NSObject>
- (void)textFieldDidEndEditing:(UITextField *)arg1 item:(HFItem *)arg2;
- (void)textFieldDidBeginEditing:(UITextField *)arg1 item:(HFItem *)arg2;
- (void)textDidChange:(NSString *)arg1 forTextField:(UITextField *)arg2 item:(HFItem *)arg3;
- (NSString *)currentTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (NSString *)placeholderTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (NSString *)defaultTextForTextField:(UITextField *)arg1 item:(HFItem *)arg2;
- (UITextField *)textFieldForVisibleItem:(HFItem *)arg1;
- (_Bool)shouldManageTextFieldForItem:(HFItem *)arg1;
@end

