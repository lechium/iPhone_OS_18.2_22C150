//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CKConversation, MISSING_TYPE;
@protocol CKDetailsControllerDelegate;

@interface CKBusinessDetailsController : UIViewController
{
    MISSING_TYPE *detailsControllerDelegate;	// 8 = 0x8
    MISSING_TYPE *conversation;	// 16 = 0x10
    MISSING_TYPE *isShowingAddMemberPopover;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000867d20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000867cc0
- (void)dismissDetailsController;	// IMP=0x00000000008678c0
- (void)viewDidLoad;	// IMP=0x0000000000867890
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000867080
- (id)initWithConversation:(id)arg1 detailsControllerDelegate:(id)arg2;	// IMP=0x0000000000867000
@property(nonatomic) _Bool isShowingAddMemberPopover; // @synthesize isShowingAddMemberPopover;
@property(nonatomic, retain) CKConversation *conversation; // @synthesize conversation;
@property(nonatomic, retain) id <CKDetailsControllerDelegate> detailsControllerDelegate; // @synthesize detailsControllerDelegate;

@end

