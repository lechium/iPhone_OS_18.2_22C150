//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;
@protocol WFWorkflowSettingsViewControllerDelegate;

@interface WFWorkflowSettingsViewController : UIViewController
{
    MISSING_TYPE *workflow;	// 8 = 0x8
    MISSING_TYPE *database;	// 16 = 0x10
    MISSING_TYPE *hideNavigationBar;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *hostingController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b9c22
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001b9bd4
- (void)viewDidLoad;	// IMP=0x00000000001b9b23
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b96bf
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 hideNavigationBar:(_Bool)arg3;	// IMP=0x00000000001b95cd
@property(nonatomic) __weak id <WFWorkflowSettingsViewControllerDelegate> delegate; // @synthesize delegate;

@end

