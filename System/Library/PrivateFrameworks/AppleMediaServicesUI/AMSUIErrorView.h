//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class NSString, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface AMSUIErrorView : AMSUICommonView
{
    _UIContentUnavailableView *_backingView;	// 8 = 0x8
}

+ (id)_sanitizeTitle:(id)arg1;	// IMP=0x006000000003d6b4
- (void).cxx_destruct;	// IMP=0x000000000003d6f1
@property(retain, nonatomic) _UIContentUnavailableView *backingView; // @synthesize backingView=_backingView;
- (void)_handleButtonTap;	// IMP=0x000000000003d643
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *buttonTitle;
@property(copy, nonatomic) CDUnknownBlockType buttonAction;
- (void)layoutSubviews;	// IMP=0x000000000003d29a
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;	// IMP=0x000000000003d193

@end
