//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/CHUISControlViewModel-Protocol.h>

@class NSString, UIColor;

@protocol SBControlViewModel <CHUISControlViewModel>
@property(readonly, nonatomic) UIColor *sb_keyColor;
@property(readonly, nonatomic) UIColor *sb_secondaryTextColor;
@property(readonly, copy, nonatomic) NSString *sb_secondaryText;
- (NSString *)sb_actionHintTextWithType:(out unsigned long long *)arg1;
@end
