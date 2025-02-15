//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/APDatabaseRow.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface APDBEventRow : APDatabaseRow
{
    NSNumber *_insertOrder;	// 8 = 0x8
    NSData *_propertiesData;	// 16 = 0x10
    NSData *_internalPropertiesData;	// 24 = 0x18
    NSString *_branchString;	// 32 = 0x20
    NSString *_environmentString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000159679
@property(retain, nonatomic) NSString *environmentString; // @synthesize environmentString=_environmentString;
@property(retain, nonatomic) NSString *branchString; // @synthesize branchString=_branchString;
@property(retain, nonatomic) NSData *internalPropertiesData; // @synthesize internalPropertiesData=_internalPropertiesData;
@property(retain, nonatomic) NSData *propertiesData; // @synthesize propertiesData=_propertiesData;
@property(retain, nonatomic) NSNumber *insertOrder; // @synthesize insertOrder=_insertOrder;
@property(retain, nonatomic) NSDictionary *internalProperties;
@property(retain, nonatomic) NSDictionary *properties;
@property(retain, nonatomic) NSArray *environment;
@property(retain, nonatomic) NSArray *branch;
- (id)initHandle:(id)arg1 timestamp:(id)arg2 event:(id)arg3 impression:(id)arg4 insertOrder:(id)arg5 table:(id)arg6;	// IMP=0x00100000001592a5
- (id)initHandle:(id)arg1 timestamp:(id)arg2 purpose:(id)arg3 event:(id)arg4 source:(id)arg5 unknownSource:(id)arg6 handleSet:(id)arg7 eventOrder:(id)arg8 trace:(id)arg9 branch:(id)arg10 environment:(id)arg11 impression:(id)arg12 properties:(id)arg13 internalProperties:(id)arg14 insertOrder:(id)arg15 table:(id)arg16;	// IMP=0x0010000000158fdf
- (id)readOnlyColumns;	// IMP=0x0010000000158f2c

// Remaining properties
@property(retain, nonatomic) NSNumber *event; // @dynamic event;
@property(retain, nonatomic) NSNumber *eventOrder; // @dynamic eventOrder;
@property(retain, nonatomic) NSString *handle; // @dynamic handle;
@property(retain, nonatomic) NSNumber *handleSet; // @dynamic handleSet;
@property(retain, nonatomic) NSNumber *impression; // @dynamic impression;
@property(retain, nonatomic) NSNumber *purpose; // @dynamic purpose;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;
@property(retain, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *trace; // @dynamic trace;
@property(retain, nonatomic) NSNumber *unknownSource; // @dynamic unknownSource;

@end

