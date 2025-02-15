//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeDemoDataMocker : HMFObject
{
    NSMutableDictionary *_accessCodes;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000009f967b
- (void).cxx_destruct;	// IMP=0x00000000009f9668
@property(readonly) NSMutableDictionary *accessCodes; // @synthesize accessCodes=_accessCodes;
- (id)_handleRemoveRequest:(id)arg1;	// IMP=0x00000000009f9236
- (id)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000009f8e48
- (id)_handleAddRequest:(id)arg1;	// IMP=0x00000000009f89d5
- (id)_handleReadRequest:(id)arg1;	// IMP=0x00000000009f8605
- (id)_handleListRequest;	// IMP=0x00000000009f8298
- (id)_controlResponseForWriteRequest:(id)arg1;	// IMP=0x00000000009f8041
- (id)_controlResponseForReadRequest:(id)arg1;	// IMP=0x00000000009f7f4d
- (id)handleReadRequests:(id)arg1;	// IMP=0x00000000009f7914
- (id)handleWriteRequests:(id)arg1;	// IMP=0x00000000009f72b7
- (id)init;	// IMP=0x00000000009f7199

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

