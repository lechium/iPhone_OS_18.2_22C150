//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class MRUVisualStylingProvider, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MRURoutingSeparatorHeaderView : UITableViewHeaderFooterView
{
    MRUVisualStylingProvider *_stylingProvider;	// 8 = 0x8
    UIView *_separatorView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010079d
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
- (void)updateVisualStyling;	// IMP=0x0000000000100737
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x0000000000100725
- (void)layoutSubviews;	// IMP=0x0000000000100629
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000100519

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

