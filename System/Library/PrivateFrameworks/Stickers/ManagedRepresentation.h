//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedSticker, NSData, NSString, NSUUID;

@interface ManagedRepresentation : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000003e7a0

// Remaining properties
@property(nonatomic) int byteCount; // @dynamic byteCount;
@property(nonatomic, copy) NSData *data; // @dynamic data;
@property(nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) int index; // @dynamic index;
@property(nonatomic) _Bool isPreferred; // @dynamic isPreferred;
@property(nonatomic, copy) NSString *role; // @dynamic role;
@property(nonatomic) double size_h; // @dynamic size_h;
@property(nonatomic) double size_w; // @dynamic size_w;
@property(nonatomic, retain) ManagedSticker *sticker; // @dynamic sticker;
@property(nonatomic, copy) NSString *uti; // @dynamic uti;
@property(nonatomic) int version; // @dynamic version;

@end

