//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRGroupTopologyModificationRequest, NSArray;

@interface MRDOutputContextModification : NSObject
{
    MRGroupTopologyModificationRequest *_request;	// 8 = 0x8
    NSArray *_discoveredConcreteOutputDevices;	// 16 = 0x10
    NSArray *_avOutputDevices;	// 24 = 0x18
}

+ (id)_modifyPredictedOutputDevicesWithRequest:(id)arg1 outputContext:(id)arg2;	// IMP=0x0040000000179d7a
- (void).cxx_destruct;	// IMP=0x0020000000180a98
@property(readonly, nonatomic) NSArray *avOutputDevices; // @synthesize avOutputDevices=_avOutputDevices;
@property(readonly, nonatomic) NSArray *discoveredConcreteOutputDevices; // @synthesize discoveredConcreteOutputDevices=_discoveredConcreteOutputDevices;
@property(readonly, nonatomic) MRGroupTopologyModificationRequest *request; // @synthesize request=_request;
- (void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000178b84
- (id)description;	// IMP=0x0010000000178ac3
- (id)initWithRequest:(id)arg1;	// IMP=0x0010000000178a58

@end

