//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class HUAddPeopleViewController, NSArray, UIViewController;

@protocol HUAddPeopleViewControllerDelegate <NSObject>
- (void)addPeopleViewControllerDidCancel:(UIViewController *)arg1;

@optional
- (void)didSelectPeopleForInvite:(HUAddPeopleViewController *)arg1 inviteeAddresses:(NSArray *)arg2;
- (void)addPeopleViewController:(HUAddPeopleViewController *)arg1 didSendInvitations:(NSArray *)arg2;
@end

