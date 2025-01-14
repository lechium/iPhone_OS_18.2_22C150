//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIAction, UIContentUnavailableView, UIMenu;

__attribute__((visibility("hidden")))
@interface _UIDocumentUnavailableTitlePageView
{
    UIContentUnavailableView *_contentUnavailableView;	// 160 = 0xa0
    _Bool _hasPrimaryProgress;	// 168 = 0xa8
    _Bool _hasSecondaryProgress;	// 169 = 0xa9
    _Bool _actionsEnabled;	// 170 = 0xaa
    NSString *_title;	// 176 = 0xb0
    UIAction *_primaryAction;	// 184 = 0xb8
    UIAction *_secondaryAction;	// 192 = 0xc0
    UIMenu *_secondaryMenu;	// 200 = 0xc8
    double _bottomInset;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000001725e7a
- (void)layoutSubviews;	// IMP=0x000000000172555c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001724eef

@end

