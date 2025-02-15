//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, NSTimer, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface EXPlaceholderViewController : UIViewController
{
    UIActivityIndicatorView *_activityView;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    UIImageView *_completeIcon;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000d214
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain) UIImageView *completeIcon; // @synthesize completeIcon=_completeIcon;
@property __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;	// IMP=0x000000000000d10a
- (void)hostViewController:(id)arg1 didBeginHosting:(id)arg2;	// IMP=0x000000000000d0c9
- (void)hostViewController:(id)arg1 didPrepareToHost:(id)arg2;	// IMP=0x000000000000d088
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000d074
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000d05d
- (void)loadView;	// IMP=0x000000000000c752
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c704
- (id)init;	// IMP=0x000000000000c6b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

