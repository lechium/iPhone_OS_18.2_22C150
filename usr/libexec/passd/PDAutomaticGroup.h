//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface PDAutomaticGroup : NSObject
{
    _Bool _nfcEnabled;	// 8 = 0x8
    NSString *_passTypeID;	// 16 = 0x10
    NSString *_groupingID;	// 24 = 0x18
    long long _passStyle;	// 32 = 0x20
    NSDate *_minDate;	// 40 = 0x28
    NSDate *_maxDate;	// 48 = 0x30
    NSDate *_ingestedDate;	// 56 = 0x38
    NSArray *_sortedPassUniqueIdentifiers;	// 64 = 0x40
    unsigned long long _passType;	// 72 = 0x48
}

+ (id)createAutomaticGroupForPass:(id)arg1 withGroupingProfile:(id)arg2;	// IMP=0x004000000049cd61
- (void).cxx_destruct;	// IMP=0x002000000049dc60
@property(readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
@property(copy, nonatomic) NSArray *sortedPassUniqueIdentifiers; // @synthesize sortedPassUniqueIdentifiers=_sortedPassUniqueIdentifiers;
@property(nonatomic, getter=isNFCEnabled, setter=setNFCEnabled:) _Bool nfcEnabled; // @synthesize nfcEnabled=_nfcEnabled;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(nonatomic) long long passStyle; // @synthesize passStyle=_passStyle;
@property(copy, nonatomic) NSString *groupingID; // @synthesize groupingID=_groupingID;
@property(copy, nonatomic) NSString *passTypeID; // @synthesize passTypeID=_passTypeID;
- (_Bool)updateOrderWithCatalogGroup:(id)arg1;	// IMP=0x001000000049d7ce
- (_Bool)removePass:(id)arg1;	// IMP=0x001000000049d62d
- (_Bool)addPass:(id)arg1 withGroupingProfile:(id)arg2;	// IMP=0x001000000049d071

@end

