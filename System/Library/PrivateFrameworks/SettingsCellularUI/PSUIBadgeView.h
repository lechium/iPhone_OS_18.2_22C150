//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PSUIBadgeView : UIView
{
    UILabel *_badgeLabel;	// 8 = 0x8
    double _fontSize;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    double _minPadding;	// 32 = 0x20
    double _baseline;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005d85d
@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(nonatomic) double minPadding; // @synthesize minPadding=_minPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000005d6bf
@property(copy, nonatomic) NSString *text;
- (id)init;	// IMP=0x000000000005ce63

@end
