//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSArray, NSData, NSString;

@interface NSUUID (HMFoundation)
+ (id)shortDescription;	// IMP=0x001000000006ba3d
+ (id)hmf_UUIDWithBytesAsData:(id)arg1;	// IMP=0x001000000006b86a
+ (id)zeroUUID;	// IMP=0x001000000006b858
+ (id)hmf_zeroUUID;	// IMP=0x001000000006b7b8
+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2 salts:(id)arg3;	// IMP=0x001000000006be28
+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;	// IMP=0x001000000006bab6
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (_Bool)hmf_isEqualToUUIDString:(id)arg1;	// IMP=0x001000000006b9c2
- (_Bool)hmf_isEqualToUUID:(id)arg1;	// IMP=0x001000000006b971
@property(readonly) NSData *hmf_bytesAsData;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;	// IMP=0x001000000006bacb

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;
@end

