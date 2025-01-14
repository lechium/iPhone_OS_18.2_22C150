//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol MRAVOutputDeviceDescriptionImpl <NSObject>
@property(readonly, nonatomic) _Bool supportsEngageOnClusterActivation;
@property(readonly, nonatomic) NSArray *subComponents;
@property(readonly, nonatomic, getter=isClusterLeader) _Bool clusterLeader;
@property(readonly, nonatomic) unsigned int clusterType;
@property(readonly, nonatomic) NSString *roomName;
@property(readonly, nonatomic) NSString *roomID;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) unsigned int deviceSubtype;
@property(readonly, nonatomic) unsigned int deviceType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *uid;
@end

