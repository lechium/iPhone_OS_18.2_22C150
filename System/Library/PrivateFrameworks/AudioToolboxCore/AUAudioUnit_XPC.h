//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnit.h"

@class AUAudioUnitBusArray_XPC, AUCrashHandler, AUParameterTree, NSArray, NSUUID, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XPC : AUAudioUnit
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    struct recursive_mutex _propListenerMutex;	// 16 = 0x10
    _Bool _crashNotificationSent;	// 80 = 0x50
    struct mutex _mCrashNotificationMutex;	// 88 = 0x58
    struct OpaqueAudioComponentInstance *_componentInstance;	// 152 = 0x98
    int _remotePID;	// 160 = 0xa0
    struct mach_timebase_info _remoteMachTimebaseInfo;	// 164 = 0xa4
    AUCrashHandler *_crashHandler;	// 176 = 0xb0
    _Bool _canRender;	// 184 = 0xb8
    _Bool _canProcess;	// 185 = 0xb9
    _Bool _removingObserverWithContext;	// 186 = 0xba
    struct mutex _parameterTreeMutex;	// 192 = 0xc0
    AUAudioUnitBusArray_XPC *_inputBusses;	// 256 = 0x100
    AUAudioUnitBusArray_XPC *_outputBusses;	// 264 = 0x108
    struct unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> _elementCountListenerToken;	// 272 = 0x110
    struct vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> _propListeners;	// 280 = 0x118
    struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> _renderPipePool;	// 304 = 0x130
    struct optional<auoop::RenderPipeUser> _renderPipeUser;	// 320 = 0x140
    AUParameterTree *_cachedParameterTree;	// 400 = 0x190
    NSArray *_userPresets;	// 408 = 0x198
    struct optional<bool> _localCachingDisabled;	// 416 = 0x1a0
    NSUUID *_auInstanceUUID;	// 424 = 0x1a8
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000012b9c4
- (id).cxx_construct;	// IMP=0x00000000001272a3
- (void).cxx_destruct;	// IMP=0x000000000012714f
@property(readonly, nonatomic) NSUUID *auInstanceUUID; // @synthesize auInstanceUUID=_auInstanceUUID;
- (void)setLocalCachingDisabled:(_Bool)arg1;	// IMP=0x0000000000126fe7
- (_Bool)isLocalCachingDisabled;	// IMP=0x0000000000126e6c
- (id)audioUnitInstanceUUID;	// IMP=0x0000000000126d43
- (id)XPCListenerEndpoint;	// IMP=0x0000000000126d26
- (id)speechVoices;	// IMP=0x0000000000126bd1
- (void)cancelSpeechRequest;	// IMP=0x0000000000126a10
- (void)synthesizeSpeechRequest:(id)arg1;	// IMP=0x000000000012681f
- (id)messageChannelFor:(id)arg1;	// IMP=0x000000000012620e
- (CDStruct_6ad76789)remoteProcessAuditToken;	// IMP=0x00000000001261d0
- (int)remoteProcessIdentifier;	// IMP=0x00000000001261b3
- (_Bool)isLoadedInProcess;	// IMP=0x00000000001261ab
- (id)userPresets;	// IMP=0x0000000000125bca
- (id)presetStateFor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000125619
- (_Bool)deleteUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012542a
- (_Bool)saveUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000125202
- (void)setCurrentPreset:(id)arg1;	// IMP=0x00000000001251e6
- (void)setFullStateForDocument:(id)arg1;	// IMP=0x00000000001251ca
- (void)setFullState:(id)arg1;	// IMP=0x00000000001251ae
- (void)_setState:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001250de
- (void)invalidateAllParameters;	// IMP=0x0000000000124f60
- (_Bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x0000000000124da0
- (_Bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x0000000000124be0
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;	// IMP=0x00000000001246f1
- (_Bool)providesUserInterface;	// IMP=0x00000000001246be
- (void)selectViewConfiguration:(id)arg1;	// IMP=0x00000000001244f2
- (id)supportedViewConfigurations:(id)arg1;	// IMP=0x0000000000123ff5
- (id)parametersForOverviewWithCount:(long long)arg1;	// IMP=0x0000000000123b12
- (float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2;	// IMP=0x00000000001239b3
- (id)parameterTree;	// IMP=0x0000000000123200
- (void)propertiesChanged:(id)arg1;	// IMP=0x0000000000122e7e
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000122d54
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000122ac2
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0000000000122825
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000001225a7
- (void)_refreshBusses:(unsigned int)arg1;	// IMP=0x00000000001222d6
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000122132
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000121fc9
- (void)_setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000121dee
- (id)_getValueForKey:(id)arg1;	// IMP=0x0000000000121d72
- (id)_getValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000121bd1
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x0000000000121b01
- (void)reset;	// IMP=0x0000000000121ac0
- (void)remoteReset;	// IMP=0x0000000000121947
- (void)internalDeallocateRenderResources;	// IMP=0x00000000001217f6
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x000000000011ec1b
- (void)setTransportStateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011eb29
- (void)setMusicalContextBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ea37
- (_Bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000011e86a
- (id)outputBusses;	// IMP=0x000000000011e825
- (id)inputBusses;	// IMP=0x000000000011e7e0
- (void)_parameterTreeChanged;	// IMP=0x000000000011e79c
- (void)dealloc;	// IMP=0x000000000011e5ac
- (void)didCrash:(id)arg1;	// IMP=0x000000000011e105
- (void)didInvalidate;	// IMP=0x000000000011dfec
- (id)_getInvalidationNotificationInfo;	// IMP=0x000000000011ddea
- (void)_invalidatePipePoolAndUser;	// IMP=0x000000000011dd30
- (void)_doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c9eb
- (void)_setComponentInstance:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x000000000011c9da

@end

