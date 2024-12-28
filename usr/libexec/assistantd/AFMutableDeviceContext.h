//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFDeviceContext.h>

@class AFPeerInfo, NSUUID;

@interface AFMutableDeviceContext : AFDeviceContext
{
}

- (id)description;	// IMP=0x00200000001ba00b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b9f60
- (void)removeHistoricalContextForType:(id)arg1;	// IMP=0x00100000001b9e1f
- (void)removeContextSnapshotForType:(id)arg1;	// IMP=0x00100000001b9cd6
- (void)setSerializedContextSnapshot:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00100000001b98e7
- (void)setContextSnapshot:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00100000001b986f
@property(nonatomic) long long privacyClass; // @dynamic privacyClass;
@property(copy, nonatomic) AFPeerInfo *deviceInfo; // @dynamic deviceInfo;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) _Bool fromLocalDevice; // @dynamic fromLocalDevice;

@end
