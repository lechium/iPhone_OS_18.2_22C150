//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10DropInCore13DropInManager : NSObject
{
    MISSING_TYPE *messageCenter;	// 8 = 0x8
    MISSING_TYPE *logger;	// 0 = 0x0
    MISSING_TYPE *signposter;	// 0 = 0x0
    MISSING_TYPE *callCenterManager;	// 0 = 0x0
    MISSING_TYPE *homeManagerProvider;	// 0 = 0x0
    MISSING_TYPE *deviceManager;	// 0 = 0x0
    MISSING_TYPE *stateManager;	// 0 = 0x0
    MISSING_TYPE *sessionManager;	// 0 = 0x0
    MISSING_TYPE *transactionManager;	// 0 = 0x0
    MISSING_TYPE *xpcClientDataSource;	// 0 = 0x0
    MISSING_TYPE *dropInStateSubscriber;	// 0 = 0x0
    MISSING_TYPE *dropInSessionAnalyticEvent;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000001e994
- (id)init;	// IMP=0x0000000000024c05
- (void)dealloc;	// IMP=0x000000000001e977
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;	// IMP=0x000000000002c89f
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x000000000002c570
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000000002c324
- (void)accessoryDidUpdateSupportedCapabilities:(id)arg1;	// IMP=0x000000000002bf15
- (void)accessoryDidUpdateName:(id)arg1;	// IMP=0x000000000002ba8e
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x000000000002b8df
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x000000000002b4ba
- (void)didRemoveHome:(id)arg1;	// IMP=0x000000000002b36e
- (void)didAddHome:(id)arg1;	// IMP=0x000000000002ac98

@end
