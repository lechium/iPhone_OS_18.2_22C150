//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUISnippetViewController.h>

@class SAUIButton, SRBigButtonView;

@interface SRBigButtonController : SiriUISnippetViewController
{
    SRBigButtonView *_buttonView;	// 8 = 0x8
    SAUIButton *_buttonObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001dd10
- (void)_bigButtonHit:(id)arg1;	// IMP=0x001000000001dc97
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x001000000001dc35
- (void)loadView;	// IMP=0x001000000001da71
- (_Bool)usePlatterStyle;	// IMP=0x001000000001da69
- (struct UIEdgeInsets)defaultViewInsets;	// IMP=0x001000000001da4b
- (id)snippet;	// IMP=0x001000000001da43
- (void)setAceObject:(id)arg1;	// IMP=0x001000000001d9ea
- (void)dealloc;	// IMP=0x001000000001d964

@end
