//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MTRSetupPayload, MTSDeviceSetupTopology, NSData, NSString;

@interface _TtCV13MatterSupport22MatterAddDeviceRequestP33_1A83A92E88F6D049FA318E551745945D7Wrapper : NSObject
{
    MISSING_TYPE *wrappedRequest;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000007b30
- (id)init;	// IMP=0x0000000000007ae0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007a50
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (_Bool)shouldShowDeviceWithUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 rootPublicKey:(id)arg5 nodeID:(id)arg6;	// IMP=0x00000000000076d0
@property(nonatomic, readonly) MTRSetupPayload *setupPayload;
@property(nonatomic, readonly) NSData *serializedAsData;
@property(nonatomic, readonly) _Bool shouldScanNetworks;
@property(nonatomic, readonly) NSString *ecosystemName;
@property(nonatomic, readonly) MTSDeviceSetupTopology *topology;

@end

