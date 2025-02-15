//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class Device, NSArray, NSString;

@interface MediaStream : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000020d050
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020d2f8
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x000000000020d1fc
@property(nonatomic, readonly) NSString *description;

// Remaining properties
@property(nonatomic, copy) NSArray *devices; // @dynamic devices;
@property(nonatomic, retain) Device *groupLeader; // @dynamic groupLeader;

@end

