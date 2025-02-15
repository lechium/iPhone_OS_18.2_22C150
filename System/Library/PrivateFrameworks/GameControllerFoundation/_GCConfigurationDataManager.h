//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol GCServiceProvider, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface _GCConfigurationDataManager : NSObject
{
    id <GCServiceProvider> _provider;	// 8 = 0x8
    NSObject<OS_dispatch_workloop> *_workloop;	// 16 = 0x10
    NSMutableDictionary *_locators;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000016c7b
- (id)serviceFor:(id)arg1 client:(id)arg2;	// IMP=0x0000000000016bd7
- (id)configurationBundleLocatorForType:(id)arg1;	// IMP=0x0000000000016b0a
- (id)init;	// IMP=0x0000000000016adf
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000016a4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

