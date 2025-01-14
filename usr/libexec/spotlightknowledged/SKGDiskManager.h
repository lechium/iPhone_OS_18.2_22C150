//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SKGJobContext, SKGKnowledgeFeedback;

@interface SKGDiskManager : NSObject
{
    SKGJobContext *_jobContext;	// 8 = 0x8
    long long _graphSize;	// 16 = 0x10
    long long _journalSize;	// 24 = 0x18
    long long _journalCount;	// 32 = 0x20
    long long _deleteSize;	// 40 = 0x28
    long long _deleteCount;	// 48 = 0x30
    double _availableCapacity;	// 56 = 0x38
    long long _journalsSize;	// 64 = 0x40
    long long _journalsCount;	// 72 = 0x48
    long long _deletesSize;	// 80 = 0x50
    long long _deletesCount;	// 88 = 0x58
    long long _peopleArchiveSize;	// 96 = 0x60
    long long _peopleArchiveCount;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000005641e
@property(readonly, nonatomic) long long peopleArchiveCount; // @synthesize peopleArchiveCount=_peopleArchiveCount;
@property(readonly, nonatomic) long long peopleArchiveSize; // @synthesize peopleArchiveSize=_peopleArchiveSize;
@property(readonly, nonatomic) long long deletesCount; // @synthesize deletesCount=_deletesCount;
@property(readonly, nonatomic) long long deletesSize; // @synthesize deletesSize=_deletesSize;
@property(readonly, nonatomic) long long journalsCount; // @synthesize journalsCount=_journalsCount;
@property(readonly, nonatomic) long long journalsSize; // @synthesize journalsSize=_journalsSize;
@property(readonly, nonatomic) long long graphSize; // @synthesize graphSize=_graphSize;
@property(readonly, nonatomic) double availableCapacity; // @synthesize availableCapacity=_availableCapacity;
- (void)load;	// IMP=0x001000000005618b
- (_Bool)transferJournalsForProtectionClasses:(id)arg1;	// IMP=0x00100000000557b0
- (void)_clearSpotlightIndexWithGroup:(id)arg1;	// IMP=0x00100000000555b6
- (void)_clearSpotlightKnowledgeResources;	// IMP=0x0010000000054fec
- (void)_clearLegacyResources;	// IMP=0x00100000000549c2
- (void)createPurgeablePath:(id)arg1;	// IMP=0x00100000000549ab
- (void)createPath:(id)arg1 markPurgeable:(_Bool)arg2;	// IMP=0x0010000000054835
- (void)destroyWithGroup:(id)arg1;	// IMP=0x0010000000054676
- (void)resetWithGroup:(id)arg1;	// IMP=0x00100000000545f2
- (void)refresh;	// IMP=0x0010000000054293
- (id)initWithJobContext:(id)arg1;	// IMP=0x0010000000054203
@property(readonly, nonatomic) SKGKnowledgeFeedback *feedback;

@end

