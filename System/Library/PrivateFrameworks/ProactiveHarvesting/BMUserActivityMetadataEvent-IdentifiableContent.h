//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMUserActivityMetadataEvent.h>

@class NSString;

@interface BMUserActivityMetadataEvent (IdentifiableContent)
- (void)forwardInvocation:(id)arg1;	// IMP=0x002000000001e5c1
- (id)hv_bundleId;	// IMP=0x002000000001e5af
- (id)hv_uniqueId;	// IMP=0x002000000001e59d

// Remaining properties
@property(readonly, nonatomic) double absoluteTimestamp;
@property(readonly, nonatomic) NSString *bundleId; // @dynamic bundleId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,D,N

@property(readonly, nonatomic) NSString *domainId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@end

