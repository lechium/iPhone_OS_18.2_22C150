//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PDSCDKV : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x006000000001be78
+ (id)predicateForKey:(id)arg1;	// IMP=0x006000000001be53
+ (id)insertIntoManagedObjectContext:(id)arg1;	// IMP=0x006000000001bdbc

// Remaining properties
@property(retain, nonatomic) NSData *dataValue; // @dynamic dataValue;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSNumber *numValue; // @dynamic numValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

@end
