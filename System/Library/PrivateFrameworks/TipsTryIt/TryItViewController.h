//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;
@protocol TryItViewControllerDelegate;

@interface TryItViewController : UIViewController
{
    MISSING_TYPE *hostingController;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *tryItView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000002b7b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002b750
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000002b630
- (void)loadView;	// IMP=0x000000000002b600
@property(nonatomic) struct CGSize preferredContentSize;
- (void)logEndSession;	// IMP=0x000000000002b120
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002af80
- (id)initWithLessonURL:(id)arg1 tipID:(id)arg2 collectionID:(id)arg3 correlationID:(id)arg4;	// IMP=0x000000000002aeb0
@property(nonatomic, retain) id <TryItViewControllerDelegate> delegate; // @synthesize delegate;

@end
