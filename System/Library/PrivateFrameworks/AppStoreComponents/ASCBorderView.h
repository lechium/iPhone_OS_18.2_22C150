//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface ASCBorderView : UIView
{
    UIColor *_color;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001b91f
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)updateBorderColor;	// IMP=0x000000000001b887
@property(nonatomic) unsigned long long cornerMask;
@property(retain, nonatomic) NSString *cornerCurve;
@property(nonatomic) double cornerRadius;
@property(nonatomic) double width;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b5a3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b578
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001b491

@end

