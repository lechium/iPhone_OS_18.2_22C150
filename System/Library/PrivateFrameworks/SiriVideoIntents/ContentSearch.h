//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class INDateComponentsRange, NSArray, NSNumber, NSString, SearchAttributes;

@interface ContentSearch : INObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000197a9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000197d4c
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x0000000000197c50

// Remaining properties
@property(nonatomic, retain) SearchAttributes *attributes; // @dynamic attributes;
@property(nonatomic, copy) NSString *episodeNumber; // @dynamic episodeNumber;
@property(nonatomic) long long episodeReference; // @dynamic episodeReference;
@property(nonatomic, copy) NSString *genre; // @dynamic genre;
@property(nonatomic, retain) NSNumber *itemLimit; // @dynamic itemLimit;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, retain) NSNumber *recommendedAge; // @dynamic recommendedAge;
@property(nonatomic, retain) INDateComponentsRange *releaseDateRange; // @dynamic releaseDateRange;
@property(nonatomic, copy) NSArray *roles; // @dynamic roles;
@property(nonatomic, copy) NSString *seasonNumber; // @dynamic seasonNumber;
@property(nonatomic) long long seasonReference; // @dynamic seasonReference;
@property(nonatomic) long long sort; // @dynamic sort;
@property(nonatomic, copy) NSString *studio; // @dynamic studio;
@property(nonatomic) long long type; // @dynamic type;
@property(nonatomic, copy) NSString *umcId; // @dynamic umcId;

@end
