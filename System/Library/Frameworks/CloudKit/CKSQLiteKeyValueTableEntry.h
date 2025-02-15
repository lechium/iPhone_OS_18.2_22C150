//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTableEntry.h"

@class NSData, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol NSCoding;

@interface CKSQLiteKeyValueTableEntry : CKSQLiteTableEntry
{
    NSNumber *_scope;	// 8 = 0x8
    NSString *_scopeIdentifier;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    NSNumber *_number;	// 32 = 0x20
    NSString *_string;	// 40 = 0x28
    NSData *_data;	// 48 = 0x30
    NSDate *_date;	// 56 = 0x38
    NSUUID *_UUID;	// 64 = 0x40
    NSObject<NSCoding> *_object;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000012a1f5
@property(retain, nonatomic) NSObject<NSCoding> *object; // @synthesize object=_object;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSNumber *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property(retain, nonatomic) NSNumber *scope; // @synthesize scope=_scope;

@end

