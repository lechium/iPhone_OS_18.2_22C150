//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSObject, NSString;
@protocol NSSecureCoding;

__attribute__((visibility("hidden")))
@interface NSCKMetadataEntry : NSManagedObject
{
}

+ (id)entityPath;	// IMP=0x004000000021255c
@property(nonatomic) _Bool boolValue;

// Remaining properties
@property(retain, nonatomic) NSNumber *boolValueNum; // @dynamic boolValueNum;
@property(retain, nonatomic) NSDate *dateValue; // @dynamic dateValue;
@property(retain, nonatomic) NSNumber *integerValue; // @dynamic integerValue;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(retain, nonatomic) NSObject<NSSecureCoding> *transformedValue; // @dynamic transformedValue;

@end
