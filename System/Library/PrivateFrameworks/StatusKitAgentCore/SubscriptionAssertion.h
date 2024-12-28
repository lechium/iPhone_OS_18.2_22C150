//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SubscriptionAssertion : NSManagedObject
{
}

+ (id)statusTypeIdentifierKeyPath;	// IMP=0x004000000006624e
+ (id)channelIdentifierKeyPath;	// IMP=0x0040000000066241
+ (id)applicationIdentifierKeyPath;	// IMP=0x0040000000066234
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x004000000006638f
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x00400000000662f5
+ (id)predicateForApplicationIdentifier:(id)arg1;	// IMP=0x004000000006625b
+ (id)fetchRequest;	// IMP=0x004000000008b27a

// Remaining properties
@property(copy, nonatomic) NSString *applicationIdentifier; // @dynamic applicationIdentifier;
@property(copy, nonatomic) NSString *channelIdentifier; // @dynamic channelIdentifier;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end
