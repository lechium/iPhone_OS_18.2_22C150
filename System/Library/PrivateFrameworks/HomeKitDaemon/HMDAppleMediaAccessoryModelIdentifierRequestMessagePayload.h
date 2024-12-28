//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryModelIdentifierRequestMessagePayload : HMFObject
{
    NSString *_accessoryIdentifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000007d9fed
+ (id)messageName;	// IMP=0x00100000007d9fe0
- (void).cxx_destruct;	// IMP=0x00000000007d9fcd
@property(readonly, copy) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007d9e98
- (id)attributeDescriptions;	// IMP=0x00000000007d9dcc
- (id)payloadCopy;	// IMP=0x00000000007d9d28
- (id)initWithPayload:(id)arg1;	// IMP=0x00000000007d9bba
- (id)initWithAccessoryIdentifier:(id)arg1;	// IMP=0x00000000007d9b3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
