//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UINavigationBarTitleView.h>

@class MISSING_TYPE, NSString;

@interface _TtC5TeaUI33FloatingTabBarNavigationTitleView : _UINavigationBarTitleView
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *contentInsets;	// 16 = 0x10
    MISSING_TYPE *contentView;	// 48 = 0x30
    MISSING_TYPE *showExpandedHeight;	// 56 = 0x38
    MISSING_TYPE *visibility;	// 57 = 0x39
    MISSING_TYPE *lastLeadingItemsRect;	// 64 = 0x40
    MISSING_TYPE *lastTrailingItemsRect;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000066880
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006684d
- (void)contentDidChange;	// IMP=0x0000000000066718
- (void)layoutSubviews;	// IMP=0x00000000000664c8
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000065b0b
@property(nonatomic) double verticalOffset;
@property(nonatomic) double contentAlpha;

@end

