//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, _TtC10FinanceKit13StorableColor, _TtC10FinanceKit21ManagedOrderImageData;

@interface _TtC10FinanceKit17ManagedOrderImage : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000001cfde0
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x00000000001d00a0
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x00000000001cff00

// Remaining properties
@property(nonatomic, copy) NSData *data; // @dynamic data;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic, copy) NSString *localizationName; // @dynamic localizationName;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, retain) _TtC10FinanceKit21ManagedOrderImageData *orderImageData; // @dynamic orderImageData;
@property(nonatomic, retain) _TtC10FinanceKit13StorableColor *storedBackgroundColor; // @dynamic storedBackgroundColor;
@property(nonatomic) int width; // @dynamic width;

@end
