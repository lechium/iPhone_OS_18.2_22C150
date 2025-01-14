//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCitation : NSObject
{
    NSString *mSourceType;	// 8 = 0x8
    NSMutableArray *mAuthors;	// 16 = 0x10
    NSString *mYear;	// 24 = 0x18
    NSMutableArray *mTitles;	// 32 = 0x20
    NSMutableArray *mUrls;	// 40 = 0x28
    NSString *mPeriodicalTitle;	// 48 = 0x30
    NSString *mVolume;	// 56 = 0x38
    NSString *mNumber;	// 64 = 0x40
    NSString *mSection;	// 72 = 0x48
    NSString *mPubDate;	// 80 = 0x50
    NSString *mPages;	// 88 = 0x58
    WDDocument *mDocument;	// 96 = 0x60
}

+ (id)stringValuesForNodesAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;	// IMP=0x00000000004148ca
+ (id)stringValueForNodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2 trimStyle:(_Bool)arg3;	// IMP=0x000000000041480d
+ (id)subStringOf:(struct _xmlNode *)arg1 forPath:(id)arg2;	// IMP=0x0000000000414750
+ (struct _xmlNode *)trimStyle:(struct _xmlNode *)arg1;	// IMP=0x000000000041471e
+ (struct _xmlNode *)nodeAtPath:(id)arg1 nodePtr:(struct _xmlNode *)arg2;	// IMP=0x0000000000414588
+ (id)wordStringForRefType:(int)arg1;	// IMP=0x0000000000414346
+ (int)refTypeForWordString:(id)arg1;	// IMP=0x00000000004142ba
+ (id)endNoteStringForRefType:(int)arg1;	// IMP=0x0000000000414247
+ (id)refTypeEnumMap;	// IMP=0x000000000041409d
+ (id)wordRefTypeEnumMap;	// IMP=0x0000000000413fe9
- (void).cxx_destruct;	// IMP=0x0000000000414c3c
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
@property(retain, nonatomic) NSString *pages; // @synthesize pages=mPages;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=mUrls;
@property(retain, nonatomic) NSString *pubDate; // @synthesize pubDate=mPubDate;
@property(retain, nonatomic) NSString *section; // @synthesize section=mSection;
@property(retain, nonatomic) NSString *number; // @synthesize number=mNumber;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=mVolume;
@property(retain, nonatomic) NSString *periodicalTitle; // @synthesize periodicalTitle=mPeriodicalTitle;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=mTitles;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=mSourceType;
@property(retain, nonatomic) NSMutableArray *authors; // @synthesize authors=mAuthors;
@property(retain, nonatomic) NSString *year; // @synthesize year=mYear;
- (id)description;	// IMP=0x0000000000414abf
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000414151

@end

