//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIWaitingForRemoteViewContainerViewController : UIViewController
{
    UIActivityIndicatorView *_loadingSpinner;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x00000000009a4357
@property(retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000009a432a
- (void)stopSpinner;	// IMP=0x00000000009a42ed
- (void)viewWillLayoutSubviews;	// IMP=0x00000000009a41cc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000009a4058

@end
