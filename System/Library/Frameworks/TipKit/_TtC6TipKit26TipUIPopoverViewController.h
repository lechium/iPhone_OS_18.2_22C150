//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UIPopoverPresentationController;

@interface _TtC6TipKit26TipUIPopoverViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *hostingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004e223
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e1fe
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000004e05f
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000004dc34
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004db00
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004d9a2
- (void)viewDidLayoutSubviews;	// IMP=0x000000000004d69f
- (void)loadView;	// IMP=0x000000000004d58f
@property(nonatomic, readonly) UIPopoverPresentationController *popoverPresentationController;

@end
