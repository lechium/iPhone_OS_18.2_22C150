//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface SiriNotificationsSetupViewModel : NSObject
{
    _Bool _primaryActionUsesLegacyStyling;	// 8 = 0x8
    _Bool _secondaryActionAvailable;	// 9 = 0x9
    _Bool _secondaryActionUsesLegacyStyling;	// 10 = 0xa
    UIImage *_contentImage;	// 16 = 0x10
    long long _dismissActionStyle;	// 24 = 0x18
    NSString *_dismissActionTitle;	// 32 = 0x20
    long long _primaryActionStyle;	// 40 = 0x28
    NSString *_primaryActionTitle;	// 48 = 0x30
    long long _secondaryActionStyle;	// 56 = 0x38
    NSString *_secondaryActionTitle;	// 64 = 0x40
    UIFont *_subtitleFont;	// 72 = 0x48
    NSString *_subtitleText;	// 80 = 0x50
    UIColor *_titleColor;	// 88 = 0x58
    UIFont *_titleFont;	// 96 = 0x60
    NSString *_titleText;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000eae2f
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(nonatomic) _Bool secondaryActionUsesLegacyStyling; // @synthesize secondaryActionUsesLegacyStyling=_secondaryActionUsesLegacyStyling;
@property(copy, nonatomic) NSString *secondaryActionTitle; // @synthesize secondaryActionTitle=_secondaryActionTitle;
@property(nonatomic) long long secondaryActionStyle; // @synthesize secondaryActionStyle=_secondaryActionStyle;
@property(nonatomic) _Bool secondaryActionAvailable; // @synthesize secondaryActionAvailable=_secondaryActionAvailable;
@property(nonatomic) _Bool primaryActionUsesLegacyStyling; // @synthesize primaryActionUsesLegacyStyling=_primaryActionUsesLegacyStyling;
@property(copy, nonatomic) NSString *primaryActionTitle; // @synthesize primaryActionTitle=_primaryActionTitle;
@property(nonatomic) long long primaryActionStyle; // @synthesize primaryActionStyle=_primaryActionStyle;
@property(copy, nonatomic) NSString *dismissActionTitle; // @synthesize dismissActionTitle=_dismissActionTitle;
@property(nonatomic) long long dismissActionStyle; // @synthesize dismissActionStyle=_dismissActionStyle;
@property(copy, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;

@end

