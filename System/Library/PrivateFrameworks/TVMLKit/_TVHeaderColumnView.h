//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVHeaderColumnView : UIView
{
    NSArray *_labelViews;	// 8 = 0x8
    double _lineSpacing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b33ec
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(copy, nonatomic) NSArray *labelViews; // @synthesize labelViews=_labelViews;
- (void)layoutSubviews;	// IMP=0x00000000000b3130
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b2f2d

@end
