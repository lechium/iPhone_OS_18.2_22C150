//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLHRequestArchive;

@interface CLHarvestScoredRequestArchive : NSObject
{
    float _score;	// 8 = 0x8
    unsigned int _index;	// 12 = 0xc
    CLHRequestArchive *_archive;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) CLHRequestArchive *archive; // @synthesize archive=_archive;
@property(nonatomic) float score; // @synthesize score=_score;
- (void)dealloc;	// IMP=0x0010000000394dd3
- (id)initWithArchive:(id)arg1 index:(unsigned int)arg2;	// IMP=0x0010000000394d5b

@end

