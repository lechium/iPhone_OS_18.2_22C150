//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface ServiceCardContainerViewController : UIViewController
{
    _Bool _didDisappear;	// 8 = 0x8
    UIViewController *_childViewController;	// 16 = 0x10
    _UIRemoteViewController *_remoteViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000006719
@property(retain, nonatomic) _UIRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)dealloc;	// IMP=0x000000000000664c
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)loadView;	// IMP=0x00000000000063a9
- (_Bool)didDisappear;	// IMP=0x0000000000006399
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000635d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000006321
- (void)viewDidLoad;	// IMP=0x000000000000627f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000006240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

