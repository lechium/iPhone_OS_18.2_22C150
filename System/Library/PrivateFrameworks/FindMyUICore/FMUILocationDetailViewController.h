//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, UINavigationItem;
@protocol FMUILocationDetailViewControllerDelegate;

@interface FMUILocationDetailViewController : UIViewController
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *hostingViewController;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *viewOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000172d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d680
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001d340
- (void)viewDidLoad;	// IMP=0x000000000001cfc0
- (id)contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x000000000001b770
@property(nonatomic, readonly) UINavigationItem *navigationItem;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001b430
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x000000000001b070
- (void)resumeSubscriptions;	// IMP=0x000000000001ac00
- (void)pauseSubscriptions;	// IMP=0x000000000001a860
- (void)stopObserving;	// IMP=0x000000000001a4c0
- (void)startObservingContacts:(id)arg1 fromCallerHandle:(id)arg2 groupName:(id)arg3;	// IMP=0x000000000001a010
- (void)startObservingContacts:(id)arg1 fromCallerHandle:(id)arg2;	// IMP=0x0000000000019ea0
- (void)startObservingContacts:(id)arg1;	// IMP=0x0000000000018e50
- (void)startObservingHandles:(id)arg1 callerHandle:(id)arg2 groupName:(id)arg3;	// IMP=0x0000000000018b70
- (void)startObservingHandles:(id)arg1 callerHandle:(id)arg2;	// IMP=0x00000000000185a0
- (void)setRemoteParticipantHandles:(id)arg1 localParticipantHandle:(id)arg2;	// IMP=0x0000000000017c40
- (void)setViewOptions:(id)arg1;	// IMP=0x00000000000176d0
- (void)dealloc;	// IMP=0x00000000000172b0
@property(nonatomic) __weak id <FMUILocationDetailViewControllerDelegate> delegate; // @synthesize delegate;

@end
