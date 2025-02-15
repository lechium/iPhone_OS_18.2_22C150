//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CARSettingsCellSpecifier, NSAttributedString, NSString, UIColor, UIImage;

@protocol CARSettingsCellSpecifierObserver <NSObject>
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateValue:(id)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateImage:(UIImage *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateTitleColor:(UIColor *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateEnabled:(_Bool)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateSelectionStyle:(long long)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateDetail:(NSString *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateAttributedTitle:(NSAttributedString *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateSubtitle:(NSString *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateTitle:(NSString *)arg2;
- (void)specifier:(CARSettingsCellSpecifier *)arg1 didUpdateAccessoryType:(long long)arg2;
@end

