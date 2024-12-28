//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class NSArray, NSMutableArray, UILayoutGuide, UIViewController;

__attribute__((visibility("hidden")))
@interface STTableCell : PSTableCell
{
    UILayoutGuide *_contentLayoutGuide;	// 120 = 0x78
    NSMutableArray *_childViewControllers;	// 128 = 0x80
    UIViewController *_parentViewController;	// 136 = 0x88
    NSArray *_rtlContentLayoutGuideConstraints;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000b12d0
@property(copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints; // @synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints;
@property __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly) NSMutableArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000b0f13
- (_Bool)canReload;	// IMP=0x00000000000b0f0b
- (void)layoutSubviews;	// IMP=0x00000000000b0e43
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000b0578

@end
