//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface NLParsecDataManager : NSObject
{
    NSMutableArray *m_entries;	// 8 = 0x8
}

+ (void)notifyStoredSerializedDataChanged;	// IMP=0x006000000007569b
+ (void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0060000000075556
+ (_Bool)supportsDomain:(id)arg1;	// IMP=0x00600000000750a3
+ (unsigned short)maxNumberOfPOIsAllowed;	// IMP=0x00600000000756e0
@property(readonly, nonatomic) NSData *serializableData;
- (void)insertEntry:(id)arg1;	// IMP=0x000000000007523c
- (void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3;	// IMP=0x00000000000750ff
- (void)dealloc;	// IMP=0x00000000000750bf
- (id)getEntries;	// IMP=0x00000000000756d6

@end

