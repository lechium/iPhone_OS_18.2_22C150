//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class MRUVisualStylingProvider, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MRURoutingHeaderView : UITableViewHeaderFooterView
{
    NSString *_title;	// 8 = 0x8
    MRUVisualStylingProvider *_stylingProvider;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    struct UIEdgeInsets _contentEdgeInsets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000011c3d4
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateContentSizeCategory;	// IMP=0x000000000011c2ed
- (void)updateVisualStyling;	// IMP=0x000000000011c28c
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000011c27a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000011c069
- (void)layoutSubviews;	// IMP=0x000000000011bc6d
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000011baa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

