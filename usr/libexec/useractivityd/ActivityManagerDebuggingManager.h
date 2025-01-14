//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, SharingBTLESuggestedItem, UAActivityReplay, UACornerActionManager, UANetworkReplayRendevousHandler, UAPingController;

@interface ActivityManagerDebuggingManager : NSObject
{
    _Bool _supportNetworkPeers;	// 8 = 0x8
    _Bool _disableAdminEntitlmentChecking;	// 9 = 0x9
    UACornerActionManager *manager;	// 16 = 0x10
    SharingBTLESuggestedItem *fakeBTLEInjectedItem;	// 24 = 0x18
    NSXPCListener *listener;	// 32 = 0x20
    UAActivityReplay *_replayManager;	// 40 = 0x28
    UAPingController *_pingController;	// 48 = 0x30
    UANetworkReplayRendevousHandler *_networkConnectionHandler;	// 56 = 0x38
    unsigned long long _recentActionsStateHandler;	// 64 = 0x40
    struct timeval _ignoredRTimeVal;	// 72 = 0x48
}

+ (id)actionStrs:(long long)arg1 maximumInternal:(double)arg2 clear:(_Bool)arg3;	// IMP=0x0020000000099a4e
+ (void)appendRecentAction:(id)arg1;	// IMP=0x0010000000099901
+ (void)log:(int)arg1 format:(id)arg2;	// IMP=0x00100000000994a8
+ (void)log:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x00100000000993f3
- (void).cxx_destruct;	// IMP=0x00200000000a04aa
@property unsigned long long recentActionsStateHandler; // @synthesize recentActionsStateHandler=_recentActionsStateHandler;
@property(readonly) struct timeval ignoredRTimeVal; // @synthesize ignoredRTimeVal=_ignoredRTimeVal;
@property(retain) UANetworkReplayRendevousHandler *networkConnectionHandler; // @synthesize networkConnectionHandler=_networkConnectionHandler;
@property(retain) UAPingController *pingController; // @synthesize pingController=_pingController;
@property(retain) UAActivityReplay *replayManager; // @synthesize replayManager=_replayManager;
@property _Bool disableAdminEntitlmentChecking; // @synthesize disableAdminEntitlmentChecking=_disableAdminEntitlmentChecking;
@property(retain) NSXPCListener *listener; // @synthesize listener;
@property(retain) SharingBTLESuggestedItem *fakeBTLEInjectedItem; // @synthesize fakeBTLEInjectedItem;
@property(retain) UACornerActionManager *manager; // @synthesize manager;
- (void)doGetPairedDevices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a0022
- (void)doGetSFActivityAdvertisement:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009fc9d
- (void)doGetLoggingFileForClient:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009fc06
- (void)doSetLocalPasteboardReflection:(_Bool)arg1;	// IMP=0x001000000009fb70
- (void)doSetRemotePasteboardAvailable:(_Bool)arg1;	// IMP=0x001000000009fad8
- (void)doSetDefaults:(id)arg1 archivedValue:(id)arg2;	// IMP=0x001000000009f8b3
- (void)doCopyDefaults:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f7fd
- (void)doReplayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f60c
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f1c6
- (void)stopAdvertisingPing;	// IMP=0x001000000009f0ff
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;	// IMP=0x001000000009effe
- (void)doSetupRendevous:(id)arg1 domain:(id)arg2 activate:(_Bool)arg3;	// IMP=0x001000000009ef54
- (void)doSetupNetworkedPairs:(id)arg1 port:(long long)arg2;	// IMP=0x001000000009ee26
- (void)doDidSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e996
- (void)doWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e52f
- (void)doTerminateServer;	// IMP=0x001000000009e500
- (void)doInjectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 webPageURL:(id)arg6 remoteModel:(id)arg7 duration:(double)arg8 payloadDelay:(double)arg9;	// IMP=0x001000000009d845
- (void)doGetCurrentAdvertisedItemUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000009d749
- (void)doCopySimulatorStatusString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d69f
- (void)doCopyRecentActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d56e
- (void)doFetchMoreAppSuggestions;	// IMP=0x001000000009d558
- (void)doCopyStatusString:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009cdee
- (void)doCopyDynamicUserActivitiesString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009cd5b
- (void)doCopyDebuggingInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ccd7
- (void)doCopyEnabledUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009cc49
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009cb23
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c8f5
- (void)doFindMatchingUserActivityForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b79c
- (void)doSetDebugOption:(id)arg1 value:(id)arg2;	// IMP=0x001000000009a996
- (void)doNOP:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a88d
- (void)receivePing:(id)arg1;	// IMP=0x001000000009a7cc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000009a3d2
- (double)currentPerfTime;	// IMP=0x001000000009a388
- (id)perfSummaryString;	// IMP=0x001000000009a2f5
@property _Bool supportNetworkPeers; // @synthesize supportNetworkPeers=_supportNetworkPeers;
- (void)setDebugging:(_Bool)arg1;	// IMP=0x0010000000099893
- (void)resume;	// IMP=0x0010000000099826
- (void)suspend;	// IMP=0x00100000000997b9
- (id)initWithManager:(id)arg1;	// IMP=0x001000000009954a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

