//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKFriendListEntryCacheObject, NSDate;

@interface GKAchievementThatAFriendHasCacheObject
{
}

+ (id)entityName;	// IMP=0x0040000000101869
- (id)internalRepresentation;	// IMP=0x002000000010192a
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0010000000101876

// Remaining properties
@property(retain, nonatomic) GKFriendListEntryCacheObject *friend; // @dynamic friend;
@property(retain, nonatomic) NSDate *timestamp; // @dynamic timestamp;

@end

