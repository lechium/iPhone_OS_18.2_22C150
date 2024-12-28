//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSData, NSNumber, NSSet, NSString;
@protocol HMDMatterAccessoryProtocol;

__attribute__((visibility("hidden")))
@interface HMDCHIPAccessoryDataSource : HMFObject
{
    NSNumber *_nodeID;	// 8 = 0x8
    HMDAccessory<HMDMatterAccessoryProtocol> *_accessory;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000078039b
- (void).cxx_destruct;	// IMP=0x00000000007800a1
@property __weak HMDAccessory<HMDMatterAccessoryProtocol> *accessory; // @synthesize accessory=_accessory;
@property(readonly, copy, nonatomic) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
- (id)logIdentifier;	// IMP=0x000000000077ffa9
- (void)updateSupportedLinkLayerTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077fe25
@property(readonly, copy, nonatomic) NSNumber *supportedLinkLayerTypes;
- (void)updateSoftwareVersionNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077fc27
@property(readonly, copy, nonatomic) NSNumber *softwareVersionNumber;
- (void)updateWedSupport:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077fa28
@property(readonly, nonatomic) _Bool wedSupport;
- (void)updateExtendedMACAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077f836
@property(readonly, copy, nonatomic) NSString *extendedMACAddress;
- (void)updatePairings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077f638
@property(readonly, copy, nonatomic) NSSet *pairings;
- (void)updateAttributeDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077f40c
@property(readonly, copy, nonatomic) NSData *attributeDatabase;
- (void)updateVendorID:(id)arg1 productID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000077f1db
- (void)updateProductID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077f057
@property(readonly, copy, nonatomic) NSNumber *productID;
- (void)updateVendorID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077ee59
@property(readonly, copy, nonatomic) NSNumber *vendorID;
- (void)updateNodeID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000077ec5b
- (void)_updateAccessoryModelWithLabel:(id)arg1 completion:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000077e72a
- (id)initWithNodeID:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000077e647

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
