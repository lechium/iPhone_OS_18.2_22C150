//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameCacheObject;

@interface GKAchievementDescriptionListCacheObject
{
}

+ (id)entityName;	// IMP=0x00400000001019fc
- (_Bool)isValid;	// IMP=0x0020000000101b08
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0010000000101a09

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end
