//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface _TtC8MapsSync25MapsSyncCuratedCollection
{
    MISSING_TYPE *_curatedCollectionIdentifier;	// 0 = 0x0
    MISSING_TYPE *_resultProviderIdentifier;	// 0 = 0x0
}

@property(nonatomic, readonly) NSString *description;
- (void)deleteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ad300
- (void)addEditWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000acf60
- (Class)managedObjectClass;	// IMP=0x00000000000ace10
- (Class)mutableObjectClass;	// IMP=0x00000000000acdf0
- (void)setPropertiesWithObject:(id)arg1;	// IMP=0x00000000000acd10
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000acbe0
@property(nonatomic, readonly) int resultProviderIdentifier;
@property(nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property(nonatomic, readonly) long long identifierHash;
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000ac8f0
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000ac890
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2;	// IMP=0x00000000000ac820

@end

