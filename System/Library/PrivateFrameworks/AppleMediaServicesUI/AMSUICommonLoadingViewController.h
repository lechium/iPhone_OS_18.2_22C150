//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUILoadingView;

__attribute__((visibility("hidden")))
@interface AMSUICommonLoadingViewController : AMSUICommonViewController
{
    AMSUILoadingView *_loadingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000028846
@property(retain, nonatomic) AMSUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_setup;	// IMP=0x00000000000284a4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000002843a
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000028371
- (void)viewDidLoad;	// IMP=0x0000000000028330
- (void)loadView;	// IMP=0x0000000000028299

@end
