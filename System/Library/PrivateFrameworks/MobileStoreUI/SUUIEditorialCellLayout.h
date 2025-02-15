//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICellLayout.h"

@class NSString, SUUIEditorialLinkView, SUUITextBoxView;

__attribute__((visibility("hidden")))
@interface SUUIEditorialCellLayout : SUUICellLayout
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    double _linkSpacing;	// 40 = 0x28
    SUUIEditorialLinkView *_linkView;	// 48 = 0x30
    SUUITextBoxView *_textBoxView;	// 56 = 0x38
    double _totalHeight;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000037f27c
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (id)_textBoxView;	// IMP=0x000000000037f0c5
- (id)_linkView;	// IMP=0x000000000037efbc
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;	// IMP=0x000000000037eefb
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x000000000037ee5b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000037edcd
- (void)layoutSubviews;	// IMP=0x000000000037eb73
@property(readonly, nonatomic) SUUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(_Bool)arg3;	// IMP=0x000000000037e87a
- (void)resetContentInset;	// IMP=0x000000000037e868
- (void)dealloc;	// IMP=0x000000000037e81d
- (id)initWithParentView:(id)arg1;	// IMP=0x000000000037e7d1
- (id)initWithCollectionViewCell:(id)arg1;	// IMP=0x000000000037e785
- (void)_initContentInset;	// IMP=0x000000000037e768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

