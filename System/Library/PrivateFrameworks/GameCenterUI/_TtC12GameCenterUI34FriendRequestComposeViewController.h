//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/MFMessageComposeViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI34FriendRequestComposeViewController : MFMessageComposeViewController
{
    MISSING_TYPE *friendCode;	// 8 = 0x8
    MISSING_TYPE *friendSupportPageURL;	// 24 = 0x18
    MISSING_TYPE *isMessageSent;	// 40 = 0x28
    MISSING_TYPE *isFriendCodeCancelled;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000004132ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000413250
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000000041321c
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x00000000004131f1
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0000000000413175
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000041285b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000412721

@end

