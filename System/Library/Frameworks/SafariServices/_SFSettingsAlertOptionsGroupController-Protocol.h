//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSString, _SFSettingsAlertItem;
@protocol _SFSettingsAlertOptionsGroupItemConfiguration;

@protocol _SFSettingsAlertOptionsGroupController <NSObject>
@property(readonly, nonatomic) NSArray *values;
- (_Bool)isSelectedValue:(id)arg1;
- (NSString *)textStyleForValue:(id)arg1;
- (NSAttributedString *)attributedStringForValue:(id)arg1;
- (void)setSelectedValue:(id)arg1;
- (void)prepareView:(id <_SFSettingsAlertOptionsGroupItemConfiguration>)arg1 forItem:(_SFSettingsAlertItem *)arg2 value:(id)arg3;

@optional
- (NSString *)accessibilityIdentifierForValue:(id)arg1;
- (_Bool)shouldSelectValue:(id)arg1 forItem:(_SFSettingsAlertItem *)arg2 groupItem:(_SFSettingsAlertItem *)arg3;
@end

