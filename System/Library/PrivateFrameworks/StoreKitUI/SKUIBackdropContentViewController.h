//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

__attribute__((visibility("hidden")))
@interface SKUIBackdropContentViewController : UIViewController
{
    long long _backdropViewPrivateStyle;	// 8 = 0x8
    UIViewController *_contentViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000367b02
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) long long backdropViewPrivateStyle; // @synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle;
- (void)loadView;	// IMP=0x00000000003677a6
- (id)initWithContentViewController:(id)arg1;	// IMP=0x00000000003676ce

@end
