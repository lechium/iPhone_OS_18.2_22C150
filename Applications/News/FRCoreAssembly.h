//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, FCConfigurationManager, FCNetworkBehaviorMonitor, FCOfflineModeMonitor, NSString;
@protocol NUAppActivityMonitor;

@interface FRCoreAssembly : NSObject
{
    FCCloudContext *_cloudContext;	// 8 = 0x8
    FCConfigurationManager *_configurationManager;	// 16 = 0x10
    id <NUAppActivityMonitor> _appActivityMonitor;	// 24 = 0x18
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;	// 32 = 0x20
    FCOfflineModeMonitor *_offlineModeMonitor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000022b71
@property(readonly, nonatomic) FCOfflineModeMonitor *offlineModeMonitor; // @synthesize offlineModeMonitor=_offlineModeMonitor;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic) id <NUAppActivityMonitor> appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
@property(readonly, nonatomic) FCConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void)loadInRegistry:(id)arg1;	// IMP=0x001000000002050d
- (id)initWithCloudContext:(id)arg1 configurationManager:(id)arg2 appActivityMonitor:(id)arg3 networkBehaviorMonitor:(id)arg4 offlineModeMonitor:(id)arg5;	// IMP=0x0010000000020406

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

