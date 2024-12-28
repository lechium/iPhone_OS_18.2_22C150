//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SearchUIFirstTimeExperienceViewController;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface DDParsecFirstTimeViewController : UIViewController
{
    SearchUIFirstTimeExperienceViewController *_firstExperienceViewController;	// 8 = 0x8
    NSLayoutConstraint *_leadingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingConstraint;	// 24 = 0x18
    _Bool _fullScreen;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000008850
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate;
- (void)updateForCurrentTraitCollection;	// IMP=0x0010000000007f30
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000007db0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000007d50
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 bag:(id)arg3 sceneAwareVariant:(_Bool)arg4;	// IMP=0x00100000000076b0

@end
