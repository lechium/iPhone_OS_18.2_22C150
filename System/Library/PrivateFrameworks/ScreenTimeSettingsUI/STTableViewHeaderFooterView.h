//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    UILayoutGuide *_contentLayoutGuide;	// 8 = 0x8
    NSArray *_rtlContentLayoutGuideConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b1d5e
@property(copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // @synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void)layoutSubviews;	// IMP=0x00000000000b1c63
- (id)initWithReuseIdentifier:(id)arg1 useLayoutMarginsGuide:(_Bool)arg2;	// IMP=0x00000000000b1335
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000000b1321

@end

