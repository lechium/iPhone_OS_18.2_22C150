//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CHManager, PSCellularManagementCache, PSListController, PSUICallTimeGroup, PSUICarrierSpaceManager, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUIMBManagerWrapper, PSUIResetStatisticsGroup;
@protocol PSBillingPeriodSource, PSUIResetStatisticsGroupDelegate;

__attribute__((visibility("hidden")))
@interface PSUIMiscOptionsGroup : NSObject
{
    PSListController *_hostController;	// 8 = 0x8
    PSCellularManagementCache *_managementCache;	// 16 = 0x10
    PSUICarrierSpaceManager *_carrierSpaceManager;	// 24 = 0x18
    PSUICallTimeGroup *_callTimeGroup;	// 32 = 0x20
    PSUIResetStatisticsGroup *_resetStatisticsGroup;	// 40 = 0x28
    PSUICoreTelephonyDataCache *_dataCache;	// 48 = 0x30
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 56 = 0x38
    PSUIMBManagerWrapper *_backupManagerWrapper;	// 64 = 0x40
    CHManager *_callHistoryManager;	// 72 = 0x48
    ACAccountStore *_accountStore;	// 80 = 0x50
    id <PSUIResetStatisticsGroupDelegate> _resetStatisticsDelegate;	// 88 = 0x58
    id <PSBillingPeriodSource> _billingPeriodSource;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000008d67c
@property(nonatomic) __weak id <PSBillingPeriodSource> billingPeriodSource; // @synthesize billingPeriodSource=_billingPeriodSource;
@property(nonatomic) __weak id <PSUIResetStatisticsGroupDelegate> resetStatisticsDelegate; // @synthesize resetStatisticsDelegate=_resetStatisticsDelegate;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) PSUIMBManagerWrapper *backupManagerWrapper; // @synthesize backupManagerWrapper=_backupManagerWrapper;
@property(retain, nonatomic) PSUICoreTelephonyCarrierBundleCache *carrierBundleCache; // @synthesize carrierBundleCache=_carrierBundleCache;
@property(retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) PSUIResetStatisticsGroup *resetStatisticsGroup; // @synthesize resetStatisticsGroup=_resetStatisticsGroup;
@property(retain, nonatomic) PSUICallTimeGroup *callTimeGroup; // @synthesize callTimeGroup=_callTimeGroup;
@property(retain, nonatomic) PSUICarrierSpaceManager *carrierSpaceManager; // @synthesize carrierSpaceManager=_carrierSpaceManager;
@property(retain, nonatomic) PSCellularManagementCache *managementCache; // @synthesize managementCache=_managementCache;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)getLogger;	// IMP=0x000000000008d505
- (id)specifiers;	// IMP=0x000000000008cfc6
- (id)initWithHostController:(id)arg1 cellularManagementCache:(id)arg2 carrierSpaceManager:(id)arg3 dataCache:(id)arg4 carrierBundleCache:(id)arg5 backupManagerWrapper:(id)arg6 callHistoryManager:(id)arg7 appleAccountStore:(id)arg8 resetStatisticsDelegate:(id)arg9;	// IMP=0x000000000008ce3d

@end

