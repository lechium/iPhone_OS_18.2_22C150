//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAssistantSettingsConnection, NSString, NSUUID;
@protocol HMDAppleMediaAccessoryLocalMessageHandlerDataSource;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryLocalMessageHandler : NSObject
{
    id <HMDAppleMediaAccessoryLocalMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMDAssistantSettingsConnection *_assistantSettingsConnection;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000005af03c
- (void).cxx_destruct;	// IMP=0x00000000005aefd2
@property(readonly) HMDAssistantSettingsConnection *assistantSettingsConnection; // @synthesize assistantSettingsConnection=_assistantSettingsConnection;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAppleMediaAccessoryLocalMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000005aef33
- (id)dataSourceAccessoryWithUUID:(id)arg1;	// IMP=0x00000000005aedd2
- (void)handleSiriEndpointDeleteSiriHistoryMessage:(id)arg1;	// IMP=0x00000000005ae72b
- (id)initWithIdentifier:(id)arg1 assistantSettingsConnection:(id)arg2;	// IMP=0x00000000005ae670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

