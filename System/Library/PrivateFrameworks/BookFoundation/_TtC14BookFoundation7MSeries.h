//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSNumber, NSString, NSURL;

@interface _TtC14BookFoundation7MSeries
{
    MISSING_TYPE *hasUniqueAuthors;	// 80 = 0x50
    MISSING_TYPE *isOrdered;	// 81 = 0x51
    MISSING_TYPE *kind;	// 82 = 0x52
    MISSING_TYPE *name;	// 88 = 0x58
    MISSING_TYPE *url;	// 101712005 = 0x6100085
}

- (void).cxx_destruct;	// IMP=0x00000000000786d0
@property(nonatomic, readonly) _Bool isAudiobookSeries;
@property(nonatomic, readonly) _Bool isBookSeries;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) _Bool isOrdered; // @synthesize isOrdered;
@property(nonatomic, readonly) _Bool hasUniqueAuthors; // @synthesize hasUniqueAuthors;
@property(nonatomic, readonly) NSArray *genres;
@property(nonatomic, readonly) NSArray *assets;
@property(nonatomic, readonly) NSNumber *authorCount;
@property(nonatomic, readonly) _Bool isExplicit;
@property(nonatomic, readonly) NSArray *authorNames;

@end

