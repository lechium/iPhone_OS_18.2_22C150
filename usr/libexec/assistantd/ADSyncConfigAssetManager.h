//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;
@protocol OS_dispatch_queue;

@interface ADSyncConfigAssetManager : NSObject
{
    TRIClient *_client;	// 8 = 0x8
    _Bool _isMediaEntitySyncDisabled;	// 16 = 0x10
    _Bool _disableAssistantSyncForEnUS;	// 17 = 0x11
    _Bool _disableAssistantSyncForInactiveDevices;	// 18 = 0x12
    long long _inactiveDeviceThreshold;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _updateHandler;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0040000000363455
- (void).cxx_destruct;	// IMP=0x00200000003632c5
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long inactiveDeviceThreshold; // @synthesize inactiveDeviceThreshold=_inactiveDeviceThreshold;
@property(nonatomic) _Bool disableAssistantSyncForInactiveDevices; // @synthesize disableAssistantSyncForInactiveDevices=_disableAssistantSyncForInactiveDevices;
@property(nonatomic) _Bool disableAssistantSyncForEnUS; // @synthesize disableAssistantSyncForEnUS=_disableAssistantSyncForEnUS;
@property(nonatomic) _Bool isMediaEntitySyncDisabled; // @synthesize isMediaEntitySyncDisabled=_isMediaEntitySyncDisabled;
- (_Bool)isInactiveDeviceSyncDisabled;	// IMP=0x0010000000363140
- (_Bool)assistantSyncDisabledForEnUS;	// IMP=0x00100000003630b2
- (long long)_getIntValueForFactor:(id)arg1;	// IMP=0x0010000000362f20
- (_Bool)_getBooleanValueForFactor:(id)arg1;	// IMP=0x0010000000362e1c
- (void)_populateConfiguration;	// IMP=0x0010000000362aa1
- (void)_registerUpdateHandler;	// IMP=0x00100000003628d3
- (id)_initWithTriClient:(id)arg1;	// IMP=0x00100000003627b5
- (id)init;	// IMP=0x0010000000362756

@end
