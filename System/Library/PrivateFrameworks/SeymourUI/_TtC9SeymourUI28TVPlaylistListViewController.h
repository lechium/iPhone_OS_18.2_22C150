//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI28TVPlaylistListViewController : UIViewController
{
    MISSING_TYPE *dataProvider;	// 8 = 0x8
    MISSING_TYPE *pageNavigator;	// 16 = 0x10
    MISSING_TYPE *dependencies;	// 56 = 0x38
    MISSING_TYPE *eventHub;	// 64 = 0x40
    MISSING_TYPE *visibility;	// 80 = 0x50
    MISSING_TYPE *resignActiveObserver;	// 88 = 0x58
    MISSING_TYPE *lastFocusedIndexPath;	// 0 = 0x0
    MISSING_TYPE *settlingTimer;	// 0 = 0x0
    MISSING_TYPE *timerProvider;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000791230
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000007911d0
- (void)viewDidLayoutSubviews;	// IMP=0x00000000007910f0
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000791090
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000790fc0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000790f10
- (void)viewDidLoad;	// IMP=0x0000000000790ee0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000790c20
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
