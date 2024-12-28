//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferMenusGroup : NSObject
{
    PSSpecifier *_parentSpecifier;	// 8 = 0x8
    CTCellularPlanPendingTransfer *_planPendingTransfer;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
    PSListController *_listController;	// 32 = 0x20
    CTCellularPlanManager *_cellularPlanManager;	// 40 = 0x28
    PSUICellularPlanManagerCache *_planManagerCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000bf23
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
@property(retain, nonatomic) PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (id)getLogger;	// IMP=0x000000000000be49
- (void)addSpecifierForHeaderString:(id)arg1;	// IMP=0x000000000000bd0c
- (id)cancelConsentRequestSpecifier;	// IMP=0x000000000000bbe4
- (id)activatePlanSpecifier;	// IMP=0x000000000000bb51
- (id)planActivationInfo;	// IMP=0x000000000000b98e
- (id)planPendingTransferNumber:(id)arg1;	// IMP=0x000000000000b927
- (id)planPendingTransferLabel:(id)arg1;	// IMP=0x000000000000b8d3
- (void)removePlanPendingTransfer:(id)arg1;	// IMP=0x000000000000b65c
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x000000000000b606
- (id)specifiers;	// IMP=0x000000000000aecf
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;	// IMP=0x000000000000ad8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
