//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

@class NSObject, NSString;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STPINListItemsController : PSListItemsController
{
}

- (void)devicePINControllerDidDismissPINPane:(id)arg1;	// IMP=0x000000000006cd47
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;	// IMP=0x000000000006cd35
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;	// IMP=0x000000000006cd23
- (void)didAcceptRemovePIN;	// IMP=0x000000000006cd11
- (void)didCancelEnteringPIN;	// IMP=0x000000000006cce3
- (void)didAcceptEnteredPIN:(id)arg1;	// IMP=0x000000000006ccd1
- (_Bool)validatePIN:(id)arg1 forPINController:(id)arg2;	// IMP=0x000000000006ccbf
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000006cb81
- (void)updateFooter;	// IMP=0x000000000006c9ce
- (void)listItemSelected:(id)arg1;	// IMP=0x000000000006c98d
- (void)prepareSpecifiersMetadata;	// IMP=0x000000000006c94c
@property(readonly) NSObject<STRootViewModelCoordinator> *coordinator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<STRootViewModelCoordinator>",?,R

- (void)loadView;	// IMP=0x000000000006c868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
