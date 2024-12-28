//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageWithConcreteContainersArrayBase
{
    NSArray *_concreteContainerIdentities;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000080db
@property(readonly, nonatomic) NSArray *concreteContainerIdentities; // @synthesize concreteContainerIdentities=_concreteContainerIdentities;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000000007d91

// Remaining properties
@property(readonly, nonatomic) unsigned long long command;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int disposition;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) struct container_client *proxy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

@end
