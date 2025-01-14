//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanManager, NSString, PSListController, PSSpecifier, PSUIAddCellularPlanSpecifier, PSUICellularPlanManagerCache, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemGroup : NSObject
{
    PSUICellularPlanManagerCache *_cellularPlanManagerCache;	// 8 = 0x8
    CTCellularPlanManager *_ctCellularPlanManager;	// 16 = 0x10
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierEmbedded;	// 24 = 0x18
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierStandard;	// 32 = 0x20
    TSSIMSetupFlow *_flow;	// 40 = 0x28
    _Bool _showCarrierItems;	// 48 = 0x30
    PSSpecifier *_groupSpecifier;	// 56 = 0x38
    PSListController *_listController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000008694b
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (id)getLogger;	// IMP=0x00000000000868e9
- (_Bool)isCellNetworkSearchAuthorized;	// IMP=0x00000000000867b4
- (void)carrierItemOptionPressed:(id)arg1;	// IMP=0x000000000008665f
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000086561
- (void)turnOnLocationServicesPressed:(id)arg1;	// IMP=0x00000000000863a3
- (void)_addLocationFooterIfNecessary;	// IMP=0x0000000000085df9
- (void)_handleAddCarrierItem:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000085973
- (void)carrierItemPressed:(id)arg1;	// IMP=0x00000000000853a3
- (id)specifiersForCarrierItems;	// IMP=0x0000000000085077
- (_Bool)hasCarrierItems;	// IMP=0x0000000000085013
- (id)addCellularPlanSpecifier;	// IMP=0x0000000000084f2b
- (id)specifiers;	// IMP=0x0000000000084753
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4 showCarrierItems:(_Bool)arg5;	// IMP=0x0000000000084665
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 showCarrierItems:(_Bool)arg3;	// IMP=0x0000000000084598
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x00000000000844ce
- (id)init;	// IMP=0x0000000000084491
- (_Bool)isFlowRunning;	// IMP=0x0000000000084483

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

