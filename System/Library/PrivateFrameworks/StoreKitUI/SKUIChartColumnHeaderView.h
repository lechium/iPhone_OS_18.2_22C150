//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUIChartColumnHeaderView : UIControl
{
    NSArray *_buttons;	// 8 = 0x8
    long long _selectedTitleIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c6278
@property(nonatomic) long long selectedTitleIndex; // @synthesize selectedTitleIndex=_selectedTitleIndex;
- (void)_reloadSelectedButton;	// IMP=0x00000000002c61b7
@property(readonly, nonatomic) double edgePadding;
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000002c611e
- (void)sizeToFit;	// IMP=0x00000000002c5eb5
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002c5e00
- (void)layoutSubviews;	// IMP=0x00000000002c5aba
@property(copy, nonatomic) NSArray *titles;
- (void)dealloc;	// IMP=0x00000000002c5161

@end

