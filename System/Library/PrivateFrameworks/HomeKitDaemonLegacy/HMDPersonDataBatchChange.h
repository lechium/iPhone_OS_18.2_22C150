//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZoneLocalInput, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPersonDataBatchChange : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    HMBLocalZoneLocalInput *_localInput;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000008aea13
- (void).cxx_destruct;	// IMP=0x00000000008ae9e2
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x00000000008ae8ea
- (id)logIdentifier;	// IMP=0x00000000008ae89a
- (void)commit;	// IMP=0x00000000008ae601
- (void)removeFaceCropWithUUID:(id)arg1;	// IMP=0x00000000008ae4c7
- (void)removePersonWithUUID:(id)arg1;	// IMP=0x00000000008ae38d
- (void)addOrUpdateFaceCrop:(id)arg1;	// IMP=0x00000000008ae1c4
- (void)addOrUpdatePerson:(id)arg1;	// IMP=0x00000000008ae065
- (id)initWithLocalInput:(id)arg1;	// IMP=0x00000000008adfb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

