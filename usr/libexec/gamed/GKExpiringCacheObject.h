//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface GKExpiringCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x00400000000fa5a0
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x00100000000fa267
+ (id)fetchSortDescriptors;	// IMP=0x00100000000f981d
- (void)awakeFromInsert;	// IMP=0x00200000000fa1f2
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00100000000f9f38
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x00100000000f9eb5
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x00100000000f9a93
- (void)invalidate;	// IMP=0x00100000000f98e9
- (_Bool)isValid;	// IMP=0x00100000000f98b6

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end
