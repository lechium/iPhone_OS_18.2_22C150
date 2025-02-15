//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection;
@protocol AUPBRegistrarHosting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUPBClientManager : NSObject
{
    NSXPCConnection *mRegistrarConnection;	// 8 = 0x8
    id <AUPBRegistrarHosting> mProxyInterface;	// 16 = 0x10
    NSMutableArray *mRemoteServers;	// 24 = 0x18
    struct vector<PropertyListener, std::allocator<PropertyListener>> mPropertyListeners;	// 32 = 0x20
    struct vector<NewServerListener, std::allocator<NewServerListener>> mNewServerListeners;	// 56 = 0x38
    unsigned int mServerRefCounter;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *mTouchServersQueue;	// 88 = 0x58
    int mNotifyToken;	// 96 = 0x60
    _Bool mValidToken;	// 100 = 0x64
    _Bool mConnectionAcknowledged;	// 101 = 0x65
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001d8e7d
+ (id)sharedInstance;	// IMP=0x00100000001d8dfe
- (id).cxx_construct;	// IMP=0x00000000001dc573
- (void).cxx_destruct;	// IMP=0x00000000001dc539
- (int)setSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 toData:(id)arg6;	// IMP=0x00000000001dc25a
- (int)getSerialAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 inData:(id *)arg6;	// IMP=0x00000000001dbf7c
- (int)setAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 value:(float)arg6;	// IMP=0x00000000001dbc93
- (int)getAUParameter:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoValue:(float *)arg6;	// IMP=0x00000000001db9aa
- (int)setAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 withValue:(const void *)arg6 size:(unsigned int)arg7;	// IMP=0x00000000001db611
- (int)getAUProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 copiedIntoBufer:(void **)arg6 withSize:(unsigned int *)arg7;	// IMP=0x00000000001db328
- (int)getAUPropertyInfo:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 audioUnit:(struct OpaqueRemoteAudioUnit *)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5 intoDataSize:(unsigned int *)arg6 writeable:(char *)arg7;	// IMP=0x00000000001db03f
- (int)setPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 value:(void *)arg4;	// IMP=0x00000000001dad79
- (int)copyPBProperty:(unsigned int)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 intoValue:(const void **)arg4;	// IMP=0x00000000001daac6
- (int)removePropertyListenersForServer:(struct OpaqueAUPBServer *)arg1;	// IMP=0x00000000001daa72
- (int)removePropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;	// IMP=0x00000000001da8e5
- (int)addPropertyListener:(CDUnknownFunctionPointerType)arg1 onServer:(struct OpaqueAUPBServer *)arg2 block:(struct OpaqueAUPB *)arg3 property:(unsigned int)arg4 withUserData:(void *)arg5;	// IMP=0x00000000001da633
- (int)removeServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;	// IMP=0x00000000001da4f7
- (int)addNewServerListener:(CDUnknownFunctionPointerType)arg1 withUserData:(void *)arg2;	// IMP=0x00000000001da29a
- (id)serverFromRef:(struct OpaqueAUPBServer *)arg1;	// IMP=0x00000000001da173
- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3;	// IMP=0x00000000001d9b77
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;	// IMP=0x00000000001d9833
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;	// IMP=0x00000000001d982a
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;	// IMP=0x00000000001d9822
- (struct OpaqueAUPB *)aupbRefFromHandle:(unsigned int)arg1;	// IMP=0x00000000001d981a
- (void)newServerAdded:(id)arg1;	// IMP=0x00000000001d9452
- (void)handleRegistrarCrash;	// IMP=0x00000000001d92c1
- (void)startRegistarConnection;	// IMP=0x00000000001d908b
- (id)init;	// IMP=0x00000000001d8f0f
- (void)dealloc;	// IMP=0x00000000001d8ec6
- (id)autorelease;	// IMP=0x00000000001d8ebd
- (oneway void)release;	// IMP=0x00000000001d8eb7
- (unsigned long long)retainCount;	// IMP=0x00000000001d8eaa
- (id)retain;	// IMP=0x00000000001d8ea1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d8e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

