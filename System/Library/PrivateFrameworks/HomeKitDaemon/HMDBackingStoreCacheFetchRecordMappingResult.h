//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheGroup, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject
{
    NSString *_recordName;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSUUID *_parentUuid;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    HMDBackingStoreCacheGroup *_group;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003c5abe
@property(readonly, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, copy) NSString *description;
- (id)initWithGroup:(id)arg1 recordName:(id)arg2 uuid:(id)arg3 parentUuid:(id)arg4 type:(id)arg5;	// IMP=0x00000000003c576a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
