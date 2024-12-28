//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface MRDPauseOutputDevicesRequestOperation : NSObject
{
    long long _type;	// 8 = 0x8
    NSSet *_devicesInGroup;	// 16 = 0x10
    NSSet *_relevantOutputDevices;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a2bde
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSSet *relevantOutputDevices; // @synthesize relevantOutputDevices=_relevantOutputDevices;
@property(retain, nonatomic) NSSet *devicesInGroup; // @synthesize devicesInGroup=_devicesInGroup;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSSet *relevantOutputDeviceUIDs;

@end
