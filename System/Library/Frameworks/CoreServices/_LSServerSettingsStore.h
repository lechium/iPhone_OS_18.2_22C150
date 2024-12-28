//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface _LSServerSettingsStore
{
    NSXPCListener *_listener;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000100884
- (void).cxx_destruct;	// IMP=0x0000000000102007
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)postSettingsChangeNotification;	// IMP=0x0000000000101f5d
- (void)resetUserElectionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000101e06
- (void)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000101c7f
- (void)userElectionForExtensionKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000101bfb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000101b2b
- (void)_internalQueue_resetUserElection;	// IMP=0x0000000000101997
- (void)_internalQueue_insertIdentifier:(id)arg1 userElection:(unsigned char)arg2 timestamp:(double)arg3;	// IMP=0x000000000010175a
- (void)_internalQueue_insertIdentifier:(id)arg1 userElection:(unsigned char)arg2;	// IMP=0x0000000000101534
- (void)_internalQueue_initializeDatabase;	// IMP=0x0000000000101461
- (void)_internalQueue_loadPluginKitDatabase;	// IMP=0x0000000000100de4
- (void)_internalQueue_loadDatabase;	// IMP=0x0000000000100b6d
- (_Bool)resetUserElectionsWithError:(id *)arg1;	// IMP=0x0000000000100ae4
- (_Bool)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001009f5
- (id)settingsStoreConfigurationForProcessWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000100946
- (id)init;	// IMP=0x000000000010088c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
