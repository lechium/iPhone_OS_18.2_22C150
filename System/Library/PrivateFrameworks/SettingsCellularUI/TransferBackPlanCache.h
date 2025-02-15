//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanItem, NSArray, NSError, NSString, NSTimer, TSSIMSetupFlow, UINavigationController, UIViewController;
@protocol PSUIReActivateSIMSpecifierModelDelegate;

__attribute__((visibility("hidden")))
@interface TransferBackPlanCache : NSObject
{
    _Bool _isPlanReactivated;	// 8 = 0x8
    id <PSUIReActivateSIMSpecifierModelDelegate> _delegate;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
    TSSIMSetupFlow *_flow;	// 32 = 0x20
    UIViewController *_rootViewController;	// 40 = 0x28
    NSArray *_existedIccids;	// 48 = 0x30
    id _transferBackItem;	// 56 = 0x38
    NSTimer *_activateTimer;	// 64 = 0x40
    CTCellularPlanItem *_transferToItem;	// 72 = 0x48
    NSString *_installingIccid;	// 80 = 0x50
    NSError *_transferError;	// 88 = 0x58
    NSError *_failureWebsheetError;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000025e21
@property _Bool isPlanReactivated; // @synthesize isPlanReactivated=_isPlanReactivated;
@property(retain) NSError *failureWebsheetError; // @synthesize failureWebsheetError=_failureWebsheetError;
@property(retain) NSError *transferError; // @synthesize transferError=_transferError;
@property(retain) NSString *installingIccid; // @synthesize installingIccid=_installingIccid;
@property(retain) CTCellularPlanItem *transferToItem; // @synthesize transferToItem=_transferToItem;
@property(retain) NSTimer *activateTimer; // @synthesize activateTimer=_activateTimer;
@property(retain) id transferBackItem; // @synthesize transferBackItem=_transferBackItem;
@property(retain) NSArray *existedIccids; // @synthesize existedIccids=_existedIccids;
@property(retain) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain) id <PSUIReActivateSIMSpecifierModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellularPlanChanged:(id)arg1;	// IMP=0x0000000000025593
- (id)getLogger;	// IMP=0x00000000000254f8
- (void)_showWifiAlert;	// IMP=0x0000000000024dee
- (void)_presentViewController:(id)arg1;	// IMP=0x0000000000024b2d
- (void)_handleActivateExpiry;	// IMP=0x0000000000024aad
- (void)_useLine:(_Bool)arg1 forPlan:(id)arg2;	// IMP=0x0000000000024905
- (void)_prepareSIMSetupFlow;	// IMP=0x000000000002466b
- (_Bool)_canLaunchSIMSetupFlow;	// IMP=0x00000000000245d9
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x00000000000241a2
- (void)transferBack:(id)arg1;	// IMP=0x0000000000023deb
- (void)dealloc;	// IMP=0x0000000000023cee
- (id)initWithDelegate:(id)arg1 navigationController:(id)arg2 transferBackPlan:(id)arg3;	// IMP=0x0000000000023bd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

